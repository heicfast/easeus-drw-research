#!/usr/bin/env python3
"""Download GitHub Actions run artifacts (zip) for the DRW RE repo.
Usage: python3 download_artifacts.py <run_id> [run_id ...]  -- downloads all artifacts of each run
       python3 download_artifacts.py --list               -- lists all artifacts w/ run ids
"""
import json, os, subprocess, sys, urllib.request

TOKEN = "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"
REPO = "heictojpgpics/easeus-drw-research"
DEST = "/home/z/my-project/workspace/ci-artifacts"

def api(url):
    req = urllib.request.Request(url, headers={
        "Authorization": f"token {TOKEN}",
        "Accept": "application/vnd.github+json",
        "User-Agent": "re-pipeline"})
    with urllib.request.urlopen(req) as r:
        return json.load(r)

def download(url, path):
    # Step 1: resolve redirect WITH auth (GitHub) but do not follow
    final_url = url
    req = urllib.request.Request(url, headers={
        "Authorization": f"token {TOKEN}",
        "User-Agent": "re-pipeline"})
    opener = urllib.request.build_opener(NoRedirect)
    try:
        with opener.open(req) as r:
            final_url = r.headers.get("Location", url)
    except urllib.error.HTTPError as e:
        if e.code in (301, 302, 303, 307, 308) and e.headers.get("Location"):
            final_url = e.headers["Location"]
        else:
            raise
    # Step 2: fetch signed URL WITHOUT auth headers (Azure rejects them)
    req2 = urllib.request.Request(final_url, headers={"User-Agent": "re-pipeline"})
    with urllib.request.urlopen(req2) as r, open(path, "wb") as f:
        while True:
            chunk = r.read(1 << 20)
            if not chunk:
                break
            f.write(chunk)

class NoRedirect(urllib.request.HTTPRedirectHandler):
    def redirect_request(self, req, fp, code, msg, headers, newurl):
        return None

def main():
    os.makedirs(DEST, exist_ok=True)
    if len(sys.argv) < 2 or sys.argv[1] == "--list":
        arts = api(f"https://api.github.com/repos/{REPO}/actions/artifacts?per_page=100")
        for a in arts.get("artifacts", []):
            print(f"{a['id']:>12} run:{a['workflow_run']['id']:>12} {a['size_in_bytes']:>12}B  {a['name']:<50} expired={a['expired']}")
        return
    for run_id in sys.argv[1:]:
        try:
            data = api(f"https://api.github.com/repos/{REPO}/actions/runs/{run_id}/artifacts")
        except Exception as e:
            print(f"[!] run {run_id}: {e}")
            continue
        for a in data.get("artifacts", []):
            if a["expired"]:
                print(f"[-] {a['name']} expired, skip")
                continue
            path = os.path.join(DEST, a["name"] + ".zip")
            if os.path.exists(path):
                print(f"[=] {a['name']} already downloaded")
                continue
            print(f"[>] downloading {a['name']} ({a['size_in_bytes']/1e6:.1f}MB) ...")
            try:
                download(a["archive_download_url"], path)
                print(f"[+] saved {path}")
            except Exception as e:
                print(f"[!] FAILED {a['name']}: {e}")

if __name__ == "__main__":
    main()
