source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

%0 = type { i32, i32, i32, i32 }
%1 = type { i32, i32, i32, i32 }
%2 = type { i32, i32, i32, i32 }
%_onexit_table_t = type { void ()**, void ()**, void ()** }
%_RTL_CRITICAL_SECTION = type { %_RTL_CRITICAL_SECTION_DEBUG*, i32, i32, i64*, i64*, i32 }
%_RTL_CRITICAL_SECTION_DEBUG = type { i16, i16, %_RTL_CRITICAL_SECTION*, %_LIST_ENTRY, i32, i32, i32, i16, i16 }
%_LIST_ENTRY = type { %_LIST_ENTRY*, %_LIST_ENTRY* }
%_STARTUPINFOW = type { i32, i16*, i16*, i16*, i32, i32, i32, i32, i32, i32, i32, i32, i16, i16, i8*, i64*, i64*, i64* }
%_PROCESS_INFORMATION = type { i64*, i64*, i32, i32 }
%_SECURITY_ATTRIBUTES = type { i32, i64*, i1 }
%_STARTUPINFOA = type { i32, i8*, i8*, i8*, i32, i32, i32, i32, i32, i32, i32, i32, i16, i16, i8*, i64*, i64*, i64* }
%_SYSTEMTIME = type { i16, i16, i16, i16, i16, i16, i16, i16 }
%_OVERLAPPED = type { i32, i32, i64, i64* }
%_SID_IDENTIFIER_AUTHORITY = type { [6 x i8] }
%_EXCEPTION_POINTERS = type { %_EXCEPTION_RECORD*, %_CONTEXT* }
%_EXCEPTION_RECORD = type { i32, i32, %_EXCEPTION_RECORD*, i64*, i32, [1 x i32] }
%_CONTEXT = type { i64, i64, i64, i64, i64, i64, i32, i32, i16, i16, i16, i16, i16, i16, i32, i64, i64, i64, i64, i64, i64, i64, i64, i64, i64, i64, i64, i64, i64, i64, i64, i64, i64, i64, i64, i64, i64, i64, i64, [26 x %_M128A], i64, i64, i64, i64, i64, i64 }
%_M128A = type { i64, i64 }
%_IMAGE_RUNTIME_FUNCTION_ENTRY = type { i32, i32, i64 }
%_UNWIND_HISTORY_TABLE = type { i32, i8, i8, i8, i8, i64, i64, [1 x %_UNWIND_HISTORY_TABLE_ENTRY] }
%_UNWIND_HISTORY_TABLE_ENTRY = type { i64, %_IMAGE_RUNTIME_FUNCTION_ENTRY* }
%_KNONVOLATILE_CONTEXT_POINTERS = type { i64, i64 }

@global_var_14000892c = constant i64 8297164491250991104
@global_var_14000c148 = global i64 0
@global_var_14000c950 = global i64 0
@global_var_140008860 = constant i64 5368713376
@global_var_1400088a0 = constant i64 5368739870
@global_var_1400087e0 = constant [54 x i8] c"Failed to request the permission to write to buffer!\0A\00"
@global_var_14000cdd8 = global i64 0
@global_var_14000c9d0 = global i64 0
@global_var_140008930 = constant [5 x i8] c"%s%s\00"
@global_var_140008950 = constant [19 x i8] c"config/version.ini\00"
@global_var_14000894c = constant [4 x i8] c"ver\00"
@global_var_14000892b = constant i64 2698541283655286784
@global_var_140008988 = constant [29 x i8] c"SOFTWARE\5CEASEUS\5CDRW\5CLanguage\00"
@global_var_1400089a8 = constant [9 x i8] c"Language\00"
@global_var_1400089b8 = constant [8 x i8] c"Deutsch\00"
@global_var_1400089b7 = local_unnamed_addr constant i64 7521982746661831680
@global_var_1400089c0 = constant [9 x i8] c"Japanese\00"
@global_var_140008938 = constant [7 x i8] c"easeus\00"
@global_var_140008940 = local_unnamed_addr constant [12 x i8] c"versionFrom\00"
@global_var_140008964 = constant [3 x i8] c"cn\00"
@global_var_140008968 = local_unnamed_addr constant [12 x i8] c"channelName\00"
@global_var_140008974 = constant [3 x i8] c"jz\00"
@global_var_140008978 = constant [8 x i8] c"comeorg\00"
@global_var_140008980 = constant [6 x i8] c"fuxin\00"
@global_var_14000a400 = constant i64 0
@global_var_14000cde0 = global i64 0
@global_var_14000ce00 = global i64 0
@global_var_14000ce08 = global i64 0
@global_var_14000ce28 = local_unnamed_addr global i64 0
@global_var_14000ce18 = local_unnamed_addr global i64 0
@global_var_14000ce20 = local_unnamed_addr global i64 0
@global_var_14000ce30 = local_unnamed_addr global i64 0
@global_var_14000cdf0 = local_unnamed_addr global i64 0
@global_var_14000c158 = local_unnamed_addr global i64 0
@global_var_140008a20 = constant [7 x i16] %wide-string
@global_var_140008a30 = constant [28 x i16] %wide-string
@global_var_140008a80 = constant [13 x i16] %wide-string
@global_var_140008a68 = constant i64 34
@global_var_140008a70 = constant [7 x i16] %wide-string
@global_var_140008ac8 = constant [14 x i16] %wide-string
@global_var_140008ae8 = constant [17 x i16] %wide-string
@global_var_140008b10 = constant [11 x i16] %wide-string
@global_var_140008b30 = constant [17 x i16] %wide-string
@global_var_140008b58 = constant [6 x i16] %wide-string
@global_var_140008b68 = constant [14 x i8] c"DRWReport.exe\00"
@global_var_140008b28 = constant [4 x i8] c"log\00"
@global_var_140008920 = constant [11 x i8] c"DRWLog.log\00"
@global_var_140008748 = constant [43 x i8] c"DRW_{1E956C11-4D20-49d7-B4C7-016A342A2D39}\00"
@global_var_140008818 = constant [28 x i8] c"Failed to create map file!\0A\00"
@global_var_140008838 = constant [29 x i8] c"Failed to map the map file!\0A\00"
@global_var_140008778 = constant [46 x i8] c"DRWLOG_{1BFCF65F-0766-4a71-B7A3-2EB2CD1412DE}\00"
@global_var_140008b78 = local_unnamed_addr constant [18 x i8] c"____---Start DRW.\00"
@global_var_140008a00 = constant [29 x i8] c"startTS=%d-%d-%d %d:%d:%d:%d\00"
@global_var_140008b90 = constant [8 x i8] c"startTS\00"
@global_var_140008b98 = constant [6 x i8] c"DRWUI\00"
@global_var_140008ba0 = constant [21 x i8] c"____---hProcess = %X\00"
@global_var_1400088e8 = constant [49 x i8] c"DRW_Crash_{FC1A0E29-3523-4152-B110-3340363E5DB7}\00"
@global_var_140008bb8 = local_unnamed_addr constant [23 x i8] c"____---CrashEvent = %X\00"
@global_var_1400088b0 = constant [56 x i8] c"DRW_Memory_Crash_{c3d61a40-a3e6-402b-b373-fd90d30893c8}\00"
@global_var_140008bd0 = local_unnamed_addr constant [29 x i8] c"____---MemoryCrashEvent = %X\00"
@global_var_1400087a8 = constant [56 x i8] c"Failed to request the permission to write to log file!\0A\00"
@global_var_140008bf0 = local_unnamed_addr constant [16 x i8] c"____---Pos = %d\00"
@global_var_140008c10 = local_unnamed_addr constant [7 x i16] %wide-string
@global_var_140008c00 = local_unnamed_addr constant [8 x i16] %wide-string
@global_var_140008c20 = constant [59 x i16] %wide-string
@global_var_140008c98 = constant [12 x i16] %wide-string
@global_var_140008cb0 = constant [7 x i16] %wide-string
@global_var_140008cc0 = constant [13 x i16] %wide-string
@global_var_140008cdc = constant [7 x i8] c"-right\00"
@global_var_140008ce8 = constant [13 x i16] %wide-string
@global_var_140008d08 = constant [7 x i16] %wide-string
@global_var_140008d18 = constant [5 x i16] %wide-string
@global_var_140008d28 = constant [9 x i8] c"-recycle\00"
@global_var_140008d38 = constant [11 x i16] %wide-string
@global_var_1400089f0 = constant [13 x i8] c"Japanese.dll\00"
@global_var_1400089d0 = constant [12 x i8] c"Deutsch.dll\00"
@global_var_1400089e0 = constant [12 x i8] c"Chinese.dll\00"
@global_var_14000c9b8 = local_unnamed_addr global i64 0
@global_var_14000c040 = constant [21 x i8] c"Data Recovery Wizard\00"
@global_var_140008aa0 = constant [20 x i16] %wide-string
@global_var_140008d50 = local_unnamed_addr constant [16 x i8] c"string too long\00"
@global_var_14000c348 = local_unnamed_addr global i64 0
@global_var_14000c360 = local_unnamed_addr global i64 0
@global_var_140008550 = constant [33 x i16] %wide-string
@global_var_140008598 = constant [13 x i16] %wide-string
@global_var_1400085b8 = constant [28 x i8] c"InitializeConditionVariable\00"
@global_var_1400085d8 = constant [25 x i8] c"SleepConditionVariableCS\00"
@global_var_1400085f8 = constant [25 x i8] c"WakeAllConditionVariable\00"
@global_var_14000c398 = local_unnamed_addr global i64 0
@global_var_14000c390 = local_unnamed_addr global i64 0
@global_var_14000c3a0 = local_unnamed_addr global i64 0
@global_var_14000c3a8 = local_unnamed_addr global i64 0
@global_var_140008670 = constant [15 x i8] c"bad allocation\00"
@global_var_140008660 = constant i64 5368738012
@global_var_140008698 = constant [21 x i8] c"bad array new length\00"
@global_var_140008688 = constant i64 5368738012
@global_var_140008630 = constant i64 5368738012
@global_var_14000a2d8 = constant i64 124004295770112
@global_var_14000a360 = constant i64 124004295770112
@global_var_14000c018 = local_unnamed_addr global i64 8589934593
@global_var_14000c020 = local_unnamed_addr global [3 x i8] c"/ \00"
@global_var_14000c008 = local_unnamed_addr global i64 -47936899621427
@global_var_14000c930 = global i64 0
@global_var_14000c940 = global i64 0
@global_var_14000ce40 = global i64 0
@global_var_14000ce38 = global i64 0
@global_var_140009978 = local_unnamed_addr constant i64 0
@global_var_140009988 = local_unnamed_addr constant i64 0
@global_var_1400086c0 = constant [65 x i16] %wide-string
@global_var_14000c9c4 = local_unnamed_addr global i64 0
@global_var_14000c160 = local_unnamed_addr global i64 7
@0 = external global i32
@global_var_14000c010 = local_unnamed_addr global i32 769630770
@global_var_14000cdd0 = local_unnamed_addr global i32 0
@global_var_14000c144 = local_unnamed_addr global i32 2
@global_var_14000c9c0 = local_unnamed_addr global i32 0
@global_var_14000ce10 = local_unnamed_addr global i32 0
@global_var_14000cde8 = global i32 0
@global_var_140008da0 = constant i32 1073748784
@global_var_140008d68 = constant i32 1073749280
@global_var_14000cdf8 = local_unnamed_addr global i8 0
@global_var_140008dd0 = external local_unnamed_addr constant i128
@1 = internal constant [2 x i8] c"\5C\00"
@2 = constant i8* getelementptr inbounds ([2 x i8], [2 x i8]* @1, i64 0, i64 0)
@global_var_14000c330 = local_unnamed_addr global i32 0
@global_var_14000c331 = local_unnamed_addr global i8 0
@global_var_14000c338 = global %_onexit_table_t* null
@global_var_14000c350 = global %_onexit_table_t* null
@global_var_14000c368 = global %_RTL_CRITICAL_SECTION* null
@global_var_14000c320 = local_unnamed_addr global i32 0
@global_var_1400084d8 = constant i32 ()** null
@global_var_1400084b8 = constant i32 ()** null
@global_var_1400084b0 = constant void ()** null
@global_var_140008490 = constant void ()** null
@global_var_14000c01c = local_unnamed_addr global i32 2
@global_var_14000c920 = local_unnamed_addr global i32 0
@global_var_14000c030 = local_unnamed_addr global i32 1
@global_var_14000c924 = local_unnamed_addr global i32 0
@global_var_14000c028 = local_unnamed_addr global i32 1
@global_var_1400086b0 = constant i32 -750180312
@global_var_140008b2c = constant [2 x i8] c"\5C\00"

define i64 @function_140001000() local_unnamed_addr {
dec_label_pc_140001000:
  %0 = call i64 @function_140005740(i64* nonnull @global_var_14000c148, i64* nonnull @global_var_14000892c, i32 0), !insn.addr !0
  %1 = call i64 @function_1400068b8(i64 5368740944), !insn.addr !1
  ret i64 %1, !insn.addr !1
}

define i64 @function_14000102c() local_unnamed_addr {
dec_label_pc_14000102c:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = call i64 @function_1400076c0(i64* nonnull @global_var_14000c950, i64 %1), !insn.addr !2
  %3 = call i64 @function_1400068b8(i64 5368741052), !insn.addr !3
  ret i64 %3, !insn.addr !3
}

define i64 @function_140001050(i64 %arg1) local_unnamed_addr {
dec_label_pc_140001050:
  %0 = inttoptr i64 %arg1 to i64*, !insn.addr !4
  store i64 ptrtoint (i64* @global_var_140008860 to i64), i64* %0, align 8, !insn.addr !4
  %1 = add i64 %arg1, 16, !insn.addr !5
  %2 = inttoptr i64 %1 to i64*, !insn.addr !5
  %3 = load i64, i64* %2, align 8, !insn.addr !5
  %4 = icmp eq i64 %3, 0, !insn.addr !6
  br i1 %4, label %dec_label_pc_140001072, label %dec_label_pc_14000106c, !insn.addr !7

dec_label_pc_14000106c:                           ; preds = %dec_label_pc_140001050
  %5 = inttoptr i64 %3 to i64*, !insn.addr !8
  %6 = call i1 @UnmapViewOfFile(i64* %5), !insn.addr !8
  br label %dec_label_pc_140001072, !insn.addr !8

dec_label_pc_140001072:                           ; preds = %dec_label_pc_14000106c, %dec_label_pc_140001050
  %7 = add i64 %arg1, 8, !insn.addr !9
  %8 = inttoptr i64 %7 to i64*, !insn.addr !9
  %9 = load i64, i64* %8, align 8, !insn.addr !9
  %10 = icmp eq i64 %9, 0, !insn.addr !10
  br i1 %10, label %dec_label_pc_140001081, label %dec_label_pc_14000107b, !insn.addr !11

dec_label_pc_14000107b:                           ; preds = %dec_label_pc_140001072
  %11 = inttoptr i64 %9 to i64*, !insn.addr !12
  %12 = call i1 @CloseHandle(i64* %11), !insn.addr !12
  br label %dec_label_pc_140001081, !insn.addr !12

dec_label_pc_140001081:                           ; preds = %dec_label_pc_14000107b, %dec_label_pc_140001072
  %13 = add i64 %arg1, 24, !insn.addr !13
  %14 = inttoptr i64 %13 to i64*, !insn.addr !13
  %15 = load i64, i64* %14, align 8, !insn.addr !13
  %16 = icmp eq i64 %15, 0, !insn.addr !14
  br i1 %16, label %dec_label_pc_140001090, label %dec_label_pc_14000108a, !insn.addr !15

dec_label_pc_14000108a:                           ; preds = %dec_label_pc_140001081
  %17 = inttoptr i64 %15 to i64*, !insn.addr !16
  %18 = call i1 @CloseHandle(i64* %17), !insn.addr !16
  br label %dec_label_pc_140001090, !insn.addr !16

dec_label_pc_140001090:                           ; preds = %dec_label_pc_14000108a, %dec_label_pc_140001081
  store i64 ptrtoint (i64* @global_var_1400088a0 to i64), i64* %0, align 8, !insn.addr !17
  ret i64 ptrtoint (i64* @global_var_1400088a0 to i64), !insn.addr !18

; uselistorder directives
  uselistorder i64 ptrtoint (i64* @global_var_1400088a0 to i64), { 1, 0 }
  uselistorder i64 %arg1, { 0, 1, 3, 2 }
}

define i64 @function_1400010a0() local_unnamed_addr {
dec_label_pc_1400010a0:
  ret i64 1, !insn.addr !19
}

define i64 @function_1400010b0(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1400010b0:
  %rbx.1.reg2mem = alloca i64, !insn.addr !20
  %rbx.0.reg2mem = alloca i64, !insn.addr !20
  %0 = add i64 %arg1, 24, !insn.addr !21
  %1 = inttoptr i64 %0 to i64*, !insn.addr !21
  %2 = load i64, i64* %1, align 8, !insn.addr !21
  %3 = inttoptr i64 %2 to i64*, !insn.addr !22
  %4 = call i32 @WaitForSingleObject(i64* %3, i32 1000), !insn.addr !22
  %5 = icmp eq i32 %4, 0, !insn.addr !23
  %6 = icmp eq i1 %5, false, !insn.addr !24
  br i1 %6, label %dec_label_pc_14000112f, label %dec_label_pc_1400010e2, !insn.addr !24

dec_label_pc_1400010e2:                           ; preds = %dec_label_pc_1400010b0
  %7 = add i64 %arg1, 16, !insn.addr !25
  %8 = inttoptr i64 %7 to i64*, !insn.addr !25
  %9 = load i64, i64* %8, align 8, !insn.addr !25
  %10 = icmp eq i64 %9, 0, !insn.addr !25
  br i1 %10, label %dec_label_pc_14000112f, label %dec_label_pc_1400010e8, !insn.addr !26

dec_label_pc_1400010e8:                           ; preds = %dec_label_pc_1400010e2
  %11 = icmp eq i64 %arg2, 0, !insn.addr !27
  %12 = trunc i64 %arg3 to i32, !insn.addr !28
  %13 = icmp eq i32 %12, 0, !insn.addr !28
  %or.cond = or i1 %11, %13
  store i64 0, i64* %rbx.0.reg2mem, !insn.addr !29
  br i1 %or.cond, label %dec_label_pc_14000111e, label %dec_label_pc_1400010f6, !insn.addr !29

dec_label_pc_1400010f6:                           ; preds = %dec_label_pc_1400010e8
  %14 = add i64 %arg1, 32, !insn.addr !30
  %15 = inttoptr i64 %14 to i64*, !insn.addr !30
  %16 = load i64, i64* %15, align 8, !insn.addr !30
  %17 = inttoptr i64 %16 to i32*, !insn.addr !31
  %18 = load i32, i32* %17, align 4, !insn.addr !31
  %19 = add i32 %18, 4, !insn.addr !32
  %20 = add i32 %19, %12, !insn.addr !33
  %21 = add i64 %arg1, 40, !insn.addr !34
  %22 = inttoptr i64 %21 to i32*, !insn.addr !34
  %23 = load i32, i32* %22, align 4, !insn.addr !34
  %24 = icmp ult i32 %23, %20, !insn.addr !34
  store i64 0, i64* %rbx.0.reg2mem, !insn.addr !35
  br i1 %24, label %dec_label_pc_14000111e, label %dec_label_pc_140001108, !insn.addr !35

dec_label_pc_140001108:                           ; preds = %dec_label_pc_1400010f6
  %25 = zext i32 %19 to i64, !insn.addr !32
  %26 = add i64 %16, %25, !insn.addr !36
  %27 = inttoptr i64 %26 to i64*, !insn.addr !37
  %28 = inttoptr i64 %arg2 to i64*, !insn.addr !37
  %29 = call i64* @memmove(i64* %27, i64* %28, i32 %12), !insn.addr !37
  %30 = load i32, i32* %17, align 4, !insn.addr !38
  %31 = add i32 %30, %12, !insn.addr !38
  store i32 %31, i32* %17, align 4, !insn.addr !38
  store i64 1, i64* %rbx.0.reg2mem, !insn.addr !39
  br label %dec_label_pc_14000111e, !insn.addr !39

dec_label_pc_14000111e:                           ; preds = %dec_label_pc_140001108, %dec_label_pc_1400010f6, %dec_label_pc_1400010e8
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %32 = load i64, i64* %1, align 8, !insn.addr !40
  %33 = inttoptr i64 %32 to i64*, !insn.addr !41
  %34 = call i1 @ReleaseMutex(i64* %33), !insn.addr !41
  store i64 %rbx.0.reload, i64* %rbx.1.reg2mem, !insn.addr !42
  br label %dec_label_pc_14000113c, !insn.addr !42

dec_label_pc_14000112f:                           ; preds = %dec_label_pc_1400010e2, %dec_label_pc_1400010b0
  call void @OutputDebugStringA(i8* getelementptr inbounds ([54 x i8], [54 x i8]* @global_var_1400087e0, i64 0, i64 0)), !insn.addr !43
  store i64 0, i64* %rbx.1.reg2mem, !insn.addr !43
  br label %dec_label_pc_14000113c, !insn.addr !43

dec_label_pc_14000113c:                           ; preds = %dec_label_pc_14000112f, %dec_label_pc_14000111e
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %35 = and i64 %rbx.1.reload, 4294967295, !insn.addr !44
  ret i64 %35, !insn.addr !45

; uselistorder directives
  uselistorder i32 %19, { 1, 0 }
  uselistorder i32 %12, { 0, 2, 1, 3 }
  uselistorder i64* %rbx.1.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg1, { 0, 2, 1, 3 }
}

define i64 @function_140001160() local_unnamed_addr {
dec_label_pc_140001160:
  ret i64 ptrtoint (i64* @global_var_14000cdd8 to i64), !insn.addr !46
}

define i64 @function_140001170(i64* %arg1, i64 %arg2, i16* %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_140001170:
  %stack_var_32 = alloca i64, align 8
  store i64 %arg4, i64* %stack_var_32, align 8, !insn.addr !47
  %0 = call i64 @function_140001160(), !insn.addr !48
  %1 = ptrtoint i64* %stack_var_32 to i64, !insn.addr !49
  %2 = inttoptr i64 %0 to i64*, !insn.addr !50
  %3 = load i64, i64* %2, align 8, !insn.addr !50
  %4 = bitcast i64* %arg1 to i16*, !insn.addr !51
  %5 = trunc i64 %arg2 to i32, !insn.addr !51
  %6 = call i32 @__stdio_common_vswprintf(i64 %3, i16* %4, i32 %5, i16* %arg3, i64 0, i64 %1), !insn.addr !51
  %7 = icmp sgt i32 %6, -1, !insn.addr !52
  %8 = select i1 %7, i32 %6, i32 -1, !insn.addr !53
  %9 = zext i32 %8 to i64, !insn.addr !53
  ret i64 %9, !insn.addr !54
}

define i64 @function_1400011d0(i64* %arg1, i64 %arg2, i8* %arg3, i64* %arg4) local_unnamed_addr {
dec_label_pc_1400011d0:
  %0 = ptrtoint i64* %arg4 to i64
  %stack_var_32 = alloca i64, align 8
  store i64 %0, i64* %stack_var_32, align 8, !insn.addr !55
  %1 = call i64 @function_140001160(), !insn.addr !56
  %2 = ptrtoint i64* %stack_var_32 to i64, !insn.addr !57
  %3 = inttoptr i64 %1 to i64*, !insn.addr !58
  %4 = load i64, i64* %3, align 8, !insn.addr !58
  %5 = bitcast i64* %arg1 to i8*, !insn.addr !59
  %6 = trunc i64 %arg2 to i32, !insn.addr !59
  %7 = call i32 @__stdio_common_vsprintf_s(i64 %4, i8* %5, i32 %6, i8* %arg3, i64 0, i64 %2), !insn.addr !59
  %8 = icmp sgt i32 %7, -1, !insn.addr !60
  %9 = select i1 %8, i32 %7, i32 -1, !insn.addr !61
  %10 = zext i32 %9 to i64, !insn.addr !61
  ret i64 %10, !insn.addr !62
}

define i64 @function_140001230(i64* %arg1, i64 %arg2, i8* %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_140001230:
  %stack_var_32 = alloca i64, align 8
  store i64 %arg4, i64* %stack_var_32, align 8, !insn.addr !63
  %0 = call i64 @function_140001160(), !insn.addr !64
  %1 = ptrtoint i64* %stack_var_32 to i64, !insn.addr !65
  %2 = inttoptr i64 %0 to i64*, !insn.addr !66
  %3 = load i64, i64* %2, align 8, !insn.addr !66
  %4 = or i64 %3, 1, !insn.addr !67
  %5 = bitcast i64* %arg1 to i8*, !insn.addr !68
  %6 = trunc i64 %arg2 to i32, !insn.addr !68
  %7 = call i32 @__stdio_common_vsprintf(i64 %4, i8* %5, i32 %6, i8* %arg3, i64 0, i64 %1), !insn.addr !68
  %8 = icmp sgt i32 %7, -1, !insn.addr !69
  %9 = select i1 %8, i32 %7, i32 -1, !insn.addr !70
  %10 = zext i32 %9 to i64, !insn.addr !70
  ret i64 %10, !insn.addr !71
}

define i64 @function_140001290(i64* %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_140001290:
  %0 = alloca i8*
  %1 = alloca i64
  %.pre-phi8.reg2mem = alloca i64*, !insn.addr !72
  %rdx.1.reg2mem = alloca i64, !insn.addr !72
  %.reg2mem17 = alloca i64, !insn.addr !72
  %.pre7.pre-phi.reg2mem = alloca i64*, !insn.addr !72
  %r8.1.reg2mem = alloca i64, !insn.addr !72
  %rdx.0.in.reg2mem = alloca i64, !insn.addr !72
  %.pre10.pre-phi.reg2mem = alloca i64*, !insn.addr !72
  %.reg2mem15 = alloca i64, !insn.addr !72
  %.pre-phi14.reg2mem = alloca i64*, !insn.addr !72
  %.reg2mem = alloca i64, !insn.addr !72
  %r14.0.reg2mem = alloca i64, !insn.addr !72
  %rax.05.reg2mem = alloca i64, !insn.addr !72
  %r13.04.reg2mem = alloca i64, !insn.addr !72
  %rbx.0.reg2mem = alloca i64, !insn.addr !72
  %r8.0.reg2mem = alloca i64, !insn.addr !72
  %2 = load i64, i64* %1
  %rcx = alloca i64, align 8
  %3 = ptrtoint i64* %arg1 to i64
  store i64 %3, i64* %rcx, align 8
  %stack_var_-2664 = alloca i64, align 8
  %stack_var_-2120 = alloca i64, align 8
  %stack_var_-2392 = alloca i64, align 8
  %stack_var_-2696 = alloca i64, align 8
  %stack_var_-1096 = alloca i64, align 8
  %4 = load i8*, i8** %0
  %stack_var_-2792 = alloca i64, align 8
  %5 = load i32, i32* @global_var_14000c010, align 4, !insn.addr !73
  %6 = ptrtoint i8* %4 to i64, !insn.addr !74
  %7 = icmp eq i64 %2, 0, !insn.addr !75
  br i1 %7, label %dec_label_pc_140001290.dec_label_pc_140001574_crit_edge, label %dec_label_pc_1400012eb, !insn.addr !76

dec_label_pc_140001290.dec_label_pc_140001574_crit_edge: ; preds = %dec_label_pc_140001290
  %.pre11 = add i64 %6, 24
  %.pre13 = inttoptr i64 %.pre11 to i64*
  store i64* %.pre13, i64** %.pre-phi14.reg2mem
  store i64 %3, i64* %.reg2mem15
  br label %dec_label_pc_140001574

dec_label_pc_1400012eb:                           ; preds = %dec_label_pc_140001290
  %8 = call i64* @memset(i64* nonnull %stack_var_-1096, i32 0, i32 1040), !insn.addr !77
  %9 = load i32, i32* @global_var_14000cdd0, align 4, !insn.addr !78
  %10 = icmp eq i32 %9, 0, !insn.addr !78
  br i1 %10, label %dec_label_pc_140001318, label %dec_label_pc_14000130b, !insn.addr !79

dec_label_pc_14000130b:                           ; preds = %dec_label_pc_1400012eb
  %11 = load i8, i8* bitcast (i64* @global_var_14000c9d0 to i8*), align 8, !insn.addr !80
  %12 = icmp eq i8 %11, 0, !insn.addr !80
  %13 = icmp eq i1 %12, false, !insn.addr !81
  br i1 %13, label %dec_label_pc_1400013d6, label %dec_label_pc_140001318, !insn.addr !81

dec_label_pc_140001318:                           ; preds = %dec_label_pc_14000130b, %dec_label_pc_1400012eb
  store i64 0, i64* %stack_var_-2696, align 8, !insn.addr !82
  %14 = call i64* @memset(i64* nonnull %stack_var_-2392, i32 0, i32 260), !insn.addr !83
  %15 = call i64* @memset(i64* nonnull %stack_var_-2120, i32 0, i32 1024), !insn.addr !84
  %16 = bitcast i64* %stack_var_-2120 to i8*, !insn.addr !85
  %17 = call i32 @GetModuleFileNameA(i64* null, i8* nonnull %16, i32 1023), !insn.addr !85
  %18 = bitcast i64* %stack_var_-2696 to i8*, !insn.addr !86
  %19 = bitcast i64* %stack_var_-2392 to i8*, !insn.addr !86
  %20 = call i32 @_splitpath_s(i8* nonnull %16, i8* nonnull %18, i32 32, i8* nonnull %19, i32 260, i8* null, i32 0, i8* null, i32 0), !insn.addr !86
  %21 = call i64 @function_1400011d0(i64* nonnull @global_var_14000c9d0, i64 1023, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_140008930, i64 0, i64 0), i64* nonnull %stack_var_-2696), !insn.addr !87
  %22 = trunc i64 %21 to i32, !insn.addr !88
  store i32 %22, i32* @global_var_14000cdd0, align 4, !insn.addr !88
  br label %dec_label_pc_1400013d6, !insn.addr !88

dec_label_pc_1400013d6:                           ; preds = %dec_label_pc_140001318, %dec_label_pc_14000130b
  %23 = call i64 @function_140006040(i64* nonnull %stack_var_-1096, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @global_var_140008930, i64 0, i64 0), i64* nonnull @global_var_14000c9d0, i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_140008950, i64 0, i64 0)), !insn.addr !89
  %24 = call i64* @memset(i64* nonnull %stack_var_-2664, i32 xor (i32 ptrtoint ([5 x i8]* @global_var_140008930 to i32), i32 ptrtoint ([5 x i8]* @global_var_140008930 to i32)), i32 260), !insn.addr !90
  %25 = add i64 %6, 24
  %26 = inttoptr i64 %25 to i64*
  %27 = load i64, i64* %26, align 8, !insn.addr !91
  %28 = icmp ult i64 %27, 16, !insn.addr !91
  store i64 %6, i64* %r8.0.reg2mem, !insn.addr !92
  br i1 %28, label %dec_label_pc_140001415, label %dec_label_pc_140001412, !insn.addr !92

dec_label_pc_140001412:                           ; preds = %dec_label_pc_1400013d6
  %29 = bitcast i8* %4 to i64*, !insn.addr !93
  %30 = load i64, i64* %29, align 8, !insn.addr !93
  store i64 %30, i64* %r8.0.reg2mem, !insn.addr !93
  br label %dec_label_pc_140001415, !insn.addr !93

dec_label_pc_140001415:                           ; preds = %dec_label_pc_140001412, %dec_label_pc_1400013d6
  %31 = ptrtoint i64* %stack_var_-2792 to i64, !insn.addr !94
  %r8.0.reload = load i64, i64* %r8.0.reg2mem
  %32 = inttoptr i64 %2 to i8*, !insn.addr !95
  %33 = inttoptr i64 %r8.0.reload to i8*, !insn.addr !95
  %34 = bitcast i64* %stack_var_-2664 to i8*, !insn.addr !95
  %35 = bitcast i64* %stack_var_-1096 to i8*, !insn.addr !95
  %36 = call i32 @GetPrivateProfileStringA(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_14000894c, i64 0, i64 0), i8* %32, i8* %33, i8* nonnull %34, i32 260, i8* nonnull %35), !insn.addr !95
  store i64 0, i64* %stack_var_-2696, align 8, !insn.addr !96
  %37 = ptrtoint i64* %stack_var_-2664 to i64, !insn.addr !97
  store i64 -1, i64* %rbx.0.reg2mem, !insn.addr !98
  br label %dec_label_pc_140001460, !insn.addr !98

dec_label_pc_140001460:                           ; preds = %dec_label_pc_140001460, %dec_label_pc_140001415
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %38 = add i64 %rbx.0.reload, 1, !insn.addr !99
  %39 = add i64 %38, %37, !insn.addr !100
  %40 = inttoptr i64 %39 to i8*, !insn.addr !100
  %41 = load i8, i8* %40, align 1, !insn.addr !100
  %42 = icmp eq i8 %41, 0, !insn.addr !100
  %43 = icmp eq i1 %42, false, !insn.addr !101
  store i64 %38, i64* %rbx.0.reg2mem, !insn.addr !101
  br i1 %43, label %dec_label_pc_140001460, label %dec_label_pc_140001469, !insn.addr !101

dec_label_pc_140001469:                           ; preds = %dec_label_pc_140001460
  %44 = icmp ult i64 %38, 16
  br i1 %44, label %dec_label_pc_14000146f, label %dec_label_pc_14000148f, !insn.addr !102

dec_label_pc_14000146f:                           ; preds = %dec_label_pc_140001469
  %45 = trunc i64 %38 to i32, !insn.addr !103
  %46 = call i64* @memmove(i64* nonnull %stack_var_-2696, i64* nonnull %stack_var_-2664, i32 %45), !insn.addr !103
  %47 = add i64 %31, 96, !insn.addr !104
  %48 = add i64 %47, %38, !insn.addr !104
  %49 = inttoptr i64 %48 to i8*, !insn.addr !104
  store i8 0, i8* %49, align 1, !insn.addr !104
  %.pre = load i64, i64* %stack_var_-2696, align 8
  store i64 %.pre, i64* %.reg2mem, !insn.addr !105
  br label %dec_label_pc_14000152a, !insn.addr !105

dec_label_pc_14000148f:                           ; preds = %dec_label_pc_140001469
  %50 = icmp sgt i64 %38, -1
  br i1 %50, label %dec_label_pc_1400014a2, label %dec_label_pc_14000160d, !insn.addr !106

dec_label_pc_1400014a2:                           ; preds = %dec_label_pc_14000148f
  %51 = or i64 %38, 15, !insn.addr !107
  %52 = icmp slt i64 %51, 0
  store i64 -9223372036854775808, i64* %r13.04.reg2mem, !insn.addr !108
  br i1 %52, label %dec_label_pc_1400014bd.thread, label %dec_label_pc_1400014bd, !insn.addr !108

dec_label_pc_1400014bd:                           ; preds = %dec_label_pc_1400014a2
  %53 = icmp ugt i64 %51, 22
  %54 = select i1 %53, i64 %51, i64 22, !insn.addr !109
  %phitmp = add i64 %54, 1
  %55 = icmp ult i64 %phitmp, 4096, !insn.addr !110
  store i64 %phitmp, i64* %r13.04.reg2mem, !insn.addr !111
  store i64 %phitmp, i64* %rax.05.reg2mem, !insn.addr !111
  br i1 %55, label %dec_label_pc_1400014f8, label %dec_label_pc_1400014bd.thread, !insn.addr !111

dec_label_pc_1400014bd.thread:                    ; preds = %dec_label_pc_1400014a2, %dec_label_pc_1400014bd
  %r13.04.reload = load i64, i64* %r13.04.reg2mem
  %56 = add i64 %r13.04.reload, 39, !insn.addr !112
  %57 = call i64 @function_1400065e0(i64 %56), !insn.addr !113
  %58 = icmp eq i64 %57, 0, !insn.addr !114
  br i1 %58, label %dec_label_pc_1400014f3, label %dec_label_pc_1400014de, !insn.addr !115

dec_label_pc_1400014de:                           ; preds = %dec_label_pc_1400014bd.thread
  %59 = add i64 %57, 39, !insn.addr !116
  %60 = and i64 %59, -32, !insn.addr !117
  %61 = add i64 %60, -8, !insn.addr !118
  %62 = inttoptr i64 %61 to i64*, !insn.addr !118
  store i64 %57, i64* %62, align 8, !insn.addr !118
  store i64 %60, i64* %r14.0.reg2mem, !insn.addr !119
  br label %dec_label_pc_140001508, !insn.addr !119

dec_label_pc_1400014f3:                           ; preds = %dec_label_pc_1400014bd.thread
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !120
  %63 = call i64 @__asm_int3(), !insn.addr !121
  %64 = icmp eq i64 %63, 0, !insn.addr !122
  store i64 %63, i64* %rax.05.reg2mem, !insn.addr !123
  store i64 0, i64* %r14.0.reg2mem, !insn.addr !123
  br i1 %64, label %dec_label_pc_140001508, label %dec_label_pc_1400014f8, !insn.addr !123

dec_label_pc_1400014f8:                           ; preds = %dec_label_pc_1400014bd, %dec_label_pc_1400014f3
  %rax.05.reload = load i64, i64* %rax.05.reg2mem
  %65 = call i64 @function_1400065e0(i64 %rax.05.reload), !insn.addr !124
  store i64 %65, i64* %r14.0.reg2mem, !insn.addr !125
  br label %dec_label_pc_140001508, !insn.addr !125

dec_label_pc_140001508:                           ; preds = %dec_label_pc_1400014f3, %dec_label_pc_1400014f8, %dec_label_pc_1400014de
  %r14.0.reload = load i64, i64* %r14.0.reg2mem
  %66 = inttoptr i64 %r14.0.reload to i64*, !insn.addr !126
  %67 = trunc i64 %38 to i32, !insn.addr !126
  %68 = call i64* @memcpy(i64* %66, i64* nonnull %stack_var_-2664, i32 %67), !insn.addr !126
  %69 = add i64 %r14.0.reload, %38, !insn.addr !127
  %70 = inttoptr i64 %69 to i8*, !insn.addr !127
  store i8 0, i8* %70, align 1, !insn.addr !127
  store i64 %r14.0.reload, i64* %stack_var_-2696, align 8, !insn.addr !128
  store i64 %r14.0.reload, i64* %.reg2mem, !insn.addr !128
  br label %dec_label_pc_14000152a, !insn.addr !128

dec_label_pc_14000152a:                           ; preds = %dec_label_pc_140001508, %dec_label_pc_14000146f
  %.reload = load i64, i64* %.reg2mem, !insn.addr !129
  %71 = sext i64 %.reload to i128, !insn.addr !129
  %72 = call i128 @__asm_movups(i128 %71), !insn.addr !129
  %73 = bitcast i64* %rcx to i128*
  %74 = load i128, i128* %73, align 8, !insn.addr !130
  call void @__asm_movups.2(i128 %74, i128 %72), !insn.addr !130
  %75 = sext i64 %38 to i128, !insn.addr !131
  %76 = call i128 @__asm_movups(i128 %75), !insn.addr !131
  %77 = add i64 %3, 16, !insn.addr !132
  %78 = inttoptr i64 %77 to i128*, !insn.addr !132
  %79 = load i128, i128* %78, align 8, !insn.addr !132
  call void @__asm_movups.2(i128 %79, i128 %76), !insn.addr !132
  %80 = load i64, i64* %26, align 8, !insn.addr !133
  %81 = icmp ult i64 %80, 16, !insn.addr !134
  store i64* %26, i64** %.pre-phi8.reg2mem, !insn.addr !135
  br i1 %81, label %dec_label_pc_1400015c9, label %dec_label_pc_140001549, !insn.addr !135

dec_label_pc_140001549:                           ; preds = %dec_label_pc_14000152a
  %82 = add i64 %80, 1, !insn.addr !136
  %83 = bitcast i8* %4 to i64*, !insn.addr !137
  %84 = load i64, i64* %83, align 8, !insn.addr !137
  store i64 %84, i64* %rcx, align 8, !insn.addr !137
  %85 = icmp ult i64 %82, 4096, !insn.addr !138
  store i64* %26, i64** %.pre7.pre-phi.reg2mem, !insn.addr !139
  store i64 %84, i64* %.reg2mem17, !insn.addr !139
  store i64 %82, i64* %rdx.1.reg2mem, !insn.addr !139
  br i1 %85, label %dec_label_pc_1400015c4, label %dec_label_pc_140001558, !insn.addr !139

dec_label_pc_140001558:                           ; preds = %dec_label_pc_140001549
  %86 = add i64 %84, -8, !insn.addr !140
  %87 = inttoptr i64 %86 to i64*, !insn.addr !140
  %88 = load i64, i64* %87, align 8, !insn.addr !140
  %89 = sub i64 %84, %88, !insn.addr !141
  store i64 %89, i64* %rcx, align 8, !insn.addr !141
  %90 = add i64 %89, -8, !insn.addr !142
  %91 = icmp ult i64 %90, 32
  store i64* %26, i64** %.pre10.pre-phi.reg2mem, !insn.addr !143
  store i64 %80, i64* %rdx.0.in.reg2mem, !insn.addr !143
  store i64 %88, i64* %r8.1.reg2mem, !insn.addr !143
  br i1 %91, label %dec_label_pc_1400015c1, label %dec_label_pc_14000156d, !insn.addr !143

dec_label_pc_14000156d:                           ; preds = %dec_label_pc_140001558
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !144
  store i64* %26, i64** %.pre-phi14.reg2mem, !insn.addr !145
  store i64 %89, i64* %.reg2mem15, !insn.addr !145
  br label %dec_label_pc_140001574, !insn.addr !145

dec_label_pc_140001574:                           ; preds = %dec_label_pc_140001290.dec_label_pc_140001574_crit_edge, %dec_label_pc_14000156d
  %.reload16 = load i64, i64* %.reg2mem15, !insn.addr !146
  %.pre-phi14.reload = load i64*, i64** %.pre-phi14.reg2mem
  %92 = add i64 %.reload16, 16, !insn.addr !146
  %93 = inttoptr i64 %92 to i64*, !insn.addr !146
  store i64 0, i64* %93, align 8, !insn.addr !146
  %94 = load i64, i64* %rcx, align 8, !insn.addr !147
  %95 = add i64 %94, 24, !insn.addr !147
  %96 = inttoptr i64 %95 to i64*, !insn.addr !147
  store i64 15, i64* %96, align 8, !insn.addr !147
  %97 = load i64, i64* %rcx, align 8, !insn.addr !148
  %98 = inttoptr i64 %97 to i8*, !insn.addr !148
  store i8 0, i8* %98, align 1, !insn.addr !148
  %99 = load i64, i64* %rcx, align 8, !insn.addr !149
  %100 = call i64 @function_1400058d0(i64 %99, i64* nonnull @global_var_14000892b), !insn.addr !149
  %101 = load i64, i64* %.pre-phi14.reload, align 8, !insn.addr !150
  %102 = icmp ult i64 %101, 16, !insn.addr !151
  store i64* %.pre-phi14.reload, i64** %.pre-phi8.reg2mem, !insn.addr !152
  br i1 %102, label %dec_label_pc_1400015c9, label %dec_label_pc_14000159d, !insn.addr !152

dec_label_pc_14000159d:                           ; preds = %dec_label_pc_140001574
  %103 = add i64 %101, 1, !insn.addr !153
  %104 = bitcast i8* %4 to i64*, !insn.addr !154
  %105 = load i64, i64* %104, align 8, !insn.addr !154
  store i64 %105, i64* %rcx, align 8, !insn.addr !154
  %106 = icmp ult i64 %103, 4096, !insn.addr !155
  store i64* %.pre-phi14.reload, i64** %.pre7.pre-phi.reg2mem, !insn.addr !156
  store i64 %105, i64* %.reg2mem17, !insn.addr !156
  store i64 %103, i64* %rdx.1.reg2mem, !insn.addr !156
  br i1 %106, label %dec_label_pc_1400015c4, label %dec_label_pc_1400015ac, !insn.addr !156

dec_label_pc_1400015ac:                           ; preds = %dec_label_pc_14000159d
  %107 = add i64 %105, -8
  %108 = inttoptr i64 %107 to i64*, !insn.addr !157
  %109 = load i64, i64* %108, align 8, !insn.addr !157
  %110 = sub i64 %107, %109, !insn.addr !158
  %111 = icmp ult i64 %110, 32
  store i64* %.pre-phi14.reload, i64** %.pre10.pre-phi.reg2mem, !insn.addr !159
  store i64 %101, i64* %rdx.0.in.reg2mem, !insn.addr !159
  store i64 %109, i64* %r8.1.reg2mem, !insn.addr !159
  br i1 %111, label %dec_label_pc_1400015c1, label %dec_label_pc_140001606, !insn.addr !159

dec_label_pc_1400015c1:                           ; preds = %dec_label_pc_1400015ac, %dec_label_pc_140001558
  %r8.1.reload = load i64, i64* %r8.1.reg2mem
  %rdx.0.in.reload = load i64, i64* %rdx.0.in.reg2mem
  %.pre10.pre-phi.reload = load i64*, i64** %.pre10.pre-phi.reg2mem
  %rdx.0 = add i64 %rdx.0.in.reload, 40
  store i64 %r8.1.reload, i64* %rcx, align 8, !insn.addr !160
  store i64* %.pre10.pre-phi.reload, i64** %.pre7.pre-phi.reg2mem, !insn.addr !160
  store i64 %r8.1.reload, i64* %.reg2mem17, !insn.addr !160
  store i64 %rdx.0, i64* %rdx.1.reg2mem, !insn.addr !160
  br label %dec_label_pc_1400015c4, !insn.addr !160

dec_label_pc_1400015c4:                           ; preds = %dec_label_pc_1400015c1, %dec_label_pc_14000159d, %dec_label_pc_140001549
  %rdx.1.reload = load i64, i64* %rdx.1.reg2mem
  %.reload18 = load i64, i64* %.reg2mem17, !insn.addr !161
  %.pre7.pre-phi.reload = load i64*, i64** %.pre7.pre-phi.reg2mem
  %112 = call i64 @function_1400065d0(i64 %.reload18, i64 %rdx.1.reload), !insn.addr !161
  store i64* %.pre7.pre-phi.reload, i64** %.pre-phi8.reg2mem, !insn.addr !161
  br label %dec_label_pc_1400015c9, !insn.addr !161

dec_label_pc_1400015c9:                           ; preds = %dec_label_pc_1400015c4, %dec_label_pc_140001574, %dec_label_pc_14000152a
  %113 = sext i32 %5 to i64, !insn.addr !73
  %.pre-phi8.reload = load i64*, i64** %.pre-phi8.reg2mem
  %114 = add i64 %6, 16, !insn.addr !162
  %115 = inttoptr i64 %114 to i64*, !insn.addr !162
  store i64 0, i64* %115, align 8, !insn.addr !162
  store i64 15, i64* %.pre-phi8.reload, align 8, !insn.addr !163
  call void @__security_check_cookie(i64 %113), !insn.addr !164
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !165

dec_label_pc_140001606:                           ; preds = %dec_label_pc_1400015ac
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !166
  br label %dec_label_pc_14000160d, !insn.addr !167

dec_label_pc_14000160d:                           ; preds = %dec_label_pc_14000148f, %dec_label_pc_140001606
  %116 = call i64 @function_140006360(), !insn.addr !168
  %117 = call i64 @__asm_int3(), !insn.addr !169
  %118 = call i64 @__asm_int3(), !insn.addr !170
  %119 = call i64 @__asm_int3(), !insn.addr !171
  %120 = call i64 @__asm_int3(), !insn.addr !172
  %121 = call i64 @__asm_int3(), !insn.addr !173
  %122 = call i64 @__asm_int3(), !insn.addr !174
  %123 = call i64 @__asm_int3(), !insn.addr !175
  %124 = call i64 @__asm_int3(), !insn.addr !176
  %125 = call i64 @__asm_int3(), !insn.addr !177
  %126 = call i64 @__asm_int3(), !insn.addr !178
  %127 = call i64 @__asm_int3(), !insn.addr !179
  %128 = call i64 @__asm_int3(), !insn.addr !180
  %129 = call i64 @__asm_int3(), !insn.addr !181
  ret i64 %129, !insn.addr !181

; uselistorder directives
  uselistorder i64 %105, { 1, 0, 2 }
  uselistorder i64* %.pre-phi14.reload, { 2, 1, 0, 3 }
  uselistorder i64 %84, { 2, 1, 0, 3 }
  uselistorder i64 %r14.0.reload, { 0, 2, 3, 1 }
  uselistorder i64 %57, { 1, 0, 2 }
  uselistorder i64 %51, { 2, 1, 0 }
  uselistorder i64 %38, { 1, 2, 3, 5, 4, 6, 7, 8, 0, 9 }
  uselistorder i64* %26, { 3, 2, 1, 0, 4, 5 }
  uselistorder i64 %6, { 3, 0, 2, 1 }
  uselistorder i8* %4, { 3, 2, 1, 0 }
  uselistorder i64* %stack_var_-2696, { 4, 0, 1, 5, 2, 3, 6 }
  uselistorder i64* %stack_var_-2664, { 0, 1, 4, 2, 3 }
  uselistorder i64 %3, { 1, 0, 2 }
  uselistorder i64* %rcx, { 5, 4, 7, 3, 2, 1, 0, 6, 8 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %rbx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %r13.04.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rax.05.reg2mem, { 0, 2, 1 }
  uselistorder i64* %r14.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder i64* %.reg2mem, { 0, 2, 1 }
  uselistorder i64** %.pre10.pre-phi.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rdx.0.in.reg2mem, { 0, 2, 1 }
  uselistorder i64* %r8.1.reg2mem, { 0, 2, 1 }
  uselistorder i64** %.pre7.pre-phi.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64* %.reg2mem17, { 0, 3, 2, 1 }
  uselistorder i64* %rdx.1.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64** %.pre-phi8.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32* @global_var_14000cdd0, { 1, 0 }
  uselistorder label %dec_label_pc_14000160d, { 1, 0 }
  uselistorder label %dec_label_pc_140001574, { 1, 0 }
  uselistorder label %dec_label_pc_140001508, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1400014f8, { 1, 0 }
  uselistorder label %dec_label_pc_1400014bd.thread, { 1, 0 }
}

define i64 @function_140001620() local_unnamed_addr {
dec_label_pc_140001620:
  %0 = alloca i64
  %rdx.0.reg2mem = alloca i64, !insn.addr !182
  %rcx.1.reg2mem = alloca i64, !insn.addr !182
  %rcx.0.reg2mem = alloca i64, !insn.addr !182
  %1 = load i64, i64* %0
  %stack_var_-336 = alloca i64, align 8
  %stack_var_-368 = alloca i64, align 8
  %stack_var_-296 = alloca i64, align 8
  %stack_var_-384 = alloca i64, align 8
  %stack_var_-388 = alloca i32, align 4
  %stack_var_-392 = alloca i32, align 4
  %2 = load i32, i32* @global_var_14000c010, align 4, !insn.addr !183
  store i32 260, i32* %stack_var_-392, align 4, !insn.addr !184
  store i32 1, i32* %stack_var_-388, align 4, !insn.addr !185
  store i64 0, i64* %stack_var_-384, align 8, !insn.addr !186
  %3 = call i64* @memset(i64* nonnull %stack_var_-296, i32 0, i32 260), !insn.addr !187
  %4 = bitcast i64* %stack_var_-384 to i64**, !insn.addr !188
  %5 = call i32 @RegOpenKeyExA(i64* inttoptr (i64 -2147483646 to i64*), i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_140008988, i64 0, i64 0), i32 0, i32 1, i64** nonnull %4), !insn.addr !188
  %6 = icmp eq i32 %5, 0, !insn.addr !189
  %7 = icmp eq i1 %6, false, !insn.addr !190
  br i1 %7, label %dec_label_pc_1400016e2, label %dec_label_pc_1400016a6, !insn.addr !190

dec_label_pc_1400016a6:                           ; preds = %dec_label_pc_140001620
  %8 = load i64, i64* %stack_var_-384, align 8, !insn.addr !191
  %9 = inttoptr i64 %8 to i64*, !insn.addr !192
  %10 = bitcast i64* %stack_var_-296 to i8*, !insn.addr !192
  %11 = call i32 @RegQueryValueExA(i64* %9, i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_1400089a8, i64 0, i64 0), i32* null, i32* nonnull %stack_var_-388, i8* nonnull %10, i32* nonnull %stack_var_-392), !insn.addr !192
  %12 = load i64, i64* %stack_var_-384, align 8, !insn.addr !193
  %13 = inttoptr i64 %12 to i64*, !insn.addr !194
  %14 = call i32 @RegCloseKey(i64* %13), !insn.addr !194
  br label %dec_label_pc_1400016e2, !insn.addr !195

dec_label_pc_1400016e2:                           ; preds = %dec_label_pc_140001620, %dec_label_pc_1400016a6
  %15 = sext i32 %2 to i64, !insn.addr !183
  %16 = ptrtoint i64* %stack_var_-296 to i64, !insn.addr !196
  store i64 0, i64* %rcx.0.reg2mem, !insn.addr !197
  br label %dec_label_pc_140001700, !insn.addr !197

dec_label_pc_140001700:                           ; preds = %dec_label_pc_14000170e, %dec_label_pc_1400016e2
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %17 = add nuw nsw i64 %rcx.0.reload, %16, !insn.addr !198
  %18 = inttoptr i64 %17 to i8*, !insn.addr !198
  %19 = load i8, i8* %18, align 1, !insn.addr !198
  %20 = add i64 %rcx.0.reload, ptrtoint ([8 x i8]* @global_var_1400089b8 to i64), !insn.addr !199
  %21 = inttoptr i64 %20 to i8*, !insn.addr !199
  %22 = load i8, i8* %21, align 1, !insn.addr !199
  %23 = icmp eq i8 %19, %22, !insn.addr !199
  %24 = icmp eq i1 %23, false, !insn.addr !200
  br i1 %24, label %dec_label_pc_140001723, label %dec_label_pc_14000170e, !insn.addr !200

dec_label_pc_14000170e:                           ; preds = %dec_label_pc_140001700
  %25 = add nuw nsw i64 %rcx.0.reload, 1, !insn.addr !201
  %26 = icmp eq i64 %25, 8, !insn.addr !202
  %27 = icmp eq i1 %26, false, !insn.addr !203
  store i64 %25, i64* %rcx.0.reg2mem, !insn.addr !203
  br i1 %27, label %dec_label_pc_140001700, label %dec_label_pc_140001714, !insn.addr !203

dec_label_pc_140001714:                           ; preds = %dec_label_pc_14000170e
  store i32 3, i32* @global_var_14000c144, align 4, !insn.addr !204
  br label %dec_label_pc_1400019fc, !insn.addr !205

dec_label_pc_140001723:                           ; preds = %dec_label_pc_140001700
  %28 = bitcast i64* %stack_var_-296 to i8*, !insn.addr !206
  %29 = call i32 @strcmp(i8* nonnull %28, i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_1400089c0, i64 0, i64 0)), !insn.addr !206
  %30 = icmp eq i32 %29, 0, !insn.addr !207
  %31 = icmp eq i1 %30, false, !insn.addr !208
  br i1 %31, label %dec_label_pc_140001746, label %dec_label_pc_140001737, !insn.addr !208

dec_label_pc_140001737:                           ; preds = %dec_label_pc_140001723
  store i32 4, i32* @global_var_14000c144, align 4, !insn.addr !209
  br label %dec_label_pc_1400019fc, !insn.addr !210

dec_label_pc_140001746:                           ; preds = %dec_label_pc_140001723
  %32 = ptrtoint i64* %stack_var_-368 to i64, !insn.addr !211
  store i64 0, i64* %stack_var_-368, align 8, !insn.addr !212
  %33 = call i64 @function_1400058d0(i64 %32, i64* bitcast ([7 x i8]* @global_var_140008938 to i64*)), !insn.addr !213
  %34 = call i64 @function_140001290(i64* nonnull %stack_var_-336, i64 ptrtoint ([7 x i8]* @global_var_140008938 to i64)), !insn.addr !214
  %35 = icmp ult i64 %1, 16, !insn.addr !215
  %36 = ptrtoint i64* %stack_var_-336 to i64, !insn.addr !216
  %37 = icmp eq i1 %35, false, !insn.addr !217
  %38 = load i64, i64* %stack_var_-336, align 8, !insn.addr !217
  %39 = select i1 %37, i64 %38, i64 %36, !insn.addr !217
  %40 = inttoptr i64 %39 to i8*, !insn.addr !218
  %41 = call i32 @_stricmp(i8* %40, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_140008964, i64 0, i64 0)), !insn.addr !218
  br i1 %35, label %dec_label_pc_1400017e8, label %dec_label_pc_1400017b3, !insn.addr !219

dec_label_pc_1400017b3:                           ; preds = %dec_label_pc_140001746
  %42 = load i64, i64* %stack_var_-336, align 8, !insn.addr !220
  %43 = add i64 %1, 1, !insn.addr !221
  %44 = icmp ult i64 %43, 4096, !insn.addr !222
  store i64 %42, i64* %rcx.1.reg2mem, !insn.addr !223
  store i64 %43, i64* %rdx.0.reg2mem, !insn.addr !223
  br i1 %44, label %dec_label_pc_1400017e3, label %dec_label_pc_1400017c7, !insn.addr !223

dec_label_pc_1400017c7:                           ; preds = %dec_label_pc_1400017b3
  %45 = add i64 %42, -8
  %46 = inttoptr i64 %45 to i64*, !insn.addr !224
  %47 = load i64, i64* %46, align 8, !insn.addr !224
  %48 = add i64 %1, 40, !insn.addr !225
  %49 = sub i64 %45, %47, !insn.addr !226
  %50 = icmp ult i64 %49, 32
  store i64 %47, i64* %rcx.1.reg2mem, !insn.addr !227
  store i64 %48, i64* %rdx.0.reg2mem, !insn.addr !227
  br i1 %50, label %dec_label_pc_1400017e3, label %dec_label_pc_1400017dc, !insn.addr !227

dec_label_pc_1400017dc:                           ; preds = %dec_label_pc_1400017c7
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !228
  %51 = call i64 @__asm_int3(), !insn.addr !229
  store i64 %47, i64* %rcx.1.reg2mem, !insn.addr !229
  store i64 %48, i64* %rdx.0.reg2mem, !insn.addr !229
  br label %dec_label_pc_1400017e3, !insn.addr !229

dec_label_pc_1400017e3:                           ; preds = %dec_label_pc_1400017dc, %dec_label_pc_1400017c7, %dec_label_pc_1400017b3
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rcx.1.reload = load i64, i64* %rcx.1.reg2mem
  %52 = call i64 @function_1400065d0(i64 %rcx.1.reload, i64 %rdx.0.reload), !insn.addr !230
  br label %dec_label_pc_1400017e8, !insn.addr !230

dec_label_pc_1400017e8:                           ; preds = %dec_label_pc_1400017e3, %dec_label_pc_140001746
  %53 = icmp eq i32 %41, 0, !insn.addr !231
  %54 = icmp eq i1 %53, false, !insn.addr !232
  %55 = icmp eq i1 %54, false, !insn.addr !233
  br i1 %55, label %dec_label_pc_1400019f5, label %dec_label_pc_1400017f0, !insn.addr !233

dec_label_pc_1400017f0:                           ; preds = %dec_label_pc_1400017e8
  store i64 0, i64* %stack_var_-336, align 8, !insn.addr !234
  %56 = call i64 @function_1400058d0(i64 %36, i64* bitcast ([7 x i8]* @global_var_140008938 to i64*)), !insn.addr !235
  %57 = call i64 @function_140001290(i64* nonnull %stack_var_-368, i64 ptrtoint ([7 x i8]* @global_var_140008938 to i64)), !insn.addr !236
  %58 = bitcast i64* %stack_var_-368 to i8*, !insn.addr !237
  %59 = call i32 @_stricmp(i8* nonnull %58, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @global_var_140008974, i64 0, i64 0)), !insn.addr !237
  %60 = icmp eq i32 %59, 0, !insn.addr !238
  %61 = icmp eq i1 %60, false, !insn.addr !239
  %62 = icmp eq i1 %61, false, !insn.addr !240
  br i1 %62, label %dec_label_pc_1400019f5, label %dec_label_pc_14000189b, !insn.addr !240

dec_label_pc_14000189b:                           ; preds = %dec_label_pc_1400017f0
  store i64 0, i64* %stack_var_-336, align 8, !insn.addr !241
  %63 = call i64 @function_1400058d0(i64 %36, i64* bitcast ([7 x i8]* @global_var_140008938 to i64*)), !insn.addr !242
  %64 = call i64 @function_140001290(i64* nonnull %stack_var_-368, i64 ptrtoint ([7 x i8]* @global_var_140008938 to i64)), !insn.addr !243
  %65 = call i32 @_stricmp(i8* nonnull %58, i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_140008978, i64 0, i64 0)), !insn.addr !244
  %66 = icmp eq i32 %65, 0, !insn.addr !245
  %67 = icmp eq i1 %66, false, !insn.addr !246
  %68 = icmp eq i1 %67, false, !insn.addr !247
  br i1 %68, label %dec_label_pc_1400019f5, label %dec_label_pc_140001946, !insn.addr !247

dec_label_pc_140001946:                           ; preds = %dec_label_pc_14000189b
  store i64 0, i64* %stack_var_-336, align 8, !insn.addr !248
  %69 = call i64 @function_1400058d0(i64 %36, i64* bitcast ([7 x i8]* @global_var_140008938 to i64*)), !insn.addr !249
  %70 = call i64 @function_140001290(i64* nonnull %stack_var_-368, i64 ptrtoint ([7 x i8]* @global_var_140008938 to i64)), !insn.addr !250
  %71 = call i32 @_stricmp(i8* nonnull %58, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_140008980, i64 0, i64 0)), !insn.addr !251
  %72 = icmp eq i32 %71, 0, !insn.addr !252
  store i32 2, i32* @global_var_14000c144, align 4, !insn.addr !253
  %73 = icmp eq i1 %72, false, !insn.addr !254
  br i1 %73, label %dec_label_pc_1400019fc, label %dec_label_pc_1400019f5, !insn.addr !255

dec_label_pc_1400019f5:                           ; preds = %dec_label_pc_140001946, %dec_label_pc_14000189b, %dec_label_pc_1400017f0, %dec_label_pc_1400017e8
  store i32 1, i32* @global_var_14000c144, align 4, !insn.addr !256
  br label %dec_label_pc_1400019fc, !insn.addr !256

dec_label_pc_1400019fc:                           ; preds = %dec_label_pc_1400019f5, %dec_label_pc_140001946, %dec_label_pc_140001737, %dec_label_pc_140001714
  store i32 1, i32* @global_var_14000c9c0, align 4, !insn.addr !257
  call void @__security_check_cookie(i64 %15), !insn.addr !258
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !259

; uselistorder directives
  uselistorder i64 %42, { 1, 0 }
  uselistorder i64* %stack_var_-384, { 1, 2, 0, 3 }
  uselistorder i64* %stack_var_-296, { 0, 3, 1, 2 }
  uselistorder i64* %stack_var_-368, { 1, 2, 0, 3, 4, 5 }
  uselistorder i64* %stack_var_-336, { 1, 2, 3, 4, 5, 6, 0 }
  uselistorder i64 %1, { 2, 1, 0 }
  uselistorder i64* %rcx.0.reg2mem, { 1, 0, 2 }
  uselistorder i32 (i8*, i8*)* @_stricmp, { 3, 2, 1, 0 }
  uselistorder i64 (i64*, i64)* @function_140001290, { 3, 2, 1, 0 }
  uselistorder i64 (i64, i64*)* @function_1400058d0, { 3, 2, 1, 0, 4 }
  uselistorder label %dec_label_pc_1400016e2, { 1, 0 }
}

define void @function_140001a40(i32 %dwExceptionCode, i32 %dwExceptionFlags, i32 %nNumberOfArguments, i32* %lpArguments) local_unnamed_addr {
dec_label_pc_140001a40:
  call void @RaiseException(i32 %dwExceptionCode, i32 %dwExceptionFlags, i32 0, i32* null), !insn.addr !260
  ret void, !insn.addr !260
}

define i64 @function_140001a50(i64* %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_140001a50:
  %0 = ptrtoint i64* %arg1 to i64
  %1 = trunc i64 %arg2 to i32, !insn.addr !261
  %2 = bitcast i64* %arg1 to i32*, !insn.addr !261
  store i32 %1, i32* %2, align 4, !insn.addr !261
  ret i64 %0, !insn.addr !262
}

define i64 @function_140001a60(i64 %arg1) local_unnamed_addr {
dec_label_pc_140001a60:
  %stack_var_16 = alloca i64, align 8
  %0 = and i64 %arg1, 4294967295, !insn.addr !263
  %1 = call i64 @function_140001a50(i64* nonnull %stack_var_16, i64 %0), !insn.addr !264
  call void @_CxxThrowException(i64* nonnull %stack_var_16, i64* nonnull @global_var_14000a400), !insn.addr !265
  unreachable, !insn.addr !265
}

define i1 @function_140001a90(%_RTL_CRITICAL_SECTION* %lpCriticalSection, i32 %dwSpinCount, i32 %Flags) local_unnamed_addr {
dec_label_pc_140001a90:
  %0 = call i1 @InitializeCriticalSectionEx(%_RTL_CRITICAL_SECTION* %lpCriticalSection, i32 %dwSpinCount, i32 %Flags), !insn.addr !266
  ret i1 %0, !insn.addr !266
}

define i64 @function_140001aa0(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_140001aa0:
  %storemerge.reg2mem = alloca i64, !insn.addr !267
  %rbx.1.reg2mem = alloca i64, !insn.addr !267
  %rdi.0.in.reg2mem = alloca i32, !insn.addr !267
  %rbx.0.reg2mem = alloca i64, !insn.addr !267
  %0 = inttoptr i64 %arg1 to i64*, !insn.addr !268
  %1 = inttoptr i64 %arg2 to i64*, !insn.addr !268
  %2 = call i64* @LoadResource(i64* %0, i64* %1), !insn.addr !268
  %3 = icmp eq i64* %2, null, !insn.addr !269
  store i64 0, i64* %storemerge.reg2mem, !insn.addr !270
  br i1 %3, label %dec_label_pc_140001b17, label %dec_label_pc_140001ac8, !insn.addr !270

dec_label_pc_140001ac8:                           ; preds = %dec_label_pc_140001aa0
  %4 = call i64* @LockResource(i64* nonnull %2), !insn.addr !271
  %5 = icmp eq i64* %4, null, !insn.addr !272
  store i64 0, i64* %storemerge.reg2mem, !insn.addr !273
  br i1 %5, label %dec_label_pc_140001b17, label %dec_label_pc_140001ad9, !insn.addr !273

dec_label_pc_140001ad9:                           ; preds = %dec_label_pc_140001ac8
  %6 = ptrtoint i64* %4 to i64, !insn.addr !271
  %7 = call i32 @SizeofResource(i64* %0, i64* %1), !insn.addr !274
  %8 = zext i32 %7 to i64, !insn.addr !275
  %9 = add i64 %8, %6, !insn.addr !276
  %10 = trunc i64 %arg3 to i32, !insn.addr !277
  %11 = and i32 %10, 15, !insn.addr !277
  %12 = icmp eq i32 %11, 0, !insn.addr !277
  store i64 %6, i64* %rbx.0.reg2mem, !insn.addr !278
  store i32 %11, i32* %rdi.0.in.reg2mem, !insn.addr !278
  store i64 %6, i64* %rbx.1.reg2mem, !insn.addr !278
  br i1 %12, label %dec_label_pc_140001b05, label %dec_label_pc_140001af0, !insn.addr !278

dec_label_pc_140001af0:                           ; preds = %dec_label_pc_140001ad9, %dec_label_pc_140001af5
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %13 = icmp ult i64 %rbx.0.reload, %9, !insn.addr !279
  %14 = icmp eq i1 %13, false, !insn.addr !280
  store i64 0, i64* %storemerge.reg2mem, !insn.addr !280
  br i1 %14, label %dec_label_pc_140001b17, label %dec_label_pc_140001af5, !insn.addr !280

dec_label_pc_140001af5:                           ; preds = %dec_label_pc_140001af0
  %rdi.0.in.reload = load i32, i32* %rdi.0.in.reg2mem
  %15 = inttoptr i64 %rbx.0.reload to i16*, !insn.addr !281
  %16 = load i16, i16* %15, align 2, !insn.addr !281
  %17 = zext i16 %16 to i64, !insn.addr !281
  %18 = mul i64 %17, 2, !insn.addr !282
  %19 = add i64 %rbx.0.reload, 2, !insn.addr !282
  %20 = add i64 %19, %18, !insn.addr !283
  %21 = add i32 %rdi.0.in.reload, -1, !insn.addr !284
  %22 = icmp eq i32 %21, 0, !insn.addr !284
  %23 = icmp eq i1 %22, false, !insn.addr !285
  store i64 %20, i64* %rbx.0.reg2mem, !insn.addr !285
  store i32 %21, i32* %rdi.0.in.reg2mem, !insn.addr !285
  store i64 %20, i64* %rbx.1.reg2mem, !insn.addr !285
  br i1 %23, label %dec_label_pc_140001af0, label %dec_label_pc_140001b05, !insn.addr !285

dec_label_pc_140001b05:                           ; preds = %dec_label_pc_140001af5, %dec_label_pc_140001ad9
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %24 = icmp ult i64 %rbx.1.reload, %9, !insn.addr !286
  %25 = icmp eq i1 %24, false, !insn.addr !287
  store i64 0, i64* %storemerge.reg2mem, !insn.addr !287
  br i1 %25, label %dec_label_pc_140001b17, label %dec_label_pc_140001b0a, !insn.addr !287

dec_label_pc_140001b0a:                           ; preds = %dec_label_pc_140001b05
  %26 = inttoptr i64 %rbx.1.reload to i16*, !insn.addr !288
  %27 = load i16, i16* %26, align 2, !insn.addr !288
  %28 = icmp eq i16 %27, 0, !insn.addr !288
  %spec.select = select i1 %28, i64 0, i64 %rbx.1.reload
  store i64 %spec.select, i64* %storemerge.reg2mem
  br label %dec_label_pc_140001b17

dec_label_pc_140001b17:                           ; preds = %dec_label_pc_140001af0, %dec_label_pc_140001b0a, %dec_label_pc_140001aa0, %dec_label_pc_140001ac8, %dec_label_pc_140001b05
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !289

; uselistorder directives
  uselistorder i64 %rbx.0.reload, { 1, 0, 2 }
  uselistorder i64 %9, { 1, 0 }
  uselistorder i64* %4, { 1, 0 }
  uselistorder i64* %rbx.0.reg2mem, { 2, 0, 1 }
  uselistorder i32* %rdi.0.in.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 5, 1, 4, 3 }
  uselistorder label %dec_label_pc_140001b17, { 1, 4, 0, 3, 2 }
  uselistorder label %dec_label_pc_140001af0, { 1, 0 }
}

define i64* @function_140001b30(i64* %hHeap, i32 %dwFlags, i32 %dwBytes) local_unnamed_addr {
dec_label_pc_140001b30:
  %0 = ptrtoint i64* %hHeap to i64
  %1 = add i64 %0, 8, !insn.addr !290
  %2 = inttoptr i64 %1 to i64*, !insn.addr !290
  %3 = load i64, i64* %2, align 8, !insn.addr !290
  %4 = inttoptr i64 %3 to i64*, !insn.addr !291
  %5 = call i64* @HeapAlloc(i64* %4, i32 0, i32 %dwFlags), !insn.addr !291
  ret i64* %5, !insn.addr !291
}

define i64 @function_140001b40(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_140001b40:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %arg2, 0, !insn.addr !292
  br i1 %2, label %dec_label_pc_140001b55, label %dec_label_pc_140001b45, !insn.addr !293

dec_label_pc_140001b45:                           ; preds = %dec_label_pc_140001b40
  %3 = add i64 %arg1, 8, !insn.addr !294
  %4 = inttoptr i64 %3 to i64*, !insn.addr !294
  %5 = load i64, i64* %4, align 8, !insn.addr !294
  %6 = inttoptr i64 %5 to i64*, !insn.addr !295
  %7 = inttoptr i64 %arg2 to i64*, !insn.addr !295
  %8 = call i1 @HeapFree(i64* %6, i32 0, i64* %7), !insn.addr !295
  %9 = sext i1 %8 to i64, !insn.addr !295
  ret i64 %9, !insn.addr !295

dec_label_pc_140001b55:                           ; preds = %dec_label_pc_140001b40
  ret i64 %1, !insn.addr !296
}

define i64 @function_140001b60(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_140001b60:
  %0 = add i64 %arg1, 8, !insn.addr !297
  %1 = inttoptr i64 %0 to i64*, !insn.addr !297
  %2 = load i64, i64* %1, align 8, !insn.addr !297
  %3 = icmp eq i64 %arg2, 0, !insn.addr !298
  %4 = icmp eq i1 %3, false, !insn.addr !299
  br i1 %4, label %dec_label_pc_140001b78, label %dec_label_pc_140001b6d, !insn.addr !299

dec_label_pc_140001b6d:                           ; preds = %dec_label_pc_140001b60
  %5 = inttoptr i64 %2 to i64*, !insn.addr !300
  %6 = trunc i64 %arg2 to i32, !insn.addr !300
  %7 = trunc i64 %arg3 to i32, !insn.addr !300
  %8 = call i64* @HeapAlloc(i64* %5, i32 %6, i32 %7), !insn.addr !300
  %9 = ptrtoint i64* %8 to i64, !insn.addr !300
  ret i64 %9, !insn.addr !300

dec_label_pc_140001b78:                           ; preds = %dec_label_pc_140001b60
  %10 = icmp eq i64 %arg3, 0, !insn.addr !301
  %11 = icmp eq i1 %10, false, !insn.addr !302
  %12 = inttoptr i64 %2 to i64*
  %13 = inttoptr i64 %arg2 to i64*
  br i1 %11, label %dec_label_pc_140001b8f, label %dec_label_pc_140001b7d, !insn.addr !302

dec_label_pc_140001b7d:                           ; preds = %dec_label_pc_140001b78
  %14 = call i1 @HeapFree(i64* %12, i32 0, i64* %13), !insn.addr !303
  ret i64 0, !insn.addr !304

dec_label_pc_140001b8f:                           ; preds = %dec_label_pc_140001b78
  %15 = trunc i64 %arg3 to i32, !insn.addr !305
  %16 = call i64* @HeapReAlloc(i64* %12, i32 0, i64* %13, i32 %15), !insn.addr !305
  %17 = ptrtoint i64* %16 to i64, !insn.addr !305
  ret i64 %17, !insn.addr !305

; uselistorder directives
  uselistorder i64* %13, { 1, 0 }
  uselistorder i64* %12, { 1, 0 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 %arg3, { 2, 1, 0 }
  uselistorder i64 %arg2, { 1, 0, 2 }
}

define i32 @function_140001bb0(i64* %hHeap, i32 %dwFlags, i64* %lpMem) local_unnamed_addr {
dec_label_pc_140001bb0:
  %0 = sext i32 %dwFlags to i64
  %1 = ptrtoint i64* %hHeap to i64
  %2 = add i64 %1, 8, !insn.addr !306
  %3 = inttoptr i64 %2 to i64*, !insn.addr !306
  %4 = load i64, i64* %3, align 8, !insn.addr !306
  %5 = inttoptr i64 %4 to i64*, !insn.addr !307
  %6 = inttoptr i64 %0 to i64*, !insn.addr !307
  %7 = call i32 @HeapSize(i64* %5, i32 0, i64* %6), !insn.addr !307
  ret i32 %7, !insn.addr !307
}

define i64 @function_140001bc0(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_140001bc0:
  %0 = add i64 %arg1, 16, !insn.addr !308
  %1 = inttoptr i64 %0 to i8*, !insn.addr !308
  %2 = load i8, i8* %1, align 1, !insn.addr !308
  %3 = icmp eq i8 %2, 0, !insn.addr !308
  %4 = inttoptr i64 %arg1 to i64*, !insn.addr !309
  store i64 ptrtoint (i32* @global_var_140008da0 to i64), i64* %4, align 8, !insn.addr !309
  br i1 %3, label %dec_label_pc_140001bee, label %dec_label_pc_140001bdf, !insn.addr !310

dec_label_pc_140001bdf:                           ; preds = %dec_label_pc_140001bc0
  %5 = add i64 %arg1, 8, !insn.addr !311
  %6 = inttoptr i64 %5 to i64*, !insn.addr !311
  %7 = load i64, i64* %6, align 8, !insn.addr !311
  %8 = icmp eq i64 %7, 0, !insn.addr !312
  br i1 %8, label %dec_label_pc_140001bee, label %dec_label_pc_140001be8, !insn.addr !313

dec_label_pc_140001be8:                           ; preds = %dec_label_pc_140001bdf
  %9 = inttoptr i64 %7 to i64*, !insn.addr !314
  %10 = call i1 @HeapDestroy(i64* %9), !insn.addr !314
  br label %dec_label_pc_140001bee, !insn.addr !314

dec_label_pc_140001bee:                           ; preds = %dec_label_pc_140001be8, %dec_label_pc_140001bdf, %dec_label_pc_140001bc0
  %11 = and i64 %arg2, 1
  %12 = icmp eq i64 %11, 0, !insn.addr !315
  br i1 %12, label %dec_label_pc_140001c01, label %dec_label_pc_140001bf4, !insn.addr !316

dec_label_pc_140001bf4:                           ; preds = %dec_label_pc_140001bee
  %13 = call i64 @function_1400065d0(i64 %arg1, i64 24), !insn.addr !317
  br label %dec_label_pc_140001c01, !insn.addr !317

dec_label_pc_140001c01:                           ; preds = %dec_label_pc_140001bf4, %dec_label_pc_140001bee
  ret i64 %arg1, !insn.addr !318

; uselistorder directives
  uselistorder i64 %arg1, { 2, 1, 0, 4, 3 }
}

define i64 @function_140001c10() local_unnamed_addr {
dec_label_pc_140001c10:
  %0 = call i64 @__readgsqword(i64 88), !insn.addr !319
  %1 = inttoptr i64 %0 to i64*, !insn.addr !320
  %2 = load i64, i64* %1, align 8, !insn.addr !320
  %3 = add i64 %2, 4, !insn.addr !320
  %4 = inttoptr i64 %3 to i32*, !insn.addr !321
  %5 = load i32, i32* %4, align 4, !insn.addr !321
  %6 = zext i32 %5 to i64, !insn.addr !321
  %7 = load i32, i32* bitcast (i64* @global_var_14000cde0 to i32*), align 8, !insn.addr !322
  %8 = sext i32 %7 to i64, !insn.addr !323
  %9 = icmp sgt i64 %8, %6, !insn.addr !323
  br i1 %9, label %dec_label_pc_140001cc5, label %dec_label_pc_140001c35, !insn.addr !323

dec_label_pc_140001c35:                           ; preds = %dec_label_pc_140001cde, %dec_label_pc_140001cc5, %dec_label_pc_140001c10
  %10 = load i32, i32* %4, align 4, !insn.addr !324
  %11 = zext i32 %10 to i64, !insn.addr !324
  %12 = load i32, i32* bitcast (i64* @global_var_14000ce00 to i32*), align 8, !insn.addr !325
  %13 = sext i32 %12 to i64, !insn.addr !326
  %14 = icmp sgt i64 %13, %11, !insn.addr !326
  br i1 %14, label %dec_label_pc_140001c4c, label %dec_label_pc_140001c3f, !insn.addr !326

dec_label_pc_140001c3f:                           ; preds = %dec_label_pc_140001c4c, %dec_label_pc_140001c35
  ret i64 ptrtoint (i64* @global_var_14000ce08 to i64), !insn.addr !327

dec_label_pc_140001c4c:                           ; preds = %dec_label_pc_140001c35
  %15 = call i64 @_Init_thread_header(i64* nonnull @global_var_14000ce00), !insn.addr !328
  %16 = load i32, i32* bitcast (i64* @global_var_14000ce00 to i32*), align 8, !insn.addr !329
  %17 = icmp eq i32 %16, -1, !insn.addr !329
  %18 = icmp eq i1 %17, false, !insn.addr !330
  br i1 %18, label %dec_label_pc_140001c3f, label %dec_label_pc_140001c61, !insn.addr !330

dec_label_pc_140001c61:                           ; preds = %dec_label_pc_140001c4c
  store i32 2, i32* bitcast (i64* @global_var_14000ce28 to i32*), align 8, !insn.addr !331
  store i64 ptrtoint (i32* @global_var_140008d68 to i64), i64* @global_var_14000ce08, align 8, !insn.addr !332
  store i64 ptrtoint (i64* @global_var_14000ce08 to i64), i64* @global_var_14000ce18, align 8, !insn.addr !333
  store i32 ptrtoint (i32* @global_var_14000cde8 to i32), i32* @global_var_14000ce10, align 4, !insn.addr !334
  store i64 zext (i32 xor (i32 ptrtoint (i32* @global_var_14000cde8 to i32), i32 ptrtoint (i32* @global_var_14000cde8 to i32)) to i64), i64* @global_var_14000ce20, align 8, !insn.addr !335
  store i32 xor (i32 ptrtoint (i32* @global_var_14000cde8 to i32), i32 ptrtoint (i32* @global_var_14000cde8 to i32)), i32* bitcast (i64* @global_var_14000ce30 to i32*), align 8, !insn.addr !336
  %19 = call i64 @function_1400068b8(i64 5368740880), !insn.addr !337
  %20 = call i64 @_Init_thread_footer(i64* nonnull @global_var_14000ce00), !insn.addr !338
  ret i64 ptrtoint (i64* @global_var_14000ce08 to i64), !insn.addr !339

dec_label_pc_140001cc5:                           ; preds = %dec_label_pc_140001c10
  %21 = call i64 @_Init_thread_header(i64* nonnull @global_var_14000cde0), !insn.addr !340
  %22 = load i32, i32* bitcast (i64* @global_var_14000cde0 to i32*), align 8, !insn.addr !341
  %23 = icmp eq i32 %22, -1, !insn.addr !341
  %24 = icmp eq i1 %23, false, !insn.addr !342
  br i1 %24, label %dec_label_pc_140001c35, label %dec_label_pc_140001cde, !insn.addr !342

dec_label_pc_140001cde:                           ; preds = %dec_label_pc_140001cc5
  %25 = call i64* @GetProcessHeap(), !insn.addr !343
  %26 = ptrtoint i64* %25 to i64, !insn.addr !343
  store i8 0, i8* @global_var_14000cdf8, align 1, !insn.addr !344
  store i32 ptrtoint (i32* @global_var_140008da0 to i32), i32* @global_var_14000cde8, align 4, !insn.addr !345
  store i64 %26, i64* @global_var_14000cdf0, align 8, !insn.addr !346
  %27 = call i64 @function_1400068b8(i64 5368740896), !insn.addr !347
  %28 = call i64 @_Init_thread_footer(i64* nonnull @global_var_14000cde0), !insn.addr !348
  br label %dec_label_pc_140001c35, !insn.addr !349

; uselistorder directives
  uselistorder i64 (i64*)* @_Init_thread_footer, { 1, 0 }
  uselistorder i64 (i64*)* @_Init_thread_header, { 1, 0 }
}

define i64 @function_140001d20(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_140001d20:
  %r8.0.reg2mem = alloca i64, !insn.addr !350
  %0 = trunc i64 %arg2 to i32, !insn.addr !351
  %1 = icmp slt i32 %0, 0, !insn.addr !351
  %2 = sub i32 2147483647, %0, !insn.addr !352
  %3 = icmp slt i32 %2, 1, !insn.addr !352
  %or.cond = or i1 %1, %3
  br i1 %or.cond, label %dec_label_pc_140001dae, label %dec_label_pc_140001d3d, !insn.addr !353

dec_label_pc_140001d3d:                           ; preds = %dec_label_pc_140001d20
  %4 = add i64 %arg2, 1, !insn.addr !354
  %5 = and i64 %4, 4294967295, !insn.addr !354
  %6 = add i64 %arg2, 8, !insn.addr !355
  %7 = and i64 %6, 4294967288, !insn.addr !356
  %8 = icmp ugt i64 %5, %7, !insn.addr !357
  br i1 %8, label %dec_label_pc_140001dae, label %dec_label_pc_140001d49, !insn.addr !357

dec_label_pc_140001d49:                           ; preds = %dec_label_pc_140001d3d
  %9 = icmp eq i64 %7, 0, !insn.addr !358
  %10 = icmp eq i1 %9, false, !insn.addr !359
  store i64 0, i64* %r8.0.reg2mem, !insn.addr !359
  br i1 %10, label %dec_label_pc_140001d58, label %dec_label_pc_140001d73, !insn.addr !359

dec_label_pc_140001d58:                           ; preds = %dec_label_pc_140001d49
  %sext = mul i64 %arg3, 4294967296
  %11 = ashr exact i64 %sext, 32, !insn.addr !360
  %sext1 = mul i64 %7, 4294967296
  %12 = ashr exact i64 %sext1, 32, !insn.addr !361
  %13 = udiv i64 -1, %12, !insn.addr !362
  %14 = icmp ult i64 %13, %11, !insn.addr !363
  br i1 %14, label %dec_label_pc_140001dae, label %dec_label_pc_140001d69, !insn.addr !364

dec_label_pc_140001d69:                           ; preds = %dec_label_pc_140001d58
  %15 = mul nsw i64 %12, %11, !insn.addr !365
  %16 = icmp ult i64 %15, -24
  store i64 %15, i64* %r8.0.reg2mem, !insn.addr !366
  br i1 %16, label %dec_label_pc_140001d73, label %dec_label_pc_140001dae, !insn.addr !366

dec_label_pc_140001d73:                           ; preds = %dec_label_pc_140001d49, %dec_label_pc_140001d69
  %r8.0.reload = load i64, i64* %r8.0.reg2mem
  %17 = add i64 %arg1, 8, !insn.addr !367
  %18 = inttoptr i64 %17 to i64*, !insn.addr !367
  %19 = load i64, i64* %18, align 8, !insn.addr !367
  %20 = add i64 %19, 8, !insn.addr !368
  %21 = inttoptr i64 %20 to i64*, !insn.addr !368
  %22 = load i64, i64* %21, align 8, !insn.addr !368
  %23 = inttoptr i64 %22 to i64*, !insn.addr !369
  %24 = trunc i64 %r8.0.reload to i32
  %25 = add i32 %24, 24, !insn.addr !369
  %26 = call i64* @HeapAlloc(i64* %23, i32 0, i32 %25), !insn.addr !369
  %27 = icmp eq i64* %26, null, !insn.addr !370
  br i1 %27, label %dec_label_pc_140001dae, label %dec_label_pc_140001d8c, !insn.addr !371

dec_label_pc_140001d8c:                           ; preds = %dec_label_pc_140001d73
  %28 = ptrtoint i64* %26 to i64, !insn.addr !369
  %29 = trunc i64 %7 to i32
  %30 = add i32 %29, -1, !insn.addr !372
  store i64 %arg1, i64* %26, align 8, !insn.addr !373
  %31 = add i64 %28, 12, !insn.addr !374
  %32 = inttoptr i64 %31 to i32*, !insn.addr !374
  store i32 %30, i32* %32, align 4, !insn.addr !374
  %33 = add i64 %28, 16, !insn.addr !375
  %34 = inttoptr i64 %33 to i32*, !insn.addr !375
  store i32 1, i32* %34, align 4, !insn.addr !375
  %35 = add i64 %28, 8, !insn.addr !376
  %36 = inttoptr i64 %35 to i32*, !insn.addr !376
  store i32 0, i32* %36, align 4, !insn.addr !376
  ret i64 %28, !insn.addr !377

dec_label_pc_140001dae:                           ; preds = %dec_label_pc_140001d69, %dec_label_pc_140001d73, %dec_label_pc_140001d58, %dec_label_pc_140001d3d, %dec_label_pc_140001d20
  ret i64 0, !insn.addr !378

; uselistorder directives
  uselistorder i64* %26, { 0, 2, 1 }
  uselistorder i64 %7, { 2, 0, 1, 3 }
  uselistorder i64* %r8.0.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg2, { 1, 0, 2 }
  uselistorder label %dec_label_pc_140001dae, { 1, 0, 2, 3, 4 }
  uselistorder label %dec_label_pc_140001d73, { 1, 0 }
}

define i64 @function_140001dc0(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_140001dc0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %arg2, 0, !insn.addr !379
  br i1 %2, label %dec_label_pc_140001dd9, label %dec_label_pc_140001dc5, !insn.addr !380

dec_label_pc_140001dc5:                           ; preds = %dec_label_pc_140001dc0
  %3 = add i64 %arg1, 8, !insn.addr !381
  %4 = inttoptr i64 %3 to i64*, !insn.addr !381
  %5 = load i64, i64* %4, align 8, !insn.addr !381
  %6 = add i64 %5, 8, !insn.addr !382
  %7 = inttoptr i64 %6 to i64*, !insn.addr !382
  %8 = load i64, i64* %7, align 8, !insn.addr !382
  %9 = inttoptr i64 %8 to i64*, !insn.addr !383
  %10 = inttoptr i64 %arg2 to i64*, !insn.addr !383
  %11 = call i1 @HeapFree(i64* %9, i32 0, i64* %10), !insn.addr !383
  %12 = sext i1 %11 to i64, !insn.addr !383
  ret i64 %12, !insn.addr !383

dec_label_pc_140001dd9:                           ; preds = %dec_label_pc_140001dc0
  ret i64 %1, !insn.addr !384
}

define i64 @function_140001de0(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_140001de0:
  %storemerge.in.reg2mem = alloca i64*, !insn.addr !385
  %0 = trunc i64 %arg3 to i32, !insn.addr !386
  %1 = icmp slt i32 %0, 0, !insn.addr !386
  %2 = sub i32 2147483647, %0, !insn.addr !387
  %3 = icmp slt i32 %2, 1, !insn.addr !387
  %or.cond3 = or i1 %1, %3
  br i1 %or.cond3, label %dec_label_pc_140001e4e, label %dec_label_pc_140001dfb, !insn.addr !388

dec_label_pc_140001dfb:                           ; preds = %dec_label_pc_140001de0
  %4 = add i64 %arg3, 1, !insn.addr !389
  %5 = and i64 %4, 4294967295, !insn.addr !389
  %6 = add i64 %arg3, 8, !insn.addr !390
  %7 = and i64 %6, 4294967288, !insn.addr !391
  %8 = icmp ugt i64 %5, %7, !insn.addr !392
  br i1 %8, label %dec_label_pc_140001e4e, label %dec_label_pc_140001e0a, !insn.addr !392

dec_label_pc_140001e0a:                           ; preds = %dec_label_pc_140001dfb
  %9 = and i64 %arg4, 4294967295, !insn.addr !393
  %narrow = mul nuw i64 %7, %9
  %10 = icmp ult i64 %narrow, 4294967296
  %11 = trunc i64 %narrow to i32, !insn.addr !394
  %12 = icmp ult i32 %11, -24
  %or.cond = icmp eq i1 %10, %12
  br i1 %or.cond, label %dec_label_pc_140001e22, label %dec_label_pc_140001e4e, !insn.addr !395

dec_label_pc_140001e22:                           ; preds = %dec_label_pc_140001e0a
  %13 = add i64 %arg1, 8, !insn.addr !396
  %14 = inttoptr i64 %13 to i64*, !insn.addr !396
  %15 = load i64, i64* %14, align 8, !insn.addr !396
  %16 = add i64 %narrow, 24, !insn.addr !397
  %17 = add i64 %15, 8, !insn.addr !398
  %18 = inttoptr i64 %17 to i64*, !insn.addr !398
  %19 = load i64, i64* %18, align 8, !insn.addr !398
  %20 = icmp eq i64 %arg2, 0, !insn.addr !399
  %21 = icmp eq i1 %20, false, !insn.addr !400
  br i1 %21, label %dec_label_pc_140001e3e, label %dec_label_pc_140001e33, !insn.addr !400

dec_label_pc_140001e33:                           ; preds = %dec_label_pc_140001e22
  %22 = trunc i64 %16 to i32, !insn.addr !401
  %23 = inttoptr i64 %19 to i64*, !insn.addr !402
  %24 = trunc i64 %arg2 to i32, !insn.addr !402
  %25 = call i64* @HeapAlloc(i64* %23, i32 %24, i32 %22), !insn.addr !402
  store i64* %25, i64** %storemerge.in.reg2mem, !insn.addr !403
  br label %dec_label_pc_140001e5c, !insn.addr !403

dec_label_pc_140001e3e:                           ; preds = %dec_label_pc_140001e22
  %26 = and i64 %16, 4294967288, !insn.addr !397
  %27 = icmp eq i64 %26, 0, !insn.addr !404
  %28 = icmp eq i1 %27, false, !insn.addr !405
  %29 = inttoptr i64 %19 to i64*
  %30 = inttoptr i64 %arg2 to i64*
  br i1 %28, label %dec_label_pc_140001e56, label %dec_label_pc_140001e48, !insn.addr !405

dec_label_pc_140001e48:                           ; preds = %dec_label_pc_140001e3e
  %31 = call i1 @HeapFree(i64* %29, i32 0, i64* %30), !insn.addr !406
  br label %dec_label_pc_140001e4e, !insn.addr !406

dec_label_pc_140001e4e:                           ; preds = %dec_label_pc_140001e0a, %dec_label_pc_140001e5c, %dec_label_pc_140001e48, %dec_label_pc_140001dfb, %dec_label_pc_140001de0
  ret i64 0, !insn.addr !407

dec_label_pc_140001e56:                           ; preds = %dec_label_pc_140001e3e
  %32 = trunc i64 %16 to i32, !insn.addr !408
  %33 = call i64* @HeapReAlloc(i64* %29, i32 0, i64* %30, i32 %32), !insn.addr !408
  store i64* %33, i64** %storemerge.in.reg2mem, !insn.addr !408
  br label %dec_label_pc_140001e5c, !insn.addr !408

dec_label_pc_140001e5c:                           ; preds = %dec_label_pc_140001e56, %dec_label_pc_140001e33
  %storemerge.in.reload = load i64*, i64** %storemerge.in.reg2mem
  %34 = icmp eq i64* %storemerge.in.reload, null, !insn.addr !409
  br i1 %34, label %dec_label_pc_140001e4e, label %dec_label_pc_140001e64, !insn.addr !410

dec_label_pc_140001e64:                           ; preds = %dec_label_pc_140001e5c
  %storemerge = ptrtoint i64* %storemerge.in.reload to i64
  %35 = trunc i64 %7 to i32
  %36 = add i32 %35, -1, !insn.addr !411
  %37 = add i64 %storemerge, 12, !insn.addr !412
  %38 = inttoptr i64 %37 to i32*, !insn.addr !412
  store i32 %36, i32* %38, align 4, !insn.addr !412
  ret i64 %storemerge, !insn.addr !413

; uselistorder directives
  uselistorder i64* %30, { 1, 0 }
  uselistorder i64* %29, { 1, 0 }
  uselistorder i64 %16, { 0, 2, 1 }
  uselistorder i64 %narrow, { 1, 0, 2 }
  uselistorder i64** %storemerge.in.reg2mem, { 0, 2, 1 }
  uselistorder i64* (i64*, i32, i64*, i32)* @HeapReAlloc, { 1, 0 }
  uselistorder i1 (i64*, i32, i64*)* @HeapFree, { 3, 2, 1, 0 }
  uselistorder i64* (i64*, i32, i32)* @HeapAlloc, { 3, 2, 1, 0 }
  uselistorder i64 %arg2, { 0, 2, 1 }
  uselistorder label %dec_label_pc_140001e4e, { 1, 2, 0, 3, 4 }
}

define i64 @function_140001e80(i64 %arg1) local_unnamed_addr {
dec_label_pc_140001e80:
  %0 = add i64 %arg1, 32, !insn.addr !414
  %1 = inttoptr i64 %0 to i32*, !insn.addr !414
  %2 = load i32, i32* %1, align 4, !insn.addr !414
  %3 = add i32 %2, 1, !insn.addr !414
  store i32 %3, i32* %1, align 4, !insn.addr !414
  %4 = add i64 %arg1, 16, !insn.addr !415
  ret i64 %4, !insn.addr !416

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @function_140001e90(i64 %arg1) local_unnamed_addr {
dec_label_pc_140001e90:
  ret i64 %arg1, !insn.addr !417
}

define i64 @function_140001ea0(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_140001ea0:
  %0 = and i64 %arg2, 1
  %1 = icmp eq i64 %0, 0, !insn.addr !418
  br i1 %1, label %dec_label_pc_140001eb8, label %dec_label_pc_140001eae, !insn.addr !419

dec_label_pc_140001eae:                           ; preds = %dec_label_pc_140001ea0
  %2 = call i64 @function_1400065d0(i64 %arg1, i64 48), !insn.addr !420
  br label %dec_label_pc_140001eb8, !insn.addr !420

dec_label_pc_140001eb8:                           ; preds = %dec_label_pc_140001eae, %dec_label_pc_140001ea0
  ret i64 %arg1, !insn.addr !421
}

define i64 @function_140001ed0() local_unnamed_addr {
dec_label_pc_140001ed0:
  %0 = alloca i64
  %rdx.2.reg2mem = alloca i64, !insn.addr !422
  %rcx.1.reg2mem = alloca i64, !insn.addr !422
  %r8.3.reg2mem = alloca i64, !insn.addr !422
  %r8.2.reg2mem = alloca i64, !insn.addr !422
  %rdx.1.reg2mem = alloca i64, !insn.addr !422
  %rcx.0.reg2mem = alloca i64, !insn.addr !422
  %r8.1.reg2mem = alloca i64, !insn.addr !422
  %r8.0.reg2mem = alloca i64, !insn.addr !422
  %rdx.0.reg2mem = alloca i16*, !insn.addr !422
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %stack_var_-596 = alloca i64, align 8
  %stack_var_-592 = alloca i64, align 8
  %stack_var_-552 = alloca i64, align 8
  %stack_var_-600 = alloca i32, align 4
  %3 = load i32, i32* @global_var_14000c010, align 4, !insn.addr !423
  store i32 260, i32* %stack_var_-600, align 4, !insn.addr !424
  %4 = call i64* @memset(i64* nonnull %stack_var_-552, i32 0, i32 520), !insn.addr !425
  %5 = inttoptr i64 %2 to i16*, !insn.addr !426
  %6 = bitcast i64* %stack_var_-592 to i64**, !insn.addr !426
  %7 = call i32 @RegOpenKeyExW(i64* inttoptr (i64 -2147483646 to i64*), i16* %5, i32 0, i32 131097, i64** nonnull %6), !insn.addr !426
  %8 = icmp eq i32 %7, 0, !insn.addr !427
  %9 = icmp eq i1 %8, false, !insn.addr !428
  store i64 0, i64* %r8.1.reg2mem, !insn.addr !428
  br i1 %9, label %dec_label_pc_140001fcc, label %dec_label_pc_140001f59, !insn.addr !428

dec_label_pc_140001f59:                           ; preds = %dec_label_pc_140001ed0
  %10 = add i64 %1, 16, !insn.addr !429
  %11 = inttoptr i64 %10 to i64*, !insn.addr !429
  %12 = load i64, i64* %11, align 8, !insn.addr !429
  %13 = icmp eq i64 %12, 0, !insn.addr !429
  %14 = icmp eq i1 %13, false, !insn.addr !430
  store i16* null, i16** %rdx.0.reg2mem, !insn.addr !430
  br i1 %14, label %dec_label_pc_140001f64, label %dec_label_pc_140001f71, !insn.addr !430

dec_label_pc_140001f64:                           ; preds = %dec_label_pc_140001f59
  %15 = add i64 %1, 24, !insn.addr !431
  %16 = inttoptr i64 %15 to i64*, !insn.addr !431
  %17 = load i64, i64* %16, align 8, !insn.addr !431
  %18 = icmp ult i64 %17, 8, !insn.addr !431
  %spec.select = select i1 %18, i64 %1, i64 0
  %phitmp = inttoptr i64 %spec.select to i16*
  store i16* %phitmp, i16** %rdx.0.reg2mem
  br label %dec_label_pc_140001f71

dec_label_pc_140001f71:                           ; preds = %dec_label_pc_140001f64, %dec_label_pc_140001f59
  %rdx.0.reload = load i16*, i16** %rdx.0.reg2mem
  %19 = load i64, i64* %stack_var_-592, align 8, !insn.addr !432
  %20 = inttoptr i64 %19 to i64*, !insn.addr !433
  %21 = bitcast i64* %stack_var_-596 to i32*, !insn.addr !433
  %22 = bitcast i64* %stack_var_-552 to i8*, !insn.addr !433
  %23 = call i32 @RegQueryValueExW(i64* %20, i16* %rdx.0.reload, i32* null, i32* nonnull %21, i8* nonnull %22, i32* nonnull %stack_var_-600), !insn.addr !433
  %24 = icmp eq i32 %23, 0, !insn.addr !434
  %25 = icmp eq i1 %24, false, !insn.addr !435
  store i64 0, i64* %r8.1.reg2mem, !insn.addr !435
  br i1 %25, label %dec_label_pc_140001fcc, label %dec_label_pc_140001f9c, !insn.addr !435

dec_label_pc_140001f9c:                           ; preds = %dec_label_pc_140001f71
  %26 = ptrtoint i64* %stack_var_-552 to i64, !insn.addr !436
  store i64 -1, i64* %r8.0.reg2mem, !insn.addr !437
  br label %dec_label_pc_140001fb0, !insn.addr !437

dec_label_pc_140001fb0:                           ; preds = %dec_label_pc_140001fb0, %dec_label_pc_140001f9c
  %r8.0.reload = load i64, i64* %r8.0.reg2mem
  %27 = add i64 %r8.0.reload, 1, !insn.addr !438
  %28 = mul i64 %27, 2, !insn.addr !439
  %29 = add i64 %28, %26, !insn.addr !439
  %30 = inttoptr i64 %29 to i16*, !insn.addr !439
  %31 = load i16, i16* %30, align 2, !insn.addr !439
  %32 = icmp eq i16 %31, 0, !insn.addr !439
  %33 = icmp eq i1 %32, false, !insn.addr !440
  store i64 %27, i64* %r8.0.reg2mem, !insn.addr !440
  br i1 %33, label %dec_label_pc_140001fb0, label %dec_label_pc_140001fbb, !insn.addr !440

dec_label_pc_140001fbb:                           ; preds = %dec_label_pc_140001fb0
  %34 = trunc i64 %27 to i32, !insn.addr !441
  %35 = call i64 @function_140005740(i64* nonnull @global_var_14000c148, i64* nonnull %stack_var_-552, i32 %34), !insn.addr !441
  store i64 %27, i64* %r8.1.reg2mem, !insn.addr !441
  br label %dec_label_pc_140001fcc, !insn.addr !441

dec_label_pc_140001fcc:                           ; preds = %dec_label_pc_140001fbb, %dec_label_pc_140001f71, %dec_label_pc_140001ed0
  %r8.1.reload = load i64, i64* %r8.1.reg2mem
  %36 = call i32 @RegCloseKey(i64* inttoptr (i64 -2147483646 to i64*)), !insn.addr !442
  %37 = add i64 %2, 24, !insn.addr !443
  %38 = inttoptr i64 %37 to i64*, !insn.addr !443
  %39 = load i64, i64* %38, align 8, !insn.addr !443
  %40 = icmp ult i64 %39, 8, !insn.addr !444
  store i64 %r8.1.reload, i64* %r8.3.reg2mem, !insn.addr !445
  br i1 %40, label %dec_label_pc_140002019, label %dec_label_pc_140001fe4, !insn.addr !445

dec_label_pc_140001fe4:                           ; preds = %dec_label_pc_140001fcc
  %41 = mul i64 %39, 2, !insn.addr !446
  %42 = add i64 %41, 2, !insn.addr !446
  %43 = icmp ult i64 %42, 4096, !insn.addr !447
  store i64 %39, i64* %rcx.0.reg2mem, !insn.addr !448
  store i64 %42, i64* %rdx.1.reg2mem, !insn.addr !448
  store i64 %r8.1.reload, i64* %r8.2.reg2mem, !insn.addr !448
  br i1 %43, label %dec_label_pc_140002014, label %dec_label_pc_140001ff8, !insn.addr !448

dec_label_pc_140001ff8:                           ; preds = %dec_label_pc_140001fe4
  %44 = add i64 %39, -8
  %45 = inttoptr i64 %44 to i64*, !insn.addr !449
  %46 = load i64, i64* %45, align 8, !insn.addr !449
  %47 = sub i64 %44, %46, !insn.addr !450
  %48 = icmp ult i64 %47, 32
  br i1 %48, label %dec_label_pc_140002011, label %dec_label_pc_140002099, !insn.addr !451

dec_label_pc_140002011:                           ; preds = %dec_label_pc_140001ff8
  %49 = add i64 %41, 41, !insn.addr !452
  store i64 %46, i64* %rcx.0.reg2mem, !insn.addr !453
  store i64 %49, i64* %rdx.1.reg2mem, !insn.addr !453
  store i64 %46, i64* %r8.2.reg2mem, !insn.addr !453
  br label %dec_label_pc_140002014, !insn.addr !453

dec_label_pc_140002014:                           ; preds = %dec_label_pc_140002011, %dec_label_pc_140001fe4
  %r8.2.reload = load i64, i64* %r8.2.reg2mem
  %rdx.1.reload = load i64, i64* %rdx.1.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %50 = call i64 @function_1400065d0(i64 %rcx.0.reload, i64 %rdx.1.reload), !insn.addr !454
  store i64 %r8.2.reload, i64* %r8.3.reg2mem, !insn.addr !454
  br label %dec_label_pc_140002019, !insn.addr !454

dec_label_pc_140002019:                           ; preds = %dec_label_pc_140002014, %dec_label_pc_140001fcc
  %r8.3.reload = load i64, i64* %r8.3.reg2mem
  %51 = add i64 %2, 16, !insn.addr !455
  %52 = inttoptr i64 %51 to i64*, !insn.addr !455
  store i64 0, i64* %52, align 8, !insn.addr !455
  store i64 7, i64* %38, align 8, !insn.addr !456
  store i16 0, i16* %5, align 2, !insn.addr !457
  %53 = add i64 %1, 24, !insn.addr !458
  %54 = inttoptr i64 %53 to i64*, !insn.addr !458
  %55 = load i64, i64* %54, align 8, !insn.addr !458
  %56 = icmp ult i64 %55, 8, !insn.addr !459
  br i1 %56, label %dec_label_pc_140002065, label %dec_label_pc_140002034, !insn.addr !460

dec_label_pc_140002034:                           ; preds = %dec_label_pc_140002019
  %57 = mul i64 %55, 2, !insn.addr !461
  %58 = add i64 %57, 2, !insn.addr !461
  %59 = icmp ult i64 %58, 4096, !insn.addr !462
  store i64 %r8.3.reload, i64* %rcx.1.reg2mem, !insn.addr !463
  store i64 %58, i64* %rdx.2.reg2mem, !insn.addr !463
  br i1 %59, label %dec_label_pc_140002060, label %dec_label_pc_140002048, !insn.addr !463

dec_label_pc_140002048:                           ; preds = %dec_label_pc_140002034
  %60 = add i64 %r8.3.reload, -8
  %61 = inttoptr i64 %60 to i64*, !insn.addr !464
  %62 = load i64, i64* %61, align 8, !insn.addr !464
  %63 = sub i64 %60, %62, !insn.addr !465
  %64 = icmp ult i64 %63, 32
  br i1 %64, label %dec_label_pc_14000205d, label %dec_label_pc_1400020a0, !insn.addr !466

dec_label_pc_14000205d:                           ; preds = %dec_label_pc_140002048
  %65 = add i64 %57, 41, !insn.addr !467
  store i64 %62, i64* %rcx.1.reg2mem, !insn.addr !468
  store i64 %65, i64* %rdx.2.reg2mem, !insn.addr !468
  br label %dec_label_pc_140002060, !insn.addr !468

dec_label_pc_140002060:                           ; preds = %dec_label_pc_14000205d, %dec_label_pc_140002034
  %rdx.2.reload = load i64, i64* %rdx.2.reg2mem
  %rcx.1.reload = load i64, i64* %rcx.1.reg2mem
  %66 = call i64 @function_1400065d0(i64 %rcx.1.reload, i64 %rdx.2.reload), !insn.addr !469
  br label %dec_label_pc_140002065, !insn.addr !469

dec_label_pc_140002065:                           ; preds = %dec_label_pc_140002060, %dec_label_pc_140002019
  %67 = sext i32 %3 to i64, !insn.addr !423
  %68 = add i64 %1, 16, !insn.addr !470
  %69 = inttoptr i64 %68 to i64*, !insn.addr !470
  store i64 0, i64* %69, align 8, !insn.addr !470
  store i64 7, i64* %54, align 8, !insn.addr !471
  %70 = inttoptr i64 %1 to i16*, !insn.addr !472
  store i16 0, i16* %70, align 2, !insn.addr !472
  call void @__security_check_cookie(i64 %67), !insn.addr !473
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !474

dec_label_pc_140002099:                           ; preds = %dec_label_pc_140001ff8
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !475
  br label %dec_label_pc_1400020a0, !insn.addr !476

dec_label_pc_1400020a0:                           ; preds = %dec_label_pc_140002048, %dec_label_pc_140002099
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !477
  %71 = call i64 @__asm_int3(), !insn.addr !478
  %72 = call i64 @__asm_int3(), !insn.addr !479
  %73 = call i64 @__asm_int3(), !insn.addr !480
  %74 = call i64 @__asm_int3(), !insn.addr !481
  %75 = call i64 @__asm_int3(), !insn.addr !482
  %76 = call i64 @__asm_int3(), !insn.addr !483
  %77 = call i64 @__asm_int3(), !insn.addr !484
  %78 = call i64 @__asm_int3(), !insn.addr !485
  %79 = call i64 @__asm_int3(), !insn.addr !486
  %80 = call i64 @__asm_int3(), !insn.addr !487
  ret i64 %80, !insn.addr !487

; uselistorder directives
  uselistorder i64 %57, { 1, 0 }
  uselistorder i64 %r8.3.reload, { 1, 0 }
  uselistorder i64 %41, { 1, 0 }
  uselistorder i64 %39, { 2, 0, 1, 3 }
  uselistorder i64 %r8.1.reload, { 1, 0 }
  uselistorder i64 %27, { 0, 3, 1, 2 }
  uselistorder i64* %stack_var_-552, { 0, 3, 1, 2 }
  uselistorder i64* %stack_var_-592, { 1, 0 }
  uselistorder i64 %2, { 2, 1, 0 }
  uselistorder i64 %1, { 2, 1, 0, 5, 3, 4 }
  uselistorder i64* %r8.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i32 (i64*)* @RegCloseKey, { 1, 0 }
  uselistorder label %dec_label_pc_1400020a0, { 1, 0 }
}

define i64 @function_1400020b0(i64* %arg1) local_unnamed_addr {
dec_label_pc_1400020b0:
  %stack_var_-48 = alloca i16, align 2
  %stack_var_-80 = alloca i64, align 8
  %0 = load i64, i64* @global_var_14000c158, align 8, !insn.addr !488
  %1 = icmp eq i64 %0, 0, !insn.addr !488
  %2 = icmp eq i1 %1, false, !insn.addr !489
  br i1 %2, label %dec_label_pc_14000213d, label %dec_label_pc_1400020d5, !insn.addr !489

dec_label_pc_1400020d5:                           ; preds = %dec_label_pc_1400020b0
  store i64 0, i64* %stack_var_-80, align 8, !insn.addr !490
  %3 = call i64 @function_140005740(i64* nonnull %stack_var_-80, i64* bitcast ([7 x i16]* @global_var_140008a20 to i64*), i32 6), !insn.addr !491
  store i16 0, i16* %stack_var_-48, align 2, !insn.addr !492
  %4 = bitcast i16* %stack_var_-48 to i64*, !insn.addr !493
  %5 = call i64 @function_140005740(i64* nonnull %4, i64* bitcast ([28 x i16]* @global_var_140008a30 to i64*), i32 27), !insn.addr !493
  %6 = call i64 @function_140001ed0(), !insn.addr !494
  br label %dec_label_pc_14000213d, !insn.addr !494

dec_label_pc_14000213d:                           ; preds = %dec_label_pc_1400020d5, %dec_label_pc_1400020b0
  %7 = ptrtoint i64* %arg1 to i64
  ret i64 %7, !insn.addr !495
}

define i64 @function_140002160(i64* %arg1, i16* %arg2) local_unnamed_addr {
dec_label_pc_140002160:
  %r8.0.reg2mem = alloca i64, !insn.addr !496
  %0 = ptrtoint i64* %arg1 to i64
  %stack_var_-552 = alloca i64, align 8
  %1 = load i32, i32* @global_var_14000c010, align 4, !insn.addr !497
  %2 = call i64* @memset(i64* nonnull %stack_var_-552, i32 0, i32 522), !insn.addr !498
  %3 = bitcast i64* %stack_var_-552 to i16*, !insn.addr !499
  %4 = call i32 @GetModuleFileNameW(i64* null, i16* nonnull %3, i32 260), !insn.addr !499
  %5 = call i16* @wcsrchr(i16* nonnull %3, i16 92), !insn.addr !500
  %6 = ptrtoint i16* %5 to i64, !insn.addr !500
  %7 = add i64 %6, 2, !insn.addr !501
  %8 = inttoptr i64 %7 to i16*, !insn.addr !501
  store i16 0, i16* %8, align 2, !insn.addr !501
  %9 = ptrtoint i64* %stack_var_-552 to i64, !insn.addr !502
  %10 = add i64 %0, 16, !insn.addr !503
  %11 = inttoptr i64 %10 to i64*, !insn.addr !503
  store i64 0, i64* %11, align 8, !insn.addr !503
  %12 = add i64 %0, 24, !insn.addr !504
  %13 = inttoptr i64 %12 to i64*, !insn.addr !504
  store i64 7, i64* %13, align 8, !insn.addr !504
  %14 = bitcast i64* %arg1 to i16*, !insn.addr !505
  store i16 0, i16* %14, align 2, !insn.addr !505
  store i64 -1, i64* %r8.0.reg2mem, !insn.addr !506
  br label %dec_label_pc_1400021e0, !insn.addr !506

dec_label_pc_1400021e0:                           ; preds = %dec_label_pc_1400021e0, %dec_label_pc_140002160
  %r8.0.reload = load i64, i64* %r8.0.reg2mem
  %15 = add i64 %r8.0.reload, 1, !insn.addr !507
  %16 = mul i64 %15, 2, !insn.addr !508
  %17 = add i64 %16, %9, !insn.addr !508
  %18 = inttoptr i64 %17 to i16*, !insn.addr !508
  %19 = load i16, i16* %18, align 2, !insn.addr !508
  %20 = icmp eq i16 %19, 0, !insn.addr !508
  %21 = icmp eq i1 %20, false, !insn.addr !509
  store i64 %15, i64* %r8.0.reg2mem, !insn.addr !509
  br i1 %21, label %dec_label_pc_1400021e0, label %dec_label_pc_1400021ea, !insn.addr !509

dec_label_pc_1400021ea:                           ; preds = %dec_label_pc_1400021e0
  %22 = sext i32 %1 to i64, !insn.addr !497
  %23 = trunc i64 %15 to i32, !insn.addr !510
  %24 = call i64 @function_140005740(i64* %arg1, i64* nonnull %stack_var_-552, i32 %23), !insn.addr !510
  call void @__security_check_cookie(i64 %22), !insn.addr !511
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !512

; uselistorder directives
  uselistorder i64 %15, { 2, 0, 1 }
  uselistorder i64* %stack_var_-552, { 0, 3, 1, 2 }
  uselistorder i64 %0, { 1, 0 }
  uselistorder i64* %r8.0.reg2mem, { 1, 0, 2 }
}

define i64 @function_140002220(i64* %arg1, i64* %arg2) local_unnamed_addr {
dec_label_pc_140002220:
  %rdx.1.reg2mem = alloca i64, !insn.addr !513
  %rcx.3.reg2mem = alloca i64, !insn.addr !513
  %rdx.0.reg2mem = alloca i64, !insn.addr !513
  %rcx.2.reg2mem = alloca i64, !insn.addr !513
  %rsi.0.reg2mem = alloca i64, !insn.addr !513
  %rcx.1.reg2mem = alloca i64, !insn.addr !513
  %rcx.0.reg2mem = alloca i64, !insn.addr !513
  %0 = ptrtoint i64* %arg1 to i64
  %stack_var_-160 = alloca i64, align 8
  %stack_var_-136 = alloca i32, align 4
  %stack_var_-132 = alloca i64, align 8
  %stack_var_-168 = alloca i32, align 4
  store i32 0, i32* %stack_var_-168, align 4, !insn.addr !514
  %1 = call i64* @memset(i64* nonnull %stack_var_-132, i32 0, i32 100), !insn.addr !515
  store i32 104, i32* %stack_var_-136, align 4, !insn.addr !516
  store i64 0, i64* %stack_var_-160, align 8, !insn.addr !517
  %2 = bitcast i64* %arg1 to i16*, !insn.addr !518
  %3 = bitcast i64* %arg2 to i16*, !insn.addr !518
  %4 = bitcast i32* %stack_var_-136 to %_STARTUPINFOW*, !insn.addr !518
  %5 = bitcast i64* %stack_var_-160 to %_PROCESS_INFORMATION*, !insn.addr !518
  %6 = call i1 @CreateProcessW(i16* %2, i16* %3, %_SECURITY_ATTRIBUTES* null, %_SECURITY_ATTRIBUTES* null, i1 false, i32 0, i64* null, i16* null, %_STARTUPINFOW* nonnull %4, %_PROCESS_INFORMATION* nonnull %5), !insn.addr !518
  %7 = icmp eq i1 %6, false, !insn.addr !519
  store i64 %0, i64* %rcx.0.reg2mem, !insn.addr !520
  br i1 %7, label %dec_label_pc_1400022e8, label %dec_label_pc_1400022b8, !insn.addr !520

dec_label_pc_1400022b8:                           ; preds = %dec_label_pc_140002220
  %8 = load i64, i64* %stack_var_-160, align 8, !insn.addr !521
  %9 = inttoptr i64 %8 to i64*, !insn.addr !522
  %10 = call i1 @GetExitCodeProcess(i64* %9, i32* nonnull %stack_var_-168), !insn.addr !522
  %11 = icmp eq i1 %10, false, !insn.addr !523
  store i64 %8, i64* %rcx.0.reg2mem, !insn.addr !524
  br i1 %11, label %dec_label_pc_1400022e8, label %dec_label_pc_1400022cc, !insn.addr !524

dec_label_pc_1400022cc:                           ; preds = %dec_label_pc_1400022b8
  %12 = load i64, i64* %stack_var_-160, align 8, !insn.addr !525
  %13 = inttoptr i64 %12 to i64*, !insn.addr !526
  %14 = call i1 @CloseHandle(i64* %13), !insn.addr !526
  %15 = call i1 @CloseHandle(i64* null), !insn.addr !527
  %16 = load i32, i32* %stack_var_-168, align 4, !insn.addr !528
  %17 = zext i32 %16 to i64, !insn.addr !528
  store i64 0, i64* %rcx.1.reg2mem, !insn.addr !529
  store i64 %17, i64* %rsi.0.reg2mem, !insn.addr !529
  br label %dec_label_pc_1400022f1, !insn.addr !529

dec_label_pc_1400022e8:                           ; preds = %dec_label_pc_1400022b8, %dec_label_pc_140002220
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  store i32 -1, i32* %stack_var_-168, align 4, !insn.addr !530
  store i64 %rcx.0.reload, i64* %rcx.1.reg2mem, !insn.addr !530
  store i64 4294967295, i64* %rsi.0.reg2mem, !insn.addr !530
  br label %dec_label_pc_1400022f1, !insn.addr !530

dec_label_pc_1400022f1:                           ; preds = %dec_label_pc_1400022e8, %dec_label_pc_1400022cc
  %rsi.0.reload = load i64, i64* %rsi.0.reg2mem
  %18 = add i64 %0, 24, !insn.addr !531
  %19 = inttoptr i64 %18 to i64*, !insn.addr !531
  %20 = load i64, i64* %19, align 8, !insn.addr !531
  %21 = icmp ult i64 %20, 8, !insn.addr !532
  br i1 %21, label %dec_label_pc_14000232c, label %dec_label_pc_1400022fb, !insn.addr !533

dec_label_pc_1400022fb:                           ; preds = %dec_label_pc_1400022f1
  %rcx.1.reload = load i64, i64* %rcx.1.reg2mem
  %22 = mul i64 %20, 2, !insn.addr !534
  %23 = add i64 %22, 2, !insn.addr !534
  %24 = icmp ult i64 %23, 4096, !insn.addr !535
  store i64 %rcx.1.reload, i64* %rcx.2.reg2mem, !insn.addr !536
  store i64 %23, i64* %rdx.0.reg2mem, !insn.addr !536
  br i1 %24, label %dec_label_pc_140002327, label %dec_label_pc_14000230f, !insn.addr !536

dec_label_pc_14000230f:                           ; preds = %dec_label_pc_1400022fb
  %25 = add i64 %rcx.1.reload, -8
  %26 = inttoptr i64 %25 to i64*, !insn.addr !537
  %27 = load i64, i64* %26, align 8, !insn.addr !537
  %28 = sub i64 %25, %27, !insn.addr !538
  %29 = icmp ult i64 %28, 32
  br i1 %29, label %dec_label_pc_140002324, label %dec_label_pc_14000239a, !insn.addr !539

dec_label_pc_140002324:                           ; preds = %dec_label_pc_14000230f
  %30 = add i64 %22, 41, !insn.addr !540
  store i64 %27, i64* %rcx.2.reg2mem, !insn.addr !541
  store i64 %30, i64* %rdx.0.reg2mem, !insn.addr !541
  br label %dec_label_pc_140002327, !insn.addr !541

dec_label_pc_140002327:                           ; preds = %dec_label_pc_140002324, %dec_label_pc_1400022fb
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rcx.2.reload = load i64, i64* %rcx.2.reg2mem
  %31 = call i64 @function_1400065d0(i64 %rcx.2.reload, i64 %rdx.0.reload), !insn.addr !542
  br label %dec_label_pc_14000232c, !insn.addr !542

dec_label_pc_14000232c:                           ; preds = %dec_label_pc_140002327, %dec_label_pc_1400022f1
  %32 = ptrtoint i64* %arg2 to i64
  %33 = add i64 %0, 16, !insn.addr !543
  %34 = inttoptr i64 %33 to i64*, !insn.addr !543
  store i64 0, i64* %34, align 8, !insn.addr !543
  store i64 7, i64* %19, align 8, !insn.addr !544
  store i16 0, i16* %2, align 2, !insn.addr !545
  %35 = add i64 %32, 24, !insn.addr !546
  %36 = inttoptr i64 %35 to i64*, !insn.addr !546
  %37 = load i64, i64* %36, align 8, !insn.addr !546
  %38 = icmp ult i64 %37, 8, !insn.addr !547
  br i1 %38, label %dec_label_pc_140002376, label %dec_label_pc_140002345, !insn.addr !548

dec_label_pc_140002345:                           ; preds = %dec_label_pc_14000232c
  %39 = mul i64 %37, 2, !insn.addr !549
  %40 = add i64 %39, 2, !insn.addr !549
  %41 = icmp ult i64 %40, 4096, !insn.addr !550
  store i64 %37, i64* %rcx.3.reg2mem, !insn.addr !551
  store i64 %40, i64* %rdx.1.reg2mem, !insn.addr !551
  br i1 %41, label %dec_label_pc_140002371, label %dec_label_pc_140002359, !insn.addr !551

dec_label_pc_140002359:                           ; preds = %dec_label_pc_140002345
  %42 = add i64 %37, -8
  %43 = inttoptr i64 %42 to i64*, !insn.addr !552
  %44 = load i64, i64* %43, align 8, !insn.addr !552
  %45 = sub i64 %42, %44, !insn.addr !553
  %46 = icmp ult i64 %45, 32
  br i1 %46, label %dec_label_pc_14000236e, label %dec_label_pc_14000239a, !insn.addr !554

dec_label_pc_14000236e:                           ; preds = %dec_label_pc_140002359
  %47 = add i64 %39, 41, !insn.addr !555
  store i64 %44, i64* %rcx.3.reg2mem, !insn.addr !556
  store i64 %47, i64* %rdx.1.reg2mem, !insn.addr !556
  br label %dec_label_pc_140002371, !insn.addr !556

dec_label_pc_140002371:                           ; preds = %dec_label_pc_14000236e, %dec_label_pc_140002345
  %rdx.1.reload = load i64, i64* %rdx.1.reg2mem
  %rcx.3.reload = load i64, i64* %rcx.3.reg2mem
  %48 = call i64 @function_1400065d0(i64 %rcx.3.reload, i64 %rdx.1.reload), !insn.addr !557
  br label %dec_label_pc_140002376, !insn.addr !557

dec_label_pc_140002376:                           ; preds = %dec_label_pc_140002371, %dec_label_pc_14000232c
  %49 = add i64 %32, 16, !insn.addr !558
  %50 = inttoptr i64 %49 to i64*, !insn.addr !558
  store i64 0, i64* %50, align 8, !insn.addr !558
  store i64 7, i64* %36, align 8, !insn.addr !559
  store i16 0, i16* %3, align 2, !insn.addr !560
  ret i64 %rsi.0.reload, !insn.addr !561

dec_label_pc_14000239a:                           ; preds = %dec_label_pc_140002359, %dec_label_pc_14000230f
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !562
  %51 = call i64 @__asm_int3(), !insn.addr !563
  %52 = call i64 @__asm_int3(), !insn.addr !564
  %53 = call i64 @__asm_int3(), !insn.addr !565
  %54 = call i64 @__asm_int3(), !insn.addr !566
  %55 = call i64 @__asm_int3(), !insn.addr !567
  %56 = call i64 @__asm_int3(), !insn.addr !568
  %57 = call i64 @__asm_int3(), !insn.addr !569
  %58 = call i64 @__asm_int3(), !insn.addr !570
  %59 = call i64 @__asm_int3(), !insn.addr !571
  %60 = call i64 @__asm_int3(), !insn.addr !572
  %61 = call i64 @__asm_int3(), !insn.addr !573
  %62 = call i64 @__asm_int3(), !insn.addr !574
  %63 = call i64 @__asm_int3(), !insn.addr !575
  %64 = call i64 @__asm_int3(), !insn.addr !576
  %65 = call i64 @__asm_int3(), !insn.addr !577
  %66 = call i64 @__asm_int3(), !insn.addr !578
  ret i64 %66, !insn.addr !578

; uselistorder directives
  uselistorder i64 %39, { 1, 0 }
  uselistorder i64 %37, { 2, 0, 1, 3 }
  uselistorder i64 %22, { 1, 0 }
  uselistorder i64 %rcx.1.reload, { 1, 0 }
  uselistorder i32* %stack_var_-168, { 1, 2, 0, 3 }
  uselistorder i64* %stack_var_-160, { 1, 2, 0, 3 }
  uselistorder i64 %0, { 1, 2, 0 }
  uselistorder i64* %rcx.1.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rsi.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %arg2, { 1, 0 }
}

define i64 @function_1400023b0(i16* %arg1, i64* %arg2, i16* %arg3) local_unnamed_addr {
dec_label_pc_1400023b0:
  %0 = alloca i128
  %1 = alloca i64
  %rdx.19.reg2mem = alloca i64, !insn.addr !579
  %rcx.18.reg2mem = alloca i64, !insn.addr !579
  %rdx.18.reg2mem = alloca i64, !insn.addr !579
  %rcx.17.reg2mem = alloca i64, !insn.addr !579
  %rdx.17.reg2mem = alloca i64, !insn.addr !579
  %rcx.16.reg2mem = alloca i64, !insn.addr !579
  %rdx.15.reg2mem = alloca i64, !insn.addr !579
  %rcx.15.reg2mem = alloca i64, !insn.addr !579
  %rdx.14.reg2mem = alloca i64, !insn.addr !579
  %rcx.14.reg2mem = alloca i64, !insn.addr !579
  %rdx.13.reg2mem = alloca i64, !insn.addr !579
  %rcx.13.reg2mem = alloca i64, !insn.addr !579
  %rdx.12.reg2mem = alloca i64, !insn.addr !579
  %rcx.12.reg2mem = alloca i64, !insn.addr !579
  %rdx.11.reg2mem = alloca i64, !insn.addr !579
  %rcx.11.reg2mem = alloca i64, !insn.addr !579
  %rdx.10.reg2mem = alloca i64, !insn.addr !579
  %rcx.10.reg2mem = alloca i64, !insn.addr !579
  %rdx.9.reg2mem = alloca i64, !insn.addr !579
  %rcx.9.reg2mem = alloca i64, !insn.addr !579
  %rdx.8.reg2mem = alloca i64, !insn.addr !579
  %rcx.8.reg2mem = alloca i64, !insn.addr !579
  %rdx.7.reg2mem = alloca i64, !insn.addr !579
  %rcx.7.reg2mem = alloca i64, !insn.addr !579
  %rdx.6.reg2mem = alloca i64, !insn.addr !579
  %rcx.6.reg2mem = alloca i64, !insn.addr !579
  %storemerge.reg2mem = alloca i64, !insn.addr !579
  %storemerge11.reg2mem = alloca i64, !insn.addr !579
  %rsi.0.reg2mem = alloca i64, !insn.addr !579
  %rax.0.reg2mem = alloca i64, !insn.addr !579
  %storemerge12.reg2mem = alloca i64, !insn.addr !579
  %rbx.1.reg2mem = alloca i64, !insn.addr !579
  %.pre-phi.reg2mem = alloca i64, !insn.addr !579
  %.pre-phi37.reg2mem = alloca i64*, !insn.addr !579
  %.pre-phi41.reg2mem = alloca i64*, !insn.addr !579
  %rdi.1.reg2mem = alloca i64, !insn.addr !579
  %r14.0.reg2mem = alloca i64, !insn.addr !579
  %xmm0.0.reg2mem = alloca i128, !insn.addr !579
  %stack_var_-304.1.reg2mem = alloca i64, !insn.addr !579
  %stack_var_-176.0.reg2mem = alloca i128, !insn.addr !579
  %stack_var_-296.1.reg2mem = alloca i64, !insn.addr !579
  %stack_var_-200.1.reg2mem = alloca i64, !insn.addr !579
  %rdx.5.reg2mem = alloca i64, !insn.addr !579
  %rcx.5.reg2mem = alloca i64, !insn.addr !579
  %rdx.4.reg2mem = alloca i64, !insn.addr !579
  %rcx.4.reg2mem = alloca i64, !insn.addr !579
  %rdx.3.reg2mem = alloca i64, !insn.addr !579
  %rcx.3.reg2mem = alloca i64, !insn.addr !579
  %rdx.2.reg2mem = alloca i64, !insn.addr !579
  %rcx.2.reg2mem = alloca i64, !insn.addr !579
  %rdx.1.reg2mem = alloca i64, !insn.addr !579
  %rcx.1.reg2mem = alloca i64, !insn.addr !579
  %rdx.0.reg2mem = alloca i64, !insn.addr !579
  %rcx.0.reg2mem = alloca i64, !insn.addr !579
  %storemerge13.reg2mem = alloca i64, !insn.addr !579
  %storemerge14.reg2mem = alloca i64, !insn.addr !579
  %storemerge15.reg2mem = alloca i64, !insn.addr !579
  %rbx.0.reg2mem = alloca i64, !insn.addr !579
  %.pre-phi43.reg2mem = alloca i64, !insn.addr !579
  %.pre-phi45.reg2mem = alloca i64*, !insn.addr !579
  %.pre-phi49.reg2mem = alloca i64*, !insn.addr !579
  %rdi.0.reg2mem = alloca i64, !insn.addr !579
  %stack_var_-304.0.reg2mem = alloca i64, !insn.addr !579
  %stack_var_-296.0.reg2mem = alloca i64, !insn.addr !579
  %stack_var_-200.0.reg2mem = alloca i64, !insn.addr !579
  %.off0.reg2mem = alloca i64, !insn.addr !579
  %2 = ptrtoint i16* %arg3 to i64
  %3 = ptrtoint i64* %arg2 to i64
  %4 = load i64, i64* %1
  %5 = load i64, i64* %1
  %6 = load i64, i64* %1
  %stack_var_-128 = alloca i64, align 8
  %stack_var_-96 = alloca i64, align 8
  %7 = load i64, i64* %1
  %8 = load i64, i64* %1
  %9 = load i64, i64* %1
  %stack_var_-448 = alloca i128, align 8
  %stack_var_-352 = alloca i128, align 8
  %10 = load i64, i64* %1
  %stack_var_-416 = alloca i128, align 8
  %11 = load i64, i64* %1
  %stack_var_-384 = alloca i128, align 8
  %stack_var_-288 = alloca i128, align 8
  %stack_var_-192 = alloca i128, align 8
  %12 = load i64, i64* %1
  %stack_var_-256 = alloca i128, align 8
  %13 = load i128, i128* %0
  %stack_var_-224 = alloca i128, align 8
  %stack_var_-320 = alloca i128, align 8
  %stack_var_-160 = alloca i128, align 8
  %14 = load i64, i64* %1
  %15 = load i32, i32* @global_var_14000c010, align 4, !insn.addr !580
  %16 = load i128, i128* @global_var_140008dd0, align 8, !insn.addr !581
  %17 = call i128 @__asm_movdqa(i128 %16), !insn.addr !581
  %18 = call i64 @__asm_movdqu(i128 %17), !insn.addr !582
  store i128 0, i128* %stack_var_-160, align 8, !insn.addr !583
  %19 = add i64 %2, 16, !insn.addr !584
  %20 = inttoptr i64 %19 to i64*, !insn.addr !584
  %21 = load i64, i64* %20, align 8, !insn.addr !584
  %22 = icmp eq i64 %21, 0, !insn.addr !584
  %23 = icmp eq i1 %22, false, !insn.addr !585
  store i128 %17, i128* %xmm0.0.reg2mem, !insn.addr !585
  br i1 %23, label %dec_label_pc_14000299d, label %dec_label_pc_140002409, !insn.addr !585

dec_label_pc_140002409:                           ; preds = %dec_label_pc_1400023b0
  %24 = load i64, i64* @global_var_14000c158, align 8, !insn.addr !586
  %25 = icmp eq i64 %24, 0, !insn.addr !586
  %26 = icmp eq i1 %25, false, !insn.addr !587
  %extract.t = trunc i128 %13 to i64
  store i64 %extract.t, i64* %.off0.reg2mem, !insn.addr !587
  br i1 %26, label %dec_label_pc_140002476, label %dec_label_pc_140002412, !insn.addr !587

dec_label_pc_140002412:                           ; preds = %dec_label_pc_140002409
  store i128 0, i128* %stack_var_-320, align 8, !insn.addr !588
  %27 = bitcast i128* %stack_var_-320 to i64*, !insn.addr !589
  %28 = call i64 @function_140005740(i64* nonnull %27, i64* bitcast ([7 x i16]* @global_var_140008a20 to i64*), i32 6), !insn.addr !589
  store i128 0, i128* %stack_var_-224, align 8, !insn.addr !590
  %29 = bitcast i128* %stack_var_-224 to i64*, !insn.addr !591
  %30 = call i64 @function_140005740(i64* nonnull %29, i64* bitcast ([28 x i16]* @global_var_140008a30 to i64*), i32 27), !insn.addr !591
  %31 = call i64 @function_140001ed0(), !insn.addr !592
  %.pre = load i128, i128* %stack_var_-256, align 8
  %extract.t50 = trunc i128 %.pre to i64
  store i64 %extract.t50, i64* %.off0.reg2mem, !insn.addr !592
  store i64 7, i64* %stack_var_-200.0.reg2mem, !insn.addr !592
  store i64 7, i64* %stack_var_-296.0.reg2mem, !insn.addr !592
  store i64 0, i64* %stack_var_-304.0.reg2mem, !insn.addr !592
  br label %dec_label_pc_140002476, !insn.addr !592

dec_label_pc_140002476:                           ; preds = %dec_label_pc_140002412, %dec_label_pc_140002409
  %stack_var_-304.0.reload = load i64, i64* %stack_var_-304.0.reg2mem
  %stack_var_-296.0.reload = load i64, i64* %stack_var_-296.0.reg2mem
  %stack_var_-200.0.reload = load i64, i64* %stack_var_-200.0.reg2mem
  %.off0.reload = load i64, i64* %.off0.reg2mem
  %32 = bitcast i128* %stack_var_-192 to i64*, !insn.addr !593
  %33 = call i64 @function_1400060a0(i64* nonnull %32), !insn.addr !593
  %34 = add i64 %33, 16
  %35 = inttoptr i64 %34 to i64*
  %36 = load i64, i64* %35, align 8, !insn.addr !594
  %37 = add i64 %33, 24
  %38 = inttoptr i64 %37 to i64*
  %39 = load i64, i64* %38, align 8, !insn.addr !595
  %40 = sub i64 %39, %36, !insn.addr !596
  %41 = icmp ult i64 %40, 12, !insn.addr !597
  br i1 %41, label %dec_label_pc_1400024e9, label %dec_label_pc_1400024b8, !insn.addr !598

dec_label_pc_1400024b8:                           ; preds = %dec_label_pc_140002476
  %42 = add i64 %36, 12, !insn.addr !599
  store i64 %42, i64* %35, align 8, !insn.addr !600
  %43 = icmp ult i64 %39, 8, !insn.addr !601
  store i64 %33, i64* %rdi.0.reg2mem, !insn.addr !602
  br i1 %43, label %dec_label_pc_1400024cc, label %dec_label_pc_1400024c9, !insn.addr !602

dec_label_pc_1400024c9:                           ; preds = %dec_label_pc_1400024b8
  %44 = inttoptr i64 %33 to i64*, !insn.addr !603
  %45 = load i64, i64* %44, align 8, !insn.addr !603
  store i64 %45, i64* %rdi.0.reg2mem, !insn.addr !603
  br label %dec_label_pc_1400024cc, !insn.addr !603

dec_label_pc_1400024cc:                           ; preds = %dec_label_pc_1400024c9, %dec_label_pc_1400024b8
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %46 = mul i64 %36, 2, !insn.addr !604
  %47 = add i64 %rdi.0.reload, %46, !insn.addr !604
  %48 = inttoptr i64 %47 to i64*, !insn.addr !605
  %49 = call i64* @memmove(i64* %48, i64* bitcast ([13 x i16]* @global_var_140008a80 to i64*), i32 24), !insn.addr !605
  %50 = mul i64 %42, 2, !insn.addr !606
  %51 = add i64 %rdi.0.reload, %50, !insn.addr !606
  %52 = inttoptr i64 %51 to i16*, !insn.addr !606
  store i16 0, i16* %52, align 2, !insn.addr !606
  store i64* %38, i64** %.pre-phi49.reg2mem, !insn.addr !607
  store i64* %35, i64** %.pre-phi45.reg2mem, !insn.addr !607
  store i64 %34, i64* %.pre-phi43.reg2mem, !insn.addr !607
  store i64 %33, i64* %rbx.0.reg2mem, !insn.addr !607
  br label %dec_label_pc_140002509, !insn.addr !607

dec_label_pc_1400024e9:                           ; preds = %dec_label_pc_140002476
  %53 = call i64 @function_1400061b0(i64 %33, i64 12), !insn.addr !608
  %.pre42 = add i64 %53, 16, !insn.addr !609
  %.pre44 = inttoptr i64 %.pre42 to i64*, !insn.addr !610
  %.pre46 = add i64 %53, 24, !insn.addr !611
  %.pre48 = inttoptr i64 %.pre46 to i64*, !insn.addr !611
  store i64* %.pre48, i64** %.pre-phi49.reg2mem, !insn.addr !612
  store i64* %.pre44, i64** %.pre-phi45.reg2mem, !insn.addr !612
  store i64 %.pre42, i64* %.pre-phi43.reg2mem, !insn.addr !612
  store i64 %53, i64* %rbx.0.reg2mem, !insn.addr !612
  br label %dec_label_pc_140002509, !insn.addr !612

dec_label_pc_140002509:                           ; preds = %dec_label_pc_1400024e9, %dec_label_pc_1400024cc
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %.pre-phi43.reload = load i64, i64* %.pre-phi43.reg2mem
  %.pre-phi45.reload = load i64*, i64** %.pre-phi45.reg2mem
  %.pre-phi49.reload = load i64*, i64** %.pre-phi49.reg2mem
  %54 = call i128 @__asm_xorps(i128 %17, i128 %17), !insn.addr !613
  %55 = call i64 @__asm_movdqu(i128 %54), !insn.addr !614
  %56 = sext i64 %55 to i128, !insn.addr !614
  %57 = inttoptr i64 %rbx.0.reload to i128*, !insn.addr !615
  %58 = load i128, i128* %57, align 8, !insn.addr !615
  %59 = call i128 @__asm_movups(i128 %58), !insn.addr !615
  %60 = load i128, i128* %stack_var_-288, align 8, !insn.addr !616
  call void @__asm_movups.2(i128 %60, i128 %59), !insn.addr !616
  %61 = inttoptr i64 %.pre-phi43.reload to i128*, !insn.addr !609
  %62 = load i128, i128* %61, align 8, !insn.addr !609
  %63 = call i128 @__asm_movups(i128 %62), !insn.addr !609
  call void @__asm_movups.2(i128 %56, i128 %63), !insn.addr !617
  store i64 0, i64* %.pre-phi45.reload, align 8, !insn.addr !610
  store i64 7, i64* %.pre-phi49.reload, align 8, !insn.addr !611
  %64 = inttoptr i64 %rbx.0.reload to i16*, !insn.addr !618
  store i16 0, i16* %64, align 2, !insn.addr !618
  %65 = call i64 @function_140005bd0(i128* nonnull %stack_var_-288, i64 %3), !insn.addr !619
  %66 = call i128 @__asm_xorps(i128 %59, i128 %59), !insn.addr !620
  %67 = call i64 @__asm_movdqu(i128 %66), !insn.addr !621
  %68 = sext i64 %67 to i128, !insn.addr !621
  %69 = inttoptr i64 %65 to i128*, !insn.addr !622
  %70 = load i128, i128* %69, align 8, !insn.addr !622
  %71 = call i128 @__asm_movups(i128 %70), !insn.addr !622
  %72 = load i128, i128* %stack_var_-384, align 8, !insn.addr !623
  call void @__asm_movups.2(i128 %72, i128 %71), !insn.addr !623
  %73 = add i64 %65, 16, !insn.addr !624
  %74 = inttoptr i64 %73 to i128*, !insn.addr !624
  %75 = load i128, i128* %74, align 8, !insn.addr !624
  %76 = call i128 @__asm_movups(i128 %75), !insn.addr !624
  call void @__asm_movups.2(i128 %68, i128 %76), !insn.addr !625
  %77 = inttoptr i64 %73 to i64*, !insn.addr !626
  store i64 0, i64* %77, align 8, !insn.addr !626
  %78 = add i64 %65, 24, !insn.addr !627
  %79 = inttoptr i64 %78 to i64*, !insn.addr !627
  store i64 7, i64* %79, align 8, !insn.addr !627
  %80 = inttoptr i64 %65 to i16*, !insn.addr !628
  store i16 0, i16* %80, align 2, !insn.addr !628
  %81 = icmp eq i64 %11, %67, !insn.addr !629
  %82 = ptrtoint i128* %stack_var_-384 to i64
  br i1 %81, label %dec_label_pc_1400025ad, label %dec_label_pc_140002577, !insn.addr !630

dec_label_pc_140002577:                           ; preds = %dec_label_pc_140002509
  %83 = icmp ult i64 %11, 8, !insn.addr !631
  %84 = icmp eq i1 %83, false, !insn.addr !632
  %85 = load i128, i128* %stack_var_-384, align 8, !insn.addr !632
  %86 = trunc i128 %85 to i64, !insn.addr !632
  %87 = select i1 %84, i64 %86, i64 %82, !insn.addr !632
  %88 = mul i64 %67, 2, !insn.addr !633
  %89 = add i64 %87, %88
  %90 = inttoptr i64 %89 to i64*, !insn.addr !634
  %91 = call i64* @memmove(i64* %90, i64* nonnull @global_var_140008a68, i32 2), !insn.addr !634
  %92 = add i64 %89, 2, !insn.addr !635
  %93 = inttoptr i64 %92 to i16*, !insn.addr !635
  store i16 0, i16* %93, align 2, !insn.addr !635
  store i64 %82, i64* %storemerge15.reg2mem, !insn.addr !636
  br label %dec_label_pc_1400025cb, !insn.addr !636

dec_label_pc_1400025ad:                           ; preds = %dec_label_pc_140002509
  %94 = call i64 @function_1400061b0(i64 %82, i64 1), !insn.addr !637
  store i64 %94, i64* %storemerge15.reg2mem, !insn.addr !637
  br label %dec_label_pc_1400025cb, !insn.addr !637

dec_label_pc_1400025cb:                           ; preds = %dec_label_pc_1400025ad, %dec_label_pc_140002577
  %storemerge15.reload = load i64, i64* %storemerge15.reg2mem
  %95 = call i128 @__asm_xorps(i128 %71, i128 %71), !insn.addr !638
  %96 = call i64 @__asm_movdqu(i128 %95), !insn.addr !639
  %97 = sext i64 %96 to i128, !insn.addr !639
  %98 = inttoptr i64 %storemerge15.reload to i128*, !insn.addr !640
  %99 = load i128, i128* %98, align 8, !insn.addr !640
  %100 = call i128 @__asm_movups(i128 %99), !insn.addr !640
  %101 = load i128, i128* %stack_var_-416, align 8, !insn.addr !641
  call void @__asm_movups.2(i128 %101, i128 %100), !insn.addr !641
  %102 = add i64 %storemerge15.reload, 16, !insn.addr !642
  %103 = inttoptr i64 %102 to i128*, !insn.addr !642
  %104 = load i128, i128* %103, align 8, !insn.addr !642
  %105 = call i128 @__asm_movups(i128 %104), !insn.addr !642
  call void @__asm_movups.2(i128 %97, i128 %105), !insn.addr !643
  %106 = inttoptr i64 %102 to i64*, !insn.addr !644
  store i64 0, i64* %106, align 8, !insn.addr !644
  %107 = add i64 %storemerge15.reload, 24, !insn.addr !645
  %108 = inttoptr i64 %107 to i64*, !insn.addr !645
  store i64 7, i64* %108, align 8, !insn.addr !645
  %109 = inttoptr i64 %storemerge15.reload to i16*, !insn.addr !646
  store i16 0, i16* %109, align 2, !insn.addr !646
  %110 = sub i64 %10, %96, !insn.addr !647
  %111 = icmp ult i64 %110, 6, !insn.addr !648
  %112 = ptrtoint i128* %stack_var_-416 to i64
  br i1 %111, label %dec_label_pc_140002644, label %dec_label_pc_14000260a, !insn.addr !649

dec_label_pc_14000260a:                           ; preds = %dec_label_pc_1400025cb
  %113 = icmp ult i64 %10, 8, !insn.addr !650
  %114 = icmp eq i1 %113, false, !insn.addr !651
  %115 = load i128, i128* %stack_var_-416, align 8, !insn.addr !651
  %116 = trunc i128 %115 to i64, !insn.addr !651
  %117 = select i1 %114, i64 %116, i64 %112, !insn.addr !651
  %118 = mul i64 %96, 2, !insn.addr !652
  %119 = add i64 %117, %118
  %120 = inttoptr i64 %119 to i64*, !insn.addr !653
  %121 = call i64* @memmove(i64* %120, i64* bitcast ([7 x i16]* @global_var_140008a70 to i64*), i32 12), !insn.addr !653
  %122 = add i64 %119, 12, !insn.addr !654
  %123 = inttoptr i64 %122 to i16*, !insn.addr !654
  store i16 0, i16* %123, align 2, !insn.addr !654
  store i64 %112, i64* %storemerge14.reg2mem, !insn.addr !655
  br label %dec_label_pc_140002663, !insn.addr !655

dec_label_pc_140002644:                           ; preds = %dec_label_pc_1400025cb
  %124 = call i64 @function_1400061b0(i64 %112, i64 6), !insn.addr !656
  store i64 %124, i64* %storemerge14.reg2mem, !insn.addr !656
  br label %dec_label_pc_140002663, !insn.addr !656

dec_label_pc_140002663:                           ; preds = %dec_label_pc_140002644, %dec_label_pc_14000260a
  %125 = ptrtoint i128* %stack_var_-256 to i64, !insn.addr !657
  %126 = icmp ult i64 %12, 8, !insn.addr !658
  %127 = icmp eq i1 %126, false, !insn.addr !659
  %128 = select i1 %127, i64 %.off0.reload, i64 %125, !insn.addr !659
  %storemerge14.reload = load i64, i64* %storemerge14.reg2mem
  %129 = call i128 @__asm_xorps(i128 %100, i128 %100), !insn.addr !660
  %130 = call i64 @__asm_movdqu(i128 %129), !insn.addr !661
  %131 = sext i64 %130 to i128, !insn.addr !661
  %132 = inttoptr i64 %storemerge14.reload to i128*, !insn.addr !662
  %133 = load i128, i128* %132, align 8, !insn.addr !662
  %134 = call i128 @__asm_movups(i128 %133), !insn.addr !662
  %135 = load i128, i128* %stack_var_-352, align 8, !insn.addr !663
  call void @__asm_movups.2(i128 %135, i128 %134), !insn.addr !663
  %136 = add i64 %storemerge14.reload, 16, !insn.addr !664
  %137 = inttoptr i64 %136 to i128*, !insn.addr !664
  %138 = load i128, i128* %137, align 8, !insn.addr !664
  %139 = call i128 @__asm_movups(i128 %138), !insn.addr !664
  call void @__asm_movups.2(i128 %131, i128 %139), !insn.addr !665
  %140 = inttoptr i64 %136 to i64*, !insn.addr !666
  store i64 0, i64* %140, align 8, !insn.addr !666
  %141 = add i64 %storemerge14.reload, 24, !insn.addr !667
  %142 = inttoptr i64 %141 to i64*, !insn.addr !667
  store i64 7, i64* %142, align 8, !insn.addr !667
  %143 = inttoptr i64 %storemerge14.reload to i16*, !insn.addr !668
  store i16 0, i16* %143, align 2, !insn.addr !668
  %144 = call i64 @function_140006380(i128* nonnull %stack_var_-352, i64 %128), !insn.addr !669
  %145 = call i128 @__asm_xorps(i128 %134, i128 %134), !insn.addr !670
  %146 = call i64 @__asm_movdqu(i128 %145), !insn.addr !671
  %147 = sext i64 %146 to i128, !insn.addr !671
  %148 = inttoptr i64 %144 to i128*, !insn.addr !672
  %149 = load i128, i128* %148, align 8, !insn.addr !672
  %150 = call i128 @__asm_movups(i128 %149), !insn.addr !672
  %151 = load i128, i128* %stack_var_-448, align 8, !insn.addr !673
  call void @__asm_movups.2(i128 %151, i128 %150), !insn.addr !673
  %152 = add i64 %144, 16, !insn.addr !674
  %153 = inttoptr i64 %152 to i128*, !insn.addr !674
  %154 = load i128, i128* %153, align 8, !insn.addr !674
  %155 = call i128 @__asm_movups(i128 %154), !insn.addr !674
  call void @__asm_movups.2(i128 %147, i128 %155), !insn.addr !675
  %156 = inttoptr i64 %152 to i64*, !insn.addr !676
  store i64 0, i64* %156, align 8, !insn.addr !676
  %157 = add i64 %144, 24, !insn.addr !677
  %158 = inttoptr i64 %157 to i64*, !insn.addr !677
  store i64 7, i64* %158, align 8, !insn.addr !677
  %159 = inttoptr i64 %144 to i16*, !insn.addr !678
  store i16 0, i16* %159, align 2, !insn.addr !678
  %160 = icmp eq i64 %9, %146, !insn.addr !679
  %161 = ptrtoint i128* %stack_var_-448 to i64
  br i1 %160, label %dec_label_pc_140002710, label %dec_label_pc_1400026d6, !insn.addr !680

dec_label_pc_1400026d6:                           ; preds = %dec_label_pc_140002663
  %162 = icmp ult i64 %9, 8, !insn.addr !681
  %163 = icmp eq i1 %162, false, !insn.addr !682
  %164 = load i128, i128* %stack_var_-448, align 8, !insn.addr !682
  %165 = trunc i128 %164 to i64, !insn.addr !682
  %166 = select i1 %163, i64 %165, i64 %161, !insn.addr !682
  %167 = mul i64 %146, 2, !insn.addr !683
  %168 = add i64 %166, %167
  %169 = inttoptr i64 %168 to i64*, !insn.addr !684
  %170 = call i64* @memmove(i64* %169, i64* nonnull @global_var_140008a68, i32 2), !insn.addr !684
  %171 = add i64 %168, 2, !insn.addr !685
  %172 = inttoptr i64 %171 to i16*, !insn.addr !685
  store i16 0, i16* %172, align 2, !insn.addr !685
  store i64 %161, i64* %storemerge13.reg2mem, !insn.addr !686
  br label %dec_label_pc_14000272f, !insn.addr !686

dec_label_pc_140002710:                           ; preds = %dec_label_pc_140002663
  %173 = call i64 @function_1400061b0(i64 %161, i64 1), !insn.addr !687
  store i64 %173, i64* %storemerge13.reg2mem, !insn.addr !687
  br label %dec_label_pc_14000272f, !insn.addr !687

dec_label_pc_14000272f:                           ; preds = %dec_label_pc_140002710, %dec_label_pc_1400026d6
  %174 = sext i64 %18 to i128, !insn.addr !582
  %storemerge13.reload = load i64, i64* %storemerge13.reg2mem
  %175 = inttoptr i64 %storemerge13.reload to i128*, !insn.addr !688
  %176 = load i128, i128* %175, align 8, !insn.addr !688
  %177 = call i128 @__asm_movups(i128 %176), !insn.addr !688
  %178 = add i64 %storemerge13.reload, 16, !insn.addr !689
  %179 = inttoptr i64 %178 to i128*, !insn.addr !689
  %180 = load i128, i128* %179, align 8, !insn.addr !689
  %181 = call i128 @__asm_movups(i128 %180), !insn.addr !689
  %182 = inttoptr i64 %178 to i64*, !insn.addr !690
  store i64 0, i64* %182, align 8, !insn.addr !690
  %183 = add i64 %storemerge13.reload, 24, !insn.addr !691
  %184 = inttoptr i64 %183 to i64*, !insn.addr !691
  store i64 7, i64* %184, align 8, !insn.addr !691
  %185 = inttoptr i64 %storemerge13.reload to i16*, !insn.addr !692
  store i16 0, i16* %185, align 2, !insn.addr !692
  call void @__asm_movups.2(i128 0, i128 %177), !insn.addr !693
  call void @__asm_movups.2(i128 %174, i128 %181), !insn.addr !694
  %186 = icmp ult i64 %9, 8, !insn.addr !695
  br i1 %186, label %dec_label_pc_140002793, label %dec_label_pc_140002759, !insn.addr !696

dec_label_pc_140002759:                           ; preds = %dec_label_pc_14000272f
  %187 = mul i64 %9, 2, !insn.addr !697
  %188 = add i64 %187, 2, !insn.addr !697
  %189 = load i128, i128* %stack_var_-448, align 8, !insn.addr !698
  %190 = trunc i128 %189 to i64, !insn.addr !698
  %191 = icmp ult i64 %188, 4096, !insn.addr !699
  store i64 %190, i64* %rcx.0.reg2mem, !insn.addr !700
  store i64 %188, i64* %rdx.0.reg2mem, !insn.addr !700
  br i1 %191, label %dec_label_pc_14000278e, label %dec_label_pc_140002772, !insn.addr !700

dec_label_pc_140002772:                           ; preds = %dec_label_pc_140002759
  %192 = add i64 %187, 41, !insn.addr !701
  %193 = add i64 %190, -8
  %194 = inttoptr i64 %193 to i64*, !insn.addr !702
  %195 = load i64, i64* %194, align 8, !insn.addr !702
  %196 = sub i64 %193, %195, !insn.addr !703
  %197 = icmp ult i64 %196, 32
  store i64 %195, i64* %rcx.0.reg2mem, !insn.addr !704
  store i64 %192, i64* %rdx.0.reg2mem, !insn.addr !704
  br i1 %197, label %dec_label_pc_14000278e, label %dec_label_pc_140002787, !insn.addr !704

dec_label_pc_140002787:                           ; preds = %dec_label_pc_140002772
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !705
  %198 = call i64 @__asm_int3(), !insn.addr !706
  store i64 %195, i64* %rcx.0.reg2mem, !insn.addr !706
  store i64 %192, i64* %rdx.0.reg2mem, !insn.addr !706
  br label %dec_label_pc_14000278e, !insn.addr !706

dec_label_pc_14000278e:                           ; preds = %dec_label_pc_140002787, %dec_label_pc_140002772, %dec_label_pc_140002759
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %199 = call i64 @function_1400065d0(i64 %rcx.0.reload, i64 %rdx.0.reload), !insn.addr !707
  br label %dec_label_pc_140002793, !insn.addr !707

dec_label_pc_140002793:                           ; preds = %dec_label_pc_14000278e, %dec_label_pc_14000272f
  %200 = call i128 @__asm_movdqa(i128 %16), !insn.addr !708
  %201 = call i64 @__asm_movdqu(i128 %200), !insn.addr !709
  store i128 0, i128* %stack_var_-448, align 8, !insn.addr !710
  %202 = icmp ult i64 %8, 8, !insn.addr !711
  br i1 %202, label %dec_label_pc_1400027ea, label %dec_label_pc_1400027b1, !insn.addr !712

dec_label_pc_1400027b1:                           ; preds = %dec_label_pc_140002793
  %203 = mul i64 %8, 2, !insn.addr !713
  %204 = add i64 %203, 2, !insn.addr !713
  %205 = load i128, i128* %stack_var_-352, align 8, !insn.addr !714
  %206 = trunc i128 %205 to i64, !insn.addr !714
  %207 = icmp ult i64 %204, 4096, !insn.addr !715
  store i64 %206, i64* %rcx.1.reg2mem, !insn.addr !716
  store i64 %204, i64* %rdx.1.reg2mem, !insn.addr !716
  br i1 %207, label %dec_label_pc_1400027e5, label %dec_label_pc_1400027c9, !insn.addr !716

dec_label_pc_1400027c9:                           ; preds = %dec_label_pc_1400027b1
  %208 = add i64 %203, 41, !insn.addr !717
  %209 = add i64 %206, -8
  %210 = inttoptr i64 %209 to i64*, !insn.addr !718
  %211 = load i64, i64* %210, align 8, !insn.addr !718
  %212 = sub i64 %209, %211, !insn.addr !719
  %213 = icmp ult i64 %212, 32
  store i64 %211, i64* %rcx.1.reg2mem, !insn.addr !720
  store i64 %208, i64* %rdx.1.reg2mem, !insn.addr !720
  br i1 %213, label %dec_label_pc_1400027e5, label %dec_label_pc_1400027de, !insn.addr !720

dec_label_pc_1400027de:                           ; preds = %dec_label_pc_1400027c9
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !721
  %214 = call i64 @__asm_int3(), !insn.addr !722
  store i64 %211, i64* %rcx.1.reg2mem, !insn.addr !722
  store i64 %208, i64* %rdx.1.reg2mem, !insn.addr !722
  br label %dec_label_pc_1400027e5, !insn.addr !722

dec_label_pc_1400027e5:                           ; preds = %dec_label_pc_1400027de, %dec_label_pc_1400027c9, %dec_label_pc_1400027b1
  %rdx.1.reload = load i64, i64* %rdx.1.reg2mem
  %rcx.1.reload = load i64, i64* %rcx.1.reg2mem
  %215 = call i64 @function_1400065d0(i64 %rcx.1.reload, i64 %rdx.1.reload), !insn.addr !723
  br label %dec_label_pc_1400027ea, !insn.addr !723

dec_label_pc_1400027ea:                           ; preds = %dec_label_pc_1400027e5, %dec_label_pc_140002793
  %216 = call i128 @__asm_movdqa(i128 %16), !insn.addr !724
  %217 = call i64 @__asm_movdqu(i128 %216), !insn.addr !725
  store i128 0, i128* %stack_var_-352, align 8, !insn.addr !726
  %218 = icmp ult i64 %10, 8, !insn.addr !727
  br i1 %218, label %dec_label_pc_140002840, label %dec_label_pc_140002806, !insn.addr !728

dec_label_pc_140002806:                           ; preds = %dec_label_pc_1400027ea
  %219 = mul i64 %10, 2, !insn.addr !729
  %220 = add i64 %219, 2, !insn.addr !729
  %221 = load i128, i128* %stack_var_-416, align 8, !insn.addr !730
  %222 = trunc i128 %221 to i64, !insn.addr !730
  %223 = icmp ult i64 %220, 4096, !insn.addr !731
  store i64 %222, i64* %rcx.2.reg2mem, !insn.addr !732
  store i64 %220, i64* %rdx.2.reg2mem, !insn.addr !732
  br i1 %223, label %dec_label_pc_14000283b, label %dec_label_pc_14000281f, !insn.addr !732

dec_label_pc_14000281f:                           ; preds = %dec_label_pc_140002806
  %224 = add i64 %219, 41, !insn.addr !733
  %225 = add i64 %222, -8
  %226 = inttoptr i64 %225 to i64*, !insn.addr !734
  %227 = load i64, i64* %226, align 8, !insn.addr !734
  %228 = sub i64 %225, %227, !insn.addr !735
  %229 = icmp ult i64 %228, 32
  store i64 %227, i64* %rcx.2.reg2mem, !insn.addr !736
  store i64 %224, i64* %rdx.2.reg2mem, !insn.addr !736
  br i1 %229, label %dec_label_pc_14000283b, label %dec_label_pc_140002834, !insn.addr !736

dec_label_pc_140002834:                           ; preds = %dec_label_pc_14000281f
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !737
  %230 = call i64 @__asm_int3(), !insn.addr !738
  store i64 %227, i64* %rcx.2.reg2mem, !insn.addr !738
  store i64 %224, i64* %rdx.2.reg2mem, !insn.addr !738
  br label %dec_label_pc_14000283b, !insn.addr !738

dec_label_pc_14000283b:                           ; preds = %dec_label_pc_140002834, %dec_label_pc_14000281f, %dec_label_pc_140002806
  %rdx.2.reload = load i64, i64* %rdx.2.reg2mem
  %rcx.2.reload = load i64, i64* %rcx.2.reg2mem
  %231 = call i64 @function_1400065d0(i64 %rcx.2.reload, i64 %rdx.2.reload), !insn.addr !739
  br label %dec_label_pc_140002840, !insn.addr !739

dec_label_pc_140002840:                           ; preds = %dec_label_pc_14000283b, %dec_label_pc_1400027ea
  %232 = call i128 @__asm_movdqa(i128 %16), !insn.addr !740
  %233 = call i64 @__asm_movdqu(i128 %232), !insn.addr !741
  store i128 0, i128* %stack_var_-416, align 8, !insn.addr !742
  %234 = icmp ult i64 %11, 8, !insn.addr !743
  br i1 %234, label %dec_label_pc_140002897, label %dec_label_pc_14000285e, !insn.addr !744

dec_label_pc_14000285e:                           ; preds = %dec_label_pc_140002840
  %235 = mul i64 %11, 2, !insn.addr !745
  %236 = add i64 %235, 2, !insn.addr !745
  %237 = load i128, i128* %stack_var_-384, align 8, !insn.addr !746
  %238 = trunc i128 %237 to i64, !insn.addr !746
  %239 = icmp ult i64 %236, 4096, !insn.addr !747
  store i64 %238, i64* %rcx.3.reg2mem, !insn.addr !748
  store i64 %236, i64* %rdx.3.reg2mem, !insn.addr !748
  br i1 %239, label %dec_label_pc_140002892, label %dec_label_pc_140002876, !insn.addr !748

dec_label_pc_140002876:                           ; preds = %dec_label_pc_14000285e
  %240 = add i64 %235, 41, !insn.addr !749
  %241 = add i64 %238, -8
  %242 = inttoptr i64 %241 to i64*, !insn.addr !750
  %243 = load i64, i64* %242, align 8, !insn.addr !750
  %244 = sub i64 %241, %243, !insn.addr !751
  %245 = icmp ult i64 %244, 32
  store i64 %243, i64* %rcx.3.reg2mem, !insn.addr !752
  store i64 %240, i64* %rdx.3.reg2mem, !insn.addr !752
  br i1 %245, label %dec_label_pc_140002892, label %dec_label_pc_14000288b, !insn.addr !752

dec_label_pc_14000288b:                           ; preds = %dec_label_pc_140002876
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !753
  %246 = call i64 @__asm_int3(), !insn.addr !754
  store i64 %243, i64* %rcx.3.reg2mem, !insn.addr !754
  store i64 %240, i64* %rdx.3.reg2mem, !insn.addr !754
  br label %dec_label_pc_140002892, !insn.addr !754

dec_label_pc_140002892:                           ; preds = %dec_label_pc_14000288b, %dec_label_pc_140002876, %dec_label_pc_14000285e
  %rdx.3.reload = load i64, i64* %rdx.3.reg2mem
  %rcx.3.reload = load i64, i64* %rcx.3.reg2mem
  %247 = call i64 @function_1400065d0(i64 %rcx.3.reload, i64 %rdx.3.reload), !insn.addr !755
  br label %dec_label_pc_140002897, !insn.addr !755

dec_label_pc_140002897:                           ; preds = %dec_label_pc_140002892, %dec_label_pc_140002840
  %248 = call i128 @__asm_movdqa(i128 %16), !insn.addr !756
  %249 = call i64 @__asm_movdqu(i128 %248), !insn.addr !757
  store i128 0, i128* %stack_var_-384, align 8, !insn.addr !758
  %250 = icmp ult i64 %14, 8, !insn.addr !759
  br i1 %250, label %dec_label_pc_1400028ec, label %dec_label_pc_1400028b3, !insn.addr !760

dec_label_pc_1400028b3:                           ; preds = %dec_label_pc_140002897
  %251 = mul i64 %14, 2, !insn.addr !761
  %252 = add i64 %251, 2, !insn.addr !761
  %253 = load i128, i128* %stack_var_-288, align 8, !insn.addr !762
  %254 = trunc i128 %253 to i64, !insn.addr !762
  %255 = icmp ult i64 %252, 4096, !insn.addr !763
  store i64 %254, i64* %rcx.4.reg2mem, !insn.addr !764
  store i64 %252, i64* %rdx.4.reg2mem, !insn.addr !764
  br i1 %255, label %dec_label_pc_1400028e7, label %dec_label_pc_1400028cb, !insn.addr !764

dec_label_pc_1400028cb:                           ; preds = %dec_label_pc_1400028b3
  %256 = add i64 %251, 41, !insn.addr !765
  %257 = add i64 %254, -8
  %258 = inttoptr i64 %257 to i64*, !insn.addr !766
  %259 = load i64, i64* %258, align 8, !insn.addr !766
  %260 = sub i64 %257, %259, !insn.addr !767
  %261 = icmp ult i64 %260, 32
  store i64 %259, i64* %rcx.4.reg2mem, !insn.addr !768
  store i64 %256, i64* %rdx.4.reg2mem, !insn.addr !768
  br i1 %261, label %dec_label_pc_1400028e7, label %dec_label_pc_1400028e0, !insn.addr !768

dec_label_pc_1400028e0:                           ; preds = %dec_label_pc_1400028cb
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !769
  %262 = call i64 @__asm_int3(), !insn.addr !770
  store i64 %259, i64* %rcx.4.reg2mem, !insn.addr !770
  store i64 %256, i64* %rdx.4.reg2mem, !insn.addr !770
  br label %dec_label_pc_1400028e7, !insn.addr !770

dec_label_pc_1400028e7:                           ; preds = %dec_label_pc_1400028e0, %dec_label_pc_1400028cb, %dec_label_pc_1400028b3
  %rdx.4.reload = load i64, i64* %rdx.4.reg2mem
  %rcx.4.reload = load i64, i64* %rcx.4.reg2mem
  %263 = call i64 @function_1400065d0(i64 %rcx.4.reload, i64 %rdx.4.reload), !insn.addr !771
  br label %dec_label_pc_1400028ec, !insn.addr !771

dec_label_pc_1400028ec:                           ; preds = %dec_label_pc_1400028e7, %dec_label_pc_140002897
  %264 = call i128 @__asm_movdqa(i128 %16), !insn.addr !772
  %265 = call i64 @__asm_movdqu(i128 %264), !insn.addr !773
  store i128 0, i128* %stack_var_-288, align 8, !insn.addr !774
  %266 = icmp ult i64 %7, 8, !insn.addr !775
  br i1 %266, label %dec_label_pc_140002941, label %dec_label_pc_140002908, !insn.addr !776

dec_label_pc_140002908:                           ; preds = %dec_label_pc_1400028ec
  %267 = mul i64 %7, 2, !insn.addr !777
  %268 = add i64 %267, 2, !insn.addr !777
  %269 = load i128, i128* %stack_var_-192, align 8, !insn.addr !778
  %270 = trunc i128 %269 to i64, !insn.addr !778
  %271 = icmp ult i64 %268, 4096, !insn.addr !779
  store i64 %270, i64* %rcx.5.reg2mem, !insn.addr !780
  store i64 %268, i64* %rdx.5.reg2mem, !insn.addr !780
  br i1 %271, label %dec_label_pc_14000293c, label %dec_label_pc_140002920, !insn.addr !780

dec_label_pc_140002920:                           ; preds = %dec_label_pc_140002908
  %272 = add i64 %267, 41, !insn.addr !781
  %273 = add i64 %270, -8
  %274 = inttoptr i64 %273 to i64*, !insn.addr !782
  %275 = load i64, i64* %274, align 8, !insn.addr !782
  %276 = sub i64 %273, %275, !insn.addr !783
  %277 = icmp ult i64 %276, 32
  store i64 %275, i64* %rcx.5.reg2mem, !insn.addr !784
  store i64 %272, i64* %rdx.5.reg2mem, !insn.addr !784
  br i1 %277, label %dec_label_pc_14000293c, label %dec_label_pc_140002935, !insn.addr !784

dec_label_pc_140002935:                           ; preds = %dec_label_pc_140002920
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !785
  %278 = call i64 @__asm_int3(), !insn.addr !786
  store i64 %275, i64* %rcx.5.reg2mem, !insn.addr !786
  store i64 %272, i64* %rdx.5.reg2mem, !insn.addr !786
  br label %dec_label_pc_14000293c, !insn.addr !786

dec_label_pc_14000293c:                           ; preds = %dec_label_pc_140002935, %dec_label_pc_140002920, %dec_label_pc_140002908
  %rdx.5.reload = load i64, i64* %rdx.5.reg2mem
  %rcx.5.reload = load i64, i64* %rcx.5.reg2mem
  %279 = call i64 @function_1400065d0(i64 %rcx.5.reload, i64 %rdx.5.reload), !insn.addr !787
  br label %dec_label_pc_140002941, !insn.addr !787

dec_label_pc_140002941:                           ; preds = %dec_label_pc_14000293c, %dec_label_pc_1400028ec
  %280 = call i128 @__asm_movdqa(i128 %16), !insn.addr !788
  %281 = call i64 @__asm_movdqu(i128 %280), !insn.addr !789
  store i128 0, i128* %stack_var_-192, align 8, !insn.addr !790
  br i1 %126, label %dec_label_pc_1400030e2, label %dec_label_pc_140002961, !insn.addr !791

dec_label_pc_140002961:                           ; preds = %dec_label_pc_140002941
  %282 = mul i64 %12, 2, !insn.addr !792
  %283 = add i64 %282, 2, !insn.addr !792
  %284 = load i128, i128* %stack_var_-256, align 8, !insn.addr !793
  %285 = trunc i128 %284 to i64, !insn.addr !793
  %286 = icmp ult i64 %283, 4096, !insn.addr !794
  store i64 %285, i64* %rcx.16.reg2mem, !insn.addr !795
  store i64 %283, i64* %rdx.17.reg2mem, !insn.addr !795
  br i1 %286, label %dec_label_pc_1400030dd, label %dec_label_pc_14000297d, !insn.addr !795

dec_label_pc_14000297d:                           ; preds = %dec_label_pc_140002961
  %287 = add i64 %282, 41, !insn.addr !796
  %288 = add i64 %285, -8
  %289 = inttoptr i64 %288 to i64*, !insn.addr !797
  %290 = load i64, i64* %289, align 8, !insn.addr !797
  %291 = sub i64 %288, %290, !insn.addr !798
  %292 = icmp ult i64 %291, 32
  store i64 %290, i64* %rcx.16.reg2mem, !insn.addr !799
  store i64 %287, i64* %rdx.17.reg2mem, !insn.addr !799
  br i1 %292, label %dec_label_pc_1400030dd, label %dec_label_pc_140002996, !insn.addr !799

dec_label_pc_140002996:                           ; preds = %dec_label_pc_14000297d
  %293 = sext i64 %281 to i128, !insn.addr !789
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !800
  %294 = call i64 @__asm_int3(), !insn.addr !801
  store i64 %stack_var_-200.0.reload, i64* %stack_var_-200.1.reg2mem, !insn.addr !801
  store i64 %stack_var_-296.0.reload, i64* %stack_var_-296.1.reg2mem, !insn.addr !801
  store i128 %293, i128* %stack_var_-176.0.reg2mem, !insn.addr !801
  store i64 %stack_var_-304.0.reload, i64* %stack_var_-304.1.reg2mem, !insn.addr !801
  store i128 %280, i128* %xmm0.0.reg2mem, !insn.addr !801
  br label %dec_label_pc_14000299d, !insn.addr !801

dec_label_pc_14000299d:                           ; preds = %dec_label_pc_140002996, %dec_label_pc_1400023b0
  %xmm0.0.reload = load i128, i128* %xmm0.0.reg2mem
  %stack_var_-304.1.reload = load i64, i64* %stack_var_-304.1.reg2mem
  %stack_var_-176.0.reload = load i128, i128* %stack_var_-176.0.reg2mem
  %stack_var_-296.1.reload = load i64, i64* %stack_var_-296.1.reg2mem
  %stack_var_-200.1.reload = load i64, i64* %stack_var_-200.1.reg2mem
  %295 = call i64 @function_1400020b0(i64* nonnull %stack_var_-96), !insn.addr !802
  %296 = add i64 %295, 24, !insn.addr !803
  %297 = inttoptr i64 %296 to i64*, !insn.addr !803
  %298 = load i64, i64* %297, align 8, !insn.addr !803
  %299 = icmp ult i64 %298, 8, !insn.addr !803
  store i64 %295, i64* %r14.0.reg2mem, !insn.addr !804
  br i1 %299, label %dec_label_pc_1400029c3, label %dec_label_pc_1400029c0, !insn.addr !804

dec_label_pc_1400029c0:                           ; preds = %dec_label_pc_14000299d
  %300 = inttoptr i64 %295 to i64*, !insn.addr !805
  %301 = load i64, i64* %300, align 8, !insn.addr !805
  store i64 %301, i64* %r14.0.reg2mem, !insn.addr !805
  br label %dec_label_pc_1400029c3, !insn.addr !805

dec_label_pc_1400029c3:                           ; preds = %dec_label_pc_1400029c0, %dec_label_pc_14000299d
  %r14.0.reload = load i64, i64* %r14.0.reg2mem
  %302 = call i64 @function_1400060a0(i64* nonnull %stack_var_-128), !insn.addr !806
  %303 = add i64 %302, 16
  %304 = inttoptr i64 %303 to i64*
  %305 = load i64, i64* %304, align 8, !insn.addr !807
  %306 = add i64 %302, 24
  %307 = inttoptr i64 %306 to i64*
  %308 = load i64, i64* %307, align 8, !insn.addr !808
  %309 = sub i64 %308, %305, !insn.addr !809
  %310 = icmp ult i64 %309, 12, !insn.addr !810
  br i1 %310, label %dec_label_pc_140002a1a, label %dec_label_pc_1400029e9, !insn.addr !811

dec_label_pc_1400029e9:                           ; preds = %dec_label_pc_1400029c3
  %311 = add i64 %305, 12, !insn.addr !812
  store i64 %311, i64* %304, align 8, !insn.addr !813
  %312 = icmp ult i64 %308, 8, !insn.addr !814
  store i64 %302, i64* %rdi.1.reg2mem, !insn.addr !815
  br i1 %312, label %dec_label_pc_1400029fd, label %dec_label_pc_1400029fa, !insn.addr !815

dec_label_pc_1400029fa:                           ; preds = %dec_label_pc_1400029e9
  %313 = inttoptr i64 %302 to i64*, !insn.addr !816
  %314 = load i64, i64* %313, align 8, !insn.addr !816
  store i64 %314, i64* %rdi.1.reg2mem, !insn.addr !816
  br label %dec_label_pc_1400029fd, !insn.addr !816

dec_label_pc_1400029fd:                           ; preds = %dec_label_pc_1400029fa, %dec_label_pc_1400029e9
  %rdi.1.reload = load i64, i64* %rdi.1.reg2mem
  %315 = mul i64 %305, 2, !insn.addr !817
  %316 = add i64 %rdi.1.reload, %315, !insn.addr !817
  %317 = inttoptr i64 %316 to i64*, !insn.addr !818
  %318 = call i64* @memmove(i64* %317, i64* bitcast ([13 x i16]* @global_var_140008a80 to i64*), i32 24), !insn.addr !818
  %319 = mul i64 %311, 2, !insn.addr !819
  %320 = add i64 %rdi.1.reload, %319, !insn.addr !819
  %321 = inttoptr i64 %320 to i16*, !insn.addr !819
  store i16 0, i16* %321, align 2, !insn.addr !819
  store i64* %307, i64** %.pre-phi41.reg2mem, !insn.addr !820
  store i64* %304, i64** %.pre-phi37.reg2mem, !insn.addr !820
  store i64 %303, i64* %.pre-phi.reg2mem, !insn.addr !820
  store i64 %302, i64* %rbx.1.reg2mem, !insn.addr !820
  br label %dec_label_pc_140002a3a, !insn.addr !820

dec_label_pc_140002a1a:                           ; preds = %dec_label_pc_1400029c3
  %322 = call i64 @function_1400061b0(i64 %302, i64 12), !insn.addr !821
  %.pre35 = add i64 %322, 16, !insn.addr !822
  %.pre36 = inttoptr i64 %.pre35 to i64*, !insn.addr !823
  %.pre38 = add i64 %322, 24, !insn.addr !824
  %.pre40 = inttoptr i64 %.pre38 to i64*, !insn.addr !824
  store i64* %.pre40, i64** %.pre-phi41.reg2mem, !insn.addr !825
  store i64* %.pre36, i64** %.pre-phi37.reg2mem, !insn.addr !825
  store i64 %.pre35, i64* %.pre-phi.reg2mem, !insn.addr !825
  store i64 %322, i64* %rbx.1.reg2mem, !insn.addr !825
  br label %dec_label_pc_140002a3a, !insn.addr !825

dec_label_pc_140002a3a:                           ; preds = %dec_label_pc_140002a1a, %dec_label_pc_1400029fd
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %.pre-phi.reload = load i64, i64* %.pre-phi.reg2mem
  %.pre-phi37.reload = load i64*, i64** %.pre-phi37.reg2mem
  %.pre-phi41.reload = load i64*, i64** %.pre-phi41.reg2mem
  %323 = call i128 @__asm_xorps(i128 %xmm0.0.reload, i128 %xmm0.0.reload), !insn.addr !826
  %324 = call i64 @__asm_movdqu(i128 %323), !insn.addr !827
  %325 = inttoptr i64 %rbx.1.reload to i128*, !insn.addr !828
  %326 = load i128, i128* %325, align 8, !insn.addr !828
  %327 = call i128 @__asm_movups(i128 %326), !insn.addr !828
  call void @__asm_movups.2(i128 0, i128 %327), !insn.addr !829
  %328 = inttoptr i64 %.pre-phi.reload to i128*, !insn.addr !822
  %329 = load i128, i128* %328, align 8, !insn.addr !822
  %330 = call i128 @__asm_movups(i128 %329), !insn.addr !822
  %331 = sext i64 %324 to i128, !insn.addr !830
  call void @__asm_movups.2(i128 %331, i128 %330), !insn.addr !830
  store i64 0, i64* %.pre-phi37.reload, align 8, !insn.addr !823
  store i64 7, i64* %.pre-phi41.reload, align 8, !insn.addr !824
  %332 = inttoptr i64 %rbx.1.reload to i16*, !insn.addr !831
  store i16 0, i16* %332, align 2, !insn.addr !831
  %333 = call i64 @function_140005bd0(i128* nonnull %stack_var_-224, i64 %3), !insn.addr !832
  %334 = call i128 @__asm_xorps(i128 %327, i128 %327), !insn.addr !833
  %335 = call i64 @__asm_movdqu(i128 %334), !insn.addr !834
  %336 = sext i64 %335 to i128, !insn.addr !834
  %337 = inttoptr i64 %333 to i128*, !insn.addr !835
  %338 = load i128, i128* %337, align 8, !insn.addr !835
  %339 = call i128 @__asm_movups(i128 %338), !insn.addr !835
  %340 = load i128, i128* %stack_var_-352, align 8, !insn.addr !836
  call void @__asm_movups.2(i128 %340, i128 %339), !insn.addr !836
  %341 = add i64 %333, 16, !insn.addr !837
  %342 = inttoptr i64 %341 to i128*, !insn.addr !837
  %343 = load i128, i128* %342, align 8, !insn.addr !837
  %344 = call i128 @__asm_movups(i128 %343), !insn.addr !837
  call void @__asm_movups.2(i128 %336, i128 %344), !insn.addr !838
  %345 = inttoptr i64 %341 to i64*, !insn.addr !839
  store i64 0, i64* %345, align 8, !insn.addr !839
  %346 = add i64 %333, 24, !insn.addr !840
  %347 = inttoptr i64 %346 to i64*, !insn.addr !840
  store i64 7, i64* %347, align 8, !insn.addr !840
  %348 = inttoptr i64 %333 to i16*, !insn.addr !841
  store i16 0, i16* %348, align 2, !insn.addr !841
  %349 = sub i64 %8, %335, !insn.addr !842
  %350 = icmp ult i64 %349, 13, !insn.addr !843
  %351 = ptrtoint i128* %stack_var_-352 to i64
  br i1 %350, label %dec_label_pc_140002ade, label %dec_label_pc_140002aa8, !insn.addr !844

dec_label_pc_140002aa8:                           ; preds = %dec_label_pc_140002a3a
  %352 = icmp ult i64 %8, 8, !insn.addr !845
  %353 = icmp eq i1 %352, false, !insn.addr !846
  %354 = load i128, i128* %stack_var_-352, align 8, !insn.addr !846
  %355 = trunc i128 %354 to i64, !insn.addr !846
  %356 = select i1 %353, i64 %355, i64 %351, !insn.addr !846
  %357 = mul i64 %335, 2, !insn.addr !847
  %358 = add i64 %356, %357
  %359 = inttoptr i64 %358 to i64*, !insn.addr !848
  %360 = call i64* @memmove(i64* %359, i64* bitcast ([14 x i16]* @global_var_140008ac8 to i64*), i32 26), !insn.addr !848
  %361 = add i64 %358, 26, !insn.addr !849
  %362 = inttoptr i64 %361 to i16*, !insn.addr !849
  store i16 0, i16* %362, align 2, !insn.addr !849
  store i64 %351, i64* %storemerge12.reg2mem, !insn.addr !850
  br label %dec_label_pc_140002afc, !insn.addr !850

dec_label_pc_140002ade:                           ; preds = %dec_label_pc_140002a3a
  %363 = call i64 @function_1400061b0(i64 %351, i64 13), !insn.addr !851
  store i64 %363, i64* %storemerge12.reg2mem, !insn.addr !851
  br label %dec_label_pc_140002afc, !insn.addr !851

dec_label_pc_140002afc:                           ; preds = %dec_label_pc_140002ade, %dec_label_pc_140002aa8
  %storemerge12.reload = load i64, i64* %storemerge12.reg2mem
  %364 = call i128 @__asm_xorps(i128 %339, i128 %339), !insn.addr !852
  %365 = call i64 @__asm_movdqu(i128 %364), !insn.addr !853
  %366 = sext i64 %365 to i128, !insn.addr !853
  %367 = inttoptr i64 %storemerge12.reload to i128*, !insn.addr !854
  %368 = load i128, i128* %367, align 8, !insn.addr !854
  %369 = call i128 @__asm_movups(i128 %368), !insn.addr !854
  %370 = load i128, i128* %stack_var_-448, align 8, !insn.addr !855
  call void @__asm_movups.2(i128 %370, i128 %369), !insn.addr !855
  %371 = add i64 %storemerge12.reload, 16, !insn.addr !856
  %372 = inttoptr i64 %371 to i128*, !insn.addr !856
  %373 = load i128, i128* %372, align 8, !insn.addr !856
  %374 = call i128 @__asm_movups(i128 %373), !insn.addr !856
  call void @__asm_movups.2(i128 %366, i128 %374), !insn.addr !857
  %375 = inttoptr i64 %371 to i64*, !insn.addr !858
  store i64 0, i64* %375, align 8, !insn.addr !858
  %376 = add i64 %storemerge12.reload, 24, !insn.addr !859
  %377 = inttoptr i64 %376 to i64*, !insn.addr !859
  store i64 7, i64* %377, align 8, !insn.addr !859
  %378 = inttoptr i64 %storemerge12.reload to i16*, !insn.addr !860
  store i16 0, i16* %378, align 2, !insn.addr !860
  %379 = sub i64 %9, %365, !insn.addr !861
  %380 = icmp ugt i64 %stack_var_-304.1.reload, %379
  br i1 %380, label %dec_label_pc_140002b87, label %dec_label_pc_140002b53, !insn.addr !862

dec_label_pc_140002b53:                           ; preds = %dec_label_pc_140002afc
  %381 = load i128, i128* %stack_var_-320, align 8, !insn.addr !863
  %382 = trunc i128 %381 to i64, !insn.addr !863
  %383 = icmp ult i64 %stack_var_-296.1.reload, 8, !insn.addr !864
  %384 = icmp eq i1 %383, false, !insn.addr !865
  %385 = ptrtoint i128* %stack_var_-320 to i64, !insn.addr !866
  %386 = select i1 %384, i64 %382, i64 %385, !insn.addr !865
  %387 = add i64 %365, %stack_var_-304.1.reload, !insn.addr !867
  %388 = ptrtoint i128* %stack_var_-448 to i64, !insn.addr !868
  %389 = icmp ult i64 %9, 8, !insn.addr !869
  %390 = icmp eq i1 %389, false, !insn.addr !870
  %391 = load i128, i128* %stack_var_-448, align 8, !insn.addr !870
  %392 = trunc i128 %391 to i64, !insn.addr !870
  %393 = select i1 %390, i64 %392, i64 %388, !insn.addr !870
  %394 = mul i64 %365, 2, !insn.addr !871
  %395 = add i64 %393, %394, !insn.addr !871
  %396 = inttoptr i64 %395 to i64*, !insn.addr !872
  %397 = inttoptr i64 %386 to i64*, !insn.addr !872
  %.tr = trunc i64 %stack_var_-304.1.reload to i32
  %398 = mul i32 %.tr, 2, !insn.addr !872
  %399 = call i64* @memmove(i64* %396, i64* %397, i32 %398), !insn.addr !872
  %400 = mul i64 %387, 2, !insn.addr !873
  %401 = add i64 %393, %400, !insn.addr !873
  %402 = inttoptr i64 %401 to i16*, !insn.addr !873
  store i16 0, i16* %402, align 2, !insn.addr !873
  store i64 %388, i64* %rax.0.reg2mem, !insn.addr !874
  store i64 %382, i64* %rsi.0.reg2mem, !insn.addr !874
  br label %dec_label_pc_140002b9e, !insn.addr !874

dec_label_pc_140002b87:                           ; preds = %dec_label_pc_140002afc
  %403 = ptrtoint i128* %stack_var_-448 to i64, !insn.addr !875
  %404 = call i64 @function_1400061b0(i64 %403, i64 %stack_var_-304.1.reload), !insn.addr !876
  %405 = load i128, i128* %stack_var_-320, align 8, !insn.addr !877
  %406 = trunc i128 %405 to i64, !insn.addr !877
  store i64 %404, i64* %rax.0.reg2mem, !insn.addr !877
  store i64 %406, i64* %rsi.0.reg2mem, !insn.addr !877
  br label %dec_label_pc_140002b9e, !insn.addr !877

dec_label_pc_140002b9e:                           ; preds = %dec_label_pc_140002b87, %dec_label_pc_140002b53
  %rsi.0.reload = load i64, i64* %rsi.0.reg2mem
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %407 = call i128 @__asm_xorps(i128 %369, i128 %369), !insn.addr !878
  %408 = call i64 @__asm_movdqu(i128 %407), !insn.addr !879
  %409 = sext i64 %408 to i128, !insn.addr !879
  %410 = inttoptr i64 %rax.0.reload to i128*, !insn.addr !880
  %411 = load i128, i128* %410, align 8, !insn.addr !880
  %412 = call i128 @__asm_movups(i128 %411), !insn.addr !880
  %413 = load i128, i128* %stack_var_-416, align 8, !insn.addr !881
  call void @__asm_movups.2(i128 %413, i128 %412), !insn.addr !881
  %414 = add i64 %rax.0.reload, 16, !insn.addr !882
  %415 = inttoptr i64 %414 to i128*, !insn.addr !882
  %416 = load i128, i128* %415, align 8, !insn.addr !882
  %417 = call i128 @__asm_movups(i128 %416), !insn.addr !882
  call void @__asm_movups.2(i128 %409, i128 %417), !insn.addr !883
  %418 = inttoptr i64 %414 to i64*, !insn.addr !884
  store i64 0, i64* %418, align 8, !insn.addr !884
  %419 = add i64 %rax.0.reload, 24, !insn.addr !885
  %420 = inttoptr i64 %419 to i64*, !insn.addr !885
  store i64 7, i64* %420, align 8, !insn.addr !885
  %421 = inttoptr i64 %rax.0.reload to i16*, !insn.addr !886
  store i16 0, i16* %421, align 2, !insn.addr !886
  %422 = icmp eq i64 %10, %408, !insn.addr !887
  %423 = ptrtoint i128* %stack_var_-416 to i64
  br i1 %422, label %dec_label_pc_140002c17, label %dec_label_pc_140002bdd, !insn.addr !888

dec_label_pc_140002bdd:                           ; preds = %dec_label_pc_140002b9e
  %424 = icmp ult i64 %10, 8, !insn.addr !889
  %425 = icmp eq i1 %424, false, !insn.addr !890
  %426 = load i128, i128* %stack_var_-416, align 8, !insn.addr !890
  %427 = trunc i128 %426 to i64, !insn.addr !890
  %428 = select i1 %425, i64 %427, i64 %423, !insn.addr !890
  %429 = mul i64 %408, 2, !insn.addr !891
  %430 = add i64 %428, %429
  %431 = inttoptr i64 %430 to i64*, !insn.addr !892
  %432 = call i64* @memmove(i64* %431, i64* nonnull @global_var_140008a68, i32 2), !insn.addr !892
  %433 = add i64 %430, 2, !insn.addr !893
  %434 = inttoptr i64 %433 to i16*, !insn.addr !893
  store i16 0, i16* %434, align 2, !insn.addr !893
  store i64 %423, i64* %storemerge11.reg2mem, !insn.addr !894
  br label %dec_label_pc_140002c36, !insn.addr !894

dec_label_pc_140002c17:                           ; preds = %dec_label_pc_140002b9e
  %435 = call i64 @function_1400061b0(i64 %423, i64 1), !insn.addr !895
  store i64 %435, i64* %storemerge11.reg2mem, !insn.addr !895
  br label %dec_label_pc_140002c36, !insn.addr !895

dec_label_pc_140002c36:                           ; preds = %dec_label_pc_140002c17, %dec_label_pc_140002bdd
  %storemerge11.reload = load i64, i64* %storemerge11.reg2mem
  %436 = call i128 @__asm_xorps(i128 %412, i128 %412), !insn.addr !896
  %437 = call i64 @__asm_movdqu(i128 %436), !insn.addr !897
  %438 = sext i64 %437 to i128, !insn.addr !897
  %439 = inttoptr i64 %storemerge11.reload to i128*, !insn.addr !898
  %440 = load i128, i128* %439, align 8, !insn.addr !898
  %441 = call i128 @__asm_movups(i128 %440), !insn.addr !898
  %442 = load i128, i128* %stack_var_-384, align 8, !insn.addr !899
  call void @__asm_movups.2(i128 %442, i128 %441), !insn.addr !899
  %443 = add i64 %storemerge11.reload, 16, !insn.addr !900
  %444 = inttoptr i64 %443 to i128*, !insn.addr !900
  %445 = load i128, i128* %444, align 8, !insn.addr !900
  %446 = call i128 @__asm_movups(i128 %445), !insn.addr !900
  call void @__asm_movups.2(i128 %438, i128 %446), !insn.addr !901
  %447 = inttoptr i64 %443 to i64*, !insn.addr !902
  store i64 0, i64* %447, align 8, !insn.addr !902
  %448 = add i64 %storemerge11.reload, 24, !insn.addr !903
  %449 = inttoptr i64 %448 to i64*, !insn.addr !903
  store i64 7, i64* %449, align 8, !insn.addr !903
  %450 = inttoptr i64 %storemerge11.reload to i16*, !insn.addr !904
  store i16 0, i16* %450, align 2, !insn.addr !904
  %451 = sub i64 %11, %437, !insn.addr !905
  %452 = icmp ult i64 %451, 6, !insn.addr !906
  %453 = ptrtoint i128* %stack_var_-384 to i64
  br i1 %452, label %dec_label_pc_140002ca7, label %dec_label_pc_140002c71, !insn.addr !907

dec_label_pc_140002c71:                           ; preds = %dec_label_pc_140002c36
  %454 = icmp ult i64 %11, 8, !insn.addr !908
  %455 = icmp eq i1 %454, false, !insn.addr !909
  %456 = load i128, i128* %stack_var_-384, align 8, !insn.addr !909
  %457 = trunc i128 %456 to i64, !insn.addr !909
  %458 = select i1 %455, i64 %457, i64 %453, !insn.addr !909
  %459 = mul i64 %437, 2, !insn.addr !910
  %460 = add i64 %458, %459
  %461 = inttoptr i64 %460 to i64*, !insn.addr !911
  %462 = call i64* @memmove(i64* %461, i64* bitcast ([7 x i16]* @global_var_140008a70 to i64*), i32 12), !insn.addr !911
  %463 = add i64 %460, 12, !insn.addr !912
  %464 = inttoptr i64 %463 to i16*, !insn.addr !912
  store i16 0, i16* %464, align 2, !insn.addr !912
  store i64 %453, i64* %storemerge.reg2mem, !insn.addr !913
  br label %dec_label_pc_140002cc5, !insn.addr !913

dec_label_pc_140002ca7:                           ; preds = %dec_label_pc_140002c36
  %465 = call i64 @function_1400061b0(i64 %453, i64 6), !insn.addr !914
  store i64 %465, i64* %storemerge.reg2mem, !insn.addr !914
  br label %dec_label_pc_140002cc5, !insn.addr !914

dec_label_pc_140002cc5:                           ; preds = %dec_label_pc_140002ca7, %dec_label_pc_140002c71
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  %466 = call i128 @__asm_xorps(i128 %441, i128 %441), !insn.addr !915
  %467 = call i64 @__asm_movdqu(i128 %466), !insn.addr !916
  %468 = sext i64 %467 to i128, !insn.addr !916
  %469 = inttoptr i64 %storemerge.reload to i128*, !insn.addr !917
  %470 = load i128, i128* %469, align 8, !insn.addr !917
  %471 = call i128 @__asm_movups(i128 %470), !insn.addr !917
  call void @__asm_movups.2(i128 0, i128 %471), !insn.addr !918
  %472 = add i64 %storemerge.reload, 16, !insn.addr !919
  %473 = inttoptr i64 %472 to i128*, !insn.addr !919
  %474 = load i128, i128* %473, align 8, !insn.addr !919
  %475 = call i128 @__asm_movups(i128 %474), !insn.addr !919
  call void @__asm_movups.2(i128 %468, i128 %475), !insn.addr !920
  %476 = inttoptr i64 %472 to i64*, !insn.addr !921
  store i64 0, i64* %476, align 8, !insn.addr !921
  %477 = add i64 %storemerge.reload, 24, !insn.addr !922
  %478 = inttoptr i64 %477 to i64*, !insn.addr !922
  store i64 7, i64* %478, align 8, !insn.addr !922
  %479 = inttoptr i64 %storemerge.reload to i16*, !insn.addr !923
  store i16 0, i16* %479, align 2, !insn.addr !923
  %480 = call i64 @function_140006380(i128* nonnull %stack_var_-256, i64 %r14.0.reload), !insn.addr !924
  %481 = call i128 @__asm_xorps(i128 %471, i128 %471), !insn.addr !925
  %482 = call i64 @__asm_movdqu(i128 %481), !insn.addr !926
  %483 = sext i64 %482 to i128, !insn.addr !926
  %484 = inttoptr i64 %480 to i128*, !insn.addr !927
  %485 = load i128, i128* %484, align 8, !insn.addr !927
  %486 = call i128 @__asm_movups(i128 %485), !insn.addr !927
  %487 = load i128, i128* %stack_var_-288, align 8, !insn.addr !928
  call void @__asm_movups.2(i128 %487, i128 %486), !insn.addr !928
  %488 = add i64 %480, 16, !insn.addr !929
  %489 = inttoptr i64 %488 to i128*, !insn.addr !929
  %490 = load i128, i128* %489, align 8, !insn.addr !929
  %491 = call i128 @__asm_movups(i128 %490), !insn.addr !929
  call void @__asm_movups.2(i128 %483, i128 %491), !insn.addr !930
  %492 = inttoptr i64 %488 to i64*, !insn.addr !931
  store i64 0, i64* %492, align 8, !insn.addr !931
  %493 = add i64 %480, 24, !insn.addr !932
  %494 = inttoptr i64 %493 to i64*, !insn.addr !932
  store i64 7, i64* %494, align 8, !insn.addr !932
  %495 = inttoptr i64 %480 to i16*, !insn.addr !933
  store i16 0, i16* %495, align 2, !insn.addr !933
  %496 = call i64 @function_140006380(i128* nonnull %stack_var_-288, i64 ptrtoint (i64* @global_var_140008a68 to i64)), !insn.addr !934
  %497 = inttoptr i64 %496 to i128*, !insn.addr !935
  %498 = load i128, i128* %497, align 8, !insn.addr !935
  %499 = call i128 @__asm_movups(i128 %498), !insn.addr !935
  call void @__asm_movups.2(i128 0, i128 %499), !insn.addr !936
  %500 = add i64 %496, 16, !insn.addr !937
  %501 = inttoptr i64 %500 to i128*, !insn.addr !937
  %502 = load i128, i128* %501, align 8, !insn.addr !937
  %503 = call i128 @__asm_movups(i128 %502), !insn.addr !937
  call void @__asm_movups.2(i128 %stack_var_-176.0.reload, i128 %503), !insn.addr !938
  %504 = inttoptr i64 %500 to i64*, !insn.addr !939
  store i64 0, i64* %504, align 8, !insn.addr !939
  %505 = add i64 %496, 24, !insn.addr !940
  %506 = inttoptr i64 %505 to i64*, !insn.addr !940
  store i64 7, i64* %506, align 8, !insn.addr !940
  %507 = inttoptr i64 %496 to i16*, !insn.addr !941
  store i16 0, i16* %507, align 2, !insn.addr !941
  %508 = icmp ult i64 %7, 8, !insn.addr !942
  br i1 %508, label %dec_label_pc_140002d9f, label %dec_label_pc_140002d65, !insn.addr !943

dec_label_pc_140002d65:                           ; preds = %dec_label_pc_140002cc5
  %509 = mul i64 %7, 2, !insn.addr !944
  %510 = add i64 %509, 2, !insn.addr !944
  %511 = load i128, i128* %stack_var_-192, align 8, !insn.addr !945
  %512 = trunc i128 %511 to i64, !insn.addr !945
  %513 = icmp ult i64 %510, 4096, !insn.addr !946
  store i64 %512, i64* %rcx.6.reg2mem, !insn.addr !947
  store i64 %510, i64* %rdx.6.reg2mem, !insn.addr !947
  br i1 %513, label %dec_label_pc_140002d99, label %dec_label_pc_140002d7d, !insn.addr !947

dec_label_pc_140002d7d:                           ; preds = %dec_label_pc_140002d65
  %514 = add i64 %509, 41, !insn.addr !948
  %515 = add i64 %512, -8
  %516 = inttoptr i64 %515 to i64*, !insn.addr !949
  %517 = load i64, i64* %516, align 8, !insn.addr !949
  %518 = sub i64 %515, %517, !insn.addr !950
  %519 = icmp ult i64 %518, 32
  store i64 %517, i64* %rcx.6.reg2mem, !insn.addr !951
  store i64 %514, i64* %rdx.6.reg2mem, !insn.addr !951
  br i1 %519, label %dec_label_pc_140002d99, label %dec_label_pc_140002d92, !insn.addr !951

dec_label_pc_140002d92:                           ; preds = %dec_label_pc_140002d7d
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !952
  %520 = call i64 @__asm_int3(), !insn.addr !953
  store i64 %517, i64* %rcx.6.reg2mem, !insn.addr !953
  store i64 %514, i64* %rdx.6.reg2mem, !insn.addr !953
  br label %dec_label_pc_140002d99, !insn.addr !953

dec_label_pc_140002d99:                           ; preds = %dec_label_pc_140002d92, %dec_label_pc_140002d7d, %dec_label_pc_140002d65
  %rdx.6.reload = load i64, i64* %rdx.6.reg2mem
  %rcx.6.reload = load i64, i64* %rcx.6.reg2mem
  %521 = call i64 @function_1400065d0(i64 %rcx.6.reload, i64 %rdx.6.reload), !insn.addr !954
  br label %dec_label_pc_140002d9f, !insn.addr !955

dec_label_pc_140002d9f:                           ; preds = %dec_label_pc_140002d99, %dec_label_pc_140002cc5
  %522 = icmp ult i64 %14, 8, !insn.addr !956
  br i1 %522, label %dec_label_pc_140002de2, label %dec_label_pc_140002da9, !insn.addr !957

dec_label_pc_140002da9:                           ; preds = %dec_label_pc_140002d9f
  %523 = mul i64 %14, 2, !insn.addr !958
  %524 = add i64 %523, 2, !insn.addr !958
  %525 = load i128, i128* %stack_var_-288, align 8, !insn.addr !959
  %526 = trunc i128 %525 to i64, !insn.addr !959
  %527 = icmp ult i64 %524, 4096, !insn.addr !960
  store i64 %526, i64* %rcx.7.reg2mem, !insn.addr !961
  store i64 %524, i64* %rdx.7.reg2mem, !insn.addr !961
  br i1 %527, label %dec_label_pc_140002ddd, label %dec_label_pc_140002dc1, !insn.addr !961

dec_label_pc_140002dc1:                           ; preds = %dec_label_pc_140002da9
  %528 = add i64 %523, 41, !insn.addr !962
  %529 = add i64 %526, -8
  %530 = inttoptr i64 %529 to i64*, !insn.addr !963
  %531 = load i64, i64* %530, align 8, !insn.addr !963
  %532 = sub i64 %529, %531, !insn.addr !964
  %533 = icmp ult i64 %532, 32
  store i64 %531, i64* %rcx.7.reg2mem, !insn.addr !965
  store i64 %528, i64* %rdx.7.reg2mem, !insn.addr !965
  br i1 %533, label %dec_label_pc_140002ddd, label %dec_label_pc_140002dd6, !insn.addr !965

dec_label_pc_140002dd6:                           ; preds = %dec_label_pc_140002dc1
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !966
  %534 = call i64 @__asm_int3(), !insn.addr !967
  store i64 %531, i64* %rcx.7.reg2mem, !insn.addr !967
  store i64 %528, i64* %rdx.7.reg2mem, !insn.addr !967
  br label %dec_label_pc_140002ddd, !insn.addr !967

dec_label_pc_140002ddd:                           ; preds = %dec_label_pc_140002dd6, %dec_label_pc_140002dc1, %dec_label_pc_140002da9
  %rdx.7.reload = load i64, i64* %rdx.7.reg2mem
  %rcx.7.reload = load i64, i64* %rcx.7.reg2mem
  %535 = call i64 @function_1400065d0(i64 %rcx.7.reload, i64 %rdx.7.reload), !insn.addr !968
  br label %dec_label_pc_140002de2, !insn.addr !968

dec_label_pc_140002de2:                           ; preds = %dec_label_pc_140002ddd, %dec_label_pc_140002d9f
  %536 = call i128 @__asm_movdqa(i128 %16), !insn.addr !969
  %537 = call i64 @__asm_movdqu(i128 %536), !insn.addr !970
  store i128 0, i128* %stack_var_-288, align 8, !insn.addr !971
  %538 = icmp ult i64 %12, 8, !insn.addr !972
  br i1 %538, label %dec_label_pc_140002e37, label %dec_label_pc_140002dfe, !insn.addr !973

dec_label_pc_140002dfe:                           ; preds = %dec_label_pc_140002de2
  %539 = mul i64 %12, 2, !insn.addr !974
  %540 = add i64 %539, 2, !insn.addr !974
  %541 = load i128, i128* %stack_var_-256, align 8, !insn.addr !975
  %542 = trunc i128 %541 to i64, !insn.addr !975
  %543 = icmp ult i64 %540, 4096, !insn.addr !976
  store i64 %542, i64* %rcx.8.reg2mem, !insn.addr !977
  store i64 %540, i64* %rdx.8.reg2mem, !insn.addr !977
  br i1 %543, label %dec_label_pc_140002e32, label %dec_label_pc_140002e16, !insn.addr !977

dec_label_pc_140002e16:                           ; preds = %dec_label_pc_140002dfe
  %544 = add i64 %539, 41, !insn.addr !978
  %545 = add i64 %542, -8
  %546 = inttoptr i64 %545 to i64*, !insn.addr !979
  %547 = load i64, i64* %546, align 8, !insn.addr !979
  %548 = sub i64 %545, %547, !insn.addr !980
  %549 = icmp ult i64 %548, 32
  store i64 %547, i64* %rcx.8.reg2mem, !insn.addr !981
  store i64 %544, i64* %rdx.8.reg2mem, !insn.addr !981
  br i1 %549, label %dec_label_pc_140002e32, label %dec_label_pc_140002e2b, !insn.addr !981

dec_label_pc_140002e2b:                           ; preds = %dec_label_pc_140002e16
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !982
  %550 = call i64 @__asm_int3(), !insn.addr !983
  store i64 %547, i64* %rcx.8.reg2mem, !insn.addr !983
  store i64 %544, i64* %rdx.8.reg2mem, !insn.addr !983
  br label %dec_label_pc_140002e32, !insn.addr !983

dec_label_pc_140002e32:                           ; preds = %dec_label_pc_140002e2b, %dec_label_pc_140002e16, %dec_label_pc_140002dfe
  %rdx.8.reload = load i64, i64* %rdx.8.reg2mem
  %rcx.8.reload = load i64, i64* %rcx.8.reg2mem
  %551 = call i64 @function_1400065d0(i64 %rcx.8.reload, i64 %rdx.8.reload), !insn.addr !984
  br label %dec_label_pc_140002e37, !insn.addr !984

dec_label_pc_140002e37:                           ; preds = %dec_label_pc_140002e32, %dec_label_pc_140002de2
  %552 = call i128 @__asm_movdqa(i128 %16), !insn.addr !985
  %553 = call i64 @__asm_movdqu(i128 %552), !insn.addr !986
  store i128 0, i128* %stack_var_-256, align 8, !insn.addr !987
  %554 = icmp ult i64 %11, 8, !insn.addr !988
  br i1 %554, label %dec_label_pc_140002e8c, label %dec_label_pc_140002e53, !insn.addr !989

dec_label_pc_140002e53:                           ; preds = %dec_label_pc_140002e37
  %555 = mul i64 %11, 2, !insn.addr !990
  %556 = add i64 %555, 2, !insn.addr !990
  %557 = load i128, i128* %stack_var_-384, align 8, !insn.addr !991
  %558 = trunc i128 %557 to i64, !insn.addr !991
  %559 = icmp ult i64 %556, 4096, !insn.addr !992
  store i64 %558, i64* %rcx.9.reg2mem, !insn.addr !993
  store i64 %556, i64* %rdx.9.reg2mem, !insn.addr !993
  br i1 %559, label %dec_label_pc_140002e87, label %dec_label_pc_140002e6b, !insn.addr !993

dec_label_pc_140002e6b:                           ; preds = %dec_label_pc_140002e53
  %560 = add i64 %555, 41, !insn.addr !994
  %561 = add i64 %558, -8
  %562 = inttoptr i64 %561 to i64*, !insn.addr !995
  %563 = load i64, i64* %562, align 8, !insn.addr !995
  %564 = sub i64 %561, %563, !insn.addr !996
  %565 = icmp ult i64 %564, 32
  store i64 %563, i64* %rcx.9.reg2mem, !insn.addr !997
  store i64 %560, i64* %rdx.9.reg2mem, !insn.addr !997
  br i1 %565, label %dec_label_pc_140002e87, label %dec_label_pc_140002e80, !insn.addr !997

dec_label_pc_140002e80:                           ; preds = %dec_label_pc_140002e6b
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !998
  %566 = call i64 @__asm_int3(), !insn.addr !999
  store i64 %563, i64* %rcx.9.reg2mem, !insn.addr !999
  store i64 %560, i64* %rdx.9.reg2mem, !insn.addr !999
  br label %dec_label_pc_140002e87, !insn.addr !999

dec_label_pc_140002e87:                           ; preds = %dec_label_pc_140002e80, %dec_label_pc_140002e6b, %dec_label_pc_140002e53
  %rdx.9.reload = load i64, i64* %rdx.9.reg2mem
  %rcx.9.reload = load i64, i64* %rcx.9.reg2mem
  %567 = call i64 @function_1400065d0(i64 %rcx.9.reload, i64 %rdx.9.reload), !insn.addr !1000
  br label %dec_label_pc_140002e8c, !insn.addr !1000

dec_label_pc_140002e8c:                           ; preds = %dec_label_pc_140002e87, %dec_label_pc_140002e37
  %568 = call i128 @__asm_movdqa(i128 %16), !insn.addr !1001
  %569 = call i64 @__asm_movdqu(i128 %568), !insn.addr !1002
  store i128 0, i128* %stack_var_-384, align 8, !insn.addr !1003
  %570 = icmp ult i64 %10, 8, !insn.addr !1004
  br i1 %570, label %dec_label_pc_140002ee2, label %dec_label_pc_140002ea8, !insn.addr !1005

dec_label_pc_140002ea8:                           ; preds = %dec_label_pc_140002e8c
  %571 = mul i64 %10, 2, !insn.addr !1006
  %572 = add i64 %571, 2, !insn.addr !1006
  %573 = load i128, i128* %stack_var_-416, align 8, !insn.addr !1007
  %574 = trunc i128 %573 to i64, !insn.addr !1007
  %575 = icmp ult i64 %572, 4096, !insn.addr !1008
  store i64 %574, i64* %rcx.10.reg2mem, !insn.addr !1009
  store i64 %572, i64* %rdx.10.reg2mem, !insn.addr !1009
  br i1 %575, label %dec_label_pc_140002edd, label %dec_label_pc_140002ec1, !insn.addr !1009

dec_label_pc_140002ec1:                           ; preds = %dec_label_pc_140002ea8
  %576 = add i64 %571, 41, !insn.addr !1010
  %577 = add i64 %574, -8
  %578 = inttoptr i64 %577 to i64*, !insn.addr !1011
  %579 = load i64, i64* %578, align 8, !insn.addr !1011
  %580 = sub i64 %577, %579, !insn.addr !1012
  %581 = icmp ult i64 %580, 32
  store i64 %579, i64* %rcx.10.reg2mem, !insn.addr !1013
  store i64 %576, i64* %rdx.10.reg2mem, !insn.addr !1013
  br i1 %581, label %dec_label_pc_140002edd, label %dec_label_pc_140002ed6, !insn.addr !1013

dec_label_pc_140002ed6:                           ; preds = %dec_label_pc_140002ec1
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !1014
  %582 = call i64 @__asm_int3(), !insn.addr !1015
  store i64 %579, i64* %rcx.10.reg2mem, !insn.addr !1015
  store i64 %576, i64* %rdx.10.reg2mem, !insn.addr !1015
  br label %dec_label_pc_140002edd, !insn.addr !1015

dec_label_pc_140002edd:                           ; preds = %dec_label_pc_140002ed6, %dec_label_pc_140002ec1, %dec_label_pc_140002ea8
  %rdx.10.reload = load i64, i64* %rdx.10.reg2mem
  %rcx.10.reload = load i64, i64* %rcx.10.reg2mem
  %583 = call i64 @function_1400065d0(i64 %rcx.10.reload, i64 %rdx.10.reload), !insn.addr !1016
  br label %dec_label_pc_140002ee2, !insn.addr !1016

dec_label_pc_140002ee2:                           ; preds = %dec_label_pc_140002edd, %dec_label_pc_140002e8c
  %584 = call i128 @__asm_movdqa(i128 %16), !insn.addr !1017
  %585 = call i64 @__asm_movdqu(i128 %584), !insn.addr !1018
  store i128 0, i128* %stack_var_-416, align 8, !insn.addr !1019
  %586 = icmp ult i64 %9, 8, !insn.addr !1020
  br i1 %586, label %dec_label_pc_140002f3b, label %dec_label_pc_140002f01, !insn.addr !1021

dec_label_pc_140002f01:                           ; preds = %dec_label_pc_140002ee2
  %587 = mul i64 %9, 2, !insn.addr !1022
  %588 = add i64 %587, 2, !insn.addr !1022
  %589 = load i128, i128* %stack_var_-448, align 8, !insn.addr !1023
  %590 = trunc i128 %589 to i64, !insn.addr !1023
  %591 = icmp ult i64 %588, 4096, !insn.addr !1024
  store i64 %590, i64* %rcx.11.reg2mem, !insn.addr !1025
  store i64 %588, i64* %rdx.11.reg2mem, !insn.addr !1025
  br i1 %591, label %dec_label_pc_140002f36, label %dec_label_pc_140002f1a, !insn.addr !1025

dec_label_pc_140002f1a:                           ; preds = %dec_label_pc_140002f01
  %592 = add i64 %587, 41, !insn.addr !1026
  %593 = add i64 %590, -8
  %594 = inttoptr i64 %593 to i64*, !insn.addr !1027
  %595 = load i64, i64* %594, align 8, !insn.addr !1027
  %596 = sub i64 %593, %595, !insn.addr !1028
  %597 = icmp ult i64 %596, 32
  store i64 %595, i64* %rcx.11.reg2mem, !insn.addr !1029
  store i64 %592, i64* %rdx.11.reg2mem, !insn.addr !1029
  br i1 %597, label %dec_label_pc_140002f36, label %dec_label_pc_140002f2f, !insn.addr !1029

dec_label_pc_140002f2f:                           ; preds = %dec_label_pc_140002f1a
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !1030
  %598 = call i64 @__asm_int3(), !insn.addr !1031
  store i64 %595, i64* %rcx.11.reg2mem, !insn.addr !1031
  store i64 %592, i64* %rdx.11.reg2mem, !insn.addr !1031
  br label %dec_label_pc_140002f36, !insn.addr !1031

dec_label_pc_140002f36:                           ; preds = %dec_label_pc_140002f2f, %dec_label_pc_140002f1a, %dec_label_pc_140002f01
  %rdx.11.reload = load i64, i64* %rdx.11.reg2mem
  %rcx.11.reload = load i64, i64* %rcx.11.reg2mem
  %599 = call i64 @function_1400065d0(i64 %rcx.11.reload, i64 %rdx.11.reload), !insn.addr !1032
  br label %dec_label_pc_140002f3b, !insn.addr !1032

dec_label_pc_140002f3b:                           ; preds = %dec_label_pc_140002f36, %dec_label_pc_140002ee2
  %600 = call i128 @__asm_movdqa(i128 %16), !insn.addr !1033
  %601 = call i64 @__asm_movdqu(i128 %600), !insn.addr !1034
  store i128 0, i128* %stack_var_-448, align 8, !insn.addr !1035
  %602 = icmp ult i64 %8, 8, !insn.addr !1036
  br i1 %602, label %dec_label_pc_140002f92, label %dec_label_pc_140002f59, !insn.addr !1037

dec_label_pc_140002f59:                           ; preds = %dec_label_pc_140002f3b
  %603 = mul i64 %8, 2, !insn.addr !1038
  %604 = add i64 %603, 2, !insn.addr !1038
  %605 = load i128, i128* %stack_var_-352, align 8, !insn.addr !1039
  %606 = trunc i128 %605 to i64, !insn.addr !1039
  %607 = icmp ult i64 %604, 4096, !insn.addr !1040
  store i64 %606, i64* %rcx.12.reg2mem, !insn.addr !1041
  store i64 %604, i64* %rdx.12.reg2mem, !insn.addr !1041
  br i1 %607, label %dec_label_pc_140002f8d, label %dec_label_pc_140002f71, !insn.addr !1041

dec_label_pc_140002f71:                           ; preds = %dec_label_pc_140002f59
  %608 = add i64 %603, 41, !insn.addr !1042
  %609 = add i64 %606, -8
  %610 = inttoptr i64 %609 to i64*, !insn.addr !1043
  %611 = load i64, i64* %610, align 8, !insn.addr !1043
  %612 = sub i64 %609, %611, !insn.addr !1044
  %613 = icmp ult i64 %612, 32
  store i64 %611, i64* %rcx.12.reg2mem, !insn.addr !1045
  store i64 %608, i64* %rdx.12.reg2mem, !insn.addr !1045
  br i1 %613, label %dec_label_pc_140002f8d, label %dec_label_pc_140002f86, !insn.addr !1045

dec_label_pc_140002f86:                           ; preds = %dec_label_pc_140002f71
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !1046
  %614 = call i64 @__asm_int3(), !insn.addr !1047
  store i64 %611, i64* %rcx.12.reg2mem, !insn.addr !1047
  store i64 %608, i64* %rdx.12.reg2mem, !insn.addr !1047
  br label %dec_label_pc_140002f8d, !insn.addr !1047

dec_label_pc_140002f8d:                           ; preds = %dec_label_pc_140002f86, %dec_label_pc_140002f71, %dec_label_pc_140002f59
  %rdx.12.reload = load i64, i64* %rdx.12.reg2mem
  %rcx.12.reload = load i64, i64* %rcx.12.reg2mem
  %615 = call i64 @function_1400065d0(i64 %rcx.12.reload, i64 %rdx.12.reload), !insn.addr !1048
  br label %dec_label_pc_140002f92, !insn.addr !1048

dec_label_pc_140002f92:                           ; preds = %dec_label_pc_140002f8d, %dec_label_pc_140002f3b
  %616 = call i128 @__asm_movdqa(i128 %16), !insn.addr !1049
  %617 = call i64 @__asm_movdqu(i128 %616), !insn.addr !1050
  store i128 0, i128* %stack_var_-352, align 8, !insn.addr !1051
  %618 = icmp ult i64 %stack_var_-200.1.reload, 8, !insn.addr !1052
  br i1 %618, label %dec_label_pc_140002fe7, label %dec_label_pc_140002fae, !insn.addr !1053

dec_label_pc_140002fae:                           ; preds = %dec_label_pc_140002f92
  %619 = mul i64 %stack_var_-200.1.reload, 2, !insn.addr !1054
  %620 = add i64 %619, 2, !insn.addr !1054
  %621 = load i128, i128* %stack_var_-224, align 8, !insn.addr !1055
  %622 = trunc i128 %621 to i64, !insn.addr !1055
  %sext8 = mul i64 %622, 281474976710656
  %623 = ashr exact i64 %sext8, 48, !insn.addr !1055
  %624 = icmp ult i64 %620, 4096, !insn.addr !1056
  store i64 %623, i64* %rcx.13.reg2mem, !insn.addr !1057
  store i64 %620, i64* %rdx.13.reg2mem, !insn.addr !1057
  br i1 %624, label %dec_label_pc_140002fe2, label %dec_label_pc_140002fc6, !insn.addr !1057

dec_label_pc_140002fc6:                           ; preds = %dec_label_pc_140002fae
  %625 = add i64 %619, 41, !insn.addr !1058
  %626 = add nsw i64 %623, -8
  %627 = inttoptr i64 %626 to i64*, !insn.addr !1059
  %628 = load i64, i64* %627, align 8, !insn.addr !1059
  %629 = sub i64 %626, %628, !insn.addr !1060
  %630 = icmp ult i64 %629, 32
  store i64 %628, i64* %rcx.13.reg2mem, !insn.addr !1061
  store i64 %625, i64* %rdx.13.reg2mem, !insn.addr !1061
  br i1 %630, label %dec_label_pc_140002fe2, label %dec_label_pc_140002fdb, !insn.addr !1061

dec_label_pc_140002fdb:                           ; preds = %dec_label_pc_140002fc6
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !1062
  %631 = call i64 @__asm_int3(), !insn.addr !1063
  store i64 %628, i64* %rcx.13.reg2mem, !insn.addr !1063
  store i64 %625, i64* %rdx.13.reg2mem, !insn.addr !1063
  br label %dec_label_pc_140002fe2, !insn.addr !1063

dec_label_pc_140002fe2:                           ; preds = %dec_label_pc_140002fdb, %dec_label_pc_140002fc6, %dec_label_pc_140002fae
  %rdx.13.reload = load i64, i64* %rdx.13.reg2mem
  %rcx.13.reload = load i64, i64* %rcx.13.reg2mem
  %632 = call i64 @function_1400065d0(i64 %rcx.13.reload, i64 %rdx.13.reload), !insn.addr !1064
  br label %dec_label_pc_140002fe7, !insn.addr !1064

dec_label_pc_140002fe7:                           ; preds = %dec_label_pc_140002fe2, %dec_label_pc_140002f92
  %633 = call i128 @__asm_movdqa(i128 %16), !insn.addr !1065
  %634 = call i64 @__asm_movdqu(i128 %633), !insn.addr !1066
  store i128 0, i128* %stack_var_-224, align 8, !insn.addr !1067
  %635 = icmp ult i64 %6, 8, !insn.addr !1068
  br i1 %635, label %dec_label_pc_140003042, label %dec_label_pc_140003006, !insn.addr !1069

dec_label_pc_140003006:                           ; preds = %dec_label_pc_140002fe7
  %636 = mul i64 %6, 2, !insn.addr !1070
  %637 = add i64 %636, 2, !insn.addr !1070
  %638 = load i64, i64* %stack_var_-128, align 8, !insn.addr !1071
  %639 = icmp ult i64 %637, 4096, !insn.addr !1072
  store i64 %638, i64* %rcx.14.reg2mem, !insn.addr !1073
  store i64 %637, i64* %rdx.14.reg2mem, !insn.addr !1073
  br i1 %639, label %dec_label_pc_14000303d, label %dec_label_pc_140003021, !insn.addr !1073

dec_label_pc_140003021:                           ; preds = %dec_label_pc_140003006
  %640 = add i64 %636, 41, !insn.addr !1074
  %641 = add i64 %638, -8
  %642 = inttoptr i64 %641 to i64*, !insn.addr !1075
  %643 = load i64, i64* %642, align 8, !insn.addr !1075
  %644 = sub i64 %641, %643, !insn.addr !1076
  %645 = icmp ult i64 %644, 32
  store i64 %643, i64* %rcx.14.reg2mem, !insn.addr !1077
  store i64 %640, i64* %rdx.14.reg2mem, !insn.addr !1077
  br i1 %645, label %dec_label_pc_14000303d, label %dec_label_pc_140003036, !insn.addr !1077

dec_label_pc_140003036:                           ; preds = %dec_label_pc_140003021
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !1078
  %646 = call i64 @__asm_int3(), !insn.addr !1079
  store i64 %643, i64* %rcx.14.reg2mem, !insn.addr !1079
  store i64 %640, i64* %rdx.14.reg2mem, !insn.addr !1079
  br label %dec_label_pc_14000303d, !insn.addr !1079

dec_label_pc_14000303d:                           ; preds = %dec_label_pc_140003036, %dec_label_pc_140003021, %dec_label_pc_140003006
  %rdx.14.reload = load i64, i64* %rdx.14.reg2mem
  %rcx.14.reload = load i64, i64* %rcx.14.reg2mem
  %647 = call i64 @function_1400065d0(i64 %rcx.14.reload, i64 %rdx.14.reload), !insn.addr !1080
  br label %dec_label_pc_140003042, !insn.addr !1080

dec_label_pc_140003042:                           ; preds = %dec_label_pc_14000303d, %dec_label_pc_140002fe7
  %648 = call i128 @__asm_movdqa(i128 %16), !insn.addr !1081
  %649 = call i64 @__asm_movdqu(i128 %648), !insn.addr !1082
  store i64 0, i64* %stack_var_-128, align 8, !insn.addr !1083
  %650 = icmp ult i64 %5, 8, !insn.addr !1084
  br i1 %650, label %dec_label_pc_1400030a4, label %dec_label_pc_140003067, !insn.addr !1085

dec_label_pc_140003067:                           ; preds = %dec_label_pc_140003042
  %651 = mul i64 %5, 2, !insn.addr !1086
  %652 = add i64 %651, 2, !insn.addr !1086
  %653 = load i64, i64* %stack_var_-96, align 8, !insn.addr !1087
  %654 = icmp ult i64 %652, 4096, !insn.addr !1088
  store i64 %653, i64* %rcx.15.reg2mem, !insn.addr !1089
  store i64 %652, i64* %rdx.15.reg2mem, !insn.addr !1089
  br i1 %654, label %dec_label_pc_14000309e, label %dec_label_pc_140003082, !insn.addr !1089

dec_label_pc_140003082:                           ; preds = %dec_label_pc_140003067
  %655 = add i64 %651, 41, !insn.addr !1090
  %656 = add i64 %653, -8
  %657 = inttoptr i64 %656 to i64*, !insn.addr !1091
  %658 = load i64, i64* %657, align 8, !insn.addr !1091
  %659 = sub i64 %656, %658, !insn.addr !1092
  %660 = icmp ult i64 %659, 32
  store i64 %658, i64* %rcx.15.reg2mem, !insn.addr !1093
  store i64 %655, i64* %rdx.15.reg2mem, !insn.addr !1093
  br i1 %660, label %dec_label_pc_14000309e, label %dec_label_pc_140003097, !insn.addr !1093

dec_label_pc_140003097:                           ; preds = %dec_label_pc_140003082
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !1094
  %661 = call i64 @__asm_int3(), !insn.addr !1095
  store i64 %658, i64* %rcx.15.reg2mem, !insn.addr !1095
  store i64 %655, i64* %rdx.15.reg2mem, !insn.addr !1095
  br label %dec_label_pc_14000309e, !insn.addr !1095

dec_label_pc_14000309e:                           ; preds = %dec_label_pc_140003097, %dec_label_pc_140003082, %dec_label_pc_140003067
  %rdx.15.reload = load i64, i64* %rdx.15.reg2mem
  %rcx.15.reload = load i64, i64* %rcx.15.reg2mem
  %662 = call i64 @function_1400065d0(i64 %rcx.15.reload, i64 %rdx.15.reload), !insn.addr !1096
  br label %dec_label_pc_1400030a4, !insn.addr !1097

dec_label_pc_1400030a4:                           ; preds = %dec_label_pc_14000309e, %dec_label_pc_140003042
  %663 = icmp ult i64 %stack_var_-296.1.reload, 8, !insn.addr !1098
  br i1 %663, label %dec_label_pc_1400030e2, label %dec_label_pc_1400030aa, !insn.addr !1099

dec_label_pc_1400030aa:                           ; preds = %dec_label_pc_1400030a4
  %664 = mul i64 %stack_var_-296.1.reload, 2, !insn.addr !1100
  %665 = add i64 %664, 2, !insn.addr !1100
  %666 = icmp ult i64 %665, 4096, !insn.addr !1101
  store i64 %rsi.0.reload, i64* %rcx.16.reg2mem, !insn.addr !1102
  store i64 %665, i64* %rdx.17.reg2mem, !insn.addr !1102
  br i1 %666, label %dec_label_pc_1400030dd, label %dec_label_pc_1400030be, !insn.addr !1102

dec_label_pc_1400030be:                           ; preds = %dec_label_pc_1400030aa
  %667 = add i64 %664, 41, !insn.addr !1103
  %668 = add i64 %rsi.0.reload, -8
  %669 = inttoptr i64 %668 to i64*, !insn.addr !1104
  %670 = load i64, i64* %669, align 8, !insn.addr !1104
  %671 = sub i64 %668, %670, !insn.addr !1105
  %672 = icmp ult i64 %671, 32
  store i64 %670, i64* %rcx.16.reg2mem, !insn.addr !1106
  store i64 %667, i64* %rdx.17.reg2mem, !insn.addr !1106
  br i1 %672, label %dec_label_pc_1400030dd, label %dec_label_pc_1400030d3, !insn.addr !1106

dec_label_pc_1400030d3:                           ; preds = %dec_label_pc_1400030be
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !1107
  %673 = call i64 @__asm_int3(), !insn.addr !1108
  store i64 %670, i64* %rcx.16.reg2mem, !insn.addr !1108
  store i64 %667, i64* %rdx.17.reg2mem, !insn.addr !1108
  br label %dec_label_pc_1400030dd, !insn.addr !1108

dec_label_pc_1400030dd:                           ; preds = %dec_label_pc_1400030aa, %dec_label_pc_1400030be, %dec_label_pc_1400030d3, %dec_label_pc_14000297d, %dec_label_pc_140002961
  %rdx.17.reload = load i64, i64* %rdx.17.reg2mem
  %rcx.16.reload = load i64, i64* %rcx.16.reg2mem
  %674 = call i64 @function_1400065d0(i64 %rcx.16.reload, i64 %rdx.17.reload), !insn.addr !1109
  br label %dec_label_pc_1400030e2, !insn.addr !1109

dec_label_pc_1400030e2:                           ; preds = %dec_label_pc_1400030dd, %dec_label_pc_1400030a4, %dec_label_pc_140002941
  %675 = bitcast i128* %stack_var_-160 to i16*, !insn.addr !1110
  %676 = call i64 @function_140002160(i64* nonnull %stack_var_-96, i16* nonnull %675), !insn.addr !1110
  %677 = inttoptr i64 %676 to i128*, !insn.addr !1111
  %678 = call i64 @function_140006380(i128* %677, i64 ptrtoint ([17 x i16]* @global_var_140008ae8 to i64)), !insn.addr !1111
  %679 = inttoptr i64 %678 to i128*, !insn.addr !1112
  %680 = load i128, i128* %679, align 8, !insn.addr !1112
  %681 = call i128 @__asm_movups(i128 %680), !insn.addr !1112
  call void @__asm_movups.2(i128 0, i128 %681), !insn.addr !1113
  %682 = add i64 %678, 16, !insn.addr !1114
  %683 = inttoptr i64 %682 to i128*, !insn.addr !1114
  %684 = load i128, i128* %683, align 8, !insn.addr !1114
  %685 = call i128 @__asm_movups(i128 %684), !insn.addr !1114
  call void @__asm_movups.2(i128 0, i128 %685), !insn.addr !1115
  %686 = inttoptr i64 %682 to i64*, !insn.addr !1116
  store i64 0, i64* %686, align 8, !insn.addr !1116
  %687 = add i64 %678, 24, !insn.addr !1117
  %688 = inttoptr i64 %687 to i64*, !insn.addr !1117
  store i64 7, i64* %688, align 8, !insn.addr !1117
  %689 = inttoptr i64 %678 to i16*, !insn.addr !1118
  store i16 0, i16* %689, align 2, !insn.addr !1118
  %690 = bitcast i128* %stack_var_-320 to i64*, !insn.addr !1119
  %691 = call i64 @function_140002220(i64* nonnull %690, i64* nonnull %stack_var_-128), !insn.addr !1119
  %692 = icmp ult i64 %5, 8, !insn.addr !1120
  br i1 %692, label %dec_label_pc_14000319b, label %dec_label_pc_14000315e, !insn.addr !1121

dec_label_pc_14000315e:                           ; preds = %dec_label_pc_1400030e2
  %693 = mul i64 %5, 2, !insn.addr !1122
  %694 = add i64 %693, 2, !insn.addr !1122
  %695 = load i64, i64* %stack_var_-96, align 8, !insn.addr !1123
  %696 = icmp ult i64 %694, 4096, !insn.addr !1124
  store i64 %695, i64* %rcx.17.reg2mem, !insn.addr !1125
  store i64 %694, i64* %rdx.18.reg2mem, !insn.addr !1125
  br i1 %696, label %dec_label_pc_140003195, label %dec_label_pc_140003179, !insn.addr !1125

dec_label_pc_140003179:                           ; preds = %dec_label_pc_14000315e
  %697 = add i64 %693, 41, !insn.addr !1126
  %698 = add i64 %695, -8
  %699 = inttoptr i64 %698 to i64*, !insn.addr !1127
  %700 = load i64, i64* %699, align 8, !insn.addr !1127
  %701 = sub i64 %698, %700, !insn.addr !1128
  %702 = icmp ult i64 %701, 32
  store i64 %700, i64* %rcx.17.reg2mem, !insn.addr !1129
  store i64 %697, i64* %rdx.18.reg2mem, !insn.addr !1129
  br i1 %702, label %dec_label_pc_140003195, label %dec_label_pc_14000318e, !insn.addr !1129

dec_label_pc_14000318e:                           ; preds = %dec_label_pc_140003179
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !1130
  %703 = call i64 @__asm_int3(), !insn.addr !1131
  store i64 %700, i64* %rcx.17.reg2mem, !insn.addr !1131
  store i64 %697, i64* %rdx.18.reg2mem, !insn.addr !1131
  br label %dec_label_pc_140003195, !insn.addr !1131

dec_label_pc_140003195:                           ; preds = %dec_label_pc_14000318e, %dec_label_pc_140003179, %dec_label_pc_14000315e
  %rdx.18.reload = load i64, i64* %rdx.18.reg2mem
  %rcx.17.reload = load i64, i64* %rcx.17.reg2mem
  %704 = call i64 @function_1400065d0(i64 %rcx.17.reload, i64 %rdx.18.reload), !insn.addr !1132
  br label %dec_label_pc_14000319b, !insn.addr !1133

dec_label_pc_14000319b:                           ; preds = %dec_label_pc_140003195, %dec_label_pc_1400030e2
  %705 = icmp ult i64 %4, 8, !insn.addr !1134
  br i1 %705, label %dec_label_pc_1400031e1, label %dec_label_pc_1400031a8, !insn.addr !1135

dec_label_pc_1400031a8:                           ; preds = %dec_label_pc_14000319b
  %706 = mul i64 %4, 2, !insn.addr !1136
  %707 = add i64 %706, 2, !insn.addr !1136
  %708 = load i128, i128* %stack_var_-160, align 8, !insn.addr !1137
  %709 = trunc i128 %708 to i64, !insn.addr !1137
  %sext10 = mul i64 %709, 281474976710656
  %710 = ashr exact i64 %sext10, 48, !insn.addr !1137
  %711 = icmp ult i64 %707, 4096, !insn.addr !1138
  store i64 %710, i64* %rcx.18.reg2mem, !insn.addr !1139
  store i64 %707, i64* %rdx.19.reg2mem, !insn.addr !1139
  br i1 %711, label %dec_label_pc_1400031dc, label %dec_label_pc_1400031c0, !insn.addr !1139

dec_label_pc_1400031c0:                           ; preds = %dec_label_pc_1400031a8
  %712 = add i64 %706, 41, !insn.addr !1140
  %713 = add nsw i64 %710, -8
  %714 = inttoptr i64 %713 to i64*, !insn.addr !1141
  %715 = load i64, i64* %714, align 8, !insn.addr !1141
  %716 = sub i64 %713, %715, !insn.addr !1142
  %717 = icmp ult i64 %716, 32
  store i64 %715, i64* %rcx.18.reg2mem, !insn.addr !1143
  store i64 %712, i64* %rdx.19.reg2mem, !insn.addr !1143
  br i1 %717, label %dec_label_pc_1400031dc, label %dec_label_pc_1400031d5, !insn.addr !1143

dec_label_pc_1400031d5:                           ; preds = %dec_label_pc_1400031c0
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !1144
  %718 = call i64 @__asm_int3(), !insn.addr !1145
  store i64 %715, i64* %rcx.18.reg2mem, !insn.addr !1145
  store i64 %712, i64* %rdx.19.reg2mem, !insn.addr !1145
  br label %dec_label_pc_1400031dc, !insn.addr !1145

dec_label_pc_1400031dc:                           ; preds = %dec_label_pc_1400031d5, %dec_label_pc_1400031c0, %dec_label_pc_1400031a8
  %rdx.19.reload = load i64, i64* %rdx.19.reg2mem
  %rcx.18.reload = load i64, i64* %rcx.18.reg2mem
  %719 = call i64 @function_1400065d0(i64 %rcx.18.reload, i64 %rdx.19.reload), !insn.addr !1146
  br label %dec_label_pc_1400031e1, !insn.addr !1146

dec_label_pc_1400031e1:                           ; preds = %dec_label_pc_1400031dc, %dec_label_pc_14000319b
  %720 = sext i32 %15 to i64, !insn.addr !580
  call void @__security_check_cookie(i64 %720), !insn.addr !1147
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !1148

; uselistorder directives
  uselistorder i64 %710, { 1, 0 }
  uselistorder i64 %706, { 1, 0 }
  uselistorder i64 %695, { 1, 0 }
  uselistorder i64 %693, { 1, 0 }
  uselistorder i64 %678, { 3, 2, 1, 0 }
  uselistorder i64 %664, { 1, 0 }
  uselistorder i64 %653, { 1, 0 }
  uselistorder i64 %651, { 1, 0 }
  uselistorder i64 %638, { 1, 0 }
  uselistorder i64 %636, { 1, 0 }
  uselistorder i64 %623, { 1, 0 }
  uselistorder i64 %619, { 1, 0 }
  uselistorder i64 %606, { 1, 0 }
  uselistorder i64 %603, { 1, 0 }
  uselistorder i64 %590, { 1, 0 }
  uselistorder i64 %587, { 1, 0 }
  uselistorder i64 %574, { 1, 0 }
  uselistorder i64 %571, { 1, 0 }
  uselistorder i64 %558, { 1, 0 }
  uselistorder i64 %555, { 1, 0 }
  uselistorder i64 %542, { 1, 0 }
  uselistorder i64 %539, { 1, 0 }
  uselistorder i64 %526, { 1, 0 }
  uselistorder i64 %523, { 1, 0 }
  uselistorder i64 %512, { 1, 0 }
  uselistorder i64 %509, { 1, 0 }
  uselistorder i64 %496, { 3, 2, 1, 0 }
  uselistorder i64 %480, { 3, 2, 1, 0 }
  uselistorder i128 %471, { 2, 1, 0 }
  uselistorder i64 %storemerge.reload, { 3, 2, 1, 0 }
  uselistorder i64 %453, { 2, 0, 1 }
  uselistorder i128 %441, { 1, 0, 2 }
  uselistorder i64 %storemerge11.reload, { 3, 2, 1, 0 }
  uselistorder i64 %423, { 2, 0, 1 }
  uselistorder i128 %412, { 1, 0, 2 }
  uselistorder i64 %rax.0.reload, { 3, 2, 1, 0 }
  uselistorder i64 %rsi.0.reload, { 1, 0 }
  uselistorder i128 %369, { 1, 0, 2 }
  uselistorder i64 %storemerge12.reload, { 3, 2, 1, 0 }
  uselistorder i64 %351, { 2, 0, 1 }
  uselistorder i128 %339, { 1, 0, 2 }
  uselistorder i64 %333, { 3, 2, 1, 0 }
  uselistorder i128 %327, { 2, 1, 0 }
  uselistorder i64 %rbx.1.reload, { 1, 0 }
  uselistorder i64 %rdi.1.reload, { 1, 0 }
  uselistorder i64 %302, { 3, 0, 2, 1, 5, 4 }
  uselistorder i64 %295, { 1, 0, 2 }
  uselistorder i64 %stack_var_-200.1.reload, { 1, 0 }
  uselistorder i64 %stack_var_-296.1.reload, { 2, 1, 0 }
  uselistorder i64 %stack_var_-304.1.reload, { 1, 0, 3, 2 }
  uselistorder i64 %285, { 1, 0 }
  uselistorder i64 %282, { 1, 0 }
  uselistorder i64 %270, { 1, 0 }
  uselistorder i64 %267, { 1, 0 }
  uselistorder i64 %254, { 1, 0 }
  uselistorder i64 %251, { 1, 0 }
  uselistorder i64 %238, { 1, 0 }
  uselistorder i64 %235, { 1, 0 }
  uselistorder i64 %222, { 1, 0 }
  uselistorder i64 %219, { 1, 0 }
  uselistorder i64 %206, { 1, 0 }
  uselistorder i64 %203, { 1, 0 }
  uselistorder i64 %190, { 1, 0 }
  uselistorder i64 %187, { 1, 0 }
  uselistorder i64 %storemerge13.reload, { 3, 2, 1, 0 }
  uselistorder i64 %161, { 2, 0, 1 }
  uselistorder i64 %144, { 3, 2, 1, 0 }
  uselistorder i128 %134, { 2, 1, 0 }
  uselistorder i64 %storemerge14.reload, { 3, 2, 1, 0 }
  uselistorder i64 %112, { 2, 0, 1 }
  uselistorder i128 %100, { 1, 0, 2 }
  uselistorder i64 %storemerge15.reload, { 3, 2, 1, 0 }
  uselistorder i64 %82, { 2, 0, 1 }
  uselistorder i128 %71, { 1, 0, 2 }
  uselistorder i64 %65, { 3, 2, 1, 0 }
  uselistorder i128 %59, { 2, 1, 0 }
  uselistorder i64 %rbx.0.reload, { 1, 0 }
  uselistorder i64 %rdi.0.reload, { 1, 0 }
  uselistorder i64 %33, { 3, 0, 2, 1, 5, 4 }
  uselistorder i128 %17, { 2, 1, 0, 3 }
  uselistorder i64 %14, { 3, 0, 2, 1 }
  uselistorder i128* %stack_var_-160, { 1, 2, 0 }
  uselistorder i128* %stack_var_-320, { 5, 3, 1, 2, 4, 0 }
  uselistorder i128* %stack_var_-224, { 2, 1, 4, 3, 0 }
  uselistorder i128* %stack_var_-256, { 4, 3, 5, 2, 1, 0 }
  uselistorder i64 %12, { 3, 0, 2, 1 }
  uselistorder i128* %stack_var_-192, { 2, 1, 0, 3 }
  uselistorder i128* %stack_var_-288, { 2, 3, 0, 4, 5, 6, 1, 7 }
  uselistorder i128* %stack_var_-384, { 0, 1, 3, 2, 4, 5, 6, 8, 7, 9 }
  uselistorder i64 %11, { 7, 0, 1, 2, 6, 3, 4, 5 }
  uselistorder i128* %stack_var_-416, { 0, 1, 3, 2, 4, 5, 6, 8, 7, 9 }
  uselistorder i64 %10, { 7, 0, 1, 2, 6, 3, 4, 5 }
  uselistorder i128* %stack_var_-352, { 1, 2, 4, 3, 5, 6, 7, 0, 8 }
  uselistorder i128* %stack_var_-448, { 0, 1, 2, 3, 4, 5, 6, 7, 9, 8, 10 }
  uselistorder i64 %9, { 7, 0, 5, 1, 6, 2, 3, 4 }
  uselistorder i64 %8, { 5, 0, 1, 2, 4, 3 }
  uselistorder i64 %7, { 3, 0, 2, 1 }
  uselistorder i64* %stack_var_-96, { 2, 0, 3, 1 }
  uselistorder i64* %stack_var_-128, { 0, 2, 3, 1 }
  uselistorder i64 %6, { 1, 0 }
  uselistorder i64 %5, { 3, 0, 2, 1 }
  uselistorder i64 %4, { 1, 0 }
  uselistorder i64 %3, { 1, 0 }
  uselistorder i64** %.pre-phi49.reg2mem, { 0, 2, 1 }
  uselistorder i64** %.pre-phi45.reg2mem, { 0, 2, 1 }
  uselistorder i64* %.pre-phi43.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rbx.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %storemerge15.reg2mem, { 0, 2, 1 }
  uselistorder i64* %storemerge14.reg2mem, { 0, 2, 1 }
  uselistorder i64* %storemerge13.reg2mem, { 0, 2, 1 }
  uselistorder i64** %.pre-phi41.reg2mem, { 0, 2, 1 }
  uselistorder i64** %.pre-phi37.reg2mem, { 0, 2, 1 }
  uselistorder i64* %.pre-phi.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rbx.1.reg2mem, { 0, 2, 1 }
  uselistorder i64* %storemerge12.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rsi.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %storemerge11.reg2mem, { 0, 2, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* %1, { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder label %dec_label_pc_1400030dd, { 2, 1, 0, 3, 4 }
}

define i64 @function_140003210(i16* %arg1, i16* %arg2, i16* %arg3, i16* %arg4) local_unnamed_addr {
dec_label_pc_140003210:
  %0 = alloca i128
  %1 = alloca i64
  %rdx.22.reg2mem = alloca i64, !insn.addr !1149
  %rcx.22.reg2mem = alloca i64, !insn.addr !1149
  %rdx.21.reg2mem = alloca i64, !insn.addr !1149
  %rcx.21.reg2mem = alloca i64, !insn.addr !1149
  %rdx.20.reg2mem = alloca i64, !insn.addr !1149
  %rcx.20.reg2mem = alloca i64, !insn.addr !1149
  %rdx.19.reg2mem = alloca i64, !insn.addr !1149
  %rcx.19.reg2mem = alloca i64, !insn.addr !1149
  %rdx.18.reg2mem = alloca i64, !insn.addr !1149
  %rcx.18.reg2mem = alloca i64, !insn.addr !1149
  %rdx.17.reg2mem = alloca i64, !insn.addr !1149
  %rcx.17.reg2mem = alloca i64, !insn.addr !1149
  %rdx.16.reg2mem = alloca i64, !insn.addr !1149
  %rcx.16.reg2mem = alloca i64, !insn.addr !1149
  %rdx.15.reg2mem = alloca i64, !insn.addr !1149
  %rcx.15.reg2mem = alloca i64, !insn.addr !1149
  %rdx.14.reg2mem = alloca i64, !insn.addr !1149
  %rcx.14.reg2mem = alloca i64, !insn.addr !1149
  %rdx.13.reg2mem = alloca i64, !insn.addr !1149
  %rcx.13.reg2mem = alloca i64, !insn.addr !1149
  %rdx.12.reg2mem = alloca i64, !insn.addr !1149
  %rcx.12.reg2mem = alloca i64, !insn.addr !1149
  %rdx.11.reg2mem = alloca i64, !insn.addr !1149
  %rcx.11.reg2mem = alloca i64, !insn.addr !1149
  %rdx.10.reg2mem = alloca i64, !insn.addr !1149
  %rcx.10.reg2mem = alloca i64, !insn.addr !1149
  %rdx.9.reg2mem = alloca i64, !insn.addr !1149
  %rcx.9.reg2mem = alloca i64, !insn.addr !1149
  %rdx.8.reg2mem = alloca i64, !insn.addr !1149
  %rcx.8.reg2mem = alloca i64, !insn.addr !1149
  %storemerge.reg2mem = alloca i64, !insn.addr !1149
  %storemerge6.reg2mem = alloca i64, !insn.addr !1149
  %rbx.1.reg2mem = alloca i64, !insn.addr !1149
  %.pre-phi.reg2mem = alloca i64, !insn.addr !1149
  %.pre-phi35.reg2mem = alloca i64*, !insn.addr !1149
  %.pre-phi39.reg2mem = alloca i64*, !insn.addr !1149
  %rdi.1.reg2mem = alloca i64, !insn.addr !1149
  %rsi.1.reg2mem = alloca i64, !insn.addr !1149
  %xmm0.0.reg2mem = alloca i128, !insn.addr !1149
  %rdx.7.reg2mem = alloca i64, !insn.addr !1149
  %rcx.7.reg2mem = alloca i64, !insn.addr !1149
  %rdx.6.reg2mem = alloca i64, !insn.addr !1149
  %rcx.6.reg2mem = alloca i64, !insn.addr !1149
  %rdx.5.reg2mem = alloca i64, !insn.addr !1149
  %rcx.5.reg2mem = alloca i64, !insn.addr !1149
  %rdx.4.reg2mem = alloca i64, !insn.addr !1149
  %rcx.4.reg2mem = alloca i64, !insn.addr !1149
  %rdx.3.reg2mem = alloca i64, !insn.addr !1149
  %rcx.3.reg2mem = alloca i64, !insn.addr !1149
  %rdx.2.reg2mem = alloca i64, !insn.addr !1149
  %rcx.2.reg2mem = alloca i64, !insn.addr !1149
  %rdx.1.reg2mem = alloca i64, !insn.addr !1149
  %rcx.1.reg2mem = alloca i64, !insn.addr !1149
  %rdx.0.reg2mem = alloca i64, !insn.addr !1149
  %rcx.0.reg2mem = alloca i64, !insn.addr !1149
  %storemerge7.reg2mem = alloca i64, !insn.addr !1149
  %storemerge8.reg2mem = alloca i64, !insn.addr !1149
  %storemerge9.reg2mem = alloca i64, !insn.addr !1149
  %storemerge10.reg2mem = alloca i64, !insn.addr !1149
  %rbx.0.reg2mem = alloca i64, !insn.addr !1149
  %.pre-phi41.reg2mem = alloca i64, !insn.addr !1149
  %.pre-phi43.reg2mem = alloca i64*, !insn.addr !1149
  %.pre-phi47.reg2mem = alloca i64*, !insn.addr !1149
  %rdi.0.reg2mem = alloca i64, !insn.addr !1149
  %rsi.0.reg2mem = alloca i64, !insn.addr !1149
  %2 = ptrtoint i16* %arg4 to i64
  %3 = ptrtoint i16* %arg3 to i64
  %4 = ptrtoint i16* %arg2 to i64
  %5 = load i64, i64* %1
  %6 = load i64, i64* %1
  %7 = load i64, i64* %1
  %8 = load i64, i64* %1
  %9 = load i64, i64* %1
  %10 = load i128, i128* %0
  %11 = load i128, i128* %0
  %stack_var_-240 = alloca i128, align 8
  %stack_var_-112 = alloca i64, align 8
  %stack_var_-176 = alloca i64, align 8
  %12 = load i64, i64* %1
  %13 = load i64, i64* %1
  %14 = load i64, i64* %1
  %15 = load i64, i64* %1
  %16 = load i64, i64* %1
  %stack_var_-464 = alloca i128, align 8
  %stack_var_-368 = alloca i128, align 8
  %17 = load i64, i64* %1
  %stack_var_-432 = alloca i128, align 8
  %18 = load i64, i64* %1
  %stack_var_-528 = alloca i128, align 8
  %stack_var_-336 = alloca i128, align 8
  %19 = load i64, i64* %1
  %stack_var_-496 = alloca i128, align 8
  %stack_var_-304 = alloca i128, align 8
  %stack_var_-400 = alloca i128, align 8
  %stack_var_-272 = alloca i64, align 8
  %stack_var_-208 = alloca i128, align 8
  %20 = load i64, i64* %1
  %21 = load i32, i32* @global_var_14000c010, align 4, !insn.addr !1150
  %22 = load i128, i128* @global_var_140008dd0, align 8, !insn.addr !1151
  %23 = call i128 @__asm_movdqa(i128 %22), !insn.addr !1151
  %24 = call i64 @__asm_movdqu(i128 %23), !insn.addr !1152
  store i128 0, i128* %stack_var_-208, align 8, !insn.addr !1153
  %25 = add i64 %2, 16, !insn.addr !1154
  %26 = inttoptr i64 %25 to i64*, !insn.addr !1154
  %27 = load i64, i64* %26, align 8, !insn.addr !1154
  %28 = icmp eq i64 %27, 0, !insn.addr !1154
  %29 = icmp eq i1 %28, false, !insn.addr !1155
  store i128 %23, i128* %xmm0.0.reg2mem, !insn.addr !1155
  br i1 %29, label %dec_label_pc_140003904, label %dec_label_pc_140003278, !insn.addr !1155

dec_label_pc_140003278:                           ; preds = %dec_label_pc_140003210
  %30 = call i64 @function_1400020b0(i64* nonnull %stack_var_-272), !insn.addr !1156
  %31 = add i64 %30, 24, !insn.addr !1157
  %32 = inttoptr i64 %31 to i64*, !insn.addr !1157
  %33 = load i64, i64* %32, align 8, !insn.addr !1157
  %34 = icmp ult i64 %33, 8, !insn.addr !1157
  store i64 %30, i64* %rsi.0.reg2mem, !insn.addr !1158
  br i1 %34, label %dec_label_pc_14000328a, label %dec_label_pc_140003287, !insn.addr !1158

dec_label_pc_140003287:                           ; preds = %dec_label_pc_140003278
  %35 = inttoptr i64 %30 to i64*, !insn.addr !1159
  %36 = load i64, i64* %35, align 8, !insn.addr !1159
  store i64 %36, i64* %rsi.0.reg2mem, !insn.addr !1159
  br label %dec_label_pc_14000328a, !insn.addr !1159

dec_label_pc_14000328a:                           ; preds = %dec_label_pc_140003287, %dec_label_pc_140003278
  %rsi.0.reload = load i64, i64* %rsi.0.reg2mem
  %37 = bitcast i128* %stack_var_-400 to i64*, !insn.addr !1160
  %38 = call i64 @function_1400060a0(i64* nonnull %37), !insn.addr !1160
  %39 = add i64 %38, 16
  %40 = inttoptr i64 %39 to i64*
  %41 = load i64, i64* %40, align 8, !insn.addr !1161
  %42 = add i64 %38, 24
  %43 = inttoptr i64 %42 to i64*
  %44 = load i64, i64* %43, align 8, !insn.addr !1162
  %45 = sub i64 %44, %41, !insn.addr !1163
  %46 = icmp ult i64 %45, 10, !insn.addr !1164
  br i1 %46, label %dec_label_pc_1400032de, label %dec_label_pc_1400032ad, !insn.addr !1165

dec_label_pc_1400032ad:                           ; preds = %dec_label_pc_14000328a
  %47 = add i64 %41, 10, !insn.addr !1166
  store i64 %47, i64* %40, align 8, !insn.addr !1167
  %48 = icmp ult i64 %44, 8, !insn.addr !1168
  store i64 %38, i64* %rdi.0.reg2mem, !insn.addr !1169
  br i1 %48, label %dec_label_pc_1400032c1, label %dec_label_pc_1400032be, !insn.addr !1169

dec_label_pc_1400032be:                           ; preds = %dec_label_pc_1400032ad
  %49 = inttoptr i64 %38 to i64*, !insn.addr !1170
  %50 = load i64, i64* %49, align 8, !insn.addr !1170
  store i64 %50, i64* %rdi.0.reg2mem, !insn.addr !1170
  br label %dec_label_pc_1400032c1, !insn.addr !1170

dec_label_pc_1400032c1:                           ; preds = %dec_label_pc_1400032be, %dec_label_pc_1400032ad
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %51 = mul i64 %41, 2, !insn.addr !1171
  %52 = add i64 %rdi.0.reload, %51, !insn.addr !1171
  %53 = inttoptr i64 %52 to i64*, !insn.addr !1172
  %54 = call i64* @memmove(i64* %53, i64* bitcast ([11 x i16]* @global_var_140008b10 to i64*), i32 20), !insn.addr !1172
  %55 = mul i64 %47, 2, !insn.addr !1173
  %56 = add i64 %rdi.0.reload, %55, !insn.addr !1173
  %57 = inttoptr i64 %56 to i16*, !insn.addr !1173
  store i16 0, i16* %57, align 2, !insn.addr !1173
  store i64* %43, i64** %.pre-phi47.reg2mem, !insn.addr !1174
  store i64* %40, i64** %.pre-phi43.reg2mem, !insn.addr !1174
  store i64 %39, i64* %.pre-phi41.reg2mem, !insn.addr !1174
  store i64 %38, i64* %rbx.0.reg2mem, !insn.addr !1174
  br label %dec_label_pc_1400032fe, !insn.addr !1174

dec_label_pc_1400032de:                           ; preds = %dec_label_pc_14000328a
  %58 = call i64 @function_1400061b0(i64 %38, i64 10), !insn.addr !1175
  %.pre40 = add i64 %58, 16, !insn.addr !1176
  %.pre42 = inttoptr i64 %.pre40 to i64*, !insn.addr !1177
  %.pre44 = add i64 %58, 24, !insn.addr !1178
  %.pre46 = inttoptr i64 %.pre44 to i64*, !insn.addr !1178
  store i64* %.pre46, i64** %.pre-phi47.reg2mem, !insn.addr !1179
  store i64* %.pre42, i64** %.pre-phi43.reg2mem, !insn.addr !1179
  store i64 %.pre40, i64* %.pre-phi41.reg2mem, !insn.addr !1179
  store i64 %58, i64* %rbx.0.reg2mem, !insn.addr !1179
  br label %dec_label_pc_1400032fe, !insn.addr !1179

dec_label_pc_1400032fe:                           ; preds = %dec_label_pc_1400032de, %dec_label_pc_1400032c1
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %.pre-phi41.reload = load i64, i64* %.pre-phi41.reg2mem
  %.pre-phi43.reload = load i64*, i64** %.pre-phi43.reg2mem
  %.pre-phi47.reload = load i64*, i64** %.pre-phi47.reg2mem
  %59 = call i128 @__asm_xorps(i128 %23, i128 %23), !insn.addr !1180
  %60 = call i64 @__asm_movdqu(i128 %59), !insn.addr !1181
  %61 = sext i64 %60 to i128, !insn.addr !1181
  %62 = inttoptr i64 %rbx.0.reload to i128*, !insn.addr !1182
  %63 = load i128, i128* %62, align 8, !insn.addr !1182
  %64 = call i128 @__asm_movups(i128 %63), !insn.addr !1182
  %65 = load i128, i128* %stack_var_-304, align 8, !insn.addr !1183
  call void @__asm_movups.2(i128 %65, i128 %64), !insn.addr !1183
  %66 = inttoptr i64 %.pre-phi41.reload to i128*, !insn.addr !1176
  %67 = load i128, i128* %66, align 8, !insn.addr !1176
  %68 = call i128 @__asm_movups(i128 %67), !insn.addr !1176
  call void @__asm_movups.2(i128 %61, i128 %68), !insn.addr !1184
  store i64 0, i64* %.pre-phi43.reload, align 8, !insn.addr !1177
  store i64 7, i64* %.pre-phi47.reload, align 8, !insn.addr !1178
  %69 = inttoptr i64 %rbx.0.reload to i16*, !insn.addr !1185
  store i16 0, i16* %69, align 2, !insn.addr !1185
  %70 = call i64 @function_140005bd0(i128* nonnull %stack_var_-304, i64 %4), !insn.addr !1186
  %71 = call i128 @__asm_xorps(i128 %64, i128 %64), !insn.addr !1187
  %72 = call i64 @__asm_movdqu(i128 %71), !insn.addr !1188
  %73 = sext i64 %72 to i128, !insn.addr !1188
  %74 = inttoptr i64 %70 to i128*, !insn.addr !1189
  %75 = load i128, i128* %74, align 8, !insn.addr !1189
  %76 = call i128 @__asm_movups(i128 %75), !insn.addr !1189
  %77 = load i128, i128* %stack_var_-496, align 8, !insn.addr !1190
  call void @__asm_movups.2(i128 %77, i128 %76), !insn.addr !1190
  %78 = add i64 %70, 16, !insn.addr !1191
  %79 = inttoptr i64 %78 to i128*, !insn.addr !1191
  %80 = load i128, i128* %79, align 8, !insn.addr !1191
  %81 = call i128 @__asm_movups(i128 %80), !insn.addr !1191
  call void @__asm_movups.2(i128 %73, i128 %81), !insn.addr !1192
  %82 = inttoptr i64 %78 to i64*, !insn.addr !1193
  store i64 0, i64* %82, align 8, !insn.addr !1193
  %83 = add i64 %70, 24, !insn.addr !1194
  %84 = inttoptr i64 %83 to i64*, !insn.addr !1194
  store i64 7, i64* %84, align 8, !insn.addr !1194
  %85 = inttoptr i64 %70 to i16*, !insn.addr !1195
  store i16 0, i16* %85, align 2, !insn.addr !1195
  %86 = sub i64 %19, %72, !insn.addr !1196
  %87 = icmp ult i64 %86, 12, !insn.addr !1197
  %88 = ptrtoint i128* %stack_var_-496 to i64
  br i1 %87, label %dec_label_pc_1400033aa, label %dec_label_pc_140003370, !insn.addr !1198

dec_label_pc_140003370:                           ; preds = %dec_label_pc_1400032fe
  %89 = icmp ult i64 %19, 8, !insn.addr !1199
  %90 = icmp eq i1 %89, false, !insn.addr !1200
  %91 = load i128, i128* %stack_var_-496, align 8, !insn.addr !1200
  %92 = trunc i128 %91 to i64, !insn.addr !1200
  %93 = select i1 %90, i64 %92, i64 %88, !insn.addr !1200
  %94 = mul i64 %72, 2, !insn.addr !1201
  %95 = add i64 %93, %94
  %96 = inttoptr i64 %95 to i64*, !insn.addr !1202
  %97 = call i64* @memmove(i64* %96, i64* bitcast ([13 x i16]* @global_var_140008a80 to i64*), i32 24), !insn.addr !1202
  %98 = add i64 %95, 24, !insn.addr !1203
  %99 = inttoptr i64 %98 to i16*, !insn.addr !1203
  store i16 0, i16* %99, align 2, !insn.addr !1203
  store i64 %88, i64* %storemerge10.reg2mem, !insn.addr !1204
  br label %dec_label_pc_1400033c9, !insn.addr !1204

dec_label_pc_1400033aa:                           ; preds = %dec_label_pc_1400032fe
  %100 = call i64 @function_1400061b0(i64 %88, i64 12), !insn.addr !1205
  store i64 %100, i64* %storemerge10.reg2mem, !insn.addr !1205
  br label %dec_label_pc_1400033c9, !insn.addr !1205

dec_label_pc_1400033c9:                           ; preds = %dec_label_pc_1400033aa, %dec_label_pc_140003370
  %storemerge10.reload = load i64, i64* %storemerge10.reg2mem
  %101 = call i128 @__asm_xorps(i128 %76, i128 %76), !insn.addr !1206
  %102 = call i64 @__asm_movdqu(i128 %101), !insn.addr !1207
  %103 = sext i64 %102 to i128, !insn.addr !1207
  %104 = inttoptr i64 %storemerge10.reload to i128*, !insn.addr !1208
  %105 = load i128, i128* %104, align 8, !insn.addr !1208
  %106 = call i128 @__asm_movups(i128 %105), !insn.addr !1208
  %107 = load i128, i128* %stack_var_-336, align 8, !insn.addr !1209
  call void @__asm_movups.2(i128 %107, i128 %106), !insn.addr !1209
  %108 = add i64 %storemerge10.reload, 16, !insn.addr !1210
  %109 = inttoptr i64 %108 to i128*, !insn.addr !1210
  %110 = load i128, i128* %109, align 8, !insn.addr !1210
  %111 = call i128 @__asm_movups(i128 %110), !insn.addr !1210
  call void @__asm_movups.2(i128 %103, i128 %111), !insn.addr !1211
  %112 = inttoptr i64 %108 to i64*, !insn.addr !1212
  store i64 0, i64* %112, align 8, !insn.addr !1212
  %113 = add i64 %storemerge10.reload, 24, !insn.addr !1213
  %114 = inttoptr i64 %113 to i64*, !insn.addr !1213
  store i64 7, i64* %114, align 8, !insn.addr !1213
  %115 = inttoptr i64 %storemerge10.reload to i16*, !insn.addr !1214
  store i16 0, i16* %115, align 2, !insn.addr !1214
  %116 = call i64 @function_140005bd0(i128* nonnull %stack_var_-336, i64 %3), !insn.addr !1215
  %117 = call i128 @__asm_xorps(i128 %106, i128 %106), !insn.addr !1216
  %118 = call i64 @__asm_movdqu(i128 %117), !insn.addr !1217
  %119 = sext i64 %118 to i128, !insn.addr !1217
  %120 = inttoptr i64 %116 to i128*, !insn.addr !1218
  %121 = load i128, i128* %120, align 8, !insn.addr !1218
  %122 = call i128 @__asm_movups(i128 %121), !insn.addr !1218
  %123 = load i128, i128* %stack_var_-528, align 8, !insn.addr !1219
  call void @__asm_movups.2(i128 %123, i128 %122), !insn.addr !1219
  %124 = add i64 %116, 16, !insn.addr !1220
  %125 = inttoptr i64 %124 to i128*, !insn.addr !1220
  %126 = load i128, i128* %125, align 8, !insn.addr !1220
  %127 = call i128 @__asm_movups(i128 %126), !insn.addr !1220
  call void @__asm_movups.2(i128 %119, i128 %127), !insn.addr !1221
  %128 = inttoptr i64 %124 to i64*, !insn.addr !1222
  store i64 0, i64* %128, align 8, !insn.addr !1222
  %129 = add i64 %116, 24, !insn.addr !1223
  %130 = inttoptr i64 %129 to i64*, !insn.addr !1223
  store i64 7, i64* %130, align 8, !insn.addr !1223
  %131 = inttoptr i64 %116 to i16*, !insn.addr !1224
  store i16 0, i16* %131, align 2, !insn.addr !1224
  %132 = icmp eq i64 %18, %118, !insn.addr !1225
  %133 = ptrtoint i128* %stack_var_-528 to i64
  br i1 %132, label %dec_label_pc_140003476, label %dec_label_pc_14000343c, !insn.addr !1226

dec_label_pc_14000343c:                           ; preds = %dec_label_pc_1400033c9
  %134 = icmp ult i64 %18, 8, !insn.addr !1227
  %135 = icmp eq i1 %134, false, !insn.addr !1228
  %136 = load i128, i128* %stack_var_-528, align 8, !insn.addr !1228
  %137 = trunc i128 %136 to i64, !insn.addr !1228
  %138 = select i1 %135, i64 %137, i64 %133, !insn.addr !1228
  %139 = mul i64 %118, 2, !insn.addr !1229
  %140 = add i64 %138, %139
  %141 = inttoptr i64 %140 to i64*, !insn.addr !1230
  %142 = call i64* @memmove(i64* %141, i64* nonnull @global_var_140008a68, i32 2), !insn.addr !1230
  %143 = add i64 %140, 2, !insn.addr !1231
  %144 = inttoptr i64 %143 to i16*, !insn.addr !1231
  store i16 0, i16* %144, align 2, !insn.addr !1231
  store i64 %133, i64* %storemerge9.reg2mem, !insn.addr !1232
  br label %dec_label_pc_140003495, !insn.addr !1232

dec_label_pc_140003476:                           ; preds = %dec_label_pc_1400033c9
  %145 = call i64 @function_1400061b0(i64 %133, i64 1), !insn.addr !1233
  store i64 %145, i64* %storemerge9.reg2mem, !insn.addr !1233
  br label %dec_label_pc_140003495, !insn.addr !1233

dec_label_pc_140003495:                           ; preds = %dec_label_pc_140003476, %dec_label_pc_14000343c
  %storemerge9.reload = load i64, i64* %storemerge9.reg2mem
  %146 = call i128 @__asm_xorps(i128 %122, i128 %122), !insn.addr !1234
  %147 = call i64 @__asm_movdqu(i128 %146), !insn.addr !1235
  %148 = sext i64 %147 to i128, !insn.addr !1235
  %149 = inttoptr i64 %storemerge9.reload to i128*, !insn.addr !1236
  %150 = load i128, i128* %149, align 8, !insn.addr !1236
  %151 = call i128 @__asm_movups(i128 %150), !insn.addr !1236
  %152 = load i128, i128* %stack_var_-432, align 8, !insn.addr !1237
  call void @__asm_movups.2(i128 %152, i128 %151), !insn.addr !1237
  %153 = add i64 %storemerge9.reload, 16, !insn.addr !1238
  %154 = inttoptr i64 %153 to i128*, !insn.addr !1238
  %155 = load i128, i128* %154, align 8, !insn.addr !1238
  %156 = call i128 @__asm_movups(i128 %155), !insn.addr !1238
  call void @__asm_movups.2(i128 %148, i128 %156), !insn.addr !1239
  %157 = inttoptr i64 %153 to i64*, !insn.addr !1240
  store i64 0, i64* %157, align 8, !insn.addr !1240
  %158 = add i64 %storemerge9.reload, 24, !insn.addr !1241
  %159 = inttoptr i64 %158 to i64*, !insn.addr !1241
  store i64 7, i64* %159, align 8, !insn.addr !1241
  %160 = inttoptr i64 %storemerge9.reload to i16*, !insn.addr !1242
  store i16 0, i16* %160, align 2, !insn.addr !1242
  %161 = sub i64 %17, %147, !insn.addr !1243
  %162 = icmp ult i64 %161, 6, !insn.addr !1244
  %163 = ptrtoint i128* %stack_var_-432 to i64
  br i1 %162, label %dec_label_pc_140003506, label %dec_label_pc_1400034d0, !insn.addr !1245

dec_label_pc_1400034d0:                           ; preds = %dec_label_pc_140003495
  %164 = icmp ult i64 %17, 8, !insn.addr !1246
  %165 = icmp eq i1 %164, false, !insn.addr !1247
  %166 = load i128, i128* %stack_var_-432, align 8, !insn.addr !1247
  %167 = trunc i128 %166 to i64, !insn.addr !1247
  %168 = select i1 %165, i64 %167, i64 %163, !insn.addr !1247
  %169 = mul i64 %147, 2, !insn.addr !1248
  %170 = add i64 %168, %169
  %171 = inttoptr i64 %170 to i64*, !insn.addr !1249
  %172 = call i64* @memmove(i64* %171, i64* bitcast ([7 x i16]* @global_var_140008a70 to i64*), i32 12), !insn.addr !1249
  %173 = add i64 %170, 12, !insn.addr !1250
  %174 = inttoptr i64 %173 to i16*, !insn.addr !1250
  store i16 0, i16* %174, align 2, !insn.addr !1250
  store i64 %163, i64* %storemerge8.reg2mem, !insn.addr !1251
  br label %dec_label_pc_140003524, !insn.addr !1251

dec_label_pc_140003506:                           ; preds = %dec_label_pc_140003495
  %175 = call i64 @function_1400061b0(i64 %163, i64 6), !insn.addr !1252
  store i64 %175, i64* %storemerge8.reg2mem, !insn.addr !1252
  br label %dec_label_pc_140003524, !insn.addr !1252

dec_label_pc_140003524:                           ; preds = %dec_label_pc_140003506, %dec_label_pc_1400034d0
  %storemerge8.reload = load i64, i64* %storemerge8.reg2mem
  %176 = call i128 @__asm_xorps(i128 %151, i128 %151), !insn.addr !1253
  %177 = call i64 @__asm_movdqu(i128 %176), !insn.addr !1254
  %178 = sext i64 %177 to i128, !insn.addr !1254
  %179 = inttoptr i64 %storemerge8.reload to i128*, !insn.addr !1255
  %180 = load i128, i128* %179, align 8, !insn.addr !1255
  %181 = call i128 @__asm_movups(i128 %180), !insn.addr !1255
  %182 = load i128, i128* %stack_var_-368, align 8, !insn.addr !1256
  call void @__asm_movups.2(i128 %182, i128 %181), !insn.addr !1256
  %183 = add i64 %storemerge8.reload, 16, !insn.addr !1257
  %184 = inttoptr i64 %183 to i128*, !insn.addr !1257
  %185 = load i128, i128* %184, align 8, !insn.addr !1257
  %186 = call i128 @__asm_movups(i128 %185), !insn.addr !1257
  call void @__asm_movups.2(i128 %178, i128 %186), !insn.addr !1258
  %187 = inttoptr i64 %183 to i64*, !insn.addr !1259
  store i64 0, i64* %187, align 8, !insn.addr !1259
  %188 = add i64 %storemerge8.reload, 24, !insn.addr !1260
  %189 = inttoptr i64 %188 to i64*, !insn.addr !1260
  store i64 7, i64* %189, align 8, !insn.addr !1260
  %190 = inttoptr i64 %storemerge8.reload to i16*, !insn.addr !1261
  store i16 0, i16* %190, align 2, !insn.addr !1261
  %191 = call i64 @function_140006380(i128* nonnull %stack_var_-368, i64 %rsi.0.reload), !insn.addr !1262
  %192 = call i128 @__asm_xorps(i128 %181, i128 %181), !insn.addr !1263
  %193 = call i64 @__asm_movdqu(i128 %192), !insn.addr !1264
  %194 = sext i64 %193 to i128, !insn.addr !1264
  %195 = inttoptr i64 %191 to i128*, !insn.addr !1265
  %196 = load i128, i128* %195, align 8, !insn.addr !1265
  %197 = call i128 @__asm_movups(i128 %196), !insn.addr !1265
  %198 = load i128, i128* %stack_var_-464, align 8, !insn.addr !1266
  call void @__asm_movups.2(i128 %198, i128 %197), !insn.addr !1266
  %199 = add i64 %191, 16, !insn.addr !1267
  %200 = inttoptr i64 %199 to i128*, !insn.addr !1267
  %201 = load i128, i128* %200, align 8, !insn.addr !1267
  %202 = call i128 @__asm_movups(i128 %201), !insn.addr !1267
  call void @__asm_movups.2(i128 %194, i128 %202), !insn.addr !1268
  %203 = inttoptr i64 %199 to i64*, !insn.addr !1269
  store i64 0, i64* %203, align 8, !insn.addr !1269
  %204 = add i64 %191, 24, !insn.addr !1270
  %205 = inttoptr i64 %204 to i64*, !insn.addr !1270
  store i64 7, i64* %205, align 8, !insn.addr !1270
  %206 = inttoptr i64 %191 to i16*, !insn.addr !1271
  store i16 0, i16* %206, align 2, !insn.addr !1271
  %207 = icmp eq i64 %16, %193, !insn.addr !1272
  %208 = ptrtoint i128* %stack_var_-464 to i64
  br i1 %207, label %dec_label_pc_1400035c8, label %dec_label_pc_140003592, !insn.addr !1273

dec_label_pc_140003592:                           ; preds = %dec_label_pc_140003524
  %209 = icmp ult i64 %16, 8, !insn.addr !1274
  %210 = icmp eq i1 %209, false, !insn.addr !1275
  %211 = load i128, i128* %stack_var_-464, align 8, !insn.addr !1275
  %212 = trunc i128 %211 to i64, !insn.addr !1275
  %213 = select i1 %210, i64 %212, i64 %208, !insn.addr !1275
  %214 = mul i64 %193, 2, !insn.addr !1276
  %215 = add i64 %213, %214
  %216 = inttoptr i64 %215 to i64*, !insn.addr !1277
  %217 = call i64* @memmove(i64* %216, i64* nonnull @global_var_140008a68, i32 2), !insn.addr !1277
  %218 = add i64 %215, 2, !insn.addr !1278
  %219 = inttoptr i64 %218 to i16*, !insn.addr !1278
  store i16 0, i16* %219, align 2, !insn.addr !1278
  store i64 %208, i64* %storemerge7.reg2mem, !insn.addr !1279
  br label %dec_label_pc_1400035e6, !insn.addr !1279

dec_label_pc_1400035c8:                           ; preds = %dec_label_pc_140003524
  %220 = call i64 @function_1400061b0(i64 %208, i64 1), !insn.addr !1280
  store i64 %220, i64* %storemerge7.reg2mem, !insn.addr !1280
  br label %dec_label_pc_1400035e6, !insn.addr !1280

dec_label_pc_1400035e6:                           ; preds = %dec_label_pc_1400035c8, %dec_label_pc_140003592
  %221 = sext i64 %24 to i128, !insn.addr !1152
  %storemerge7.reload = load i64, i64* %storemerge7.reg2mem
  %222 = inttoptr i64 %storemerge7.reload to i128*, !insn.addr !1281
  %223 = load i128, i128* %222, align 8, !insn.addr !1281
  %224 = call i128 @__asm_movups(i128 %223), !insn.addr !1281
  %225 = add i64 %storemerge7.reload, 16, !insn.addr !1282
  %226 = inttoptr i64 %225 to i128*, !insn.addr !1282
  %227 = load i128, i128* %226, align 8, !insn.addr !1282
  %228 = call i128 @__asm_movups(i128 %227), !insn.addr !1282
  %229 = inttoptr i64 %225 to i64*, !insn.addr !1283
  store i64 0, i64* %229, align 8, !insn.addr !1283
  %230 = add i64 %storemerge7.reload, 24, !insn.addr !1284
  %231 = inttoptr i64 %230 to i64*, !insn.addr !1284
  store i64 7, i64* %231, align 8, !insn.addr !1284
  %232 = inttoptr i64 %storemerge7.reload to i16*, !insn.addr !1285
  store i16 0, i16* %232, align 2, !insn.addr !1285
  call void @__asm_movups.2(i128 0, i128 %224), !insn.addr !1286
  call void @__asm_movups.2(i128 %221, i128 %228), !insn.addr !1287
  %233 = icmp ult i64 %16, 8, !insn.addr !1288
  br i1 %233, label %dec_label_pc_14000364e, label %dec_label_pc_140003615, !insn.addr !1289

dec_label_pc_140003615:                           ; preds = %dec_label_pc_1400035e6
  %234 = mul i64 %16, 2, !insn.addr !1290
  %235 = add i64 %234, 2, !insn.addr !1290
  %236 = load i128, i128* %stack_var_-464, align 8, !insn.addr !1291
  %237 = trunc i128 %236 to i64, !insn.addr !1291
  %238 = icmp ult i64 %235, 4096, !insn.addr !1292
  store i64 %237, i64* %rcx.0.reg2mem, !insn.addr !1293
  store i64 %235, i64* %rdx.0.reg2mem, !insn.addr !1293
  br i1 %238, label %dec_label_pc_140003649, label %dec_label_pc_14000362d, !insn.addr !1293

dec_label_pc_14000362d:                           ; preds = %dec_label_pc_140003615
  %239 = add i64 %234, 41, !insn.addr !1294
  %240 = add i64 %237, -8
  %241 = inttoptr i64 %240 to i64*, !insn.addr !1295
  %242 = load i64, i64* %241, align 8, !insn.addr !1295
  %243 = sub i64 %240, %242, !insn.addr !1296
  %244 = icmp ult i64 %243, 32
  store i64 %242, i64* %rcx.0.reg2mem, !insn.addr !1297
  store i64 %239, i64* %rdx.0.reg2mem, !insn.addr !1297
  br i1 %244, label %dec_label_pc_140003649, label %dec_label_pc_140003642, !insn.addr !1297

dec_label_pc_140003642:                           ; preds = %dec_label_pc_14000362d
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !1298
  %245 = call i64 @__asm_int3(), !insn.addr !1299
  store i64 %242, i64* %rcx.0.reg2mem, !insn.addr !1299
  store i64 %239, i64* %rdx.0.reg2mem, !insn.addr !1299
  br label %dec_label_pc_140003649, !insn.addr !1299

dec_label_pc_140003649:                           ; preds = %dec_label_pc_140003642, %dec_label_pc_14000362d, %dec_label_pc_140003615
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %246 = call i64 @function_1400065d0(i64 %rcx.0.reload, i64 %rdx.0.reload), !insn.addr !1300
  br label %dec_label_pc_14000364e, !insn.addr !1300

dec_label_pc_14000364e:                           ; preds = %dec_label_pc_140003649, %dec_label_pc_1400035e6
  %247 = call i128 @__asm_movdqa(i128 %22), !insn.addr !1301
  %248 = call i64 @__asm_movdqu(i128 %247), !insn.addr !1302
  store i128 0, i128* %stack_var_-464, align 8, !insn.addr !1303
  %249 = icmp ult i64 %20, 8, !insn.addr !1304
  br i1 %249, label %dec_label_pc_1400036a3, label %dec_label_pc_14000366a, !insn.addr !1305

dec_label_pc_14000366a:                           ; preds = %dec_label_pc_14000364e
  %250 = mul i64 %20, 2, !insn.addr !1306
  %251 = add i64 %250, 2, !insn.addr !1306
  %252 = load i128, i128* %stack_var_-368, align 8, !insn.addr !1307
  %253 = trunc i128 %252 to i64, !insn.addr !1307
  %254 = icmp ult i64 %251, 4096, !insn.addr !1308
  store i64 %253, i64* %rcx.1.reg2mem, !insn.addr !1309
  store i64 %251, i64* %rdx.1.reg2mem, !insn.addr !1309
  br i1 %254, label %dec_label_pc_14000369e, label %dec_label_pc_140003682, !insn.addr !1309

dec_label_pc_140003682:                           ; preds = %dec_label_pc_14000366a
  %255 = add i64 %250, 41, !insn.addr !1310
  %256 = add i64 %253, -8
  %257 = inttoptr i64 %256 to i64*, !insn.addr !1311
  %258 = load i64, i64* %257, align 8, !insn.addr !1311
  %259 = sub i64 %256, %258, !insn.addr !1312
  %260 = icmp ult i64 %259, 32
  store i64 %258, i64* %rcx.1.reg2mem, !insn.addr !1313
  store i64 %255, i64* %rdx.1.reg2mem, !insn.addr !1313
  br i1 %260, label %dec_label_pc_14000369e, label %dec_label_pc_140003697, !insn.addr !1313

dec_label_pc_140003697:                           ; preds = %dec_label_pc_140003682
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !1314
  %261 = call i64 @__asm_int3(), !insn.addr !1315
  store i64 %258, i64* %rcx.1.reg2mem, !insn.addr !1315
  store i64 %255, i64* %rdx.1.reg2mem, !insn.addr !1315
  br label %dec_label_pc_14000369e, !insn.addr !1315

dec_label_pc_14000369e:                           ; preds = %dec_label_pc_140003697, %dec_label_pc_140003682, %dec_label_pc_14000366a
  %rdx.1.reload = load i64, i64* %rdx.1.reg2mem
  %rcx.1.reload = load i64, i64* %rcx.1.reg2mem
  %262 = call i64 @function_1400065d0(i64 %rcx.1.reload, i64 %rdx.1.reload), !insn.addr !1316
  br label %dec_label_pc_1400036a3, !insn.addr !1316

dec_label_pc_1400036a3:                           ; preds = %dec_label_pc_14000369e, %dec_label_pc_14000364e
  %263 = call i128 @__asm_movdqa(i128 %22), !insn.addr !1317
  %264 = call i64 @__asm_movdqu(i128 %263), !insn.addr !1318
  store i128 0, i128* %stack_var_-368, align 8, !insn.addr !1319
  %265 = icmp ult i64 %17, 8, !insn.addr !1320
  br i1 %265, label %dec_label_pc_1400036f8, label %dec_label_pc_1400036bf, !insn.addr !1321

dec_label_pc_1400036bf:                           ; preds = %dec_label_pc_1400036a3
  %266 = mul i64 %17, 2, !insn.addr !1322
  %267 = add i64 %266, 2, !insn.addr !1322
  %268 = load i128, i128* %stack_var_-432, align 8, !insn.addr !1323
  %269 = trunc i128 %268 to i64, !insn.addr !1323
  %270 = icmp ult i64 %267, 4096, !insn.addr !1324
  store i64 %269, i64* %rcx.2.reg2mem, !insn.addr !1325
  store i64 %267, i64* %rdx.2.reg2mem, !insn.addr !1325
  br i1 %270, label %dec_label_pc_1400036f3, label %dec_label_pc_1400036d7, !insn.addr !1325

dec_label_pc_1400036d7:                           ; preds = %dec_label_pc_1400036bf
  %271 = add i64 %266, 41, !insn.addr !1326
  %272 = add i64 %269, -8
  %273 = inttoptr i64 %272 to i64*, !insn.addr !1327
  %274 = load i64, i64* %273, align 8, !insn.addr !1327
  %275 = sub i64 %272, %274, !insn.addr !1328
  %276 = icmp ult i64 %275, 32
  store i64 %274, i64* %rcx.2.reg2mem, !insn.addr !1329
  store i64 %271, i64* %rdx.2.reg2mem, !insn.addr !1329
  br i1 %276, label %dec_label_pc_1400036f3, label %dec_label_pc_1400036ec, !insn.addr !1329

dec_label_pc_1400036ec:                           ; preds = %dec_label_pc_1400036d7
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !1330
  %277 = call i64 @__asm_int3(), !insn.addr !1331
  store i64 %274, i64* %rcx.2.reg2mem, !insn.addr !1331
  store i64 %271, i64* %rdx.2.reg2mem, !insn.addr !1331
  br label %dec_label_pc_1400036f3, !insn.addr !1331

dec_label_pc_1400036f3:                           ; preds = %dec_label_pc_1400036ec, %dec_label_pc_1400036d7, %dec_label_pc_1400036bf
  %rdx.2.reload = load i64, i64* %rdx.2.reg2mem
  %rcx.2.reload = load i64, i64* %rcx.2.reg2mem
  %278 = call i64 @function_1400065d0(i64 %rcx.2.reload, i64 %rdx.2.reload), !insn.addr !1332
  br label %dec_label_pc_1400036f8, !insn.addr !1332

dec_label_pc_1400036f8:                           ; preds = %dec_label_pc_1400036f3, %dec_label_pc_1400036a3
  %279 = call i128 @__asm_movdqa(i128 %22), !insn.addr !1333
  %280 = call i64 @__asm_movdqu(i128 %279), !insn.addr !1334
  store i128 0, i128* %stack_var_-432, align 8, !insn.addr !1335
  %281 = icmp ult i64 %18, 8, !insn.addr !1336
  br i1 %281, label %dec_label_pc_14000374f, label %dec_label_pc_140003715, !insn.addr !1337

dec_label_pc_140003715:                           ; preds = %dec_label_pc_1400036f8
  %282 = mul i64 %18, 2, !insn.addr !1338
  %283 = add i64 %282, 2, !insn.addr !1338
  %284 = load i128, i128* %stack_var_-528, align 8, !insn.addr !1339
  %285 = trunc i128 %284 to i64, !insn.addr !1339
  %286 = icmp ult i64 %283, 4096, !insn.addr !1340
  store i64 %285, i64* %rcx.3.reg2mem, !insn.addr !1341
  store i64 %283, i64* %rdx.3.reg2mem, !insn.addr !1341
  br i1 %286, label %dec_label_pc_14000374a, label %dec_label_pc_14000372e, !insn.addr !1341

dec_label_pc_14000372e:                           ; preds = %dec_label_pc_140003715
  %287 = add i64 %282, 41, !insn.addr !1342
  %288 = add i64 %285, -8
  %289 = inttoptr i64 %288 to i64*, !insn.addr !1343
  %290 = load i64, i64* %289, align 8, !insn.addr !1343
  %291 = sub i64 %288, %290, !insn.addr !1344
  %292 = icmp ult i64 %291, 32
  store i64 %290, i64* %rcx.3.reg2mem, !insn.addr !1345
  store i64 %287, i64* %rdx.3.reg2mem, !insn.addr !1345
  br i1 %292, label %dec_label_pc_14000374a, label %dec_label_pc_140003743, !insn.addr !1345

dec_label_pc_140003743:                           ; preds = %dec_label_pc_14000372e
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !1346
  %293 = call i64 @__asm_int3(), !insn.addr !1347
  store i64 %290, i64* %rcx.3.reg2mem, !insn.addr !1347
  store i64 %287, i64* %rdx.3.reg2mem, !insn.addr !1347
  br label %dec_label_pc_14000374a, !insn.addr !1347

dec_label_pc_14000374a:                           ; preds = %dec_label_pc_140003743, %dec_label_pc_14000372e, %dec_label_pc_140003715
  %rdx.3.reload = load i64, i64* %rdx.3.reg2mem
  %rcx.3.reload = load i64, i64* %rcx.3.reg2mem
  %294 = call i64 @function_1400065d0(i64 %rcx.3.reload, i64 %rdx.3.reload), !insn.addr !1348
  br label %dec_label_pc_14000374f, !insn.addr !1348

dec_label_pc_14000374f:                           ; preds = %dec_label_pc_14000374a, %dec_label_pc_1400036f8
  %295 = call i128 @__asm_movdqa(i128 %22), !insn.addr !1349
  %296 = call i64 @__asm_movdqu(i128 %295), !insn.addr !1350
  store i128 0, i128* %stack_var_-528, align 8, !insn.addr !1351
  %297 = icmp ult i64 %15, 8, !insn.addr !1352
  br i1 %297, label %dec_label_pc_1400037a6, label %dec_label_pc_14000376d, !insn.addr !1353

dec_label_pc_14000376d:                           ; preds = %dec_label_pc_14000374f
  %298 = mul i64 %15, 2, !insn.addr !1354
  %299 = add i64 %298, 2, !insn.addr !1354
  %300 = load i128, i128* %stack_var_-336, align 8, !insn.addr !1355
  %301 = trunc i128 %300 to i64, !insn.addr !1355
  %302 = icmp ult i64 %299, 4096, !insn.addr !1356
  store i64 %301, i64* %rcx.4.reg2mem, !insn.addr !1357
  store i64 %299, i64* %rdx.4.reg2mem, !insn.addr !1357
  br i1 %302, label %dec_label_pc_1400037a1, label %dec_label_pc_140003785, !insn.addr !1357

dec_label_pc_140003785:                           ; preds = %dec_label_pc_14000376d
  %303 = add i64 %298, 41, !insn.addr !1358
  %304 = add i64 %301, -8
  %305 = inttoptr i64 %304 to i64*, !insn.addr !1359
  %306 = load i64, i64* %305, align 8, !insn.addr !1359
  %307 = sub i64 %304, %306, !insn.addr !1360
  %308 = icmp ult i64 %307, 32
  store i64 %306, i64* %rcx.4.reg2mem, !insn.addr !1361
  store i64 %303, i64* %rdx.4.reg2mem, !insn.addr !1361
  br i1 %308, label %dec_label_pc_1400037a1, label %dec_label_pc_14000379a, !insn.addr !1361

dec_label_pc_14000379a:                           ; preds = %dec_label_pc_140003785
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !1362
  %309 = call i64 @__asm_int3(), !insn.addr !1363
  store i64 %306, i64* %rcx.4.reg2mem, !insn.addr !1363
  store i64 %303, i64* %rdx.4.reg2mem, !insn.addr !1363
  br label %dec_label_pc_1400037a1, !insn.addr !1363

dec_label_pc_1400037a1:                           ; preds = %dec_label_pc_14000379a, %dec_label_pc_140003785, %dec_label_pc_14000376d
  %rdx.4.reload = load i64, i64* %rdx.4.reg2mem
  %rcx.4.reload = load i64, i64* %rcx.4.reg2mem
  %310 = call i64 @function_1400065d0(i64 %rcx.4.reload, i64 %rdx.4.reload), !insn.addr !1364
  br label %dec_label_pc_1400037a6, !insn.addr !1364

dec_label_pc_1400037a6:                           ; preds = %dec_label_pc_1400037a1, %dec_label_pc_14000374f
  %311 = call i128 @__asm_movdqa(i128 %22), !insn.addr !1365
  %312 = call i64 @__asm_movdqu(i128 %311), !insn.addr !1366
  store i128 0, i128* %stack_var_-336, align 8, !insn.addr !1367
  %313 = icmp ult i64 %19, 8, !insn.addr !1368
  br i1 %313, label %dec_label_pc_1400037fc, label %dec_label_pc_1400037c2, !insn.addr !1369

dec_label_pc_1400037c2:                           ; preds = %dec_label_pc_1400037a6
  %314 = mul i64 %19, 2, !insn.addr !1370
  %315 = add i64 %314, 2, !insn.addr !1370
  %316 = load i128, i128* %stack_var_-496, align 8, !insn.addr !1371
  %317 = trunc i128 %316 to i64, !insn.addr !1371
  %318 = icmp ult i64 %315, 4096, !insn.addr !1372
  store i64 %317, i64* %rcx.5.reg2mem, !insn.addr !1373
  store i64 %315, i64* %rdx.5.reg2mem, !insn.addr !1373
  br i1 %318, label %dec_label_pc_1400037f7, label %dec_label_pc_1400037db, !insn.addr !1373

dec_label_pc_1400037db:                           ; preds = %dec_label_pc_1400037c2
  %319 = add i64 %314, 41, !insn.addr !1374
  %320 = add i64 %317, -8
  %321 = inttoptr i64 %320 to i64*, !insn.addr !1375
  %322 = load i64, i64* %321, align 8, !insn.addr !1375
  %323 = sub i64 %320, %322, !insn.addr !1376
  %324 = icmp ult i64 %323, 32
  store i64 %322, i64* %rcx.5.reg2mem, !insn.addr !1377
  store i64 %319, i64* %rdx.5.reg2mem, !insn.addr !1377
  br i1 %324, label %dec_label_pc_1400037f7, label %dec_label_pc_1400037f0, !insn.addr !1377

dec_label_pc_1400037f0:                           ; preds = %dec_label_pc_1400037db
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !1378
  %325 = call i64 @__asm_int3(), !insn.addr !1379
  store i64 %322, i64* %rcx.5.reg2mem, !insn.addr !1379
  store i64 %319, i64* %rdx.5.reg2mem, !insn.addr !1379
  br label %dec_label_pc_1400037f7, !insn.addr !1379

dec_label_pc_1400037f7:                           ; preds = %dec_label_pc_1400037f0, %dec_label_pc_1400037db, %dec_label_pc_1400037c2
  %rdx.5.reload = load i64, i64* %rdx.5.reg2mem
  %rcx.5.reload = load i64, i64* %rcx.5.reg2mem
  %326 = call i64 @function_1400065d0(i64 %rcx.5.reload, i64 %rdx.5.reload), !insn.addr !1380
  br label %dec_label_pc_1400037fc, !insn.addr !1380

dec_label_pc_1400037fc:                           ; preds = %dec_label_pc_1400037f7, %dec_label_pc_1400037a6
  %327 = call i128 @__asm_movdqa(i128 %22), !insn.addr !1381
  %328 = call i64 @__asm_movdqu(i128 %327), !insn.addr !1382
  store i128 0, i128* %stack_var_-496, align 8, !insn.addr !1383
  %329 = icmp ult i64 %14, 8, !insn.addr !1384
  br i1 %329, label %dec_label_pc_140003853, label %dec_label_pc_14000381a, !insn.addr !1385

dec_label_pc_14000381a:                           ; preds = %dec_label_pc_1400037fc
  %330 = mul i64 %14, 2, !insn.addr !1386
  %331 = add i64 %330, 2, !insn.addr !1386
  %332 = load i128, i128* %stack_var_-304, align 8, !insn.addr !1387
  %333 = trunc i128 %332 to i64, !insn.addr !1387
  %334 = icmp ult i64 %331, 4096, !insn.addr !1388
  store i64 %333, i64* %rcx.6.reg2mem, !insn.addr !1389
  store i64 %331, i64* %rdx.6.reg2mem, !insn.addr !1389
  br i1 %334, label %dec_label_pc_14000384e, label %dec_label_pc_140003832, !insn.addr !1389

dec_label_pc_140003832:                           ; preds = %dec_label_pc_14000381a
  %335 = add i64 %330, 41, !insn.addr !1390
  %336 = add i64 %333, -8
  %337 = inttoptr i64 %336 to i64*, !insn.addr !1391
  %338 = load i64, i64* %337, align 8, !insn.addr !1391
  %339 = sub i64 %336, %338, !insn.addr !1392
  %340 = icmp ult i64 %339, 32
  store i64 %338, i64* %rcx.6.reg2mem, !insn.addr !1393
  store i64 %335, i64* %rdx.6.reg2mem, !insn.addr !1393
  br i1 %340, label %dec_label_pc_14000384e, label %dec_label_pc_140003847, !insn.addr !1393

dec_label_pc_140003847:                           ; preds = %dec_label_pc_140003832
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !1394
  %341 = call i64 @__asm_int3(), !insn.addr !1395
  store i64 %338, i64* %rcx.6.reg2mem, !insn.addr !1395
  store i64 %335, i64* %rdx.6.reg2mem, !insn.addr !1395
  br label %dec_label_pc_14000384e, !insn.addr !1395

dec_label_pc_14000384e:                           ; preds = %dec_label_pc_140003847, %dec_label_pc_140003832, %dec_label_pc_14000381a
  %rdx.6.reload = load i64, i64* %rdx.6.reg2mem
  %rcx.6.reload = load i64, i64* %rcx.6.reg2mem
  %342 = call i64 @function_1400065d0(i64 %rcx.6.reload, i64 %rdx.6.reload), !insn.addr !1396
  br label %dec_label_pc_140003853, !insn.addr !1396

dec_label_pc_140003853:                           ; preds = %dec_label_pc_14000384e, %dec_label_pc_1400037fc
  %343 = call i128 @__asm_movdqa(i128 %22), !insn.addr !1397
  %344 = call i64 @__asm_movdqu(i128 %343), !insn.addr !1398
  store i128 0, i128* %stack_var_-304, align 8, !insn.addr !1399
  %345 = icmp ult i64 %13, 8, !insn.addr !1400
  br i1 %345, label %dec_label_pc_1400038a8, label %dec_label_pc_14000386f, !insn.addr !1401

dec_label_pc_14000386f:                           ; preds = %dec_label_pc_140003853
  %346 = mul i64 %13, 2, !insn.addr !1402
  %347 = add i64 %346, 2, !insn.addr !1402
  %348 = load i128, i128* %stack_var_-400, align 8, !insn.addr !1403
  %349 = trunc i128 %348 to i64, !insn.addr !1403
  %350 = icmp ult i64 %347, 4096, !insn.addr !1404
  store i64 %349, i64* %rcx.7.reg2mem, !insn.addr !1405
  store i64 %347, i64* %rdx.7.reg2mem, !insn.addr !1405
  br i1 %350, label %dec_label_pc_1400038a3, label %dec_label_pc_140003887, !insn.addr !1405

dec_label_pc_140003887:                           ; preds = %dec_label_pc_14000386f
  %351 = add i64 %346, 41, !insn.addr !1406
  %352 = add i64 %349, -8
  %353 = inttoptr i64 %352 to i64*, !insn.addr !1407
  %354 = load i64, i64* %353, align 8, !insn.addr !1407
  %355 = sub i64 %352, %354, !insn.addr !1408
  %356 = icmp ult i64 %355, 32
  store i64 %354, i64* %rcx.7.reg2mem, !insn.addr !1409
  store i64 %351, i64* %rdx.7.reg2mem, !insn.addr !1409
  br i1 %356, label %dec_label_pc_1400038a3, label %dec_label_pc_14000389c, !insn.addr !1409

dec_label_pc_14000389c:                           ; preds = %dec_label_pc_140003887
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !1410
  %357 = call i64 @__asm_int3(), !insn.addr !1411
  store i64 %354, i64* %rcx.7.reg2mem, !insn.addr !1411
  store i64 %351, i64* %rdx.7.reg2mem, !insn.addr !1411
  br label %dec_label_pc_1400038a3, !insn.addr !1411

dec_label_pc_1400038a3:                           ; preds = %dec_label_pc_14000389c, %dec_label_pc_140003887, %dec_label_pc_14000386f
  %rdx.7.reload = load i64, i64* %rdx.7.reg2mem
  %rcx.7.reload = load i64, i64* %rcx.7.reg2mem
  %358 = call i64 @function_1400065d0(i64 %rcx.7.reload, i64 %rdx.7.reload), !insn.addr !1412
  br label %dec_label_pc_1400038a8, !insn.addr !1412

dec_label_pc_1400038a8:                           ; preds = %dec_label_pc_1400038a3, %dec_label_pc_140003853
  %359 = call i128 @__asm_movdqa(i128 %22), !insn.addr !1413
  %360 = call i64 @__asm_movdqu(i128 %359), !insn.addr !1414
  store i128 0, i128* %stack_var_-400, align 8, !insn.addr !1415
  %361 = icmp ult i64 %12, 8, !insn.addr !1416
  br i1 %361, label %dec_label_pc_1400040b7, label %dec_label_pc_1400038c8, !insn.addr !1417

dec_label_pc_1400038c8:                           ; preds = %dec_label_pc_1400038a8
  %362 = mul i64 %12, 2, !insn.addr !1418
  %363 = add i64 %362, 2, !insn.addr !1418
  %364 = load i64, i64* %stack_var_-272, align 8, !insn.addr !1419
  %365 = icmp ult i64 %363, 4096, !insn.addr !1420
  store i64 %364, i64* %rcx.20.reg2mem, !insn.addr !1421
  store i64 %363, i64* %rdx.20.reg2mem, !insn.addr !1421
  br i1 %365, label %dec_label_pc_1400040b2, label %dec_label_pc_1400038e4, !insn.addr !1421

dec_label_pc_1400038e4:                           ; preds = %dec_label_pc_1400038c8
  %366 = add i64 %362, 41, !insn.addr !1422
  %367 = add i64 %364, -8
  %368 = inttoptr i64 %367 to i64*, !insn.addr !1423
  %369 = load i64, i64* %368, align 8, !insn.addr !1423
  %370 = sub i64 %367, %369, !insn.addr !1424
  %371 = icmp ult i64 %370, 32
  store i64 %369, i64* %rcx.20.reg2mem, !insn.addr !1425
  store i64 %366, i64* %rdx.20.reg2mem, !insn.addr !1425
  br i1 %371, label %dec_label_pc_1400040b2, label %dec_label_pc_1400038fd, !insn.addr !1425

dec_label_pc_1400038fd:                           ; preds = %dec_label_pc_1400038e4
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !1426
  %372 = call i64 @__asm_int3(), !insn.addr !1427
  store i128 %359, i128* %xmm0.0.reg2mem, !insn.addr !1427
  br label %dec_label_pc_140003904, !insn.addr !1427

dec_label_pc_140003904:                           ; preds = %dec_label_pc_1400038fd, %dec_label_pc_140003210
  %xmm0.0.reload = load i128, i128* %xmm0.0.reg2mem
  %373 = call i64 @function_1400020b0(i64* nonnull %stack_var_-176), !insn.addr !1428
  %374 = add i64 %373, 24, !insn.addr !1429
  %375 = inttoptr i64 %374 to i64*, !insn.addr !1429
  %376 = load i64, i64* %375, align 8, !insn.addr !1429
  %377 = icmp ult i64 %376, 8, !insn.addr !1429
  store i64 %373, i64* %rsi.1.reg2mem, !insn.addr !1430
  br i1 %377, label %dec_label_pc_140003926, label %dec_label_pc_140003923, !insn.addr !1430

dec_label_pc_140003923:                           ; preds = %dec_label_pc_140003904
  %378 = inttoptr i64 %373 to i64*, !insn.addr !1431
  %379 = load i64, i64* %378, align 8, !insn.addr !1431
  store i64 %379, i64* %rsi.1.reg2mem, !insn.addr !1431
  br label %dec_label_pc_140003926, !insn.addr !1431

dec_label_pc_140003926:                           ; preds = %dec_label_pc_140003923, %dec_label_pc_140003904
  %rsi.1.reload = load i64, i64* %rsi.1.reg2mem
  %380 = call i64 @function_1400060a0(i64* nonnull %stack_var_-112), !insn.addr !1432
  %381 = add i64 %380, 16
  %382 = inttoptr i64 %381 to i64*
  %383 = load i64, i64* %382, align 8, !insn.addr !1433
  %384 = add i64 %380, 24
  %385 = inttoptr i64 %384 to i64*
  %386 = load i64, i64* %385, align 8, !insn.addr !1434
  %387 = sub i64 %386, %383, !insn.addr !1435
  %388 = icmp ult i64 %387, 10, !insn.addr !1436
  br i1 %388, label %dec_label_pc_14000397d, label %dec_label_pc_14000394c, !insn.addr !1437

dec_label_pc_14000394c:                           ; preds = %dec_label_pc_140003926
  %389 = add i64 %383, 10, !insn.addr !1438
  store i64 %389, i64* %382, align 8, !insn.addr !1439
  %390 = icmp ult i64 %386, 8, !insn.addr !1440
  store i64 %380, i64* %rdi.1.reg2mem, !insn.addr !1441
  br i1 %390, label %dec_label_pc_140003960, label %dec_label_pc_14000395d, !insn.addr !1441

dec_label_pc_14000395d:                           ; preds = %dec_label_pc_14000394c
  %391 = inttoptr i64 %380 to i64*, !insn.addr !1442
  %392 = load i64, i64* %391, align 8, !insn.addr !1442
  store i64 %392, i64* %rdi.1.reg2mem, !insn.addr !1442
  br label %dec_label_pc_140003960, !insn.addr !1442

dec_label_pc_140003960:                           ; preds = %dec_label_pc_14000395d, %dec_label_pc_14000394c
  %rdi.1.reload = load i64, i64* %rdi.1.reg2mem
  %393 = mul i64 %383, 2, !insn.addr !1443
  %394 = add i64 %rdi.1.reload, %393, !insn.addr !1443
  %395 = inttoptr i64 %394 to i64*, !insn.addr !1444
  %396 = call i64* @memmove(i64* %395, i64* bitcast ([11 x i16]* @global_var_140008b10 to i64*), i32 20), !insn.addr !1444
  %397 = mul i64 %389, 2, !insn.addr !1445
  %398 = add i64 %rdi.1.reload, %397, !insn.addr !1445
  %399 = inttoptr i64 %398 to i16*, !insn.addr !1445
  store i16 0, i16* %399, align 2, !insn.addr !1445
  store i64* %385, i64** %.pre-phi39.reg2mem, !insn.addr !1446
  store i64* %382, i64** %.pre-phi35.reg2mem, !insn.addr !1446
  store i64 %381, i64* %.pre-phi.reg2mem, !insn.addr !1446
  store i64 %380, i64* %rbx.1.reg2mem, !insn.addr !1446
  br label %dec_label_pc_14000399d, !insn.addr !1446

dec_label_pc_14000397d:                           ; preds = %dec_label_pc_140003926
  %400 = call i64 @function_1400061b0(i64 %380, i64 10), !insn.addr !1447
  %.pre = add i64 %400, 16, !insn.addr !1448
  %.pre34 = inttoptr i64 %.pre to i64*, !insn.addr !1449
  %.pre36 = add i64 %400, 24, !insn.addr !1450
  %.pre38 = inttoptr i64 %.pre36 to i64*, !insn.addr !1450
  store i64* %.pre38, i64** %.pre-phi39.reg2mem, !insn.addr !1451
  store i64* %.pre34, i64** %.pre-phi35.reg2mem, !insn.addr !1451
  store i64 %.pre, i64* %.pre-phi.reg2mem, !insn.addr !1451
  store i64 %400, i64* %rbx.1.reg2mem, !insn.addr !1451
  br label %dec_label_pc_14000399d, !insn.addr !1451

dec_label_pc_14000399d:                           ; preds = %dec_label_pc_14000397d, %dec_label_pc_140003960
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %.pre-phi.reload = load i64, i64* %.pre-phi.reg2mem
  %.pre-phi35.reload = load i64*, i64** %.pre-phi35.reg2mem
  %.pre-phi39.reload = load i64*, i64** %.pre-phi39.reg2mem
  %401 = call i128 @__asm_xorps(i128 %xmm0.0.reload, i128 %xmm0.0.reload), !insn.addr !1452
  %402 = call i64 @__asm_movdqu(i128 %401), !insn.addr !1453
  %403 = sext i64 %402 to i128, !insn.addr !1453
  %404 = inttoptr i64 %rbx.1.reload to i128*, !insn.addr !1454
  %405 = load i128, i128* %404, align 8, !insn.addr !1454
  %406 = call i128 @__asm_movups(i128 %405), !insn.addr !1454
  call void @__asm_movups.2(i128 0, i128 %406), !insn.addr !1455
  %407 = inttoptr i64 %.pre-phi.reload to i128*, !insn.addr !1448
  %408 = load i128, i128* %407, align 8, !insn.addr !1448
  %409 = call i128 @__asm_movups(i128 %408), !insn.addr !1448
  call void @__asm_movups.2(i128 %403, i128 %409), !insn.addr !1456
  store i64 0, i64* %.pre-phi35.reload, align 8, !insn.addr !1449
  store i64 7, i64* %.pre-phi39.reload, align 8, !insn.addr !1450
  %410 = inttoptr i64 %rbx.1.reload to i16*, !insn.addr !1457
  store i16 0, i16* %410, align 2, !insn.addr !1457
  %411 = call i64 @function_140005bd0(i128* nonnull %stack_var_-400, i64 %4), !insn.addr !1458
  %412 = call i128 @__asm_xorps(i128 %406, i128 %406), !insn.addr !1459
  %413 = call i64 @__asm_movdqu(i128 %412), !insn.addr !1460
  %414 = sext i64 %413 to i128, !insn.addr !1460
  %415 = inttoptr i64 %411 to i128*, !insn.addr !1461
  %416 = load i128, i128* %415, align 8, !insn.addr !1461
  %417 = call i128 @__asm_movups(i128 %416), !insn.addr !1461
  %418 = load i128, i128* %stack_var_-528, align 8, !insn.addr !1462
  call void @__asm_movups.2(i128 %418, i128 %417), !insn.addr !1462
  %419 = add i64 %411, 16, !insn.addr !1463
  %420 = inttoptr i64 %419 to i128*, !insn.addr !1463
  %421 = load i128, i128* %420, align 8, !insn.addr !1463
  %422 = call i128 @__asm_movups(i128 %421), !insn.addr !1463
  call void @__asm_movups.2(i128 %414, i128 %422), !insn.addr !1464
  %423 = inttoptr i64 %419 to i64*, !insn.addr !1465
  store i64 0, i64* %423, align 8, !insn.addr !1465
  %424 = add i64 %411, 24, !insn.addr !1466
  %425 = inttoptr i64 %424 to i64*, !insn.addr !1466
  store i64 7, i64* %425, align 8, !insn.addr !1466
  %426 = inttoptr i64 %411 to i16*, !insn.addr !1467
  store i16 0, i16* %426, align 2, !insn.addr !1467
  %427 = sub i64 %18, %413, !insn.addr !1468
  %428 = icmp ult i64 %427, 12, !insn.addr !1469
  %429 = ptrtoint i128* %stack_var_-528 to i64
  br i1 %428, label %dec_label_pc_140003a4a, label %dec_label_pc_140003a10, !insn.addr !1470

dec_label_pc_140003a10:                           ; preds = %dec_label_pc_14000399d
  %430 = icmp ult i64 %18, 8, !insn.addr !1471
  %431 = icmp eq i1 %430, false, !insn.addr !1472
  %432 = load i128, i128* %stack_var_-528, align 8, !insn.addr !1472
  %433 = trunc i128 %432 to i64, !insn.addr !1472
  %434 = select i1 %431, i64 %433, i64 %429, !insn.addr !1472
  %435 = mul i64 %413, 2, !insn.addr !1473
  %436 = add i64 %434, %435
  %437 = inttoptr i64 %436 to i64*, !insn.addr !1474
  %438 = call i64* @memmove(i64* %437, i64* bitcast ([13 x i16]* @global_var_140008a80 to i64*), i32 24), !insn.addr !1474
  %439 = add i64 %436, 24, !insn.addr !1475
  %440 = inttoptr i64 %439 to i16*, !insn.addr !1475
  store i16 0, i16* %440, align 2, !insn.addr !1475
  store i64 %429, i64* %storemerge6.reg2mem, !insn.addr !1476
  br label %dec_label_pc_140003a69, !insn.addr !1476

dec_label_pc_140003a4a:                           ; preds = %dec_label_pc_14000399d
  %441 = call i64 @function_1400061b0(i64 %429, i64 12), !insn.addr !1477
  store i64 %441, i64* %storemerge6.reg2mem, !insn.addr !1477
  br label %dec_label_pc_140003a69, !insn.addr !1477

dec_label_pc_140003a69:                           ; preds = %dec_label_pc_140003a4a, %dec_label_pc_140003a10
  %storemerge6.reload = load i64, i64* %storemerge6.reg2mem
  %442 = call i128 @__asm_xorps(i128 %417, i128 %417), !insn.addr !1478
  %443 = call i64 @__asm_movdqu(i128 %442), !insn.addr !1479
  %444 = sext i64 %443 to i128, !insn.addr !1479
  %445 = inttoptr i64 %storemerge6.reload to i128*, !insn.addr !1480
  %446 = load i128, i128* %445, align 8, !insn.addr !1480
  %447 = call i128 @__asm_movups(i128 %446), !insn.addr !1480
  %448 = load i128, i128* %stack_var_-240, align 8, !insn.addr !1481
  call void @__asm_movups.2(i128 %448, i128 %447), !insn.addr !1481
  %449 = add i64 %storemerge6.reload, 16, !insn.addr !1482
  %450 = inttoptr i64 %449 to i128*, !insn.addr !1482
  %451 = load i128, i128* %450, align 8, !insn.addr !1482
  %452 = call i128 @__asm_movups(i128 %451), !insn.addr !1482
  call void @__asm_movups.2(i128 %444, i128 %452), !insn.addr !1483
  %453 = inttoptr i64 %449 to i64*, !insn.addr !1484
  store i64 0, i64* %453, align 8, !insn.addr !1484
  %454 = add i64 %storemerge6.reload, 24, !insn.addr !1485
  %455 = inttoptr i64 %454 to i64*, !insn.addr !1485
  store i64 7, i64* %455, align 8, !insn.addr !1485
  %456 = inttoptr i64 %storemerge6.reload to i16*, !insn.addr !1486
  store i16 0, i16* %456, align 2, !insn.addr !1486
  %457 = call i64 @function_140005bd0(i128* nonnull %stack_var_-240, i64 %3), !insn.addr !1487
  %458 = call i128 @__asm_xorps(i128 %447, i128 %447), !insn.addr !1488
  %459 = call i64 @__asm_movdqu(i128 %458), !insn.addr !1489
  %460 = sext i64 %459 to i128, !insn.addr !1489
  %461 = inttoptr i64 %457 to i128*, !insn.addr !1490
  %462 = load i128, i128* %461, align 8, !insn.addr !1490
  %463 = call i128 @__asm_movups(i128 %462), !insn.addr !1490
  %464 = load i128, i128* %stack_var_-496, align 8, !insn.addr !1491
  call void @__asm_movups.2(i128 %464, i128 %463), !insn.addr !1491
  %465 = add i64 %457, 16, !insn.addr !1492
  %466 = inttoptr i64 %465 to i128*, !insn.addr !1492
  %467 = load i128, i128* %466, align 8, !insn.addr !1492
  %468 = call i128 @__asm_movups(i128 %467), !insn.addr !1492
  call void @__asm_movups.2(i128 %460, i128 %468), !insn.addr !1493
  %469 = inttoptr i64 %465 to i64*, !insn.addr !1494
  store i64 0, i64* %469, align 8, !insn.addr !1494
  %470 = add i64 %457, 24, !insn.addr !1495
  %471 = inttoptr i64 %470 to i64*, !insn.addr !1495
  store i64 7, i64* %471, align 8, !insn.addr !1495
  %472 = inttoptr i64 %457 to i16*, !insn.addr !1496
  store i16 0, i16* %472, align 2, !insn.addr !1496
  %473 = sub i64 %19, %459, !insn.addr !1497
  %474 = icmp ult i64 %473, 13, !insn.addr !1498
  %475 = ptrtoint i128* %stack_var_-496 to i64
  br i1 %474, label %dec_label_pc_140003b15, label %dec_label_pc_140003adb, !insn.addr !1499

dec_label_pc_140003adb:                           ; preds = %dec_label_pc_140003a69
  %476 = icmp ult i64 %19, 8, !insn.addr !1500
  %477 = icmp eq i1 %476, false, !insn.addr !1501
  %478 = load i128, i128* %stack_var_-496, align 8, !insn.addr !1501
  %479 = trunc i128 %478 to i64, !insn.addr !1501
  %480 = select i1 %477, i64 %479, i64 %475, !insn.addr !1501
  %481 = mul i64 %459, 2, !insn.addr !1502
  %482 = add i64 %480, %481
  %483 = inttoptr i64 %482 to i64*, !insn.addr !1503
  %484 = call i64* @memmove(i64* %483, i64* bitcast ([14 x i16]* @global_var_140008ac8 to i64*), i32 26), !insn.addr !1503
  %485 = add i64 %482, 26, !insn.addr !1504
  %486 = inttoptr i64 %485 to i16*, !insn.addr !1504
  store i16 0, i16* %486, align 2, !insn.addr !1504
  store i64 %475, i64* %storemerge.reg2mem, !insn.addr !1505
  br label %dec_label_pc_140003b34, !insn.addr !1505

dec_label_pc_140003b15:                           ; preds = %dec_label_pc_140003a69
  %487 = call i64 @function_1400061b0(i64 %475, i64 13), !insn.addr !1506
  store i64 %487, i64* %storemerge.reg2mem, !insn.addr !1506
  br label %dec_label_pc_140003b34, !insn.addr !1506

dec_label_pc_140003b34:                           ; preds = %dec_label_pc_140003b15, %dec_label_pc_140003adb
  %488 = ptrtoint i64* %stack_var_-272 to i64, !insn.addr !1507
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  %489 = call i128 @__asm_xorps(i128 %463, i128 %463), !insn.addr !1508
  %490 = call i64 @__asm_movdqu(i128 %489), !insn.addr !1509
  %491 = sext i64 %490 to i128, !insn.addr !1509
  %492 = inttoptr i64 %storemerge.reload to i128*, !insn.addr !1510
  %493 = load i128, i128* %492, align 8, !insn.addr !1510
  %494 = call i128 @__asm_movups(i128 %493), !insn.addr !1510
  %495 = load i128, i128* %stack_var_-464, align 8, !insn.addr !1511
  call void @__asm_movups.2(i128 %495, i128 %494), !insn.addr !1511
  %496 = add i64 %storemerge.reload, 16, !insn.addr !1512
  %497 = inttoptr i64 %496 to i128*, !insn.addr !1512
  %498 = load i128, i128* %497, align 8, !insn.addr !1512
  %499 = call i128 @__asm_movups(i128 %498), !insn.addr !1512
  call void @__asm_movups.2(i128 %491, i128 %499), !insn.addr !1513
  %500 = inttoptr i64 %496 to i64*, !insn.addr !1514
  store i64 0, i64* %500, align 8, !insn.addr !1514
  %501 = add i64 %storemerge.reload, 24, !insn.addr !1515
  %502 = inttoptr i64 %501 to i64*, !insn.addr !1515
  store i64 7, i64* %502, align 8, !insn.addr !1515
  %503 = inttoptr i64 %storemerge.reload to i16*, !insn.addr !1516
  store i16 0, i16* %503, align 2, !insn.addr !1516
  %504 = call i64 @function_140005bd0(i128* nonnull %stack_var_-464, i64 %488), !insn.addr !1517
  %505 = call i128 @__asm_xorps(i128 %494, i128 %494), !insn.addr !1518
  %506 = call i64 @__asm_movdqu(i128 %505), !insn.addr !1519
  %507 = sext i64 %506 to i128, !insn.addr !1519
  %508 = inttoptr i64 %504 to i128*, !insn.addr !1520
  %509 = load i128, i128* %508, align 8, !insn.addr !1520
  %510 = call i128 @__asm_movups(i128 %509), !insn.addr !1520
  %511 = load i128, i128* %stack_var_-432, align 8, !insn.addr !1521
  call void @__asm_movups.2(i128 %511, i128 %510), !insn.addr !1521
  %512 = add i64 %504, 16, !insn.addr !1522
  %513 = inttoptr i64 %512 to i128*, !insn.addr !1522
  %514 = load i128, i128* %513, align 8, !insn.addr !1522
  %515 = call i128 @__asm_movups(i128 %514), !insn.addr !1522
  call void @__asm_movups.2(i128 %507, i128 %515), !insn.addr !1523
  %516 = inttoptr i64 %512 to i64*, !insn.addr !1524
  store i64 0, i64* %516, align 8, !insn.addr !1524
  %517 = add i64 %504, 24, !insn.addr !1525
  %518 = inttoptr i64 %517 to i64*, !insn.addr !1525
  store i64 7, i64* %518, align 8, !insn.addr !1525
  %519 = inttoptr i64 %504 to i16*, !insn.addr !1526
  store i16 0, i16* %519, align 2, !insn.addr !1526
  %520 = call i64 @function_140006380(i128* nonnull %stack_var_-432, i64 ptrtoint (i64* @global_var_140008a68 to i64)), !insn.addr !1527
  %521 = call i128 @__asm_xorps(i128 %510, i128 %510), !insn.addr !1528
  %522 = call i64 @__asm_movdqu(i128 %521), !insn.addr !1529
  %523 = sext i64 %522 to i128, !insn.addr !1529
  %524 = inttoptr i64 %520 to i128*, !insn.addr !1530
  %525 = load i128, i128* %524, align 8, !insn.addr !1530
  %526 = call i128 @__asm_movups(i128 %525), !insn.addr !1530
  %527 = load i128, i128* %stack_var_-368, align 8, !insn.addr !1531
  call void @__asm_movups.2(i128 %527, i128 %526), !insn.addr !1531
  %528 = add i64 %520, 16, !insn.addr !1532
  %529 = inttoptr i64 %528 to i128*, !insn.addr !1532
  %530 = load i128, i128* %529, align 8, !insn.addr !1532
  %531 = call i128 @__asm_movups(i128 %530), !insn.addr !1532
  call void @__asm_movups.2(i128 %523, i128 %531), !insn.addr !1533
  %532 = inttoptr i64 %528 to i64*, !insn.addr !1534
  store i64 0, i64* %532, align 8, !insn.addr !1534
  %533 = add i64 %520, 24, !insn.addr !1535
  %534 = inttoptr i64 %533 to i64*, !insn.addr !1535
  store i64 7, i64* %534, align 8, !insn.addr !1535
  %535 = inttoptr i64 %520 to i16*, !insn.addr !1536
  store i16 0, i16* %535, align 2, !insn.addr !1536
  %536 = call i64 @function_140006380(i128* nonnull %stack_var_-368, i64 ptrtoint ([7 x i16]* @global_var_140008a70 to i64)), !insn.addr !1537
  %537 = call i128 @__asm_xorps(i128 %526, i128 %526), !insn.addr !1538
  %538 = call i64 @__asm_movdqu(i128 %537), !insn.addr !1539
  %539 = sext i64 %538 to i128, !insn.addr !1539
  %540 = inttoptr i64 %536 to i128*, !insn.addr !1540
  %541 = load i128, i128* %540, align 8, !insn.addr !1540
  %542 = call i128 @__asm_movups(i128 %541), !insn.addr !1540
  %543 = load i128, i128* %stack_var_-336, align 8, !insn.addr !1541
  call void @__asm_movups.2(i128 %543, i128 %542), !insn.addr !1541
  %544 = add i64 %536, 16, !insn.addr !1542
  %545 = inttoptr i64 %544 to i128*, !insn.addr !1542
  %546 = load i128, i128* %545, align 8, !insn.addr !1542
  %547 = call i128 @__asm_movups(i128 %546), !insn.addr !1542
  call void @__asm_movups.2(i128 %539, i128 %547), !insn.addr !1543
  %548 = inttoptr i64 %544 to i64*, !insn.addr !1544
  store i64 0, i64* %548, align 8, !insn.addr !1544
  %549 = add i64 %536, 24, !insn.addr !1545
  %550 = inttoptr i64 %549 to i64*, !insn.addr !1545
  store i64 7, i64* %550, align 8, !insn.addr !1545
  %551 = inttoptr i64 %536 to i16*, !insn.addr !1546
  store i16 0, i16* %551, align 2, !insn.addr !1546
  %552 = call i64 @function_140006380(i128* nonnull %stack_var_-336, i64 %rsi.1.reload), !insn.addr !1547
  %553 = call i128 @__asm_xorps(i128 %542, i128 %542), !insn.addr !1548
  %554 = call i64 @__asm_movdqu(i128 %553), !insn.addr !1549
  %555 = sext i64 %554 to i128, !insn.addr !1549
  %556 = inttoptr i64 %552 to i128*, !insn.addr !1550
  %557 = load i128, i128* %556, align 8, !insn.addr !1550
  %558 = call i128 @__asm_movups(i128 %557), !insn.addr !1550
  %559 = load i128, i128* %stack_var_-304, align 8, !insn.addr !1551
  call void @__asm_movups.2(i128 %559, i128 %558), !insn.addr !1551
  %560 = add i64 %552, 16, !insn.addr !1552
  %561 = inttoptr i64 %560 to i128*, !insn.addr !1552
  %562 = load i128, i128* %561, align 8, !insn.addr !1552
  %563 = call i128 @__asm_movups(i128 %562), !insn.addr !1552
  call void @__asm_movups.2(i128 %555, i128 %563), !insn.addr !1553
  %564 = inttoptr i64 %560 to i64*, !insn.addr !1554
  store i64 0, i64* %564, align 8, !insn.addr !1554
  %565 = add i64 %552, 24, !insn.addr !1555
  %566 = inttoptr i64 %565 to i64*, !insn.addr !1555
  store i64 7, i64* %566, align 8, !insn.addr !1555
  %567 = inttoptr i64 %552 to i16*, !insn.addr !1556
  store i16 0, i16* %567, align 2, !insn.addr !1556
  %568 = call i64 @function_140006380(i128* nonnull %stack_var_-304, i64 ptrtoint (i64* @global_var_140008a68 to i64)), !insn.addr !1557
  %569 = inttoptr i64 %568 to i128*, !insn.addr !1558
  %570 = load i128, i128* %569, align 8, !insn.addr !1558
  %571 = call i128 @__asm_movups(i128 %570), !insn.addr !1558
  call void @__asm_movups.2(i128 %11, i128 %571), !insn.addr !1559
  %572 = add i64 %568, 16, !insn.addr !1560
  %573 = inttoptr i64 %572 to i128*, !insn.addr !1560
  %574 = load i128, i128* %573, align 8, !insn.addr !1560
  %575 = call i128 @__asm_movups(i128 %574), !insn.addr !1560
  call void @__asm_movups.2(i128 %10, i128 %575), !insn.addr !1561
  %576 = inttoptr i64 %572 to i64*, !insn.addr !1562
  store i64 0, i64* %576, align 8, !insn.addr !1562
  %577 = add i64 %568, 24, !insn.addr !1563
  %578 = inttoptr i64 %577 to i64*, !insn.addr !1563
  store i64 7, i64* %578, align 8, !insn.addr !1563
  %579 = inttoptr i64 %568 to i16*, !insn.addr !1564
  store i16 0, i16* %579, align 2, !insn.addr !1564
  %580 = icmp ult i64 %9, 8, !insn.addr !1565
  br i1 %580, label %dec_label_pc_140003cc2, label %dec_label_pc_140003c85, !insn.addr !1566

dec_label_pc_140003c85:                           ; preds = %dec_label_pc_140003b34
  %581 = mul i64 %9, 2, !insn.addr !1567
  %582 = add i64 %581, 2, !insn.addr !1567
  %583 = trunc i128 %11 to i64, !insn.addr !1568
  %584 = icmp ult i64 %582, 4096, !insn.addr !1569
  store i64 %583, i64* %rcx.8.reg2mem, !insn.addr !1570
  store i64 %582, i64* %rdx.8.reg2mem, !insn.addr !1570
  br i1 %584, label %dec_label_pc_140003cbc, label %dec_label_pc_140003ca0, !insn.addr !1570

dec_label_pc_140003ca0:                           ; preds = %dec_label_pc_140003c85
  %585 = add i64 %581, 41, !insn.addr !1571
  %586 = add i64 %583, -8
  %587 = inttoptr i64 %586 to i64*, !insn.addr !1572
  %588 = load i64, i64* %587, align 8, !insn.addr !1572
  %589 = sub i64 %586, %588, !insn.addr !1573
  %590 = icmp ult i64 %589, 32
  store i64 %588, i64* %rcx.8.reg2mem, !insn.addr !1574
  store i64 %585, i64* %rdx.8.reg2mem, !insn.addr !1574
  br i1 %590, label %dec_label_pc_140003cbc, label %dec_label_pc_140003cb5, !insn.addr !1574

dec_label_pc_140003cb5:                           ; preds = %dec_label_pc_140003ca0
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !1575
  %591 = call i64 @__asm_int3(), !insn.addr !1576
  store i64 %588, i64* %rcx.8.reg2mem, !insn.addr !1576
  store i64 %585, i64* %rdx.8.reg2mem, !insn.addr !1576
  br label %dec_label_pc_140003cbc, !insn.addr !1576

dec_label_pc_140003cbc:                           ; preds = %dec_label_pc_140003cb5, %dec_label_pc_140003ca0, %dec_label_pc_140003c85
  %rdx.8.reload = load i64, i64* %rdx.8.reg2mem
  %rcx.8.reload = load i64, i64* %rcx.8.reg2mem
  %592 = call i64 @function_1400065d0(i64 %rcx.8.reload, i64 %rdx.8.reload), !insn.addr !1577
  br label %dec_label_pc_140003cc2, !insn.addr !1578

dec_label_pc_140003cc2:                           ; preds = %dec_label_pc_140003cbc, %dec_label_pc_140003b34
  %593 = icmp ult i64 %14, 8, !insn.addr !1579
  br i1 %593, label %dec_label_pc_140003d05, label %dec_label_pc_140003ccc, !insn.addr !1580

dec_label_pc_140003ccc:                           ; preds = %dec_label_pc_140003cc2
  %594 = mul i64 %14, 2, !insn.addr !1581
  %595 = add i64 %594, 2, !insn.addr !1581
  %596 = load i128, i128* %stack_var_-304, align 8, !insn.addr !1582
  %597 = trunc i128 %596 to i64, !insn.addr !1582
  %598 = icmp ult i64 %595, 4096, !insn.addr !1583
  store i64 %597, i64* %rcx.9.reg2mem, !insn.addr !1584
  store i64 %595, i64* %rdx.9.reg2mem, !insn.addr !1584
  br i1 %598, label %dec_label_pc_140003d00, label %dec_label_pc_140003ce4, !insn.addr !1584

dec_label_pc_140003ce4:                           ; preds = %dec_label_pc_140003ccc
  %599 = add i64 %594, 41, !insn.addr !1585
  %600 = add i64 %597, -8
  %601 = inttoptr i64 %600 to i64*, !insn.addr !1586
  %602 = load i64, i64* %601, align 8, !insn.addr !1586
  %603 = sub i64 %600, %602, !insn.addr !1587
  %604 = icmp ult i64 %603, 32
  store i64 %602, i64* %rcx.9.reg2mem, !insn.addr !1588
  store i64 %599, i64* %rdx.9.reg2mem, !insn.addr !1588
  br i1 %604, label %dec_label_pc_140003d00, label %dec_label_pc_140003cf9, !insn.addr !1588

dec_label_pc_140003cf9:                           ; preds = %dec_label_pc_140003ce4
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !1589
  %605 = call i64 @__asm_int3(), !insn.addr !1590
  store i64 %602, i64* %rcx.9.reg2mem, !insn.addr !1590
  store i64 %599, i64* %rdx.9.reg2mem, !insn.addr !1590
  br label %dec_label_pc_140003d00, !insn.addr !1590

dec_label_pc_140003d00:                           ; preds = %dec_label_pc_140003cf9, %dec_label_pc_140003ce4, %dec_label_pc_140003ccc
  %rdx.9.reload = load i64, i64* %rdx.9.reg2mem
  %rcx.9.reload = load i64, i64* %rcx.9.reg2mem
  %606 = call i64 @function_1400065d0(i64 %rcx.9.reload, i64 %rdx.9.reload), !insn.addr !1591
  br label %dec_label_pc_140003d05, !insn.addr !1591

dec_label_pc_140003d05:                           ; preds = %dec_label_pc_140003d00, %dec_label_pc_140003cc2
  %607 = load i128, i128* @global_var_140008dd0, align 8, !insn.addr !1592
  %608 = call i128 @__asm_movdqa(i128 %607), !insn.addr !1592
  %609 = call i64 @__asm_movdqu(i128 %608), !insn.addr !1593
  store i128 0, i128* %stack_var_-304, align 8, !insn.addr !1594
  %610 = icmp ult i64 %15, 8, !insn.addr !1595
  br i1 %610, label %dec_label_pc_140003d5a, label %dec_label_pc_140003d21, !insn.addr !1596

dec_label_pc_140003d21:                           ; preds = %dec_label_pc_140003d05
  %611 = mul i64 %15, 2, !insn.addr !1597
  %612 = add i64 %611, 2, !insn.addr !1597
  %613 = load i128, i128* %stack_var_-336, align 8, !insn.addr !1598
  %614 = trunc i128 %613 to i64, !insn.addr !1598
  %615 = icmp ult i64 %612, 4096, !insn.addr !1599
  store i64 %614, i64* %rcx.10.reg2mem, !insn.addr !1600
  store i64 %612, i64* %rdx.10.reg2mem, !insn.addr !1600
  br i1 %615, label %dec_label_pc_140003d55, label %dec_label_pc_140003d39, !insn.addr !1600

dec_label_pc_140003d39:                           ; preds = %dec_label_pc_140003d21
  %616 = add i64 %611, 41, !insn.addr !1601
  %617 = add i64 %614, -8
  %618 = inttoptr i64 %617 to i64*, !insn.addr !1602
  %619 = load i64, i64* %618, align 8, !insn.addr !1602
  %620 = sub i64 %617, %619, !insn.addr !1603
  %621 = icmp ult i64 %620, 32
  store i64 %619, i64* %rcx.10.reg2mem, !insn.addr !1604
  store i64 %616, i64* %rdx.10.reg2mem, !insn.addr !1604
  br i1 %621, label %dec_label_pc_140003d55, label %dec_label_pc_140003d4e, !insn.addr !1604

dec_label_pc_140003d4e:                           ; preds = %dec_label_pc_140003d39
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !1605
  %622 = call i64 @__asm_int3(), !insn.addr !1606
  store i64 %619, i64* %rcx.10.reg2mem, !insn.addr !1606
  store i64 %616, i64* %rdx.10.reg2mem, !insn.addr !1606
  br label %dec_label_pc_140003d55, !insn.addr !1606

dec_label_pc_140003d55:                           ; preds = %dec_label_pc_140003d4e, %dec_label_pc_140003d39, %dec_label_pc_140003d21
  %rdx.10.reload = load i64, i64* %rdx.10.reg2mem
  %rcx.10.reload = load i64, i64* %rcx.10.reg2mem
  %623 = call i64 @function_1400065d0(i64 %rcx.10.reload, i64 %rdx.10.reload), !insn.addr !1607
  br label %dec_label_pc_140003d5a, !insn.addr !1607

dec_label_pc_140003d5a:                           ; preds = %dec_label_pc_140003d55, %dec_label_pc_140003d05
  %624 = call i128 @__asm_movdqa(i128 %607), !insn.addr !1608
  %625 = call i64 @__asm_movdqu(i128 %624), !insn.addr !1609
  store i128 0, i128* %stack_var_-336, align 8, !insn.addr !1610
  %626 = icmp ult i64 %20, 8, !insn.addr !1611
  br i1 %626, label %dec_label_pc_140003daf, label %dec_label_pc_140003d76, !insn.addr !1612

dec_label_pc_140003d76:                           ; preds = %dec_label_pc_140003d5a
  %627 = mul i64 %20, 2, !insn.addr !1613
  %628 = add i64 %627, 2, !insn.addr !1613
  %629 = load i128, i128* %stack_var_-368, align 8, !insn.addr !1614
  %630 = trunc i128 %629 to i64, !insn.addr !1614
  %631 = icmp ult i64 %628, 4096, !insn.addr !1615
  store i64 %630, i64* %rcx.11.reg2mem, !insn.addr !1616
  store i64 %628, i64* %rdx.11.reg2mem, !insn.addr !1616
  br i1 %631, label %dec_label_pc_140003daa, label %dec_label_pc_140003d8e, !insn.addr !1616

dec_label_pc_140003d8e:                           ; preds = %dec_label_pc_140003d76
  %632 = add i64 %627, 41, !insn.addr !1617
  %633 = add i64 %630, -8
  %634 = inttoptr i64 %633 to i64*, !insn.addr !1618
  %635 = load i64, i64* %634, align 8, !insn.addr !1618
  %636 = sub i64 %633, %635, !insn.addr !1619
  %637 = icmp ult i64 %636, 32
  store i64 %635, i64* %rcx.11.reg2mem, !insn.addr !1620
  store i64 %632, i64* %rdx.11.reg2mem, !insn.addr !1620
  br i1 %637, label %dec_label_pc_140003daa, label %dec_label_pc_140003da3, !insn.addr !1620

dec_label_pc_140003da3:                           ; preds = %dec_label_pc_140003d8e
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !1621
  %638 = call i64 @__asm_int3(), !insn.addr !1622
  store i64 %635, i64* %rcx.11.reg2mem, !insn.addr !1622
  store i64 %632, i64* %rdx.11.reg2mem, !insn.addr !1622
  br label %dec_label_pc_140003daa, !insn.addr !1622

dec_label_pc_140003daa:                           ; preds = %dec_label_pc_140003da3, %dec_label_pc_140003d8e, %dec_label_pc_140003d76
  %rdx.11.reload = load i64, i64* %rdx.11.reg2mem
  %rcx.11.reload = load i64, i64* %rcx.11.reg2mem
  %639 = call i64 @function_1400065d0(i64 %rcx.11.reload, i64 %rdx.11.reload), !insn.addr !1623
  br label %dec_label_pc_140003daf, !insn.addr !1623

dec_label_pc_140003daf:                           ; preds = %dec_label_pc_140003daa, %dec_label_pc_140003d5a
  %640 = call i128 @__asm_movdqa(i128 %607), !insn.addr !1624
  %641 = call i64 @__asm_movdqu(i128 %640), !insn.addr !1625
  store i128 0, i128* %stack_var_-368, align 8, !insn.addr !1626
  %642 = icmp ult i64 %17, 8, !insn.addr !1627
  br i1 %642, label %dec_label_pc_140003e04, label %dec_label_pc_140003dcb, !insn.addr !1628

dec_label_pc_140003dcb:                           ; preds = %dec_label_pc_140003daf
  %643 = mul i64 %17, 2, !insn.addr !1629
  %644 = add i64 %643, 2, !insn.addr !1629
  %645 = load i128, i128* %stack_var_-432, align 8, !insn.addr !1630
  %646 = trunc i128 %645 to i64, !insn.addr !1630
  %647 = icmp ult i64 %644, 4096, !insn.addr !1631
  store i64 %646, i64* %rcx.12.reg2mem, !insn.addr !1632
  store i64 %644, i64* %rdx.12.reg2mem, !insn.addr !1632
  br i1 %647, label %dec_label_pc_140003dff, label %dec_label_pc_140003de3, !insn.addr !1632

dec_label_pc_140003de3:                           ; preds = %dec_label_pc_140003dcb
  %648 = add i64 %643, 41, !insn.addr !1633
  %649 = add i64 %646, -8
  %650 = inttoptr i64 %649 to i64*, !insn.addr !1634
  %651 = load i64, i64* %650, align 8, !insn.addr !1634
  %652 = sub i64 %649, %651, !insn.addr !1635
  %653 = icmp ult i64 %652, 32
  store i64 %651, i64* %rcx.12.reg2mem, !insn.addr !1636
  store i64 %648, i64* %rdx.12.reg2mem, !insn.addr !1636
  br i1 %653, label %dec_label_pc_140003dff, label %dec_label_pc_140003df8, !insn.addr !1636

dec_label_pc_140003df8:                           ; preds = %dec_label_pc_140003de3
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !1637
  %654 = call i64 @__asm_int3(), !insn.addr !1638
  store i64 %651, i64* %rcx.12.reg2mem, !insn.addr !1638
  store i64 %648, i64* %rdx.12.reg2mem, !insn.addr !1638
  br label %dec_label_pc_140003dff, !insn.addr !1638

dec_label_pc_140003dff:                           ; preds = %dec_label_pc_140003df8, %dec_label_pc_140003de3, %dec_label_pc_140003dcb
  %rdx.12.reload = load i64, i64* %rdx.12.reg2mem
  %rcx.12.reload = load i64, i64* %rcx.12.reg2mem
  %655 = call i64 @function_1400065d0(i64 %rcx.12.reload, i64 %rdx.12.reload), !insn.addr !1639
  br label %dec_label_pc_140003e04, !insn.addr !1639

dec_label_pc_140003e04:                           ; preds = %dec_label_pc_140003dff, %dec_label_pc_140003daf
  %656 = call i128 @__asm_movdqa(i128 %607), !insn.addr !1640
  %657 = call i64 @__asm_movdqu(i128 %656), !insn.addr !1641
  store i128 0, i128* %stack_var_-432, align 8, !insn.addr !1642
  %658 = icmp ult i64 %16, 8, !insn.addr !1643
  br i1 %658, label %dec_label_pc_140003e59, label %dec_label_pc_140003e20, !insn.addr !1644

dec_label_pc_140003e20:                           ; preds = %dec_label_pc_140003e04
  %659 = mul i64 %16, 2, !insn.addr !1645
  %660 = add i64 %659, 2, !insn.addr !1645
  %661 = load i128, i128* %stack_var_-464, align 8, !insn.addr !1646
  %662 = trunc i128 %661 to i64, !insn.addr !1646
  %663 = icmp ult i64 %660, 4096, !insn.addr !1647
  store i64 %662, i64* %rcx.13.reg2mem, !insn.addr !1648
  store i64 %660, i64* %rdx.13.reg2mem, !insn.addr !1648
  br i1 %663, label %dec_label_pc_140003e54, label %dec_label_pc_140003e38, !insn.addr !1648

dec_label_pc_140003e38:                           ; preds = %dec_label_pc_140003e20
  %664 = add i64 %659, 41, !insn.addr !1649
  %665 = add i64 %662, -8
  %666 = inttoptr i64 %665 to i64*, !insn.addr !1650
  %667 = load i64, i64* %666, align 8, !insn.addr !1650
  %668 = sub i64 %665, %667, !insn.addr !1651
  %669 = icmp ult i64 %668, 32
  store i64 %667, i64* %rcx.13.reg2mem, !insn.addr !1652
  store i64 %664, i64* %rdx.13.reg2mem, !insn.addr !1652
  br i1 %669, label %dec_label_pc_140003e54, label %dec_label_pc_140003e4d, !insn.addr !1652

dec_label_pc_140003e4d:                           ; preds = %dec_label_pc_140003e38
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !1653
  %670 = call i64 @__asm_int3(), !insn.addr !1654
  store i64 %667, i64* %rcx.13.reg2mem, !insn.addr !1654
  store i64 %664, i64* %rdx.13.reg2mem, !insn.addr !1654
  br label %dec_label_pc_140003e54, !insn.addr !1654

dec_label_pc_140003e54:                           ; preds = %dec_label_pc_140003e4d, %dec_label_pc_140003e38, %dec_label_pc_140003e20
  %rdx.13.reload = load i64, i64* %rdx.13.reg2mem
  %rcx.13.reload = load i64, i64* %rcx.13.reg2mem
  %671 = call i64 @function_1400065d0(i64 %rcx.13.reload, i64 %rdx.13.reload), !insn.addr !1655
  br label %dec_label_pc_140003e59, !insn.addr !1655

dec_label_pc_140003e59:                           ; preds = %dec_label_pc_140003e54, %dec_label_pc_140003e04
  %672 = call i128 @__asm_movdqa(i128 %607), !insn.addr !1656
  %673 = call i64 @__asm_movdqu(i128 %672), !insn.addr !1657
  store i128 0, i128* %stack_var_-464, align 8, !insn.addr !1658
  %674 = icmp ult i64 %19, 8, !insn.addr !1659
  br i1 %674, label %dec_label_pc_140003eaf, label %dec_label_pc_140003e75, !insn.addr !1660

dec_label_pc_140003e75:                           ; preds = %dec_label_pc_140003e59
  %675 = mul i64 %19, 2, !insn.addr !1661
  %676 = add i64 %675, 2, !insn.addr !1661
  %677 = load i128, i128* %stack_var_-496, align 8, !insn.addr !1662
  %678 = trunc i128 %677 to i64, !insn.addr !1662
  %679 = icmp ult i64 %676, 4096, !insn.addr !1663
  store i64 %678, i64* %rcx.14.reg2mem, !insn.addr !1664
  store i64 %676, i64* %rdx.14.reg2mem, !insn.addr !1664
  br i1 %679, label %dec_label_pc_140003eaa, label %dec_label_pc_140003e8e, !insn.addr !1664

dec_label_pc_140003e8e:                           ; preds = %dec_label_pc_140003e75
  %680 = add i64 %675, 41, !insn.addr !1665
  %681 = add i64 %678, -8
  %682 = inttoptr i64 %681 to i64*, !insn.addr !1666
  %683 = load i64, i64* %682, align 8, !insn.addr !1666
  %684 = sub i64 %681, %683, !insn.addr !1667
  %685 = icmp ult i64 %684, 32
  store i64 %683, i64* %rcx.14.reg2mem, !insn.addr !1668
  store i64 %680, i64* %rdx.14.reg2mem, !insn.addr !1668
  br i1 %685, label %dec_label_pc_140003eaa, label %dec_label_pc_140003ea3, !insn.addr !1668

dec_label_pc_140003ea3:                           ; preds = %dec_label_pc_140003e8e
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !1669
  %686 = call i64 @__asm_int3(), !insn.addr !1670
  store i64 %683, i64* %rcx.14.reg2mem, !insn.addr !1670
  store i64 %680, i64* %rdx.14.reg2mem, !insn.addr !1670
  br label %dec_label_pc_140003eaa, !insn.addr !1670

dec_label_pc_140003eaa:                           ; preds = %dec_label_pc_140003ea3, %dec_label_pc_140003e8e, %dec_label_pc_140003e75
  %rdx.14.reload = load i64, i64* %rdx.14.reg2mem
  %rcx.14.reload = load i64, i64* %rcx.14.reg2mem
  %687 = call i64 @function_1400065d0(i64 %rcx.14.reload, i64 %rdx.14.reload), !insn.addr !1671
  br label %dec_label_pc_140003eaf, !insn.addr !1671

dec_label_pc_140003eaf:                           ; preds = %dec_label_pc_140003eaa, %dec_label_pc_140003e59
  %688 = call i128 @__asm_movdqa(i128 %607), !insn.addr !1672
  %689 = call i64 @__asm_movdqu(i128 %688), !insn.addr !1673
  store i128 0, i128* %stack_var_-496, align 8, !insn.addr !1674
  %690 = icmp ult i64 %8, 8, !insn.addr !1675
  br i1 %690, label %dec_label_pc_140003f09, label %dec_label_pc_140003ed0, !insn.addr !1676

dec_label_pc_140003ed0:                           ; preds = %dec_label_pc_140003eaf
  %691 = mul i64 %8, 2, !insn.addr !1677
  %692 = add i64 %691, 2, !insn.addr !1677
  %693 = load i128, i128* %stack_var_-240, align 8, !insn.addr !1678
  %694 = trunc i128 %693 to i64, !insn.addr !1678
  %695 = icmp ult i64 %692, 4096, !insn.addr !1679
  store i64 %694, i64* %rcx.15.reg2mem, !insn.addr !1680
  store i64 %692, i64* %rdx.15.reg2mem, !insn.addr !1680
  br i1 %695, label %dec_label_pc_140003f04, label %dec_label_pc_140003ee8, !insn.addr !1680

dec_label_pc_140003ee8:                           ; preds = %dec_label_pc_140003ed0
  %696 = add i64 %691, 41, !insn.addr !1681
  %697 = add i64 %694, -8
  %698 = inttoptr i64 %697 to i64*, !insn.addr !1682
  %699 = load i64, i64* %698, align 8, !insn.addr !1682
  %700 = sub i64 %697, %699, !insn.addr !1683
  %701 = icmp ult i64 %700, 32
  store i64 %699, i64* %rcx.15.reg2mem, !insn.addr !1684
  store i64 %696, i64* %rdx.15.reg2mem, !insn.addr !1684
  br i1 %701, label %dec_label_pc_140003f04, label %dec_label_pc_140003efd, !insn.addr !1684

dec_label_pc_140003efd:                           ; preds = %dec_label_pc_140003ee8
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !1685
  %702 = call i64 @__asm_int3(), !insn.addr !1686
  store i64 %699, i64* %rcx.15.reg2mem, !insn.addr !1686
  store i64 %696, i64* %rdx.15.reg2mem, !insn.addr !1686
  br label %dec_label_pc_140003f04, !insn.addr !1686

dec_label_pc_140003f04:                           ; preds = %dec_label_pc_140003efd, %dec_label_pc_140003ee8, %dec_label_pc_140003ed0
  %rdx.15.reload = load i64, i64* %rdx.15.reg2mem
  %rcx.15.reload = load i64, i64* %rcx.15.reg2mem
  %703 = call i64 @function_1400065d0(i64 %rcx.15.reload, i64 %rdx.15.reload), !insn.addr !1687
  br label %dec_label_pc_140003f09, !insn.addr !1687

dec_label_pc_140003f09:                           ; preds = %dec_label_pc_140003f04, %dec_label_pc_140003eaf
  %704 = call i128 @__asm_movdqa(i128 %607), !insn.addr !1688
  %705 = call i64 @__asm_movdqu(i128 %704), !insn.addr !1689
  store i128 0, i128* %stack_var_-240, align 8, !insn.addr !1690
  %706 = icmp ult i64 %18, 8, !insn.addr !1691
  br i1 %706, label %dec_label_pc_140003f60, label %dec_label_pc_140003f26, !insn.addr !1692

dec_label_pc_140003f26:                           ; preds = %dec_label_pc_140003f09
  %707 = mul i64 %18, 2, !insn.addr !1693
  %708 = add i64 %707, 2, !insn.addr !1693
  %709 = load i128, i128* %stack_var_-528, align 8, !insn.addr !1694
  %710 = trunc i128 %709 to i64, !insn.addr !1694
  %711 = icmp ult i64 %708, 4096, !insn.addr !1695
  store i64 %710, i64* %rcx.16.reg2mem, !insn.addr !1696
  store i64 %708, i64* %rdx.16.reg2mem, !insn.addr !1696
  br i1 %711, label %dec_label_pc_140003f5b, label %dec_label_pc_140003f3f, !insn.addr !1696

dec_label_pc_140003f3f:                           ; preds = %dec_label_pc_140003f26
  %712 = add i64 %707, 41, !insn.addr !1697
  %713 = add i64 %710, -8
  %714 = inttoptr i64 %713 to i64*, !insn.addr !1698
  %715 = load i64, i64* %714, align 8, !insn.addr !1698
  %716 = sub i64 %713, %715, !insn.addr !1699
  %717 = icmp ult i64 %716, 32
  store i64 %715, i64* %rcx.16.reg2mem, !insn.addr !1700
  store i64 %712, i64* %rdx.16.reg2mem, !insn.addr !1700
  br i1 %717, label %dec_label_pc_140003f5b, label %dec_label_pc_140003f54, !insn.addr !1700

dec_label_pc_140003f54:                           ; preds = %dec_label_pc_140003f3f
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !1701
  %718 = call i64 @__asm_int3(), !insn.addr !1702
  store i64 %715, i64* %rcx.16.reg2mem, !insn.addr !1702
  store i64 %712, i64* %rdx.16.reg2mem, !insn.addr !1702
  br label %dec_label_pc_140003f5b, !insn.addr !1702

dec_label_pc_140003f5b:                           ; preds = %dec_label_pc_140003f54, %dec_label_pc_140003f3f, %dec_label_pc_140003f26
  %rdx.16.reload = load i64, i64* %rdx.16.reg2mem
  %rcx.16.reload = load i64, i64* %rcx.16.reg2mem
  %719 = call i64 @function_1400065d0(i64 %rcx.16.reload, i64 %rdx.16.reload), !insn.addr !1703
  br label %dec_label_pc_140003f60, !insn.addr !1703

dec_label_pc_140003f60:                           ; preds = %dec_label_pc_140003f5b, %dec_label_pc_140003f09
  %720 = call i128 @__asm_movdqa(i128 %607), !insn.addr !1704
  %721 = call i64 @__asm_movdqu(i128 %720), !insn.addr !1705
  store i128 0, i128* %stack_var_-528, align 8, !insn.addr !1706
  %722 = icmp ult i64 %13, 8, !insn.addr !1707
  br i1 %722, label %dec_label_pc_140003fb7, label %dec_label_pc_140003f7e, !insn.addr !1708

dec_label_pc_140003f7e:                           ; preds = %dec_label_pc_140003f60
  %723 = mul i64 %13, 2, !insn.addr !1709
  %724 = add i64 %723, 2, !insn.addr !1709
  %725 = load i128, i128* %stack_var_-400, align 8, !insn.addr !1710
  %726 = trunc i128 %725 to i64, !insn.addr !1710
  %727 = icmp ult i64 %724, 4096, !insn.addr !1711
  store i64 %726, i64* %rcx.17.reg2mem, !insn.addr !1712
  store i64 %724, i64* %rdx.17.reg2mem, !insn.addr !1712
  br i1 %727, label %dec_label_pc_140003fb2, label %dec_label_pc_140003f96, !insn.addr !1712

dec_label_pc_140003f96:                           ; preds = %dec_label_pc_140003f7e
  %728 = add i64 %723, 41, !insn.addr !1713
  %729 = add i64 %726, -8
  %730 = inttoptr i64 %729 to i64*, !insn.addr !1714
  %731 = load i64, i64* %730, align 8, !insn.addr !1714
  %732 = sub i64 %729, %731, !insn.addr !1715
  %733 = icmp ult i64 %732, 32
  store i64 %731, i64* %rcx.17.reg2mem, !insn.addr !1716
  store i64 %728, i64* %rdx.17.reg2mem, !insn.addr !1716
  br i1 %733, label %dec_label_pc_140003fb2, label %dec_label_pc_140003fab, !insn.addr !1716

dec_label_pc_140003fab:                           ; preds = %dec_label_pc_140003f96
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !1717
  %734 = call i64 @__asm_int3(), !insn.addr !1718
  store i64 %731, i64* %rcx.17.reg2mem, !insn.addr !1718
  store i64 %728, i64* %rdx.17.reg2mem, !insn.addr !1718
  br label %dec_label_pc_140003fb2, !insn.addr !1718

dec_label_pc_140003fb2:                           ; preds = %dec_label_pc_140003fab, %dec_label_pc_140003f96, %dec_label_pc_140003f7e
  %rdx.17.reload = load i64, i64* %rdx.17.reg2mem
  %rcx.17.reload = load i64, i64* %rcx.17.reg2mem
  %735 = call i64 @function_1400065d0(i64 %rcx.17.reload, i64 %rdx.17.reload), !insn.addr !1719
  br label %dec_label_pc_140003fb7, !insn.addr !1719

dec_label_pc_140003fb7:                           ; preds = %dec_label_pc_140003fb2, %dec_label_pc_140003f60
  %736 = call i128 @__asm_movdqa(i128 %607), !insn.addr !1720
  %737 = call i64 @__asm_movdqu(i128 %736), !insn.addr !1721
  store i128 0, i128* %stack_var_-400, align 8, !insn.addr !1722
  %738 = icmp ult i64 %7, 8, !insn.addr !1723
  br i1 %738, label %dec_label_pc_140004012, label %dec_label_pc_140003fd6, !insn.addr !1724

dec_label_pc_140003fd6:                           ; preds = %dec_label_pc_140003fb7
  %739 = mul i64 %7, 2, !insn.addr !1725
  %740 = add i64 %739, 2, !insn.addr !1725
  %741 = load i64, i64* %stack_var_-112, align 8, !insn.addr !1726
  %742 = icmp ult i64 %740, 4096, !insn.addr !1727
  store i64 %741, i64* %rcx.18.reg2mem, !insn.addr !1728
  store i64 %740, i64* %rdx.18.reg2mem, !insn.addr !1728
  br i1 %742, label %dec_label_pc_14000400d, label %dec_label_pc_140003ff1, !insn.addr !1728

dec_label_pc_140003ff1:                           ; preds = %dec_label_pc_140003fd6
  %743 = add i64 %739, 41, !insn.addr !1729
  %744 = add i64 %741, -8
  %745 = inttoptr i64 %744 to i64*, !insn.addr !1730
  %746 = load i64, i64* %745, align 8, !insn.addr !1730
  %747 = sub i64 %744, %746, !insn.addr !1731
  %748 = icmp ult i64 %747, 32
  store i64 %746, i64* %rcx.18.reg2mem, !insn.addr !1732
  store i64 %743, i64* %rdx.18.reg2mem, !insn.addr !1732
  br i1 %748, label %dec_label_pc_14000400d, label %dec_label_pc_140004006, !insn.addr !1732

dec_label_pc_140004006:                           ; preds = %dec_label_pc_140003ff1
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !1733
  %749 = call i64 @__asm_int3(), !insn.addr !1734
  store i64 %746, i64* %rcx.18.reg2mem, !insn.addr !1734
  store i64 %743, i64* %rdx.18.reg2mem, !insn.addr !1734
  br label %dec_label_pc_14000400d, !insn.addr !1734

dec_label_pc_14000400d:                           ; preds = %dec_label_pc_140004006, %dec_label_pc_140003ff1, %dec_label_pc_140003fd6
  %rdx.18.reload = load i64, i64* %rdx.18.reg2mem
  %rcx.18.reload = load i64, i64* %rcx.18.reg2mem
  %750 = call i64 @function_1400065d0(i64 %rcx.18.reload, i64 %rdx.18.reload), !insn.addr !1735
  br label %dec_label_pc_140004012, !insn.addr !1735

dec_label_pc_140004012:                           ; preds = %dec_label_pc_14000400d, %dec_label_pc_140003fb7
  %751 = call i128 @__asm_movdqa(i128 %607), !insn.addr !1736
  %752 = call i64 @__asm_movdqu(i128 %751), !insn.addr !1737
  store i64 0, i64* %stack_var_-112, align 8, !insn.addr !1738
  %753 = icmp ult i64 %6, 8, !insn.addr !1739
  br i1 %753, label %dec_label_pc_140004074, label %dec_label_pc_140004037, !insn.addr !1740

dec_label_pc_140004037:                           ; preds = %dec_label_pc_140004012
  %754 = mul i64 %6, 2, !insn.addr !1741
  %755 = add i64 %754, 2, !insn.addr !1741
  %756 = load i64, i64* %stack_var_-176, align 8, !insn.addr !1742
  %757 = icmp ult i64 %755, 4096, !insn.addr !1743
  store i64 %756, i64* %rcx.19.reg2mem, !insn.addr !1744
  store i64 %755, i64* %rdx.19.reg2mem, !insn.addr !1744
  br i1 %757, label %dec_label_pc_14000406e, label %dec_label_pc_140004052, !insn.addr !1744

dec_label_pc_140004052:                           ; preds = %dec_label_pc_140004037
  %758 = add i64 %754, 41, !insn.addr !1745
  %759 = add i64 %756, -8
  %760 = inttoptr i64 %759 to i64*, !insn.addr !1746
  %761 = load i64, i64* %760, align 8, !insn.addr !1746
  %762 = sub i64 %759, %761, !insn.addr !1747
  %763 = icmp ult i64 %762, 32
  store i64 %761, i64* %rcx.19.reg2mem, !insn.addr !1748
  store i64 %758, i64* %rdx.19.reg2mem, !insn.addr !1748
  br i1 %763, label %dec_label_pc_14000406e, label %dec_label_pc_140004067, !insn.addr !1748

dec_label_pc_140004067:                           ; preds = %dec_label_pc_140004052
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !1749
  %764 = call i64 @__asm_int3(), !insn.addr !1750
  store i64 %761, i64* %rcx.19.reg2mem, !insn.addr !1750
  store i64 %758, i64* %rdx.19.reg2mem, !insn.addr !1750
  br label %dec_label_pc_14000406e, !insn.addr !1750

dec_label_pc_14000406e:                           ; preds = %dec_label_pc_140004067, %dec_label_pc_140004052, %dec_label_pc_140004037
  %rdx.19.reload = load i64, i64* %rdx.19.reg2mem
  %rcx.19.reload = load i64, i64* %rcx.19.reg2mem
  %765 = call i64 @function_1400065d0(i64 %rcx.19.reload, i64 %rdx.19.reload), !insn.addr !1751
  br label %dec_label_pc_140004074, !insn.addr !1752

dec_label_pc_140004074:                           ; preds = %dec_label_pc_14000406e, %dec_label_pc_140004012
  %766 = icmp ult i64 %12, 8, !insn.addr !1753
  br i1 %766, label %dec_label_pc_1400040b7, label %dec_label_pc_14000407e, !insn.addr !1754

dec_label_pc_14000407e:                           ; preds = %dec_label_pc_140004074
  %767 = mul i64 %12, 2, !insn.addr !1755
  %768 = add i64 %767, 2, !insn.addr !1755
  %769 = load i64, i64* %stack_var_-272, align 8, !insn.addr !1756
  %770 = icmp ult i64 %768, 4096, !insn.addr !1757
  store i64 %769, i64* %rcx.20.reg2mem, !insn.addr !1758
  store i64 %768, i64* %rdx.20.reg2mem, !insn.addr !1758
  br i1 %770, label %dec_label_pc_1400040b2, label %dec_label_pc_140004096, !insn.addr !1758

dec_label_pc_140004096:                           ; preds = %dec_label_pc_14000407e
  %771 = add i64 %767, 41, !insn.addr !1759
  %772 = add i64 %769, -8
  %773 = inttoptr i64 %772 to i64*, !insn.addr !1760
  %774 = load i64, i64* %773, align 8, !insn.addr !1760
  %775 = sub i64 %772, %774, !insn.addr !1761
  %776 = icmp ult i64 %775, 32
  store i64 %774, i64* %rcx.20.reg2mem, !insn.addr !1762
  store i64 %771, i64* %rdx.20.reg2mem, !insn.addr !1762
  br i1 %776, label %dec_label_pc_1400040b2, label %dec_label_pc_1400040ab, !insn.addr !1762

dec_label_pc_1400040ab:                           ; preds = %dec_label_pc_140004096
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !1763
  %777 = call i64 @__asm_int3(), !insn.addr !1764
  store i64 %774, i64* %rcx.20.reg2mem, !insn.addr !1764
  store i64 %771, i64* %rdx.20.reg2mem, !insn.addr !1764
  br label %dec_label_pc_1400040b2, !insn.addr !1764

dec_label_pc_1400040b2:                           ; preds = %dec_label_pc_1400040ab, %dec_label_pc_140004096, %dec_label_pc_14000407e, %dec_label_pc_1400038e4, %dec_label_pc_1400038c8
  %rdx.20.reload = load i64, i64* %rdx.20.reg2mem
  %rcx.20.reload = load i64, i64* %rcx.20.reg2mem
  %778 = call i64 @function_1400065d0(i64 %rcx.20.reload, i64 %rdx.20.reload), !insn.addr !1765
  br label %dec_label_pc_1400040b7, !insn.addr !1765

dec_label_pc_1400040b7:                           ; preds = %dec_label_pc_1400040b2, %dec_label_pc_140004074, %dec_label_pc_1400038a8
  %779 = bitcast i128* %stack_var_-208 to i16*, !insn.addr !1766
  %780 = call i64 @function_140002160(i64* nonnull %stack_var_-176, i16* nonnull %779), !insn.addr !1766
  %781 = inttoptr i64 %780 to i128*, !insn.addr !1767
  %782 = call i64 @function_140006380(i128* %781, i64 ptrtoint ([17 x i16]* @global_var_140008ae8 to i64)), !insn.addr !1767
  %783 = inttoptr i64 %782 to i128*, !insn.addr !1768
  %784 = load i128, i128* %783, align 8, !insn.addr !1768
  %785 = call i128 @__asm_movups(i128 %784), !insn.addr !1768
  call void @__asm_movups.2(i128 0, i128 %785), !insn.addr !1769
  %786 = add i64 %782, 16, !insn.addr !1770
  %787 = inttoptr i64 %786 to i128*, !insn.addr !1770
  %788 = load i128, i128* %787, align 8, !insn.addr !1770
  %789 = call i128 @__asm_movups(i128 %788), !insn.addr !1770
  call void @__asm_movups.2(i128 0, i128 %789), !insn.addr !1771
  %790 = inttoptr i64 %786 to i64*, !insn.addr !1772
  store i64 0, i64* %790, align 8, !insn.addr !1772
  %791 = add i64 %782, 24, !insn.addr !1773
  %792 = inttoptr i64 %791 to i64*, !insn.addr !1773
  store i64 7, i64* %792, align 8, !insn.addr !1773
  %793 = inttoptr i64 %782 to i16*, !insn.addr !1774
  store i16 0, i16* %793, align 2, !insn.addr !1774
  %794 = bitcast i128* %stack_var_-400 to i64*, !insn.addr !1775
  %795 = call i64 @function_140002220(i64* nonnull %794, i64* nonnull %stack_var_-272), !insn.addr !1775
  %796 = icmp ult i64 %6, 8, !insn.addr !1776
  br i1 %796, label %dec_label_pc_14000416d, label %dec_label_pc_140004130, !insn.addr !1777

dec_label_pc_140004130:                           ; preds = %dec_label_pc_1400040b7
  %797 = mul i64 %6, 2, !insn.addr !1778
  %798 = add i64 %797, 2, !insn.addr !1778
  %799 = load i64, i64* %stack_var_-176, align 8, !insn.addr !1779
  %800 = icmp ult i64 %798, 4096, !insn.addr !1780
  store i64 %799, i64* %rcx.21.reg2mem, !insn.addr !1781
  store i64 %798, i64* %rdx.21.reg2mem, !insn.addr !1781
  br i1 %800, label %dec_label_pc_140004167, label %dec_label_pc_14000414b, !insn.addr !1781

dec_label_pc_14000414b:                           ; preds = %dec_label_pc_140004130
  %801 = add i64 %797, 41, !insn.addr !1782
  %802 = add i64 %799, -8
  %803 = inttoptr i64 %802 to i64*, !insn.addr !1783
  %804 = load i64, i64* %803, align 8, !insn.addr !1783
  %805 = sub i64 %802, %804, !insn.addr !1784
  %806 = icmp ult i64 %805, 32
  store i64 %804, i64* %rcx.21.reg2mem, !insn.addr !1785
  store i64 %801, i64* %rdx.21.reg2mem, !insn.addr !1785
  br i1 %806, label %dec_label_pc_140004167, label %dec_label_pc_140004160, !insn.addr !1785

dec_label_pc_140004160:                           ; preds = %dec_label_pc_14000414b
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !1786
  %807 = call i64 @__asm_int3(), !insn.addr !1787
  store i64 %804, i64* %rcx.21.reg2mem, !insn.addr !1787
  store i64 %801, i64* %rdx.21.reg2mem, !insn.addr !1787
  br label %dec_label_pc_140004167, !insn.addr !1787

dec_label_pc_140004167:                           ; preds = %dec_label_pc_140004160, %dec_label_pc_14000414b, %dec_label_pc_140004130
  %rdx.21.reload = load i64, i64* %rdx.21.reg2mem
  %rcx.21.reload = load i64, i64* %rcx.21.reg2mem
  %808 = call i64 @function_1400065d0(i64 %rcx.21.reload, i64 %rdx.21.reload), !insn.addr !1788
  br label %dec_label_pc_14000416d, !insn.addr !1789

dec_label_pc_14000416d:                           ; preds = %dec_label_pc_140004167, %dec_label_pc_1400040b7
  %809 = icmp ult i64 %5, 8, !insn.addr !1790
  br i1 %809, label %dec_label_pc_1400041b6, label %dec_label_pc_14000417a, !insn.addr !1791

dec_label_pc_14000417a:                           ; preds = %dec_label_pc_14000416d
  %810 = mul i64 %5, 2, !insn.addr !1792
  %811 = add i64 %810, 2, !insn.addr !1792
  %812 = load i128, i128* %stack_var_-208, align 8, !insn.addr !1793
  %813 = trunc i128 %812 to i64, !insn.addr !1793
  %sext5 = mul i64 %813, 281474976710656
  %814 = ashr exact i64 %sext5, 48, !insn.addr !1793
  %815 = icmp ult i64 %811, 4096, !insn.addr !1794
  store i64 %814, i64* %rcx.22.reg2mem, !insn.addr !1795
  store i64 %811, i64* %rdx.22.reg2mem, !insn.addr !1795
  br i1 %815, label %dec_label_pc_1400041b1, label %dec_label_pc_140004195, !insn.addr !1795

dec_label_pc_140004195:                           ; preds = %dec_label_pc_14000417a
  %816 = add i64 %810, 41, !insn.addr !1796
  %817 = add nsw i64 %814, -8
  %818 = inttoptr i64 %817 to i64*, !insn.addr !1797
  %819 = load i64, i64* %818, align 8, !insn.addr !1797
  %820 = sub i64 %817, %819, !insn.addr !1798
  %821 = icmp ult i64 %820, 32
  store i64 %819, i64* %rcx.22.reg2mem, !insn.addr !1799
  store i64 %816, i64* %rdx.22.reg2mem, !insn.addr !1799
  br i1 %821, label %dec_label_pc_1400041b1, label %dec_label_pc_1400041aa, !insn.addr !1799

dec_label_pc_1400041aa:                           ; preds = %dec_label_pc_140004195
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !1800
  %822 = call i64 @__asm_int3(), !insn.addr !1801
  store i64 %819, i64* %rcx.22.reg2mem, !insn.addr !1801
  store i64 %816, i64* %rdx.22.reg2mem, !insn.addr !1801
  br label %dec_label_pc_1400041b1, !insn.addr !1801

dec_label_pc_1400041b1:                           ; preds = %dec_label_pc_1400041aa, %dec_label_pc_140004195, %dec_label_pc_14000417a
  %rdx.22.reload = load i64, i64* %rdx.22.reg2mem
  %rcx.22.reload = load i64, i64* %rcx.22.reg2mem
  %823 = call i64 @function_1400065d0(i64 %rcx.22.reload, i64 %rdx.22.reload), !insn.addr !1802
  br label %dec_label_pc_1400041b6, !insn.addr !1802

dec_label_pc_1400041b6:                           ; preds = %dec_label_pc_1400041b1, %dec_label_pc_14000416d
  %824 = sext i32 %21 to i64, !insn.addr !1150
  call void @__security_check_cookie(i64 %824), !insn.addr !1803
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !1804

; uselistorder directives
  uselistorder i64 %814, { 1, 0 }
  uselistorder i64 %810, { 1, 0 }
  uselistorder i64 %799, { 1, 0 }
  uselistorder i64 %797, { 1, 0 }
  uselistorder i64 %782, { 3, 2, 1, 0 }
  uselistorder i64 %769, { 1, 0 }
  uselistorder i64 %767, { 1, 0 }
  uselistorder i64 %756, { 1, 0 }
  uselistorder i64 %754, { 1, 0 }
  uselistorder i64 %741, { 1, 0 }
  uselistorder i64 %739, { 1, 0 }
  uselistorder i64 %726, { 1, 0 }
  uselistorder i64 %723, { 1, 0 }
  uselistorder i64 %710, { 1, 0 }
  uselistorder i64 %707, { 1, 0 }
  uselistorder i64 %694, { 1, 0 }
  uselistorder i64 %691, { 1, 0 }
  uselistorder i64 %678, { 1, 0 }
  uselistorder i64 %675, { 1, 0 }
  uselistorder i64 %662, { 1, 0 }
  uselistorder i64 %659, { 1, 0 }
  uselistorder i64 %646, { 1, 0 }
  uselistorder i64 %643, { 1, 0 }
  uselistorder i64 %630, { 1, 0 }
  uselistorder i64 %627, { 1, 0 }
  uselistorder i64 %614, { 1, 0 }
  uselistorder i64 %611, { 1, 0 }
  uselistorder i64 %597, { 1, 0 }
  uselistorder i64 %594, { 1, 0 }
  uselistorder i64 %583, { 1, 0 }
  uselistorder i64 %581, { 1, 0 }
  uselistorder i64 %568, { 3, 2, 1, 0 }
  uselistorder i64 %552, { 3, 2, 1, 0 }
  uselistorder i128 %542, { 2, 1, 0 }
  uselistorder i64 %536, { 3, 2, 1, 0 }
  uselistorder i128 %526, { 1, 2, 0 }
  uselistorder i64 %520, { 3, 2, 1, 0 }
  uselistorder i128 %510, { 1, 2, 0 }
  uselistorder i64 %504, { 3, 2, 1, 0 }
  uselistorder i128 %494, { 2, 1, 0 }
  uselistorder i64 %storemerge.reload, { 3, 2, 1, 0 }
  uselistorder i64 %475, { 2, 0, 1 }
  uselistorder i128 %463, { 1, 0, 2 }
  uselistorder i64 %457, { 3, 2, 1, 0 }
  uselistorder i128 %447, { 2, 1, 0 }
  uselistorder i64 %storemerge6.reload, { 3, 2, 1, 0 }
  uselistorder i64 %429, { 2, 0, 1 }
  uselistorder i128 %417, { 1, 0, 2 }
  uselistorder i64 %411, { 3, 2, 1, 0 }
  uselistorder i128 %406, { 2, 1, 0 }
  uselistorder i64 %rbx.1.reload, { 1, 0 }
  uselistorder i64 %rdi.1.reload, { 1, 0 }
  uselistorder i64 %380, { 3, 0, 2, 1, 5, 4 }
  uselistorder i64 %373, { 1, 0, 2 }
  uselistorder i64 %364, { 1, 0 }
  uselistorder i64 %362, { 1, 0 }
  uselistorder i64 %349, { 1, 0 }
  uselistorder i64 %346, { 1, 0 }
  uselistorder i64 %333, { 1, 0 }
  uselistorder i64 %330, { 1, 0 }
  uselistorder i64 %317, { 1, 0 }
  uselistorder i64 %314, { 1, 0 }
  uselistorder i64 %301, { 1, 0 }
  uselistorder i64 %298, { 1, 0 }
  uselistorder i64 %285, { 1, 0 }
  uselistorder i64 %282, { 1, 0 }
  uselistorder i64 %269, { 1, 0 }
  uselistorder i64 %266, { 1, 0 }
  uselistorder i64 %253, { 1, 0 }
  uselistorder i64 %250, { 1, 0 }
  uselistorder i64 %237, { 1, 0 }
  uselistorder i64 %234, { 1, 0 }
  uselistorder i64 %storemerge7.reload, { 3, 2, 1, 0 }
  uselistorder i64 %208, { 2, 0, 1 }
  uselistorder i64 %191, { 3, 2, 1, 0 }
  uselistorder i128 %181, { 2, 1, 0 }
  uselistorder i64 %storemerge8.reload, { 3, 2, 1, 0 }
  uselistorder i64 %163, { 2, 0, 1 }
  uselistorder i128 %151, { 1, 0, 2 }
  uselistorder i64 %storemerge9.reload, { 3, 2, 1, 0 }
  uselistorder i64 %133, { 2, 0, 1 }
  uselistorder i128 %122, { 1, 0, 2 }
  uselistorder i64 %116, { 3, 2, 1, 0 }
  uselistorder i128 %106, { 2, 1, 0 }
  uselistorder i64 %storemerge10.reload, { 3, 2, 1, 0 }
  uselistorder i64 %88, { 2, 0, 1 }
  uselistorder i128 %76, { 1, 0, 2 }
  uselistorder i64 %70, { 3, 2, 1, 0 }
  uselistorder i128 %64, { 2, 1, 0 }
  uselistorder i64 %rbx.0.reload, { 1, 0 }
  uselistorder i64 %rdi.0.reload, { 1, 0 }
  uselistorder i64 %38, { 3, 0, 2, 1, 5, 4 }
  uselistorder i64 %30, { 1, 0, 2 }
  uselistorder i128 %23, { 2, 1, 0, 3 }
  uselistorder i64 %20, { 3, 0, 2, 1 }
  uselistorder i128* %stack_var_-208, { 1, 2, 0 }
  uselistorder i64* %stack_var_-272, { 1, 2, 4, 3, 0 }
  uselistorder i128* %stack_var_-400, { 6, 3, 2, 5, 1, 0, 4 }
  uselistorder i128* %stack_var_-304, { 2, 3, 0, 4, 5, 6, 1, 7 }
  uselistorder i128* %stack_var_-496, { 0, 1, 3, 2, 4, 5, 6, 8, 7, 9 }
  uselistorder i64 %19, { 7, 0, 1, 2, 6, 3, 4, 5 }
  uselistorder i128* %stack_var_-336, { 2, 3, 0, 4, 5, 6, 1, 7 }
  uselistorder i128* %stack_var_-528, { 0, 1, 3, 2, 4, 5, 6, 8, 7, 9 }
  uselistorder i64 %18, { 7, 0, 1, 2, 6, 3, 4, 5 }
  uselistorder i128* %stack_var_-432, { 1, 2, 0, 3, 4, 5, 7, 6, 8 }
  uselistorder i64 %17, { 5, 0, 4, 1, 2, 3 }
  uselistorder i128* %stack_var_-368, { 2, 3, 0, 4, 5, 6, 1, 7 }
  uselistorder i128* %stack_var_-464, { 1, 2, 0, 3, 4, 5, 7, 6, 8 }
  uselistorder i64 %16, { 5, 0, 4, 1, 2, 3 }
  uselistorder i64 %15, { 3, 0, 2, 1 }
  uselistorder i64 %14, { 3, 0, 2, 1 }
  uselistorder i64 %13, { 3, 0, 2, 1 }
  uselistorder i64 %12, { 3, 0, 2, 1 }
  uselistorder i64* %stack_var_-176, { 2, 0, 3, 1 }
  uselistorder i64* %stack_var_-112, { 1, 2, 0 }
  uselistorder i128* %stack_var_-240, { 1, 2, 0, 3 }
  uselistorder i64 %9, { 1, 0 }
  uselistorder i64 %8, { 1, 0 }
  uselistorder i64 %7, { 1, 0 }
  uselistorder i64 %6, { 3, 0, 2, 1 }
  uselistorder i64 %5, { 1, 0 }
  uselistorder i64 %4, { 1, 0 }
  uselistorder i64 %3, { 1, 0 }
  uselistorder i64** %.pre-phi47.reg2mem, { 0, 2, 1 }
  uselistorder i64** %.pre-phi43.reg2mem, { 0, 2, 1 }
  uselistorder i64* %.pre-phi41.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rbx.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %storemerge10.reg2mem, { 0, 2, 1 }
  uselistorder i64* %storemerge9.reg2mem, { 0, 2, 1 }
  uselistorder i64* %storemerge8.reg2mem, { 0, 2, 1 }
  uselistorder i64* %storemerge7.reg2mem, { 0, 2, 1 }
  uselistorder i64** %.pre-phi39.reg2mem, { 0, 2, 1 }
  uselistorder i64** %.pre-phi35.reg2mem, { 0, 2, 1 }
  uselistorder i64* %.pre-phi.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rbx.1.reg2mem, { 0, 2, 1 }
  uselistorder i64* %storemerge6.reg2mem, { 0, 2, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rcx.20.reg2mem, { 0, 3, 4, 5, 1, 2 }
  uselistorder i64* %rdx.20.reg2mem, { 0, 3, 4, 5, 1, 2 }
  uselistorder i64* %1, { 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i128* %0, { 1, 0 }
  uselistorder i64 (i64*, i64*)* @function_140002220, { 1, 0 }
  uselistorder i64 (i64*, i16*)* @function_140002160, { 1, 0 }
  uselistorder i64 13, { 0, 2, 1, 3 }
  uselistorder i64* @global_var_140008a68, { 0, 1, 5, 2, 3, 4 }
  uselistorder i64 12, { 3, 9, 0, 4, 10, 1, 5, 11, 12, 2, 6, 13, 14, 7, 8 }
  uselistorder i64 (i64*)* @function_1400060a0, { 3, 2, 1, 0 }
  uselistorder i64 (i64*)* @function_1400020b0, { 2, 1, 0 }
  uselistorder i128 0, { 8, 0, 9, 10, 11, 12, 13, 14, 15, 16, 17, 1, 18, 19, 20, 21, 22, 23, 24, 25, 2, 42, 26, 3, 27, 28, 29, 30, 31, 32, 33, 4, 5, 6, 34, 35, 36, 37, 38, 39, 7, 40, 41, 43 }
}

define i64 @function_1400041e0() local_unnamed_addr {
dec_label_pc_1400041e0:
  %0 = alloca i64
  %1 = alloca i32
  %rdx.2.reg2mem = alloca i64, !insn.addr !1805
  %rcx.2.reg2mem = alloca i64, !insn.addr !1805
  %rdx.1.reg2mem = alloca i64, !insn.addr !1805
  %rcx.1.reg2mem = alloca i64, !insn.addr !1805
  %rdx.0.reg2mem = alloca i64, !insn.addr !1805
  %rcx.0.reg2mem = alloca i64, !insn.addr !1805
  %stack_var_-232 = alloca i32, align 4
  %stack_var_-228 = alloca i64, align 8
  %stack_var_-264 = alloca i64, align 8
  %2 = load i32, i32* %1
  %3 = load i64, i64* %0
  %4 = load i64, i64* %0
  %stack_var_-120 = alloca i16, align 2
  %stack_var_-56 = alloca i16, align 2
  %stack_var_-88 = alloca i64, align 8
  %5 = load i32, i32* @global_var_14000c010, align 4, !insn.addr !1806
  %6 = load i128, i128* @global_var_140008dd0, align 8
  %7 = call i128 @__asm_movdqa(i128 %6), !insn.addr !1807
  %8 = call i64 @__asm_movdqu(i128 %7), !insn.addr !1808
  store i16 0, i16* %stack_var_-56, align 2, !insn.addr !1809
  %9 = bitcast i16* %stack_var_-56 to i64*, !insn.addr !1810
  %10 = call i64 @function_140005740(i64* nonnull %9, i64* nonnull @global_var_14000892c, i32 0), !insn.addr !1810
  %11 = call i128 @__asm_movdqa(i128 %6), !insn.addr !1811
  %12 = call i64 @__asm_movdqu(i128 %11), !insn.addr !1812
  store i64 0, i64* %stack_var_-88, align 8, !insn.addr !1813
  %13 = call i64 @function_140005740(i64* nonnull %stack_var_-88, i64* bitcast ([17 x i16]* @global_var_140008b30 to i64*), i32 16), !insn.addr !1814
  %14 = call i128 @__asm_movdqa(i128 %6), !insn.addr !1815
  %15 = call i64 @__asm_movdqu(i128 %14), !insn.addr !1816
  store i16 0, i16* %stack_var_-120, align 2, !insn.addr !1817
  %16 = bitcast i16* %stack_var_-120 to i64*, !insn.addr !1818
  %17 = call i64 @function_140005740(i64* nonnull %16, i64* bitcast ([6 x i16]* @global_var_140008b58 to i64*), i32 5), !insn.addr !1818
  %18 = call i64 @function_1400023b0(i16* nonnull %stack_var_-120, i64* nonnull %stack_var_-88, i16* nonnull %stack_var_-56), !insn.addr !1819
  %19 = icmp ult i64 %4, 8, !insn.addr !1820
  br i1 %19, label %dec_label_pc_1400042d6, label %dec_label_pc_14000429c, !insn.addr !1821

dec_label_pc_14000429c:                           ; preds = %dec_label_pc_1400041e0
  %20 = mul i64 %4, 2, !insn.addr !1822
  %21 = add i64 %20, 2, !insn.addr !1822
  %22 = load i16, i16* %stack_var_-120, align 2, !insn.addr !1823
  %23 = sext i16 %22 to i64, !insn.addr !1823
  %24 = icmp ult i64 %21, 4096, !insn.addr !1824
  store i64 %23, i64* %rcx.0.reg2mem, !insn.addr !1825
  store i64 %21, i64* %rdx.0.reg2mem, !insn.addr !1825
  br i1 %24, label %dec_label_pc_1400042d0, label %dec_label_pc_1400042b4, !insn.addr !1825

dec_label_pc_1400042b4:                           ; preds = %dec_label_pc_14000429c
  %25 = add i64 %20, 41, !insn.addr !1826
  %26 = add nsw i64 %23, -8
  %27 = inttoptr i64 %26 to i64*, !insn.addr !1827
  %28 = load i64, i64* %27, align 8, !insn.addr !1827
  %29 = sub i64 %26, %28, !insn.addr !1828
  %30 = icmp ult i64 %29, 32
  store i64 %28, i64* %rcx.0.reg2mem, !insn.addr !1829
  store i64 %25, i64* %rdx.0.reg2mem, !insn.addr !1829
  br i1 %30, label %dec_label_pc_1400042d0, label %dec_label_pc_1400042c9, !insn.addr !1829

dec_label_pc_1400042c9:                           ; preds = %dec_label_pc_1400042b4
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !1830
  %31 = call i64 @__asm_int3(), !insn.addr !1831
  store i64 %28, i64* %rcx.0.reg2mem, !insn.addr !1831
  store i64 %25, i64* %rdx.0.reg2mem, !insn.addr !1831
  br label %dec_label_pc_1400042d0, !insn.addr !1831

dec_label_pc_1400042d0:                           ; preds = %dec_label_pc_1400042c9, %dec_label_pc_1400042b4, %dec_label_pc_14000429c
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %32 = call i64 @function_1400065d0(i64 %rcx.0.reload, i64 %rdx.0.reload), !insn.addr !1832
  br label %dec_label_pc_1400042d6, !insn.addr !1833

dec_label_pc_1400042d6:                           ; preds = %dec_label_pc_1400042d0, %dec_label_pc_1400041e0
  %33 = icmp ult i64 %3, 8, !insn.addr !1834
  br i1 %33, label %dec_label_pc_14000431a, label %dec_label_pc_1400042e0, !insn.addr !1835

dec_label_pc_1400042e0:                           ; preds = %dec_label_pc_1400042d6
  %34 = mul i64 %3, 2, !insn.addr !1836
  %35 = add i64 %34, 2, !insn.addr !1836
  %36 = load i64, i64* %stack_var_-88, align 8, !insn.addr !1837
  %37 = icmp ult i64 %35, 4096, !insn.addr !1838
  store i64 %36, i64* %rcx.1.reg2mem, !insn.addr !1839
  store i64 %35, i64* %rdx.1.reg2mem, !insn.addr !1839
  br i1 %37, label %dec_label_pc_140004314, label %dec_label_pc_1400042f8, !insn.addr !1839

dec_label_pc_1400042f8:                           ; preds = %dec_label_pc_1400042e0
  %38 = add i64 %34, 41, !insn.addr !1840
  %39 = add i64 %36, -8
  %40 = inttoptr i64 %39 to i64*, !insn.addr !1841
  %41 = load i64, i64* %40, align 8, !insn.addr !1841
  %42 = sub i64 %39, %41, !insn.addr !1842
  %43 = icmp ult i64 %42, 32
  store i64 %41, i64* %rcx.1.reg2mem, !insn.addr !1843
  store i64 %38, i64* %rdx.1.reg2mem, !insn.addr !1843
  br i1 %43, label %dec_label_pc_140004314, label %dec_label_pc_14000430d, !insn.addr !1843

dec_label_pc_14000430d:                           ; preds = %dec_label_pc_1400042f8
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !1844
  %44 = call i64 @__asm_int3(), !insn.addr !1845
  store i64 %41, i64* %rcx.1.reg2mem, !insn.addr !1845
  store i64 %38, i64* %rdx.1.reg2mem, !insn.addr !1845
  br label %dec_label_pc_140004314, !insn.addr !1845

dec_label_pc_140004314:                           ; preds = %dec_label_pc_14000430d, %dec_label_pc_1400042f8, %dec_label_pc_1400042e0
  %rdx.1.reload = load i64, i64* %rdx.1.reg2mem
  %rcx.1.reload = load i64, i64* %rcx.1.reg2mem
  %45 = call i64 @function_1400065d0(i64 %rcx.1.reload, i64 %rdx.1.reload), !insn.addr !1846
  br label %dec_label_pc_14000431a, !insn.addr !1847

dec_label_pc_14000431a:                           ; preds = %dec_label_pc_140004314, %dec_label_pc_1400042d6
  %46 = icmp ult i32 %2, 8, !insn.addr !1848
  br i1 %46, label %dec_label_pc_14000435d, label %dec_label_pc_140004324, !insn.addr !1849

dec_label_pc_140004324:                           ; preds = %dec_label_pc_14000431a
  %47 = sext i32 %2 to i64, !insn.addr !1850
  %48 = mul i64 %47, 2, !insn.addr !1851
  %49 = add nsw i64 %48, 2, !insn.addr !1851
  %50 = load i16, i16* %stack_var_-56, align 2, !insn.addr !1852
  %51 = sext i16 %50 to i64, !insn.addr !1852
  %52 = icmp ult i64 %49, 4096, !insn.addr !1853
  store i64 %51, i64* %rcx.2.reg2mem, !insn.addr !1854
  store i64 %49, i64* %rdx.2.reg2mem, !insn.addr !1854
  br i1 %52, label %dec_label_pc_140004358, label %dec_label_pc_14000433c, !insn.addr !1854

dec_label_pc_14000433c:                           ; preds = %dec_label_pc_140004324
  %53 = add nsw i64 %48, 41, !insn.addr !1855
  %54 = add nsw i64 %51, -8
  %55 = inttoptr i64 %54 to i64*, !insn.addr !1856
  %56 = load i64, i64* %55, align 8, !insn.addr !1856
  %57 = sub i64 %54, %56, !insn.addr !1857
  %58 = icmp ult i64 %57, 32
  store i64 %56, i64* %rcx.2.reg2mem, !insn.addr !1858
  store i64 %53, i64* %rdx.2.reg2mem, !insn.addr !1858
  br i1 %58, label %dec_label_pc_140004358, label %dec_label_pc_140004351, !insn.addr !1858

dec_label_pc_140004351:                           ; preds = %dec_label_pc_14000433c
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !1859
  %59 = call i64 @__asm_int3(), !insn.addr !1860
  store i64 %56, i64* %rcx.2.reg2mem, !insn.addr !1860
  store i64 %53, i64* %rdx.2.reg2mem, !insn.addr !1860
  br label %dec_label_pc_140004358, !insn.addr !1860

dec_label_pc_140004358:                           ; preds = %dec_label_pc_140004351, %dec_label_pc_14000433c, %dec_label_pc_140004324
  %rdx.2.reload = load i64, i64* %rdx.2.reg2mem
  %rcx.2.reload = load i64, i64* %rcx.2.reg2mem
  %60 = call i64 @function_1400065d0(i64 %rcx.2.reload, i64 %rdx.2.reload), !insn.addr !1861
  br label %dec_label_pc_14000435d, !insn.addr !1861

dec_label_pc_14000435d:                           ; preds = %dec_label_pc_140004358, %dec_label_pc_14000431a
  store i64 0, i64* %stack_var_-264, align 8, !insn.addr !1862
  %61 = call i64* @memset(i64* nonnull %stack_var_-228, i32 0, i32 100), !insn.addr !1863
  store i32 104, i32* %stack_var_-232, align 4, !insn.addr !1864
  %62 = bitcast i32* %stack_var_-232 to %_STARTUPINFOA*, !insn.addr !1865
  %63 = bitcast i64* %stack_var_-264 to %_PROCESS_INFORMATION*, !insn.addr !1865
  %64 = call i1 @CreateProcessA(i8* null, i8* getelementptr inbounds ([14 x i8], [14 x i8]* @global_var_140008b68, i64 0, i64 0), %_SECURITY_ATTRIBUTES* null, %_SECURITY_ATTRIBUTES* null, i1 true, i32 0, i64* null, i8* null, %_STARTUPINFOA* nonnull %62, %_PROCESS_INFORMATION* nonnull %63), !insn.addr !1865
  %65 = icmp eq i1 %64, false, !insn.addr !1866
  br i1 %65, label %dec_label_pc_1400043e1, label %dec_label_pc_1400043cb, !insn.addr !1867

dec_label_pc_1400043cb:                           ; preds = %dec_label_pc_14000435d
  %66 = call i1 @CloseHandle(i64* null), !insn.addr !1868
  %67 = load i64, i64* %stack_var_-264, align 8, !insn.addr !1869
  %68 = inttoptr i64 %67 to i64*, !insn.addr !1870
  %69 = call i1 @CloseHandle(i64* %68), !insn.addr !1870
  br label %dec_label_pc_1400043e1, !insn.addr !1870

dec_label_pc_1400043e1:                           ; preds = %dec_label_pc_1400043cb, %dec_label_pc_14000435d
  %70 = sext i32 %5 to i64, !insn.addr !1806
  call void @__security_check_cookie(i64 %70), !insn.addr !1871
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !1872

; uselistorder directives
  uselistorder i64 %51, { 1, 0 }
  uselistorder i64 %48, { 1, 0 }
  uselistorder i64 %36, { 1, 0 }
  uselistorder i64 %34, { 1, 0 }
  uselistorder i64 %23, { 1, 0 }
  uselistorder i64 %20, { 1, 0 }
  uselistorder i128 %6, { 1, 0, 2 }
  uselistorder i64* %stack_var_-88, { 2, 0, 1, 3 }
  uselistorder i16* %stack_var_-56, { 2, 0, 1, 3 }
  uselistorder i16* %stack_var_-120, { 2, 0, 1, 3 }
  uselistorder i64 %4, { 1, 0 }
  uselistorder i64 %3, { 1, 0 }
  uselistorder i32 %2, { 1, 0 }
  uselistorder i64* %stack_var_-264, { 1, 0, 2 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @function_140004400() local_unnamed_addr {
dec_label_pc_140004400:
  %rdi.3.reg2mem = alloca i64, !insn.addr !1873
  %rdi.2.reg2mem = alloca i64, !insn.addr !1873
  %rbx.0.reg2mem = alloca i64, !insn.addr !1873
  %r8.0.reg2mem = alloca i64, !insn.addr !1873
  %storemerge4.reg2mem = alloca i32, !insn.addr !1873
  %stack_var_-1760.2.reg2mem = alloca i32, !insn.addr !1873
  %stack_var_-1768.2.reg2mem = alloca i32, !insn.addr !1873
  %stack_var_-1760.1.reg2mem = alloca i32, !insn.addr !1873
  %stack_var_-1760.0.reg2mem = alloca i32, !insn.addr !1873
  %r13.3.reg2mem = alloca i64, !insn.addr !1873
  %rsi.3.reg2mem = alloca i64, !insn.addr !1873
  %r13.2.reg2mem = alloca i64, !insn.addr !1873
  %rdi.1.reg2mem = alloca i64, !insn.addr !1873
  %rsi.2.reg2mem = alloca i64, !insn.addr !1873
  %r13.2.ph.reg2mem = alloca i64, !insn.addr !1873
  %rdi.1.ph.reg2mem = alloca i64, !insn.addr !1873
  %rsi.2.ph.reg2mem = alloca i64, !insn.addr !1873
  %stack_var_-1768.1.ph.reg2mem = alloca i32, !insn.addr !1873
  %r15.1.reg2mem = alloca i64, !insn.addr !1873
  %r15.0.reg2mem = alloca i64, !insn.addr !1873
  %r13.1.reg2mem = alloca i64, !insn.addr !1873
  %rdi.0.reg2mem = alloca i64, !insn.addr !1873
  %rsi.1.reg2mem = alloca i64, !insn.addr !1873
  %stack_var_-1768.0.reg2mem = alloca i32, !insn.addr !1873
  %r14.1.reg2mem = alloca i64, !insn.addr !1873
  %r13.0.reg2mem = alloca i64, !insn.addr !1873
  %rsi.0.reg2mem = alloca i64, !insn.addr !1873
  %stack_var_-1704.1.reg2mem = alloca i64, !insn.addr !1873
  %storemerge5.reg2mem = alloca i64, !insn.addr !1873
  %r14.0.reg2mem = alloca i64, !insn.addr !1873
  %stack_var_-1704.0.reg2mem = alloca i64, !insn.addr !1873
  %stack_var_-1496 = alloca i16, align 2
  %stack_var_-1464 = alloca i16, align 2
  %stack_var_-1432 = alloca i16, align 2
  %stack_var_-568 = alloca i64, align 8
  %stack_var_-1748 = alloca i64, align 8
  %stack_var_-1752 = alloca i32, align 4
  %stack_var_-1392 = alloca i64, align 8
  %stack_var_-1400 = alloca i64, align 8
  %stack_var_-1512 = alloca i32, align 4
  %stack_var_-1368 = alloca i64, align 8
  %stack_var_-1624 = alloca i32, align 4
  %stack_var_-1620 = alloca i64, align 8
  %stack_var_-1736 = alloca i64, align 8
  %stack_var_-1096 = alloca i64, align 8
  %stack_var_-1592 = alloca i64, align 8
  %0 = load i32, i32* @global_var_14000c010, align 4, !insn.addr !1874
  %1 = call i64* @memset(i64* nonnull %stack_var_-1096, i32 0, i32 520), !insn.addr !1875
  %2 = bitcast i64* %stack_var_-1096 to i8*, !insn.addr !1876
  %3 = call i32 @GetModuleFileNameA(i64* null, i8* nonnull %2, i32 520), !insn.addr !1876
  %4 = call i8* @_mbsrchr(i8* nonnull %2, i32 92), !insn.addr !1877
  %5 = ptrtoint i8* %4 to i64, !insn.addr !1877
  %6 = add i64 %5, 1, !insn.addr !1878
  %7 = inttoptr i64 %6 to i8*, !insn.addr !1878
  store i8 0, i8* %7, align 1, !insn.addr !1878
  %8 = call i32 @strcat_s(i8* nonnull %2, i32 520, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @global_var_140008b28, i64 0, i64 0)), !insn.addr !1879
  %9 = call i1 @CreateDirectoryA(i8* nonnull %2, %_SECURITY_ATTRIBUTES* null), !insn.addr !1880
  %10 = call i32 @strcat_s(i8* nonnull %2, i32 520, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @global_var_140008b2c, i64 0, i64 0)), !insn.addr !1881
  %11 = call i32 @strcat_s(i8* nonnull %2, i32 520, i8* getelementptr inbounds ([11 x i8], [11 x i8]* @global_var_140008920, i64 0, i64 0)), !insn.addr !1882
  %12 = call i64* @CreateFileA(i8* nonnull %2, i32 -1073741824, i32 1, %_SECURITY_ATTRIBUTES* null, i32 2, i32 128, i64* null), !insn.addr !1883
  %13 = call i64* @CreateFileMappingA(i64* inttoptr (i64 -1 to i64*), %_SECURITY_ATTRIBUTES* null, i32 4, i32 0, i32 2097152, i8* inttoptr (i32 ptrtoint ([43 x i8]* @global_var_140008748 to i32) to i8*)), !insn.addr !1884
  %14 = ptrtoint i64* %13 to i64, !insn.addr !1884
  %15 = icmp eq i64* %13, null, !insn.addr !1885
  %16 = icmp eq i1 %15, false, !insn.addr !1886
  store i64 %14, i64* %stack_var_-1704.0.reg2mem, !insn.addr !1886
  store i64 0, i64* %r14.0.reg2mem, !insn.addr !1886
  store i64 ptrtoint ([28 x i8]* @global_var_140008818 to i64), i64* %storemerge5.reg2mem, !insn.addr !1886
  br i1 %16, label %dec_label_pc_14000456e, label %dec_label_pc_1400045c0, !insn.addr !1886

dec_label_pc_14000456e:                           ; preds = %dec_label_pc_140004400
  %17 = call i64* @MapViewOfFile(i64* %13, i32 983071, i32 0, i32 0, i32 2097152), !insn.addr !1887
  %18 = ptrtoint i64* %17 to i64, !insn.addr !1887
  %19 = icmp eq i64* %17, null, !insn.addr !1888
  br i1 %19, label %dec_label_pc_1400045ac, label %dec_label_pc_140004597, !insn.addr !1889

dec_label_pc_140004597:                           ; preds = %dec_label_pc_14000456e
  %20 = bitcast i64* %17 to i32*, !insn.addr !1890
  store i32 0, i32* %20, align 4, !insn.addr !1890
  store i64 %14, i64* %stack_var_-1704.1.reg2mem, !insn.addr !1891
  store i64 %18, i64* %rsi.0.reg2mem, !insn.addr !1891
  store i64 2097152, i64* %r13.0.reg2mem, !insn.addr !1891
  store i64 %18, i64* %r14.1.reg2mem, !insn.addr !1891
  br label %dec_label_pc_1400045c6, !insn.addr !1891

dec_label_pc_1400045ac:                           ; preds = %dec_label_pc_14000456e
  %21 = call i1 @CloseHandle(i64* %13), !insn.addr !1892
  store i64 0, i64* %stack_var_-1704.0.reg2mem, !insn.addr !1893
  store i64 %18, i64* %r14.0.reg2mem, !insn.addr !1893
  store i64 ptrtoint ([29 x i8]* @global_var_140008838 to i64), i64* %storemerge5.reg2mem, !insn.addr !1893
  br label %dec_label_pc_1400045c0, !insn.addr !1893

dec_label_pc_1400045c0:                           ; preds = %dec_label_pc_140004400, %dec_label_pc_1400045ac
  %storemerge5.reload = load i64, i64* %storemerge5.reg2mem
  %r14.0.reload = load i64, i64* %r14.0.reg2mem
  %stack_var_-1704.0.reload = load i64, i64* %stack_var_-1704.0.reg2mem
  %22 = inttoptr i64 %storemerge5.reload to i8*, !insn.addr !1894
  call void @OutputDebugStringA(i8* %22), !insn.addr !1894
  store i64 %stack_var_-1704.0.reload, i64* %stack_var_-1704.1.reg2mem, !insn.addr !1894
  store i64 0, i64* %rsi.0.reg2mem, !insn.addr !1894
  store i64 0, i64* %r13.0.reg2mem, !insn.addr !1894
  store i64 %r14.0.reload, i64* %r14.1.reg2mem, !insn.addr !1894
  br label %dec_label_pc_1400045c6, !insn.addr !1894

dec_label_pc_1400045c6:                           ; preds = %dec_label_pc_1400045c0, %dec_label_pc_140004597
  %23 = ptrtoint i64* %stack_var_-1592 to i64, !insn.addr !1895
  %24 = sext i32 %0 to i64, !insn.addr !1874
  %25 = ptrtoint i64* %12 to i64, !insn.addr !1883
  %r14.1.reload = load i64, i64* %r14.1.reg2mem
  %r13.0.reload = load i64, i64* %r13.0.reg2mem
  %rsi.0.reload = load i64, i64* %rsi.0.reg2mem
  %stack_var_-1704.1.reload = load i64, i64* %stack_var_-1704.1.reg2mem
  %26 = call i64* @CreateMutexA(%_SECURITY_ATTRIBUTES* null, i1 false, i8* getelementptr inbounds ([46 x i8], [46 x i8]* @global_var_140008778, i64 0, i64 0)), !insn.addr !1896
  %27 = call i64 @GetTickCount64(), !insn.addr !1897
  %28 = bitcast i32* %stack_var_-1512 to %_SYSTEMTIME*
  %29 = bitcast i64* %stack_var_-1368 to i8*
  %30 = bitcast i32* %stack_var_-1624 to %_STARTUPINFOA*
  %31 = bitcast i64* %stack_var_-1736 to %_PROCESS_INFORMATION*
  %32 = add i64 %23, 192
  %33 = bitcast i64* %stack_var_-1400 to i64**
  %34 = add i64 %25, -1
  %35 = icmp ult i64 %34, -2
  %36 = icmp eq i64 %r14.1.reload, 0
  %37 = inttoptr i64 %r14.1.reload to i32*
  %38 = bitcast i64* %stack_var_-1748 to i32*
  %39 = ptrtoint i64* %stack_var_-568 to i64
  %40 = bitcast i16* %stack_var_-1432 to i64*
  %41 = bitcast i16* %stack_var_-1464 to i64*
  %42 = bitcast i16* %stack_var_-1496 to i64*
  %43 = ptrtoint i64* %stack_var_-1392 to i64
  store i32 0, i32* %stack_var_-1768.0.reg2mem, !insn.addr !1898
  store i64 %rsi.0.reload, i64* %rsi.1.reg2mem, !insn.addr !1898
  store i64 0, i64* %rdi.0.reg2mem, !insn.addr !1898
  store i64 %r13.0.reload, i64* %r13.1.reg2mem, !insn.addr !1898
  br label %dec_label_pc_1400045e9, !insn.addr !1898

dec_label_pc_1400045e9:                           ; preds = %dec_label_pc_140004ad3, %dec_label_pc_1400045c6
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  call void @"?DebugTrace@@YAXPEBDZZ"(i8* bitcast (i32* @0 to i8*)), !insn.addr !1899
  store i64 zext (i32 xor (i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32)) to i64), i64* %stack_var_-1736, align 8, !insn.addr !1900
  %44 = call i64* @memset(i64* nonnull %stack_var_-1620, i32 0, i32 trunc (i64 add (i64 zext (i32 xor (i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32)) to i64), i64 100) to i32)), !insn.addr !1901
  store i32 104, i32* %stack_var_-1624, align 4, !insn.addr !1902
  %45 = call i64* @memset(i64* nonnull %stack_var_-1368, i32 0, i32 260), !insn.addr !1903
  store i32 0, i32* %stack_var_-1512, align 4, !insn.addr !1904
  call void @GetLocalTime(%_SYSTEMTIME* nonnull %28), !insn.addr !1905
  %46 = load i32, i32* %stack_var_-1512, align 4, !insn.addr !1906
  %47 = and i32 %46, 65535
  %48 = zext i32 %47 to i64, !insn.addr !1906
  %49 = call i64 @function_140001230(i64* nonnull %stack_var_-1368, i64 259, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_140008a00, i64 0, i64 0), i64 %48), !insn.addr !1907
  %50 = call i1 @SetEnvironmentVariableA(i8* getelementptr inbounds ([8 x i8], [8 x i8]* @global_var_140008b90, i64 0, i64 0), i8* nonnull %29), !insn.addr !1908
  %51 = trunc i64 %rdi.0.reload to i32, !insn.addr !1909
  %52 = inttoptr i64 %rdi.0.reload to i64*, !insn.addr !1910
  %53 = and i64 %rdi.0.reload, 4294967295
  %54 = inttoptr i64 %53 to i8*, !insn.addr !1910
  %55 = call i1 @CreateProcessA(i8* inttoptr (i32 xor (i32 ptrtoint ([8 x i8]* @global_var_140008b90 to i32), i32 ptrtoint ([8 x i8]* @global_var_140008b90 to i32)) to i8*), i8* getelementptr inbounds ([6 x i8], [6 x i8]* @global_var_140008b98, i64 0, i64 0), %_SECURITY_ATTRIBUTES* inttoptr (i32 xor (i32 ptrtoint ([29 x i8]* @global_var_140008a00 to i32), i32 ptrtoint ([29 x i8]* @global_var_140008a00 to i32)) to %_SECURITY_ATTRIBUTES*), %_SECURITY_ATTRIBUTES* null, i1 true, i32 %51, i64* %52, i8* %54, %_STARTUPINFOA* nonnull %30, %_PROCESS_INFORMATION* nonnull %31), !insn.addr !1910
  %56 = icmp eq i1 %55, false, !insn.addr !1911
  br i1 %56, label %dec_label_pc_140004b34, label %dec_label_pc_1400046f5, !insn.addr !1912

dec_label_pc_1400046f5:                           ; preds = %dec_label_pc_1400045e9
  %r13.1.reload = load i64, i64* %r13.1.reg2mem
  %rsi.1.reload = load i64, i64* %rsi.1.reg2mem
  %stack_var_-1768.0.reload = load i32, i32* %stack_var_-1768.0.reg2mem
  %57 = load i64, i64* %stack_var_-1736, align 8, !insn.addr !1913
  store i64 %57, i64* %stack_var_-1400, align 8, !insn.addr !1914
  call void @"?DebugTrace@@YAXPEBDZZ"(i8* inttoptr (i64 4294967295 to i8*)), !insn.addr !1915
  %58 = call i64* @CreateEventA(%_SECURITY_ATTRIBUTES* inttoptr (i32 xor (i32 ptrtoint ([21 x i8]* @global_var_140008ba0 to i32), i32 ptrtoint ([21 x i8]* @global_var_140008ba0 to i32)) to %_SECURITY_ATTRIBUTES*), i1 false, i1 false, i8* getelementptr inbounds ([49 x i8], [49 x i8]* @global_var_1400088e8, i64 0, i64 0)), !insn.addr !1916
  %59 = ptrtoint i64* %58 to i64, !insn.addr !1916
  call void @"?DebugTrace@@YAXPEBDZZ"(i8* bitcast (i32* @0 to i8*)), !insn.addr !1917
  %60 = icmp eq i64* %58, null, !insn.addr !1918
  store i64 1, i64* %r15.0.reg2mem, !insn.addr !1919
  br i1 %60, label %dec_label_pc_14000474d, label %dec_label_pc_140004740, !insn.addr !1919

dec_label_pc_140004740:                           ; preds = %dec_label_pc_1400046f5
  store i64 %59, i64* %stack_var_-1392, align 8, !insn.addr !1920
  store i64 2, i64* %r15.0.reg2mem, !insn.addr !1921
  br label %dec_label_pc_14000474d, !insn.addr !1921

dec_label_pc_14000474d:                           ; preds = %dec_label_pc_140004740, %dec_label_pc_1400046f5
  %r15.0.reload = load i64, i64* %r15.0.reg2mem
  %61 = call i64* @CreateEventA(%_SECURITY_ATTRIBUTES* null, i1 false, i1 false, i8* getelementptr inbounds ([56 x i8], [56 x i8]* @global_var_1400088b0, i64 0, i64 0)), !insn.addr !1922
  %62 = ptrtoint i64* %61 to i64, !insn.addr !1922
  %63 = bitcast i64* %61 to i8*, !insn.addr !1923
  call void @"?DebugTrace@@YAXPEBDZZ"(i8* %63), !insn.addr !1923
  store i64 %r15.0.reload, i64* %r15.1.reg2mem, !insn.addr !1924
  br i1 %60, label %dec_label_pc_14000478b, label %dec_label_pc_14000477d, !insn.addr !1924

dec_label_pc_14000477d:                           ; preds = %dec_label_pc_14000474d
  %64 = mul i64 %r15.0.reload, 8, !insn.addr !1925
  %65 = add i64 %64, %32, !insn.addr !1926
  %66 = inttoptr i64 %65 to i64*, !insn.addr !1926
  store i64 %62, i64* %66, align 8, !insn.addr !1926
  %67 = add nuw nsw i64 %r15.0.reload, 1, !insn.addr !1927
  store i64 %67, i64* %r15.1.reg2mem, !insn.addr !1927
  br label %dec_label_pc_14000478b, !insn.addr !1927

dec_label_pc_14000478b:                           ; preds = %dec_label_pc_14000477d, %dec_label_pc_14000474d
  %r15.1.reload = load i64, i64* %r15.1.reg2mem
  %68 = trunc i64 %r15.1.reload to i32
  store i32 %stack_var_-1768.0.reload, i32* %stack_var_-1768.1.ph.reg2mem, !insn.addr !1928
  store i64 %rsi.1.reload, i64* %rsi.2.ph.reg2mem, !insn.addr !1928
  store i64 %rdi.0.reload, i64* %rdi.1.ph.reg2mem, !insn.addr !1928
  store i64 %r13.1.reload, i64* %r13.2.ph.reg2mem, !insn.addr !1928
  br label %dec_label_pc_1400047a0.outer, !insn.addr !1928

dec_label_pc_1400047a0.outer:                     ; preds = %dec_label_pc_140004866, %dec_label_pc_14000478b
  %r13.2.ph.reload = load i64, i64* %r13.2.ph.reg2mem
  %rdi.1.ph.reload = load i64, i64* %rdi.1.ph.reg2mem
  %rsi.2.ph.reload = load i64, i64* %rsi.2.ph.reg2mem
  %stack_var_-1768.1.ph.reload = load i32, i32* %stack_var_-1768.1.ph.reg2mem
  store i64 %rsi.2.ph.reload, i64* %rsi.2.reg2mem
  store i64 %rdi.1.ph.reload, i64* %rdi.1.reg2mem
  store i64 %r13.2.ph.reload, i64* %r13.2.reg2mem
  br label %dec_label_pc_1400047a0

dec_label_pc_1400047a0:                           ; preds = %dec_label_pc_1400047a0.outer, %dec_label_pc_140004837
  %r13.2.reload = load i64, i64* %r13.2.reg2mem
  %rdi.1.reload = load i64, i64* %rdi.1.reg2mem
  %rsi.2.reload = load i64, i64* %rsi.2.reg2mem
  %69 = call i32 @WaitForMultipleObjects(i32 %68, i64** nonnull %33, i1 false, i32 5000), !insn.addr !1929
  store i64 %rsi.2.reload, i64* %rsi.3.reg2mem, !insn.addr !1930
  store i64 %r13.2.reload, i64* %r13.3.reg2mem, !insn.addr !1930
  br i1 %35, label %dec_label_pc_1400047c9, label %dec_label_pc_140004837, !insn.addr !1930

dec_label_pc_1400047c9:                           ; preds = %dec_label_pc_1400047a0
  %70 = call i32 @WaitForSingleObject(i64* %26, i32 1000), !insn.addr !1931
  %71 = icmp eq i32 %70, 0, !insn.addr !1932
  %72 = icmp eq i1 %71, false, !insn.addr !1933
  %or.cond = or i1 %36, %72
  br i1 %or.cond, label %dec_label_pc_14000482a, label %dec_label_pc_1400047e1, !insn.addr !1933

dec_label_pc_1400047e1:                           ; preds = %dec_label_pc_1400047c9
  %73 = inttoptr i64 %rsi.2.reload to i32*, !insn.addr !1934
  %74 = load i32, i32* %73, align 4, !insn.addr !1934
  %75 = trunc i64 %r13.2.reload to i32, !insn.addr !1934
  %76 = icmp ugt i32 %74, %75
  br i1 %76, label %dec_label_pc_140004808, label %dec_label_pc_1400047e6, !insn.addr !1935

dec_label_pc_1400047e6:                           ; preds = %dec_label_pc_1400047e1
  store i32 0, i32* %stack_var_-1752, align 4, !insn.addr !1936
  %77 = add i64 %rsi.2.reload, 4, !insn.addr !1937
  %78 = load i32, i32* %73, align 4, !insn.addr !1938
  %79 = inttoptr i64 %77 to i64*, !insn.addr !1939
  %80 = call i1 @WriteFile(i64* %12, i64* %79, i32 %78, i32* nonnull %stack_var_-1752, %_OVERLAPPED* null), !insn.addr !1939
  br label %dec_label_pc_140004808, !insn.addr !1939

dec_label_pc_140004808:                           ; preds = %dec_label_pc_1400047e1, %dec_label_pc_1400047e6
  store i32 0, i32* %37, align 4, !insn.addr !1940
  %81 = call i1 @ReleaseMutex(i64* %26), !insn.addr !1941
  store i64 %r14.1.reload, i64* %rsi.3.reg2mem, !insn.addr !1942
  store i64 2097152, i64* %r13.3.reg2mem, !insn.addr !1942
  br label %dec_label_pc_140004837, !insn.addr !1942

dec_label_pc_14000482a:                           ; preds = %dec_label_pc_1400047c9
  call void @OutputDebugStringA(i8* getelementptr inbounds ([56 x i8], [56 x i8]* @global_var_1400087a8, i64 0, i64 0)), !insn.addr !1943
  store i64 %rsi.2.reload, i64* %rsi.3.reg2mem, !insn.addr !1943
  store i64 %r13.2.reload, i64* %r13.3.reg2mem, !insn.addr !1943
  br label %dec_label_pc_140004837, !insn.addr !1943

dec_label_pc_140004837:                           ; preds = %dec_label_pc_1400047a0, %dec_label_pc_14000482a, %dec_label_pc_140004808
  %r13.3.reload = load i64, i64* %r13.3.reg2mem
  %rsi.3.reload = load i64, i64* %rsi.3.reg2mem
  %82 = add i64 %rdi.1.reload, 1, !insn.addr !1944
  %83 = and i64 %82, 4294967295, !insn.addr !1944
  %84 = icmp eq i32 %69, 258, !insn.addr !1945
  store i64 %rsi.3.reload, i64* %rsi.2.reg2mem, !insn.addr !1946
  store i64 %83, i64* %rdi.1.reg2mem, !insn.addr !1946
  store i64 %r13.3.reload, i64* %r13.2.reg2mem, !insn.addr !1946
  br i1 %84, label %dec_label_pc_1400047a0, label %dec_label_pc_140004845, !insn.addr !1946

dec_label_pc_140004845:                           ; preds = %dec_label_pc_140004837
  %85 = icmp ult i32 %69, %68, !insn.addr !1947
  %86 = icmp eq i1 %85, false, !insn.addr !1948
  store i32 0, i32* %stack_var_-1760.1.reg2mem, !insn.addr !1948
  br i1 %86, label %dec_label_pc_14000489d, label %dec_label_pc_14000484a, !insn.addr !1948

dec_label_pc_14000484a:                           ; preds = %dec_label_pc_140004845
  %87 = zext i32 %69 to i64, !insn.addr !1949
  call void @"?DebugTrace@@YAXPEBDZZ"(i8* bitcast (i32* @0 to i8*)), !insn.addr !1950
  %88 = mul i64 %87, 8, !insn.addr !1951
  %89 = add i64 %88, %32, !insn.addr !1951
  %90 = inttoptr i64 %89 to i64*, !insn.addr !1951
  %91 = load i64, i64* %90, align 8, !insn.addr !1951
  %92 = icmp eq i64 %91, %59, !insn.addr !1952
  %93 = icmp eq i1 %92, false, !insn.addr !1953
  store i32 0, i32* %stack_var_-1760.0.reg2mem, !insn.addr !1953
  br i1 %93, label %dec_label_pc_140004887, label %dec_label_pc_140004866, !insn.addr !1953

dec_label_pc_140004866:                           ; preds = %dec_label_pc_14000484a
  %94 = icmp ne i32 %stack_var_-1768.1.ph.reload, 0, !insn.addr !1954
  %95 = trunc i64 %82 to i32, !insn.addr !1955
  %96 = icmp ult i32 %95, 2
  %or.cond8 = icmp eq i1 %94, %96
  store i32 0, i32* %stack_var_-1768.1.ph.reg2mem, !insn.addr !1956
  store i64 %rsi.3.reload, i64* %rsi.2.ph.reg2mem, !insn.addr !1956
  store i64 %83, i64* %rdi.1.ph.reg2mem, !insn.addr !1956
  store i64 %r13.3.reload, i64* %r13.2.ph.reg2mem, !insn.addr !1956
  store i32 1, i32* %stack_var_-1760.0.reg2mem, !insn.addr !1956
  br i1 %or.cond8, label %dec_label_pc_1400047a0.outer, label %dec_label_pc_140004887, !insn.addr !1956

dec_label_pc_140004887:                           ; preds = %dec_label_pc_140004866, %dec_label_pc_14000484a
  %stack_var_-1760.0.reload = load i32, i32* %stack_var_-1760.0.reg2mem
  %97 = icmp eq i64 %91, %62, !insn.addr !1957
  %98 = icmp eq i1 %97, false, !insn.addr !1958
  store i32 %stack_var_-1760.0.reload, i32* %stack_var_-1760.1.reg2mem, !insn.addr !1958
  store i32 1, i32* %stack_var_-1768.2.reg2mem, !insn.addr !1958
  store i32 %stack_var_-1760.0.reload, i32* %stack_var_-1760.2.reg2mem, !insn.addr !1958
  store i32 1, i32* %storemerge4.reg2mem, !insn.addr !1958
  br i1 %98, label %dec_label_pc_14000489d, label %dec_label_pc_1400048a2, !insn.addr !1958

dec_label_pc_14000489d:                           ; preds = %dec_label_pc_140004845, %dec_label_pc_140004887
  %stack_var_-1760.1.reload = load i32, i32* %stack_var_-1760.1.reg2mem
  store i32 %stack_var_-1768.1.ph.reload, i32* %stack_var_-1768.2.reg2mem, !insn.addr !1959
  store i32 %stack_var_-1760.1.reload, i32* %stack_var_-1760.2.reg2mem, !insn.addr !1959
  store i32 0, i32* %storemerge4.reg2mem, !insn.addr !1959
  br label %dec_label_pc_1400048a2, !insn.addr !1959

dec_label_pc_1400048a2:                           ; preds = %dec_label_pc_140004887, %dec_label_pc_14000489d
  %storemerge4.reload = load i32, i32* %storemerge4.reg2mem
  %stack_var_-1760.2.reload = load i32, i32* %stack_var_-1760.2.reg2mem
  %stack_var_-1768.2.reload = load i32, i32* %stack_var_-1768.2.reg2mem
  %99 = call i64 @GetTickCount64(), !insn.addr !1960
  %100 = load i64, i64* %stack_var_-1736, align 8, !insn.addr !1961
  %101 = inttoptr i64 %100 to i64*, !insn.addr !1962
  %102 = call i1 @GetExitCodeProcess(i64* %101, i32* nonnull %38), !insn.addr !1962
  %103 = call i64* @memset(i64* nonnull %stack_var_-568, i32 0, i32 512), !insn.addr !1963
  %104 = call i64 @function_140001170(i64* nonnull %stack_var_-568, i64 256, i16* getelementptr inbounds ([59 x i16], [59 x i16]* @global_var_140008c20, i64 0, i64 0), i64 0), !insn.addr !1964
  store i16 0, i16* %stack_var_-1432, align 2, !insn.addr !1965
  store i64 -1, i64* %r8.0.reg2mem, !insn.addr !1966
  br label %dec_label_pc_140004952, !insn.addr !1966

dec_label_pc_140004952:                           ; preds = %dec_label_pc_140004952, %dec_label_pc_1400048a2
  %r8.0.reload = load i64, i64* %r8.0.reg2mem
  %105 = add i64 %r8.0.reload, 1, !insn.addr !1967
  %106 = mul i64 %105, 2, !insn.addr !1968
  %107 = add i64 %106, %39, !insn.addr !1968
  %108 = inttoptr i64 %107 to i16*, !insn.addr !1968
  %109 = load i16, i16* %108, align 2, !insn.addr !1968
  %110 = icmp eq i16 %109, 0, !insn.addr !1968
  %111 = icmp eq i1 %110, false, !insn.addr !1969
  store i64 %105, i64* %r8.0.reg2mem, !insn.addr !1969
  br i1 %111, label %dec_label_pc_140004952, label %dec_label_pc_14000495c, !insn.addr !1969

dec_label_pc_14000495c:                           ; preds = %dec_label_pc_140004952
  %112 = trunc i64 %105 to i32, !insn.addr !1970
  %113 = call i64 @function_140005740(i64* nonnull %40, i64* nonnull %stack_var_-568, i32 %112), !insn.addr !1970
  store i16 0, i16* %stack_var_-1464, align 2, !insn.addr !1971
  %114 = call i64 @function_140005740(i64* nonnull %41, i64* bitcast ([12 x i16]* @global_var_140008c98 to i64*), i32 11), !insn.addr !1972
  store i16 0, i16* %stack_var_-1496, align 2, !insn.addr !1973
  %115 = call i64 @function_140005740(i64* nonnull %42, i64* bitcast ([7 x i16]* @global_var_140008cb0 to i64*), i32 6), !insn.addr !1974
  %116 = call i64 @function_1400023b0(i16* nonnull %stack_var_-1496, i64* nonnull %41, i16* nonnull %stack_var_-1432), !insn.addr !1975
  %117 = icmp ult i32 %68, 2
  store i64 0, i64* %rdi.3.reg2mem, !insn.addr !1976
  br i1 %117, label %dec_label_pc_140004ad3, label %dec_label_pc_140004ab2, !insn.addr !1976

dec_label_pc_140004ab2:                           ; preds = %dec_label_pc_14000495c
  %118 = add nsw i64 %r15.1.reload, 4294967295, !insn.addr !1977
  %119 = and i64 %118, 4294967295, !insn.addr !1977
  store i64 %43, i64* %rbx.0.reg2mem, !insn.addr !1978
  store i64 %119, i64* %rdi.2.reg2mem, !insn.addr !1978
  br label %dec_label_pc_140004ac0, !insn.addr !1978

dec_label_pc_140004ac0:                           ; preds = %dec_label_pc_140004ac0, %dec_label_pc_140004ab2
  %rdi.2.reload = load i64, i64* %rdi.2.reg2mem
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %120 = inttoptr i64 %rbx.0.reload to i64*, !insn.addr !1979
  %121 = load i64, i64* %120, align 8, !insn.addr !1979
  %122 = inttoptr i64 %121 to i64*, !insn.addr !1980
  %123 = call i1 @CloseHandle(i64* %122), !insn.addr !1980
  %124 = add i64 %rbx.0.reload, 8, !insn.addr !1981
  %125 = add i64 %rdi.2.reload, -1, !insn.addr !1982
  %126 = icmp eq i64 %125, 0, !insn.addr !1982
  %127 = icmp eq i1 %126, false, !insn.addr !1983
  store i64 %124, i64* %rbx.0.reg2mem, !insn.addr !1983
  store i64 %125, i64* %rdi.2.reg2mem, !insn.addr !1983
  store i64 %125, i64* %rdi.3.reg2mem, !insn.addr !1983
  br i1 %127, label %dec_label_pc_140004ac0, label %dec_label_pc_140004ad3, !insn.addr !1983

dec_label_pc_140004ad3:                           ; preds = %dec_label_pc_140004ac0, %dec_label_pc_14000495c
  %rdi.3.reload = load i64, i64* %rdi.3.reg2mem
  %128 = call i1 @CloseHandle(i64* inttoptr (i32 xor (i32 ptrtoint (i32* @0 to i32), i32 ptrtoint (i32* @0 to i32)) to i64*)), !insn.addr !1984
  %129 = load i64, i64* %stack_var_-1736, align 8, !insn.addr !1985
  %130 = inttoptr i64 %129 to i64*, !insn.addr !1986
  %131 = call i1 @CloseHandle(i64* %130), !insn.addr !1986
  %132 = icmp eq i32 %storemerge4.reload, 0, !insn.addr !1987
  %133 = icmp eq i1 %132, false, !insn.addr !1988
  store i32 %stack_var_-1768.2.reload, i32* %stack_var_-1768.0.reg2mem, !insn.addr !1988
  store i64 %rsi.3.reload, i64* %rsi.1.reg2mem, !insn.addr !1988
  store i64 %rdi.3.reload, i64* %rdi.0.reg2mem, !insn.addr !1988
  store i64 %r13.3.reload, i64* %r13.1.reg2mem, !insn.addr !1988
  br i1 %133, label %dec_label_pc_1400045e9, label %dec_label_pc_140004af2, !insn.addr !1988

dec_label_pc_140004af2:                           ; preds = %dec_label_pc_140004ad3
  %134 = icmp eq i32 %stack_var_-1760.2.reload, %storemerge4.reload, !insn.addr !1989
  br i1 %134, label %dec_label_pc_140004b1b, label %dec_label_pc_140004af9, !insn.addr !1990

dec_label_pc_140004af9:                           ; preds = %dec_label_pc_140004af2
  %135 = call i64 @function_1400041e0(), !insn.addr !1991
  br label %dec_label_pc_140004b1b, !insn.addr !1992

dec_label_pc_140004b1b:                           ; preds = %dec_label_pc_140004af2, %dec_label_pc_140004af9
  br i1 %35, label %dec_label_pc_140004b2a, label %dec_label_pc_140004b34, !insn.addr !1993

dec_label_pc_140004b2a:                           ; preds = %dec_label_pc_140004b1b
  %136 = call i1 @CloseHandle(i64* %12), !insn.addr !1994
  br label %dec_label_pc_140004b34, !insn.addr !1995

dec_label_pc_140004b34:                           ; preds = %dec_label_pc_1400045e9, %dec_label_pc_140004b1b, %dec_label_pc_140004b2a
  br i1 %36, label %dec_label_pc_140004b42, label %dec_label_pc_140004b39, !insn.addr !1996

dec_label_pc_140004b39:                           ; preds = %dec_label_pc_140004b34
  %137 = inttoptr i64 %r14.1.reload to i64*, !insn.addr !1997
  %138 = call i1 @UnmapViewOfFile(i64* %137), !insn.addr !1997
  br label %dec_label_pc_140004b42, !insn.addr !1997

dec_label_pc_140004b42:                           ; preds = %dec_label_pc_140004b39, %dec_label_pc_140004b34
  %139 = icmp eq i64 %stack_var_-1704.1.reload, 0, !insn.addr !1998
  br i1 %139, label %dec_label_pc_140004b51, label %dec_label_pc_140004b4b, !insn.addr !1999

dec_label_pc_140004b4b:                           ; preds = %dec_label_pc_140004b42
  %140 = inttoptr i64 %stack_var_-1704.1.reload to i64*, !insn.addr !2000
  %141 = call i1 @CloseHandle(i64* %140), !insn.addr !2000
  br label %dec_label_pc_140004b51, !insn.addr !2000

dec_label_pc_140004b51:                           ; preds = %dec_label_pc_140004b4b, %dec_label_pc_140004b42
  %142 = icmp eq i64* %26, null, !insn.addr !2001
  br i1 %142, label %dec_label_pc_140004b63, label %dec_label_pc_140004b5a, !insn.addr !2002

dec_label_pc_140004b5a:                           ; preds = %dec_label_pc_140004b51
  %143 = call i1 @CloseHandle(i64* nonnull %26), !insn.addr !2003
  br label %dec_label_pc_140004b63, !insn.addr !2003

dec_label_pc_140004b63:                           ; preds = %dec_label_pc_140004b5a, %dec_label_pc_140004b51
  call void @__security_check_cookie(i64 %24), !insn.addr !2004
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !2005

; uselistorder directives
  uselistorder i64 %105, { 2, 0, 1 }
  uselistorder i32 %storemerge4.reload, { 1, 0 }
  uselistorder i64 %83, { 1, 0 }
  uselistorder i32 %69, { 1, 0, 2 }
  uselistorder i64 %rsi.2.reload, { 1, 3, 2, 0 }
  uselistorder i64 %r13.2.reload, { 1, 2, 0 }
  uselistorder i64 %r15.1.reload, { 1, 0 }
  uselistorder i64 %62, { 1, 0 }
  uselistorder i64 %r15.0.reload, { 1, 2, 0 }
  uselistorder i64 %59, { 1, 0 }
  uselistorder i64 %rdi.0.reload, { 0, 1, 3, 2 }
  uselistorder i64* %26, { 2, 3, 0, 1 }
  uselistorder i64 %r14.1.reload, { 1, 0, 3, 2 }
  uselistorder i64 %18, { 2, 0, 1 }
  uselistorder i64* %12, { 1, 0, 2 }
  uselistorder i64* %stack_var_-1736, { 1, 2, 3, 4, 0 }
  uselistorder i32* %stack_var_-1624, { 1, 0 }
  uselistorder i64* %stack_var_-1368, { 1, 2, 0 }
  uselistorder i32* %stack_var_-1512, { 1, 0, 2 }
  uselistorder i64* %stack_var_-1400, { 1, 0 }
  uselistorder i64* %stack_var_-1392, { 1, 0 }
  uselistorder i16* %stack_var_-1432, { 0, 2, 1 }
  uselistorder i16* %stack_var_-1464, { 1, 0 }
  uselistorder i16* %stack_var_-1496, { 0, 2, 1 }
  uselistorder i64* %stack_var_-1704.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %r14.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %storemerge5.reg2mem, { 0, 2, 1 }
  uselistorder i64* %stack_var_-1704.1.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rsi.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %r13.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %r14.1.reg2mem, { 0, 2, 1 }
  uselistorder i32* %stack_var_-1768.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rsi.1.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdi.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %r13.1.reg2mem, { 1, 0, 2 }
  uselistorder i32* %stack_var_-1768.1.ph.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rsi.2.ph.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdi.1.ph.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r13.2.ph.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rsi.2.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rdi.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r13.2.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rsi.3.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64* %r13.3.reg2mem, { 0, 3, 2, 1 }
  uselistorder i32* %stack_var_-1760.1.reg2mem, { 0, 2, 1 }
  uselistorder i32* %stack_var_-1768.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %stack_var_-1760.2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %storemerge4.reg2mem, { 0, 2, 1 }
  uselistorder i64* %r8.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdi.2.reg2mem, { 1, 0, 2 }
  uselistorder i1 (i64*, i32*)* @GetExitCodeProcess, { 1, 0 }
  uselistorder i64* (%_SECURITY_ATTRIBUTES*, i1, i1, i8*)* @CreateEventA, { 1, 0 }
  uselistorder void (i8*)* @"?DebugTrace@@YAXPEBDZZ", { 4, 3, 2, 1, 0 }
  uselistorder i64 ()* @GetTickCount64, { 1, 0 }
  uselistorder void (i8*)* @OutputDebugStringA, { 1, 0, 2 }
  uselistorder i32 (i8*, i32, i8*)* @strcat_s, { 2, 1, 0 }
  uselistorder i32 (i64*, i8*, i32)* @GetModuleFileNameA, { 1, 0 }
  uselistorder label %dec_label_pc_140004b34, { 2, 1, 0 }
  uselistorder label %dec_label_pc_140004b1b, { 1, 0 }
  uselistorder label %dec_label_pc_1400048a2, { 1, 0 }
  uselistorder label %dec_label_pc_14000489d, { 1, 0 }
  uselistorder label %dec_label_pc_140004837, { 1, 2, 0 }
  uselistorder label %dec_label_pc_140004808, { 1, 0 }
  uselistorder label %dec_label_pc_1400047a0, { 1, 0 }
  uselistorder label %dec_label_pc_1400045c0, { 1, 0 }
}

define i64 @function_140004ba0() local_unnamed_addr {
dec_label_pc_140004ba0:
  %0 = alloca i64
  %r14.0.reg2mem = alloca i64, !insn.addr !2006
  %rsi.0.in.reg2mem = alloca i64, !insn.addr !2006
  %.pre-phi.reg2mem = alloca i8*, !insn.addr !2006
  %r10.0.reg2mem = alloca i64, !insn.addr !2006
  %rcx.10.reg2mem = alloca i64, !insn.addr !2006
  %rdx.9.reg2mem = alloca i64, !insn.addr !2006
  %rcx.9.reg2mem = alloca i64, !insn.addr !2006
  %rdx.8.reg2mem = alloca i64, !insn.addr !2006
  %rcx.8.reg2mem = alloca i64, !insn.addr !2006
  %rdx.7.reg2mem = alloca i64, !insn.addr !2006
  %rcx.7.reg2mem = alloca i64, !insn.addr !2006
  %rdx.6.reg2mem = alloca i64, !insn.addr !2006
  %rcx.6.reg2mem = alloca i64, !insn.addr !2006
  %rdx.5.reg2mem = alloca i64, !insn.addr !2006
  %rcx.5.reg2mem = alloca i64, !insn.addr !2006
  %rdx.4.reg2mem = alloca i64, !insn.addr !2006
  %rcx.4.reg2mem = alloca i64, !insn.addr !2006
  %rdx.3.reg2mem = alloca i64, !insn.addr !2006
  %rcx.3.reg2mem = alloca i64, !insn.addr !2006
  %rax.2.reg2mem = alloca i64, !insn.addr !2006
  %rax.1.reg2mem = alloca i64, !insn.addr !2006
  %rax.0.reg2mem = alloca i64, !insn.addr !2006
  %rdx.2.reg2mem = alloca i64, !insn.addr !2006
  %rcx.2.reg2mem = alloca i64, !insn.addr !2006
  %rdx.1.reg2mem = alloca i64, !insn.addr !2006
  %rcx.1.reg2mem = alloca i64, !insn.addr !2006
  %rdx.0.reg2mem = alloca i64, !insn.addr !2006
  %rcx.0.reg2mem = alloca i64, !insn.addr !2006
  %1 = load i64, i64* %0
  %stack_var_-984 = alloca i32, align 4
  %stack_var_-328 = alloca i64, align 8
  %stack_var_-992 = alloca i64, align 8
  %stack_var_-1000 = alloca i64, align 8
  %stack_var_-960 = alloca i32, align 4
  %stack_var_-600 = alloca i64, align 8
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = load i64, i64* %0
  %5 = load i64, i64* %0
  %stack_var_-728 = alloca i16, align 2
  %stack_var_-696 = alloca i16, align 2
  %stack_var_-664 = alloca i16, align 2
  %stack_var_-632 = alloca i16, align 2
  %6 = load i64, i64* %0
  %7 = load i64, i64* %0
  %8 = load i64, i64* %0
  %9 = load i64, i64* %0
  %stack_var_-856 = alloca i16, align 2
  %stack_var_-824 = alloca i16, align 2
  %stack_var_-792 = alloca i16, align 2
  %stack_var_-760 = alloca i16, align 2
  %stack_var_-976 = alloca i8*, align 8
  %10 = load i64, i64* %0
  %11 = load i64, i64* %0
  %12 = load i64, i64* %0
  %stack_var_-952 = alloca i16, align 2
  %stack_var_-920 = alloca i16, align 2
  %stack_var_-888 = alloca i16, align 2
  %13 = load i32, i32* @global_var_14000c010, align 4, !insn.addr !2007
  %14 = load i128, i128* @global_var_140008dd0, align 8
  %15 = call i128 @__asm_movdqa(i128 %14), !insn.addr !2008
  %16 = call i64 @__asm_movdqu(i128 %15), !insn.addr !2009
  store i16 0, i16* %stack_var_-888, align 2, !insn.addr !2010
  %17 = bitcast i16* %stack_var_-888 to i64*, !insn.addr !2011
  %18 = call i64 @function_140005740(i64* nonnull %17, i64* nonnull @global_var_14000892c, i32 0), !insn.addr !2011
  %19 = call i128 @__asm_movdqa(i128 %14), !insn.addr !2012
  %20 = call i64 @__asm_movdqu(i128 %19), !insn.addr !2013
  store i16 0, i16* %stack_var_-920, align 2, !insn.addr !2014
  %21 = bitcast i16* %stack_var_-920 to i64*, !insn.addr !2015
  %22 = call i64 @function_140005740(i64* nonnull %21, i64* bitcast ([13 x i16]* @global_var_140008cc0 to i64*), i32 12), !insn.addr !2015
  %23 = call i128 @__asm_movdqa(i128 %14), !insn.addr !2016
  %24 = call i64 @__asm_movdqu(i128 %23), !insn.addr !2017
  store i16 0, i16* %stack_var_-952, align 2, !insn.addr !2018
  %25 = bitcast i16* %stack_var_-952 to i64*, !insn.addr !2019
  %26 = call i64 @function_140005740(i64* nonnull %25, i64* bitcast ([7 x i16]* @global_var_140008cb0 to i64*), i32 6), !insn.addr !2019
  %27 = call i64 @function_1400023b0(i16* nonnull %stack_var_-952, i64* nonnull %21, i16* nonnull %stack_var_-888), !insn.addr !2020
  %28 = icmp ult i64 %12, 8, !insn.addr !2021
  br i1 %28, label %dec_label_pc_140004ca6, label %dec_label_pc_140004c6d, !insn.addr !2022

dec_label_pc_140004c6d:                           ; preds = %dec_label_pc_140004ba0
  %29 = mul i64 %12, 2, !insn.addr !2023
  %30 = add i64 %29, 2, !insn.addr !2023
  %31 = load i16, i16* %stack_var_-952, align 2, !insn.addr !2024
  %32 = sext i16 %31 to i64, !insn.addr !2024
  %33 = icmp ult i64 %30, 4096, !insn.addr !2025
  store i64 %32, i64* %rcx.0.reg2mem, !insn.addr !2026
  store i64 %30, i64* %rdx.0.reg2mem, !insn.addr !2026
  br i1 %33, label %dec_label_pc_140004ca1, label %dec_label_pc_140004c85, !insn.addr !2026

dec_label_pc_140004c85:                           ; preds = %dec_label_pc_140004c6d
  %34 = add i64 %29, 41, !insn.addr !2027
  %35 = add nsw i64 %32, -8
  %36 = inttoptr i64 %35 to i64*, !insn.addr !2028
  %37 = load i64, i64* %36, align 8, !insn.addr !2028
  %38 = sub i64 %35, %37, !insn.addr !2029
  %39 = icmp ult i64 %38, 32
  store i64 %37, i64* %rcx.0.reg2mem, !insn.addr !2030
  store i64 %34, i64* %rdx.0.reg2mem, !insn.addr !2030
  br i1 %39, label %dec_label_pc_140004ca1, label %dec_label_pc_140004c9a, !insn.addr !2030

dec_label_pc_140004c9a:                           ; preds = %dec_label_pc_140004c85
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !2031
  %40 = call i64 @__asm_int3(), !insn.addr !2032
  store i64 %37, i64* %rcx.0.reg2mem, !insn.addr !2032
  store i64 %34, i64* %rdx.0.reg2mem, !insn.addr !2032
  br label %dec_label_pc_140004ca1, !insn.addr !2032

dec_label_pc_140004ca1:                           ; preds = %dec_label_pc_140004c9a, %dec_label_pc_140004c85, %dec_label_pc_140004c6d
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %41 = call i64 @function_1400065d0(i64 %rcx.0.reload, i64 %rdx.0.reload), !insn.addr !2033
  br label %dec_label_pc_140004ca6, !insn.addr !2033

dec_label_pc_140004ca6:                           ; preds = %dec_label_pc_140004ca1, %dec_label_pc_140004ba0
  %42 = icmp ult i64 %11, 8, !insn.addr !2034
  br i1 %42, label %dec_label_pc_140004ce9, label %dec_label_pc_140004cb0, !insn.addr !2035

dec_label_pc_140004cb0:                           ; preds = %dec_label_pc_140004ca6
  %43 = mul i64 %11, 2, !insn.addr !2036
  %44 = add i64 %43, 2, !insn.addr !2036
  %45 = load i16, i16* %stack_var_-920, align 2, !insn.addr !2037
  %46 = sext i16 %45 to i64, !insn.addr !2037
  %47 = icmp ult i64 %44, 4096, !insn.addr !2038
  store i64 %46, i64* %rcx.1.reg2mem, !insn.addr !2039
  store i64 %44, i64* %rdx.1.reg2mem, !insn.addr !2039
  br i1 %47, label %dec_label_pc_140004ce4, label %dec_label_pc_140004cc8, !insn.addr !2039

dec_label_pc_140004cc8:                           ; preds = %dec_label_pc_140004cb0
  %48 = add i64 %43, 41, !insn.addr !2040
  %49 = add nsw i64 %46, -8
  %50 = inttoptr i64 %49 to i64*, !insn.addr !2041
  %51 = load i64, i64* %50, align 8, !insn.addr !2041
  %52 = sub i64 %49, %51, !insn.addr !2042
  %53 = icmp ult i64 %52, 32
  store i64 %51, i64* %rcx.1.reg2mem, !insn.addr !2043
  store i64 %48, i64* %rdx.1.reg2mem, !insn.addr !2043
  br i1 %53, label %dec_label_pc_140004ce4, label %dec_label_pc_140004cdd, !insn.addr !2043

dec_label_pc_140004cdd:                           ; preds = %dec_label_pc_140004cc8
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !2044
  %54 = call i64 @__asm_int3(), !insn.addr !2045
  store i64 %51, i64* %rcx.1.reg2mem, !insn.addr !2045
  store i64 %48, i64* %rdx.1.reg2mem, !insn.addr !2045
  br label %dec_label_pc_140004ce4, !insn.addr !2045

dec_label_pc_140004ce4:                           ; preds = %dec_label_pc_140004cdd, %dec_label_pc_140004cc8, %dec_label_pc_140004cb0
  %rdx.1.reload = load i64, i64* %rdx.1.reg2mem
  %rcx.1.reload = load i64, i64* %rcx.1.reg2mem
  %55 = call i64 @function_1400065d0(i64 %rcx.1.reload, i64 %rdx.1.reload), !insn.addr !2046
  br label %dec_label_pc_140004ce9, !insn.addr !2046

dec_label_pc_140004ce9:                           ; preds = %dec_label_pc_140004ce4, %dec_label_pc_140004ca6
  %56 = icmp ult i64 %10, 8, !insn.addr !2047
  br i1 %56, label %dec_label_pc_140004d2c, label %dec_label_pc_140004cf3, !insn.addr !2048

dec_label_pc_140004cf3:                           ; preds = %dec_label_pc_140004ce9
  %57 = mul i64 %10, 2, !insn.addr !2049
  %58 = add i64 %57, 2, !insn.addr !2049
  %59 = load i16, i16* %stack_var_-888, align 2, !insn.addr !2050
  %60 = sext i16 %59 to i64, !insn.addr !2050
  %61 = icmp ult i64 %58, 4096, !insn.addr !2051
  store i64 %60, i64* %rcx.2.reg2mem, !insn.addr !2052
  store i64 %58, i64* %rdx.2.reg2mem, !insn.addr !2052
  br i1 %61, label %dec_label_pc_140004d27, label %dec_label_pc_140004d0b, !insn.addr !2052

dec_label_pc_140004d0b:                           ; preds = %dec_label_pc_140004cf3
  %62 = add i64 %57, 41, !insn.addr !2053
  %63 = add nsw i64 %60, -8
  %64 = inttoptr i64 %63 to i64*, !insn.addr !2054
  %65 = load i64, i64* %64, align 8, !insn.addr !2054
  %66 = sub i64 %63, %65, !insn.addr !2055
  %67 = icmp ult i64 %66, 32
  store i64 %65, i64* %rcx.2.reg2mem, !insn.addr !2056
  store i64 %62, i64* %rdx.2.reg2mem, !insn.addr !2056
  br i1 %67, label %dec_label_pc_140004d27, label %dec_label_pc_140004d20, !insn.addr !2056

dec_label_pc_140004d20:                           ; preds = %dec_label_pc_140004d0b
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !2057
  %68 = call i64 @__asm_int3(), !insn.addr !2058
  store i64 %65, i64* %rcx.2.reg2mem, !insn.addr !2058
  store i64 %62, i64* %rdx.2.reg2mem, !insn.addr !2058
  br label %dec_label_pc_140004d27, !insn.addr !2058

dec_label_pc_140004d27:                           ; preds = %dec_label_pc_140004d20, %dec_label_pc_140004d0b, %dec_label_pc_140004cf3
  %rdx.2.reload = load i64, i64* %rdx.2.reg2mem
  %rcx.2.reload = load i64, i64* %rcx.2.reg2mem
  %69 = call i64 @function_1400065d0(i64 %rcx.2.reload, i64 %rdx.2.reload), !insn.addr !2059
  br label %dec_label_pc_140004d2c, !insn.addr !2059

dec_label_pc_140004d2c:                           ; preds = %dec_label_pc_140004d27, %dec_label_pc_140004ce9
  %70 = call i64 @function_140001c10(), !insn.addr !2060
  %71 = icmp eq i64 %70, 0, !insn.addr !2061
  br i1 %71, label %dec_label_pc_1400054b8, label %dec_label_pc_140004d3d, !insn.addr !2062

dec_label_pc_140004d3d:                           ; preds = %dec_label_pc_140004d2c
  %72 = inttoptr i64 %70 to i64*, !insn.addr !2063
  %73 = load i64, i64* %72, align 8, !insn.addr !2063
  %74 = icmp eq i64 %73, ptrtoint (i32* @global_var_140008d68 to i64), !insn.addr !2064
  %75 = icmp eq i1 %74, false, !insn.addr !2065
  store i64 %73, i64* %rax.0.reg2mem, !insn.addr !2065
  br i1 %75, label %dec_label_pc_140004d5c, label %dec_label_pc_140004d54, !insn.addr !2065

dec_label_pc_140004d54:                           ; preds = %dec_label_pc_140004d3d
  %76 = add i64 %70, 32, !insn.addr !2066
  %77 = inttoptr i64 %76 to i32*, !insn.addr !2066
  %78 = load i32, i32* %77, align 4, !insn.addr !2066
  %79 = add i32 %78, 1, !insn.addr !2066
  store i32 %79, i32* %77, align 4, !insn.addr !2066
  %80 = add i64 %70, 16, !insn.addr !2067
  store i64 %80, i64* %rax.0.reg2mem, !insn.addr !2067
  br label %dec_label_pc_140004d5c, !insn.addr !2067

dec_label_pc_140004d5c:                           ; preds = %dec_label_pc_140004d3d, %dec_label_pc_140004d54
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %81 = add i64 %rax.0.reload, 24, !insn.addr !2068
  %82 = inttoptr i64 %81 to i8*, !insn.addr !2069
  store i8* %82, i8** %stack_var_-976, align 8, !insn.addr !2069
  %83 = icmp eq i64 %1, 0, !insn.addr !2070
  store i64 0, i64* %rax.2.reg2mem, !insn.addr !2071
  br i1 %83, label %dec_label_pc_140004d9d, label %dec_label_pc_140004d71, !insn.addr !2071

dec_label_pc_140004d71:                           ; preds = %dec_label_pc_140004d5c
  %84 = icmp ult i64 %1, 65536, !insn.addr !2072
  %85 = icmp eq i1 %84, false, !insn.addr !2073
  store i64 -1, i64* %rax.1.reg2mem, !insn.addr !2073
  br i1 %85, label %dec_label_pc_140004d90, label %dec_label_pc_140004d7a, !insn.addr !2073

dec_label_pc_140004d7a:                           ; preds = %dec_label_pc_140004d71
  %86 = and i64 %1, 65535, !insn.addr !2074
  %87 = bitcast i8** %stack_var_-976 to i64*, !insn.addr !2075
  %88 = call i64 @function_140005a30(i64* nonnull %87, i64 %86), !insn.addr !2075
  br label %dec_label_pc_140004dae, !insn.addr !2076

dec_label_pc_140004d90:                           ; preds = %dec_label_pc_140004d71, %dec_label_pc_140004d90
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %89 = add i64 %rax.1.reload, 1, !insn.addr !2077
  %90 = add i64 %89, %1, !insn.addr !2078
  %91 = inttoptr i64 %90 to i8*, !insn.addr !2078
  %92 = load i8, i8* %91, align 1, !insn.addr !2078
  %93 = icmp eq i8 %92, 0, !insn.addr !2078
  %94 = icmp eq i1 %93, false, !insn.addr !2079
  store i64 %89, i64* %rax.1.reg2mem, !insn.addr !2079
  store i64 %89, i64* %rax.2.reg2mem, !insn.addr !2079
  br i1 %94, label %dec_label_pc_140004d90, label %dec_label_pc_140004d9d, !insn.addr !2079

dec_label_pc_140004d9d:                           ; preds = %dec_label_pc_140004d90, %dec_label_pc_140004d5c
  %rax.2.reload = load i64, i64* %rax.2.reg2mem
  %95 = and i64 %rax.2.reload, 4294967295, !insn.addr !2080
  %96 = bitcast i8** %stack_var_-976 to i64*, !insn.addr !2081
  %97 = call i64 @function_140005c60(i64* nonnull %96, i64 %1, i64 %95), !insn.addr !2081
  br label %dec_label_pc_140004dae, !insn.addr !2082

dec_label_pc_140004dae:                           ; preds = %dec_label_pc_140004d9d, %dec_label_pc_140004d7a
  %98 = load i8*, i8** %stack_var_-976, align 8, !insn.addr !2083
  %99 = call i32 @_mbscmp(i8* %98, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @global_var_140008cdc, i64 0, i64 0)), !insn.addr !2084
  %100 = icmp eq i32 %99, 0, !insn.addr !2085
  %101 = icmp eq i1 %100, false, !insn.addr !2086
  br i1 %101, label %dec_label_pc_140004f8c, label %dec_label_pc_140004dcb, !insn.addr !2086

dec_label_pc_140004dcb:                           ; preds = %dec_label_pc_140004dae
  %102 = call i128 @__asm_movdqa(i128 %14), !insn.addr !2087
  %103 = call i64 @__asm_movdqu(i128 %102), !insn.addr !2088
  store i16 0, i16* %stack_var_-760, align 2, !insn.addr !2089
  %104 = bitcast i16* %stack_var_-760 to i64*, !insn.addr !2090
  %105 = call i64 @function_140005740(i64* nonnull %104, i64* nonnull @global_var_14000892c, i32 0), !insn.addr !2090
  %106 = call i128 @__asm_movdqa(i128 %14), !insn.addr !2091
  %107 = call i64 @__asm_movdqu(i128 %106), !insn.addr !2092
  store i16 0, i16* %stack_var_-792, align 2, !insn.addr !2093
  %108 = bitcast i16* %stack_var_-792 to i64*, !insn.addr !2094
  %109 = call i64 @function_140005740(i64* nonnull %108, i64* bitcast ([13 x i16]* @global_var_140008ce8 to i64*), i32 12), !insn.addr !2094
  %110 = call i128 @__asm_movdqa(i128 %14), !insn.addr !2095
  %111 = call i64 @__asm_movdqu(i128 %110), !insn.addr !2096
  store i16 0, i16* %stack_var_-824, align 2, !insn.addr !2097
  %112 = bitcast i16* %stack_var_-824 to i64*, !insn.addr !2098
  %113 = call i64 @function_140005740(i64* nonnull %112, i64* bitcast ([7 x i16]* @global_var_140008d08 to i64*), i32 6), !insn.addr !2098
  %114 = call i128 @__asm_movdqa(i128 %14), !insn.addr !2099
  %115 = call i64 @__asm_movdqu(i128 %114), !insn.addr !2100
  store i16 0, i16* %stack_var_-856, align 2, !insn.addr !2101
  %116 = bitcast i16* %stack_var_-856 to i64*, !insn.addr !2102
  %117 = call i64 @function_140005740(i64* nonnull %116, i64* bitcast ([5 x i16]* @global_var_140008d18 to i64*), i32 4), !insn.addr !2102
  %118 = call i64 @function_140003210(i16* nonnull %stack_var_-856, i16* nonnull %stack_var_-824, i16* nonnull %stack_var_-792, i16* nonnull %stack_var_-760), !insn.addr !2103
  %119 = icmp ult i64 %9, 8, !insn.addr !2104
  br i1 %119, label %dec_label_pc_140004ebc, label %dec_label_pc_140004e83, !insn.addr !2105

dec_label_pc_140004e83:                           ; preds = %dec_label_pc_140004dcb
  %120 = mul i64 %9, 2, !insn.addr !2106
  %121 = add i64 %120, 2, !insn.addr !2106
  %122 = load i16, i16* %stack_var_-856, align 2, !insn.addr !2107
  %123 = sext i16 %122 to i64, !insn.addr !2107
  %124 = icmp ult i64 %121, 4096, !insn.addr !2108
  store i64 %123, i64* %rcx.3.reg2mem, !insn.addr !2109
  store i64 %121, i64* %rdx.3.reg2mem, !insn.addr !2109
  br i1 %124, label %dec_label_pc_140004eb7, label %dec_label_pc_140004e9b, !insn.addr !2109

dec_label_pc_140004e9b:                           ; preds = %dec_label_pc_140004e83
  %125 = add i64 %120, 41, !insn.addr !2110
  %126 = add nsw i64 %123, -8
  %127 = inttoptr i64 %126 to i64*, !insn.addr !2111
  %128 = load i64, i64* %127, align 8, !insn.addr !2111
  %129 = sub i64 %126, %128, !insn.addr !2112
  %130 = icmp ult i64 %129, 32
  store i64 %128, i64* %rcx.3.reg2mem, !insn.addr !2113
  store i64 %125, i64* %rdx.3.reg2mem, !insn.addr !2113
  br i1 %130, label %dec_label_pc_140004eb7, label %dec_label_pc_140004eb0, !insn.addr !2113

dec_label_pc_140004eb0:                           ; preds = %dec_label_pc_140004e9b
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !2114
  %131 = call i64 @__asm_int3(), !insn.addr !2115
  store i64 %128, i64* %rcx.3.reg2mem, !insn.addr !2115
  store i64 %125, i64* %rdx.3.reg2mem, !insn.addr !2115
  br label %dec_label_pc_140004eb7, !insn.addr !2115

dec_label_pc_140004eb7:                           ; preds = %dec_label_pc_140004eb0, %dec_label_pc_140004e9b, %dec_label_pc_140004e83
  %rdx.3.reload = load i64, i64* %rdx.3.reg2mem
  %rcx.3.reload = load i64, i64* %rcx.3.reg2mem
  %132 = call i64 @function_1400065d0(i64 %rcx.3.reload, i64 %rdx.3.reload), !insn.addr !2116
  br label %dec_label_pc_140004ebc, !insn.addr !2116

dec_label_pc_140004ebc:                           ; preds = %dec_label_pc_140004eb7, %dec_label_pc_140004dcb
  %133 = icmp ult i64 %8, 8, !insn.addr !2117
  br i1 %133, label %dec_label_pc_140004eff, label %dec_label_pc_140004ec6, !insn.addr !2118

dec_label_pc_140004ec6:                           ; preds = %dec_label_pc_140004ebc
  %134 = mul i64 %8, 2, !insn.addr !2119
  %135 = add i64 %134, 2, !insn.addr !2119
  %136 = load i16, i16* %stack_var_-824, align 2, !insn.addr !2120
  %137 = sext i16 %136 to i64, !insn.addr !2120
  %138 = icmp ult i64 %135, 4096, !insn.addr !2121
  store i64 %137, i64* %rcx.4.reg2mem, !insn.addr !2122
  store i64 %135, i64* %rdx.4.reg2mem, !insn.addr !2122
  br i1 %138, label %dec_label_pc_140004efa, label %dec_label_pc_140004ede, !insn.addr !2122

dec_label_pc_140004ede:                           ; preds = %dec_label_pc_140004ec6
  %139 = add i64 %134, 41, !insn.addr !2123
  %140 = add nsw i64 %137, -8
  %141 = inttoptr i64 %140 to i64*, !insn.addr !2124
  %142 = load i64, i64* %141, align 8, !insn.addr !2124
  %143 = sub i64 %140, %142, !insn.addr !2125
  %144 = icmp ult i64 %143, 32
  store i64 %142, i64* %rcx.4.reg2mem, !insn.addr !2126
  store i64 %139, i64* %rdx.4.reg2mem, !insn.addr !2126
  br i1 %144, label %dec_label_pc_140004efa, label %dec_label_pc_140004ef3, !insn.addr !2126

dec_label_pc_140004ef3:                           ; preds = %dec_label_pc_140004ede
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !2127
  %145 = call i64 @__asm_int3(), !insn.addr !2128
  store i64 %142, i64* %rcx.4.reg2mem, !insn.addr !2128
  store i64 %139, i64* %rdx.4.reg2mem, !insn.addr !2128
  br label %dec_label_pc_140004efa, !insn.addr !2128

dec_label_pc_140004efa:                           ; preds = %dec_label_pc_140004ef3, %dec_label_pc_140004ede, %dec_label_pc_140004ec6
  %rdx.4.reload = load i64, i64* %rdx.4.reg2mem
  %rcx.4.reload = load i64, i64* %rcx.4.reg2mem
  %146 = call i64 @function_1400065d0(i64 %rcx.4.reload, i64 %rdx.4.reload), !insn.addr !2129
  br label %dec_label_pc_140004eff, !insn.addr !2129

dec_label_pc_140004eff:                           ; preds = %dec_label_pc_140004efa, %dec_label_pc_140004ebc
  %147 = icmp ult i64 %7, 8, !insn.addr !2130
  br i1 %147, label %dec_label_pc_140004f42, label %dec_label_pc_140004f09, !insn.addr !2131

dec_label_pc_140004f09:                           ; preds = %dec_label_pc_140004eff
  %148 = mul i64 %7, 2, !insn.addr !2132
  %149 = add i64 %148, 2, !insn.addr !2132
  %150 = load i16, i16* %stack_var_-792, align 2, !insn.addr !2133
  %151 = sext i16 %150 to i64, !insn.addr !2133
  %152 = icmp ult i64 %149, 4096, !insn.addr !2134
  store i64 %151, i64* %rcx.5.reg2mem, !insn.addr !2135
  store i64 %149, i64* %rdx.5.reg2mem, !insn.addr !2135
  br i1 %152, label %dec_label_pc_140004f3d, label %dec_label_pc_140004f21, !insn.addr !2135

dec_label_pc_140004f21:                           ; preds = %dec_label_pc_140004f09
  %153 = add i64 %148, 41, !insn.addr !2136
  %154 = add nsw i64 %151, -8
  %155 = inttoptr i64 %154 to i64*, !insn.addr !2137
  %156 = load i64, i64* %155, align 8, !insn.addr !2137
  %157 = sub i64 %154, %156, !insn.addr !2138
  %158 = icmp ult i64 %157, 32
  store i64 %156, i64* %rcx.5.reg2mem, !insn.addr !2139
  store i64 %153, i64* %rdx.5.reg2mem, !insn.addr !2139
  br i1 %158, label %dec_label_pc_140004f3d, label %dec_label_pc_140004f36, !insn.addr !2139

dec_label_pc_140004f36:                           ; preds = %dec_label_pc_140004f21
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !2140
  %159 = call i64 @__asm_int3(), !insn.addr !2141
  store i64 %156, i64* %rcx.5.reg2mem, !insn.addr !2141
  store i64 %153, i64* %rdx.5.reg2mem, !insn.addr !2141
  br label %dec_label_pc_140004f3d, !insn.addr !2141

dec_label_pc_140004f3d:                           ; preds = %dec_label_pc_140004f36, %dec_label_pc_140004f21, %dec_label_pc_140004f09
  %rdx.5.reload = load i64, i64* %rdx.5.reg2mem
  %rcx.5.reload = load i64, i64* %rcx.5.reg2mem
  %160 = call i64 @function_1400065d0(i64 %rcx.5.reload, i64 %rdx.5.reload), !insn.addr !2142
  br label %dec_label_pc_140004f42, !insn.addr !2142

dec_label_pc_140004f42:                           ; preds = %dec_label_pc_140004f3d, %dec_label_pc_140004eff
  %161 = icmp ult i64 %6, 8, !insn.addr !2143
  br i1 %161, label %dec_label_pc_14000519a, label %dec_label_pc_140004f50, !insn.addr !2144

dec_label_pc_140004f50:                           ; preds = %dec_label_pc_140004f42
  %162 = mul i64 %6, 2, !insn.addr !2145
  %163 = add i64 %162, 2, !insn.addr !2145
  %164 = load i16, i16* %stack_var_-760, align 2, !insn.addr !2146
  %165 = sext i16 %164 to i64, !insn.addr !2146
  %166 = icmp ult i64 %163, 4096, !insn.addr !2147
  store i64 %165, i64* %rcx.9.reg2mem, !insn.addr !2148
  store i64 %163, i64* %rdx.9.reg2mem, !insn.addr !2148
  br i1 %166, label %dec_label_pc_140005195, label %dec_label_pc_140004f6c, !insn.addr !2148

dec_label_pc_140004f6c:                           ; preds = %dec_label_pc_140004f50
  %167 = add i64 %162, 41, !insn.addr !2149
  %168 = add nsw i64 %165, -8
  %169 = inttoptr i64 %168 to i64*, !insn.addr !2150
  %170 = load i64, i64* %169, align 8, !insn.addr !2150
  %171 = sub i64 %168, %170, !insn.addr !2151
  %172 = icmp ult i64 %171, 32
  store i64 %170, i64* %rcx.9.reg2mem, !insn.addr !2152
  store i64 %167, i64* %rdx.9.reg2mem, !insn.addr !2152
  br i1 %172, label %dec_label_pc_140005195, label %dec_label_pc_140004f85, !insn.addr !2152

dec_label_pc_140004f85:                           ; preds = %dec_label_pc_140004f6c
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !2153
  br label %dec_label_pc_140004f8c, !insn.addr !2154

dec_label_pc_140004f8c:                           ; preds = %dec_label_pc_140004f85, %dec_label_pc_140004dae
  %173 = call i32 @_mbscmp(i8* %98, i8* getelementptr inbounds ([9 x i8], [9 x i8]* @global_var_140008d28, i64 0, i64 0)), !insn.addr !2155
  %174 = icmp eq i32 %173, 0, !insn.addr !2156
  %175 = icmp eq i1 %174, false, !insn.addr !2157
  br i1 %175, label %dec_label_pc_14000519a, label %dec_label_pc_140004fa4, !insn.addr !2157

dec_label_pc_140004fa4:                           ; preds = %dec_label_pc_140004f8c
  %176 = call i128 @__asm_movdqa(i128 %14), !insn.addr !2158
  %177 = call i64 @__asm_movdqu(i128 %176), !insn.addr !2159
  store i16 0, i16* %stack_var_-632, align 2, !insn.addr !2160
  %178 = bitcast i16* %stack_var_-632 to i64*, !insn.addr !2161
  %179 = call i64 @function_140005740(i64* nonnull %178, i64* nonnull @global_var_14000892c, i32 0), !insn.addr !2161
  %180 = call i128 @__asm_movdqa(i128 %14), !insn.addr !2162
  %181 = call i64 @__asm_movdqu(i128 %180), !insn.addr !2163
  store i16 0, i16* %stack_var_-664, align 2, !insn.addr !2164
  %182 = bitcast i16* %stack_var_-664 to i64*, !insn.addr !2165
  %183 = call i64 @function_140005740(i64* nonnull %182, i64* bitcast ([13 x i16]* @global_var_140008ce8 to i64*), i32 12), !insn.addr !2165
  %184 = call i128 @__asm_movdqa(i128 %14), !insn.addr !2166
  %185 = call i64 @__asm_movdqu(i128 %184), !insn.addr !2167
  store i16 0, i16* %stack_var_-696, align 2, !insn.addr !2168
  %186 = bitcast i16* %stack_var_-696 to i64*, !insn.addr !2169
  %187 = call i64 @function_140005740(i64* nonnull %186, i64* bitcast ([11 x i16]* @global_var_140008d38 to i64*), i32 10), !insn.addr !2169
  %188 = call i128 @__asm_movdqa(i128 %14), !insn.addr !2170
  %189 = call i64 @__asm_movdqu(i128 %188), !insn.addr !2171
  store i16 0, i16* %stack_var_-728, align 2, !insn.addr !2172
  %190 = bitcast i16* %stack_var_-728 to i64*, !insn.addr !2173
  %191 = call i64 @function_140005740(i64* nonnull %190, i64* bitcast ([5 x i16]* @global_var_140008d18 to i64*), i32 4), !insn.addr !2173
  %192 = call i64 @function_140003210(i16* nonnull %stack_var_-728, i16* nonnull %stack_var_-696, i16* nonnull %stack_var_-664, i16* nonnull %stack_var_-632), !insn.addr !2174
  %193 = icmp ult i64 %5, 8, !insn.addr !2175
  br i1 %193, label %dec_label_pc_1400050bf, label %dec_label_pc_140005086, !insn.addr !2176

dec_label_pc_140005086:                           ; preds = %dec_label_pc_140004fa4
  %194 = mul i64 %5, 2, !insn.addr !2177
  %195 = add i64 %194, 2, !insn.addr !2177
  %196 = load i16, i16* %stack_var_-728, align 2, !insn.addr !2178
  %197 = sext i16 %196 to i64, !insn.addr !2178
  %198 = icmp ult i64 %195, 4096, !insn.addr !2179
  store i64 %197, i64* %rcx.6.reg2mem, !insn.addr !2180
  store i64 %195, i64* %rdx.6.reg2mem, !insn.addr !2180
  br i1 %198, label %dec_label_pc_1400050ba, label %dec_label_pc_14000509e, !insn.addr !2180

dec_label_pc_14000509e:                           ; preds = %dec_label_pc_140005086
  %199 = add i64 %194, 41, !insn.addr !2181
  %200 = add nsw i64 %197, -8
  %201 = inttoptr i64 %200 to i64*, !insn.addr !2182
  %202 = load i64, i64* %201, align 8, !insn.addr !2182
  %203 = sub i64 %200, %202, !insn.addr !2183
  %204 = icmp ult i64 %203, 32
  store i64 %202, i64* %rcx.6.reg2mem, !insn.addr !2184
  store i64 %199, i64* %rdx.6.reg2mem, !insn.addr !2184
  br i1 %204, label %dec_label_pc_1400050ba, label %dec_label_pc_1400050b3, !insn.addr !2184

dec_label_pc_1400050b3:                           ; preds = %dec_label_pc_14000509e
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !2185
  %205 = call i64 @__asm_int3(), !insn.addr !2186
  store i64 %202, i64* %rcx.6.reg2mem, !insn.addr !2186
  store i64 %199, i64* %rdx.6.reg2mem, !insn.addr !2186
  br label %dec_label_pc_1400050ba, !insn.addr !2186

dec_label_pc_1400050ba:                           ; preds = %dec_label_pc_1400050b3, %dec_label_pc_14000509e, %dec_label_pc_140005086
  %rdx.6.reload = load i64, i64* %rdx.6.reg2mem
  %rcx.6.reload = load i64, i64* %rcx.6.reg2mem
  %206 = call i64 @function_1400065d0(i64 %rcx.6.reload, i64 %rdx.6.reload), !insn.addr !2187
  br label %dec_label_pc_1400050bf, !insn.addr !2187

dec_label_pc_1400050bf:                           ; preds = %dec_label_pc_1400050ba, %dec_label_pc_140004fa4
  %207 = icmp ult i64 %4, 8, !insn.addr !2188
  br i1 %207, label %dec_label_pc_140005108, label %dec_label_pc_1400050cc, !insn.addr !2189

dec_label_pc_1400050cc:                           ; preds = %dec_label_pc_1400050bf
  %208 = mul i64 %4, 2, !insn.addr !2190
  %209 = add i64 %208, 2, !insn.addr !2190
  %210 = load i16, i16* %stack_var_-696, align 2, !insn.addr !2191
  %211 = sext i16 %210 to i64, !insn.addr !2191
  %212 = icmp ult i64 %209, 4096, !insn.addr !2192
  store i64 %211, i64* %rcx.7.reg2mem, !insn.addr !2193
  store i64 %209, i64* %rdx.7.reg2mem, !insn.addr !2193
  br i1 %212, label %dec_label_pc_140005103, label %dec_label_pc_1400050e7, !insn.addr !2193

dec_label_pc_1400050e7:                           ; preds = %dec_label_pc_1400050cc
  %213 = add i64 %208, 41, !insn.addr !2194
  %214 = add nsw i64 %211, -8
  %215 = inttoptr i64 %214 to i64*, !insn.addr !2195
  %216 = load i64, i64* %215, align 8, !insn.addr !2195
  %217 = sub i64 %214, %216, !insn.addr !2196
  %218 = icmp ult i64 %217, 32
  store i64 %216, i64* %rcx.7.reg2mem, !insn.addr !2197
  store i64 %213, i64* %rdx.7.reg2mem, !insn.addr !2197
  br i1 %218, label %dec_label_pc_140005103, label %dec_label_pc_1400050fc, !insn.addr !2197

dec_label_pc_1400050fc:                           ; preds = %dec_label_pc_1400050e7
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !2198
  %219 = call i64 @__asm_int3(), !insn.addr !2199
  store i64 %216, i64* %rcx.7.reg2mem, !insn.addr !2199
  store i64 %213, i64* %rdx.7.reg2mem, !insn.addr !2199
  br label %dec_label_pc_140005103, !insn.addr !2199

dec_label_pc_140005103:                           ; preds = %dec_label_pc_1400050fc, %dec_label_pc_1400050e7, %dec_label_pc_1400050cc
  %rdx.7.reload = load i64, i64* %rdx.7.reg2mem
  %rcx.7.reload = load i64, i64* %rcx.7.reg2mem
  %220 = call i64 @function_1400065d0(i64 %rcx.7.reload, i64 %rdx.7.reload), !insn.addr !2200
  br label %dec_label_pc_140005108, !insn.addr !2200

dec_label_pc_140005108:                           ; preds = %dec_label_pc_140005103, %dec_label_pc_1400050bf
  %221 = icmp ult i64 %3, 8, !insn.addr !2201
  br i1 %221, label %dec_label_pc_140005151, label %dec_label_pc_140005115, !insn.addr !2202

dec_label_pc_140005115:                           ; preds = %dec_label_pc_140005108
  %222 = mul i64 %3, 2, !insn.addr !2203
  %223 = add i64 %222, 2, !insn.addr !2203
  %224 = load i16, i16* %stack_var_-664, align 2, !insn.addr !2204
  %225 = sext i16 %224 to i64, !insn.addr !2204
  %226 = icmp ult i64 %223, 4096, !insn.addr !2205
  store i64 %225, i64* %rcx.8.reg2mem, !insn.addr !2206
  store i64 %223, i64* %rdx.8.reg2mem, !insn.addr !2206
  br i1 %226, label %dec_label_pc_14000514c, label %dec_label_pc_140005130, !insn.addr !2206

dec_label_pc_140005130:                           ; preds = %dec_label_pc_140005115
  %227 = add i64 %222, 41, !insn.addr !2207
  %228 = add nsw i64 %225, -8
  %229 = inttoptr i64 %228 to i64*, !insn.addr !2208
  %230 = load i64, i64* %229, align 8, !insn.addr !2208
  %231 = sub i64 %228, %230, !insn.addr !2209
  %232 = icmp ult i64 %231, 32
  store i64 %230, i64* %rcx.8.reg2mem, !insn.addr !2210
  store i64 %227, i64* %rdx.8.reg2mem, !insn.addr !2210
  br i1 %232, label %dec_label_pc_14000514c, label %dec_label_pc_140005145, !insn.addr !2210

dec_label_pc_140005145:                           ; preds = %dec_label_pc_140005130
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !2211
  %233 = call i64 @__asm_int3(), !insn.addr !2212
  store i64 %230, i64* %rcx.8.reg2mem, !insn.addr !2212
  store i64 %227, i64* %rdx.8.reg2mem, !insn.addr !2212
  br label %dec_label_pc_14000514c, !insn.addr !2212

dec_label_pc_14000514c:                           ; preds = %dec_label_pc_140005145, %dec_label_pc_140005130, %dec_label_pc_140005115
  %rdx.8.reload = load i64, i64* %rdx.8.reg2mem
  %rcx.8.reload = load i64, i64* %rcx.8.reg2mem
  %234 = call i64 @function_1400065d0(i64 %rcx.8.reload, i64 %rdx.8.reload), !insn.addr !2213
  br label %dec_label_pc_140005151, !insn.addr !2213

dec_label_pc_140005151:                           ; preds = %dec_label_pc_14000514c, %dec_label_pc_140005108
  %235 = icmp ult i64 %2, 8, !insn.addr !2214
  br i1 %235, label %dec_label_pc_14000519a, label %dec_label_pc_14000515e, !insn.addr !2215

dec_label_pc_14000515e:                           ; preds = %dec_label_pc_140005151
  %236 = mul i64 %2, 2, !insn.addr !2216
  %237 = add i64 %236, 2, !insn.addr !2216
  %238 = load i16, i16* %stack_var_-632, align 2, !insn.addr !2217
  %239 = sext i16 %238 to i64, !insn.addr !2217
  %240 = icmp ult i64 %237, 4096, !insn.addr !2218
  store i64 %239, i64* %rcx.9.reg2mem, !insn.addr !2219
  store i64 %237, i64* %rdx.9.reg2mem, !insn.addr !2219
  br i1 %240, label %dec_label_pc_140005195, label %dec_label_pc_140005179, !insn.addr !2219

dec_label_pc_140005179:                           ; preds = %dec_label_pc_14000515e
  %241 = add i64 %236, 41, !insn.addr !2220
  %242 = add nsw i64 %239, -8
  %243 = inttoptr i64 %242 to i64*, !insn.addr !2221
  %244 = load i64, i64* %243, align 8, !insn.addr !2221
  %245 = sub i64 %242, %244, !insn.addr !2222
  %246 = icmp ult i64 %245, 32
  store i64 %244, i64* %rcx.9.reg2mem, !insn.addr !2223
  store i64 %241, i64* %rdx.9.reg2mem, !insn.addr !2223
  br i1 %246, label %dec_label_pc_140005195, label %dec_label_pc_14000518e, !insn.addr !2223

dec_label_pc_14000518e:                           ; preds = %dec_label_pc_140005179
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !2224
  %247 = call i64 @__asm_int3(), !insn.addr !2225
  store i64 %244, i64* %rcx.9.reg2mem, !insn.addr !2225
  store i64 %241, i64* %rdx.9.reg2mem, !insn.addr !2225
  br label %dec_label_pc_140005195, !insn.addr !2225

dec_label_pc_140005195:                           ; preds = %dec_label_pc_14000518e, %dec_label_pc_140005179, %dec_label_pc_14000515e, %dec_label_pc_140004f6c, %dec_label_pc_140004f50
  %rdx.9.reload = load i64, i64* %rdx.9.reg2mem
  %rcx.9.reload = load i64, i64* %rcx.9.reg2mem
  %248 = call i64 @function_1400065d0(i64 %rcx.9.reload, i64 %rdx.9.reload), !insn.addr !2226
  br label %dec_label_pc_14000519a, !insn.addr !2226

dec_label_pc_14000519a:                           ; preds = %dec_label_pc_140005195, %dec_label_pc_140005151, %dec_label_pc_140004f8c, %dec_label_pc_140004f42
  %249 = load i32, i32* @global_var_14000c9c0, align 4, !insn.addr !2227
  %250 = icmp eq i32 %249, 0, !insn.addr !2227
  %251 = icmp eq i1 %250, false, !insn.addr !2228
  br i1 %251, label %dec_label_pc_1400051a8, label %dec_label_pc_1400051a3, !insn.addr !2228

dec_label_pc_1400051a3:                           ; preds = %dec_label_pc_14000519a
  %252 = call i64 @function_140001620(), !insn.addr !2229
  br label %dec_label_pc_1400051a8, !insn.addr !2229

dec_label_pc_1400051a8:                           ; preds = %dec_label_pc_1400051a3, %dec_label_pc_14000519a
  %253 = load i32, i32* @global_var_14000c144, align 4, !insn.addr !2230
  %254 = icmp eq i32 %253, 1, !insn.addr !2231
  store i64 ptrtoint ([12 x i8]* @global_var_1400089e0 to i64), i64* %rcx.10.reg2mem, !insn.addr !2232
  br i1 %254, label %dec_label_pc_1400051d9, label %dec_label_pc_1400051b6, !insn.addr !2232

dec_label_pc_1400051b6:                           ; preds = %dec_label_pc_1400051a8
  %255 = add i32 %253, -3, !insn.addr !2233
  %256 = icmp eq i32 %255, 0, !insn.addr !2233
  store i64 ptrtoint ([12 x i8]* @global_var_1400089d0 to i64), i64* %rcx.10.reg2mem, !insn.addr !2234
  br i1 %256, label %dec_label_pc_1400051d9, label %dec_label_pc_1400051bb, !insn.addr !2234

dec_label_pc_1400051bb:                           ; preds = %dec_label_pc_1400051b6
  %257 = icmp eq i32 %255, 1, !insn.addr !2235
  %258 = icmp eq i1 %257, false, !insn.addr !2236
  store i64 ptrtoint ([13 x i8]* @global_var_1400089f0 to i64), i64* %rcx.10.reg2mem, !insn.addr !2236
  store i64 0, i64* %r10.0.reg2mem, !insn.addr !2236
  br i1 %258, label %dec_label_pc_1400051e2, label %dec_label_pc_1400051d9, !insn.addr !2236

dec_label_pc_1400051d9:                           ; preds = %dec_label_pc_1400051a8, %dec_label_pc_1400051b6, %dec_label_pc_1400051bb
  %rcx.10.reload = load i64, i64* %rcx.10.reg2mem
  %259 = inttoptr i64 %rcx.10.reload to i8*, !insn.addr !2237
  %260 = call i64* @LoadLibraryA(i8* %259), !insn.addr !2237
  %261 = ptrtoint i64* %260 to i64, !insn.addr !2237
  store i64 %261, i64* %r10.0.reg2mem, !insn.addr !2238
  br label %dec_label_pc_1400051e2, !insn.addr !2238

dec_label_pc_1400051e2:                           ; preds = %dec_label_pc_1400051d9, %dec_label_pc_1400051bb
  %r10.0.reload = load i64, i64* %r10.0.reg2mem
  store i64 %r10.0.reload, i64* @global_var_14000c9b8, align 8, !insn.addr !2239
  %262 = inttoptr i64 %r10.0.reload to i64*, !insn.addr !2240
  %263 = call i32 @LoadStringA(i64* %262, i32 346, i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_14000c040, i64 0, i64 0), i32 260), !insn.addr !2240
  %264 = call i32 @GetVersion(), !insn.addr !2241
  %265 = icmp sgt i32 %264, -1, !insn.addr !2242
  br i1 %265, label %dec_label_pc_14000524f, label %dec_label_pc_140005210, !insn.addr !2243

dec_label_pc_140005210:                           ; preds = %dec_label_pc_1400051e2
  %266 = call i64* @memset(i64* nonnull %stack_var_-600, i32 0, i32 260), !insn.addr !2244
  %267 = load i64, i64* @global_var_14000c9b8, align 8, !insn.addr !2245
  %268 = inttoptr i64 %267 to i64*, !insn.addr !2246
  %269 = bitcast i64* %stack_var_-600 to i8*
  %270 = call i32 @LoadStringA(i64* %268, i32 474, i8* nonnull %269, i32 260), !insn.addr !2246
  store i8* %269, i8** %.pre-phi.reg2mem, !insn.addr !2247
  br label %dec_label_pc_140005335, !insn.addr !2247

dec_label_pc_14000524f:                           ; preds = %dec_label_pc_1400051e2
  store i32 0, i32* %stack_var_-960, align 4, !insn.addr !2248
  store i64 0, i64* %stack_var_-1000, align 8, !insn.addr !2249
  %271 = bitcast i32* %stack_var_-960 to %_SID_IDENTIFIER_AUTHORITY*, !insn.addr !2250
  %272 = bitcast i64* %stack_var_-1000 to i64**, !insn.addr !2250
  %273 = call i1 @AllocateAndInitializeSid(%_SID_IDENTIFIER_AUTHORITY* nonnull %271, i8 2, i32 32, i32 544, i32 0, i32 0, i32 0, i32 0, i32 0, i32 0, i64** nonnull %272), !insn.addr !2250
  %274 = icmp eq i1 %273, false, !insn.addr !2251
  br i1 %274, label %dec_label_pc_1400052fb, label %dec_label_pc_14000529e, !insn.addr !2252

dec_label_pc_14000529e:                           ; preds = %dec_label_pc_14000524f
  store i64 0, i64* %stack_var_-992, align 8, !insn.addr !2253
  %275 = call i64* @GetCurrentThread(), !insn.addr !2254
  %276 = bitcast i64* %stack_var_-992 to i64**, !insn.addr !2255
  %277 = call i1 @OpenThreadToken(i64* %275, i32 131082, i1 true, i64** nonnull %276), !insn.addr !2255
  %278 = icmp eq i1 %277, false, !insn.addr !2256
  %279 = icmp eq i1 %278, false, !insn.addr !2257
  br i1 %279, label %dec_label_pc_14000539b, label %dec_label_pc_1400052ca, !insn.addr !2257

dec_label_pc_1400052ca:                           ; preds = %dec_label_pc_14000529e
  %280 = call i64* @GetCurrentProcess(), !insn.addr !2258
  %281 = call i1 @OpenProcessToken(i64* %280, i32 131082, i64** nonnull %276), !insn.addr !2259
  %282 = icmp eq i1 %281, false, !insn.addr !2260
  %283 = icmp eq i1 %282, false, !insn.addr !2261
  br i1 %283, label %dec_label_pc_14000539b, label %dec_label_pc_1400052eb, !insn.addr !2261

dec_label_pc_1400052eb:                           ; preds = %dec_label_pc_1400052ca
  %284 = load i64, i64* %stack_var_-1000, align 8, !insn.addr !2262
  %285 = inttoptr i64 %284 to i64*, !insn.addr !2263
  %286 = call i64* @FreeSid(i64* %285), !insn.addr !2263
  store i64 0, i64* %stack_var_-1000, align 8, !insn.addr !2264
  br label %dec_label_pc_1400052fb, !insn.addr !2264

dec_label_pc_1400052fb.critedge:                  ; preds = %dec_label_pc_140005448
  %287 = load i64, i64* %stack_var_-1000, align 8, !insn.addr !2265
  %288 = inttoptr i64 %287 to i64*, !insn.addr !2266
  %289 = call i64* @FreeSid(i64* %288), !insn.addr !2266
  store i64 0, i64* %stack_var_-1000, align 8, !insn.addr !2267
  %290 = load i64, i64* %stack_var_-992, align 8, !insn.addr !2268
  %291 = inttoptr i64 %290 to i64*, !insn.addr !2269
  %292 = call i1 @CloseHandle(i64* %291), !insn.addr !2269
  store i64 0, i64* %stack_var_-992, align 8, !insn.addr !2270
  call void @free(i64* nonnull %315), !insn.addr !2271
  br label %dec_label_pc_1400052fb

dec_label_pc_1400052fb.critedge2:                 ; preds = %dec_label_pc_1400053fc
  %293 = load i64, i64* %stack_var_-1000, align 8, !insn.addr !2265
  %294 = inttoptr i64 %293 to i64*, !insn.addr !2266
  %295 = call i64* @FreeSid(i64* %294), !insn.addr !2266
  store i64 0, i64* %stack_var_-1000, align 8, !insn.addr !2267
  %296 = load i64, i64* %stack_var_-992, align 8, !insn.addr !2268
  %297 = inttoptr i64 %296 to i64*, !insn.addr !2269
  %298 = call i1 @CloseHandle(i64* %297), !insn.addr !2269
  store i64 0, i64* %stack_var_-992, align 8, !insn.addr !2270
  call void @free(i64* nonnull %315), !insn.addr !2271
  br label %dec_label_pc_1400052fb

dec_label_pc_1400052fb:                           ; preds = %dec_label_pc_1400052fb.critedge2, %dec_label_pc_1400052fb.critedge, %dec_label_pc_1400053d7, %dec_label_pc_1400052eb, %dec_label_pc_14000524f
  %299 = call i64* @memset(i64* nonnull %stack_var_-328, i32 0, i32 260), !insn.addr !2272
  %300 = load i64, i64* @global_var_14000c9b8, align 8, !insn.addr !2273
  %301 = inttoptr i64 %300 to i64*, !insn.addr !2274
  %302 = bitcast i64* %stack_var_-328 to i8*
  %303 = call i32 @LoadStringA(i64* %301, i32 473, i8* nonnull %302, i32 260), !insn.addr !2274
  store i8* %302, i8** %.pre-phi.reg2mem, !insn.addr !2275
  br label %dec_label_pc_140005335, !insn.addr !2275

dec_label_pc_140005335:                           ; preds = %dec_label_pc_1400052fb, %dec_label_pc_140005210
  %.pre-phi.reload = load i8*, i8** %.pre-phi.reg2mem
  %304 = call i32 @MessageBoxA(i64* null, i8* %.pre-phi.reload, i8* getelementptr inbounds ([21 x i8], [21 x i8]* @global_var_14000c040, i64 0, i64 0), i32 64), !insn.addr !2276
  br label %dec_label_pc_14000534f, !insn.addr !2277

dec_label_pc_14000534f:                           ; preds = %dec_label_pc_1400054a6, %dec_label_pc_14000545f, %dec_label_pc_140005335
  %305 = sext i32 %13 to i64, !insn.addr !2007
  %306 = ptrtoint i8* %98 to i64, !insn.addr !2083
  %307 = add i64 %306, -8, !insn.addr !2278
  %308 = inttoptr i64 %307 to i32*, !insn.addr !2278
  %309 = load i32, i32* %308, align 4, !insn.addr !2278
  %310 = add i32 %309, -1, !insn.addr !2278
  store i32 %310, i32* %308, align 4, !insn.addr !2278
  call void @__security_check_cookie(i64 %305), !insn.addr !2279
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !2280

dec_label_pc_14000539b:                           ; preds = %dec_label_pc_1400052ca, %dec_label_pc_14000529e
  store i32 0, i32* %stack_var_-984, align 4, !insn.addr !2281
  %311 = load i64, i64* %stack_var_-992, align 8, !insn.addr !2282
  %312 = inttoptr i64 %311 to i64*, !insn.addr !2283
  %313 = call i1 @GetTokenInformation(i64* %312, i64 2, i64* null, i32 0, i32* nonnull %stack_var_-984), !insn.addr !2283
  %314 = load i32, i32* %stack_var_-984, align 4, !insn.addr !2284
  %315 = call i64* @calloc(i32 %314, i32 1), !insn.addr !2285
  %316 = icmp eq i64* %315, null, !insn.addr !2286
  %317 = icmp eq i1 %316, false, !insn.addr !2287
  br i1 %317, label %dec_label_pc_1400053fc, label %dec_label_pc_1400053d7, !insn.addr !2287

dec_label_pc_1400053d7:                           ; preds = %dec_label_pc_14000539b
  %318 = load i64, i64* %stack_var_-1000, align 8, !insn.addr !2288
  %319 = inttoptr i64 %318 to i64*, !insn.addr !2289
  %320 = call i64* @FreeSid(i64* %319), !insn.addr !2289
  store i64 0, i64* %stack_var_-1000, align 8, !insn.addr !2290
  %321 = load i64, i64* %stack_var_-992, align 8, !insn.addr !2291
  %322 = inttoptr i64 %321 to i64*, !insn.addr !2292
  %323 = call i1 @CloseHandle(i64* %322), !insn.addr !2292
  store i64 0, i64* %stack_var_-992, align 8, !insn.addr !2293
  br label %dec_label_pc_1400052fb, !insn.addr !2294

dec_label_pc_1400053fc:                           ; preds = %dec_label_pc_14000539b
  %324 = load i64, i64* %stack_var_-992, align 8, !insn.addr !2295
  %325 = inttoptr i64 %324 to i64*, !insn.addr !2296
  %326 = call i1 @GetTokenInformation(i64* %325, i64 2, i64* %315, i32 %314, i32* nonnull %stack_var_-984), !insn.addr !2296
  %327 = bitcast i64* %315 to i32*, !insn.addr !2297
  %328 = load i32, i32* %327, align 4, !insn.addr !2297
  %329 = icmp eq i32 %328, 0
  br i1 %329, label %dec_label_pc_1400052fb.critedge2, label %dec_label_pc_140005430.preheader, !insn.addr !2298

dec_label_pc_140005430.preheader:                 ; preds = %dec_label_pc_1400053fc
  %330 = ptrtoint i64* %315 to i64, !insn.addr !2285
  store i64 %330, i64* %rsi.0.in.reg2mem
  store i64 0, i64* %r14.0.reg2mem
  br label %dec_label_pc_140005430

dec_label_pc_140005430:                           ; preds = %dec_label_pc_140005430.preheader, %dec_label_pc_140005448
  %r14.0.reload = load i64, i64* %r14.0.reg2mem
  %rsi.0.in.reload = load i64, i64* %rsi.0.in.reg2mem
  %rsi.0 = add i64 %rsi.0.in.reload, 16
  %331 = load i64, i64* %stack_var_-1000, align 8, !insn.addr !2299
  %332 = add i64 %rsi.0.in.reload, 8, !insn.addr !2300
  %333 = inttoptr i64 %332 to i64*, !insn.addr !2300
  %334 = load i64, i64* %333, align 8, !insn.addr !2300
  %335 = inttoptr i64 %334 to i64*, !insn.addr !2301
  %336 = inttoptr i64 %331 to i64*, !insn.addr !2301
  %337 = call i1 @EqualSid(i64* %335, i64* %336), !insn.addr !2301
  %338 = icmp eq i1 %337, false, !insn.addr !2302
  br i1 %338, label %dec_label_pc_140005448, label %dec_label_pc_140005443, !insn.addr !2303

dec_label_pc_140005443:                           ; preds = %dec_label_pc_140005430
  %339 = inttoptr i64 %rsi.0 to i8*, !insn.addr !2304
  %340 = load i8, i8* %339, align 1, !insn.addr !2304
  %341 = and i8 %340, 6, !insn.addr !2304
  %342 = icmp eq i8 %341, 0, !insn.addr !2304
  %343 = icmp eq i1 %342, false, !insn.addr !2305
  br i1 %343, label %dec_label_pc_14000545f, label %dec_label_pc_140005448, !insn.addr !2305

dec_label_pc_140005448:                           ; preds = %dec_label_pc_140005443, %dec_label_pc_140005430
  %344 = add i64 %r14.0.reload, 1, !insn.addr !2306
  %345 = load i32, i32* %327, align 4, !insn.addr !2307
  %346 = zext i32 %345 to i64, !insn.addr !2307
  %347 = icmp ult i64 %344, %346, !insn.addr !2308
  %348 = icmp eq i1 %347, false, !insn.addr !2309
  store i64 %rsi.0, i64* %rsi.0.in.reg2mem, !insn.addr !2309
  store i64 %344, i64* %r14.0.reg2mem, !insn.addr !2309
  br i1 %348, label %dec_label_pc_1400052fb.critedge, label %dec_label_pc_140005430, !insn.addr !2309

dec_label_pc_14000545f:                           ; preds = %dec_label_pc_140005443
  %349 = load i64, i64* %stack_var_-1000, align 8, !insn.addr !2265
  %350 = inttoptr i64 %349 to i64*, !insn.addr !2266
  %351 = call i64* @FreeSid(i64* %350), !insn.addr !2266
  store i64 0, i64* %stack_var_-1000, align 8, !insn.addr !2267
  %352 = load i64, i64* %stack_var_-992, align 8, !insn.addr !2268
  %353 = inttoptr i64 %352 to i64*, !insn.addr !2269
  %354 = call i1 @CloseHandle(i64* %353), !insn.addr !2269
  store i64 0, i64* %stack_var_-992, align 8, !insn.addr !2270
  call void @free(i64* nonnull %315), !insn.addr !2271
  %355 = call i64 @function_140004400(), !insn.addr !2310
  %356 = load i64, i64* @global_var_14000c9b8, align 8, !insn.addr !2311
  %357 = icmp eq i64 %356, 0, !insn.addr !2312
  br i1 %357, label %dec_label_pc_14000534f, label %dec_label_pc_1400054a6, !insn.addr !2313

dec_label_pc_1400054a6:                           ; preds = %dec_label_pc_14000545f
  %358 = inttoptr i64 %356 to i64*, !insn.addr !2314
  %359 = call i1 @FreeLibrary(i64* %358), !insn.addr !2314
  br label %dec_label_pc_14000534f, !insn.addr !2315

dec_label_pc_1400054b8:                           ; preds = %dec_label_pc_140004d2c
  %360 = call i64 @function_140001a60(i64 2147500037), !insn.addr !2316
  unreachable, !insn.addr !2316

; uselistorder directives
  uselistorder i64 %rsi.0.in.reload, { 1, 0 }
  uselistorder i64* %315, { 2, 6, 3, 4, 5, 1, 0 }
  uselistorder i32 %253, { 1, 0 }
  uselistorder i64 %239, { 1, 0 }
  uselistorder i64 %236, { 1, 0 }
  uselistorder i64 %225, { 1, 0 }
  uselistorder i64 %222, { 1, 0 }
  uselistorder i64 %211, { 1, 0 }
  uselistorder i64 %208, { 1, 0 }
  uselistorder i64 %197, { 1, 0 }
  uselistorder i64 %194, { 1, 0 }
  uselistorder i64 %165, { 1, 0 }
  uselistorder i64 %162, { 1, 0 }
  uselistorder i64 %151, { 1, 0 }
  uselistorder i64 %148, { 1, 0 }
  uselistorder i64 %137, { 1, 0 }
  uselistorder i64 %134, { 1, 0 }
  uselistorder i64 %123, { 1, 0 }
  uselistorder i64 %120, { 1, 0 }
  uselistorder i8* %98, { 2, 0, 1 }
  uselistorder i64 %60, { 1, 0 }
  uselistorder i64 %57, { 1, 0 }
  uselistorder i64 %46, { 1, 0 }
  uselistorder i64 %43, { 1, 0 }
  uselistorder i64 %32, { 1, 0 }
  uselistorder i64 %29, { 1, 0 }
  uselistorder i128 %14, { 1, 0, 3, 2, 5, 4, 7, 6, 9, 8, 10 }
  uselistorder i16* %stack_var_-888, { 2, 0, 1, 3 }
  uselistorder i16* %stack_var_-920, { 1, 0, 2 }
  uselistorder i16* %stack_var_-952, { 2, 0, 1, 3 }
  uselistorder i64 %12, { 1, 0 }
  uselistorder i64 %11, { 1, 0 }
  uselistorder i64 %10, { 1, 0 }
  uselistorder i8** %stack_var_-976, { 1, 3, 2, 0 }
  uselistorder i16* %stack_var_-760, { 2, 0, 1, 3 }
  uselistorder i16* %stack_var_-792, { 2, 0, 1, 3 }
  uselistorder i16* %stack_var_-824, { 2, 0, 1, 3 }
  uselistorder i16* %stack_var_-856, { 2, 0, 1, 3 }
  uselistorder i64 %9, { 1, 0 }
  uselistorder i64 %8, { 1, 0 }
  uselistorder i64 %7, { 1, 0 }
  uselistorder i64 %6, { 1, 0 }
  uselistorder i16* %stack_var_-632, { 2, 0, 1, 3 }
  uselistorder i16* %stack_var_-664, { 2, 0, 1, 3 }
  uselistorder i16* %stack_var_-696, { 2, 0, 1, 3 }
  uselistorder i16* %stack_var_-728, { 2, 0, 1, 3 }
  uselistorder i64 %5, { 1, 0 }
  uselistorder i64 %4, { 1, 0 }
  uselistorder i64 %3, { 1, 0 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %stack_var_-1000, { 5, 6, 7, 8, 9, 0, 1, 2, 3, 10, 11, 4, 12 }
  uselistorder i64* %stack_var_-992, { 5, 6, 7, 8, 9, 10, 0, 1, 2, 3, 4, 11 }
  uselistorder i32* %stack_var_-984, { 0, 2, 1, 3 }
  uselistorder i64 %1, { 3, 4, 0, 1, 2 }
  uselistorder i64* %rax.1.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rcx.9.reg2mem, { 0, 3, 4, 5, 1, 2 }
  uselistorder i64* %rdx.9.reg2mem, { 0, 3, 4, 5, 1, 2 }
  uselistorder i64* %rcx.10.reg2mem, { 0, 3, 2, 1 }
  uselistorder i64* %r10.0.reg2mem, { 0, 2, 1 }
  uselistorder i8** %.pre-phi.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rsi.0.in.reg2mem, { 2, 0, 1 }
  uselistorder i64* %r14.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %0, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i1 (i64*, i64, i64*, i32, i32*)* @GetTokenInformation, { 1, 0 }
  uselistorder i1 (i64*)* @CloseHandle, { 3, 2, 0, 1, 12, 11, 10, 9, 8, 7, 6, 14, 13, 5, 4, 16, 15 }
  uselistorder i64* (i64*)* @FreeSid, { 4, 3, 0, 1, 2 }
  uselistorder i32 (i64*, i32, i8*, i32)* @LoadStringA, { 2, 1, 0 }
  uselistorder i32 260, { 0, 1, 2, 3, 4, 5, 6, 12, 7, 13, 8, 9, 10, 11 }
  uselistorder i32* @global_var_14000c144, { 4, 3, 2, 1, 0 }
  uselistorder i32* @global_var_14000c9c0, { 1, 0 }
  uselistorder i64 (i16*, i16*, i16*, i16*)* @function_140003210, { 1, 0 }
  uselistorder i32 (i8*, i8*)* @_mbscmp, { 1, 0 }
  uselistorder i32 12, { 1, 2, 0, 3, 4, 5 }
  uselistorder i64 (i64*, i64*, i32)* @function_140005740, { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 19, 18, 17, 22, 21, 20, 12, 11, 16, 15, 14, 13, 23 }
  uselistorder label %dec_label_pc_140005430, { 1, 0 }
  uselistorder label %dec_label_pc_1400052fb, { 2, 0, 1, 3, 4 }
  uselistorder label %dec_label_pc_1400051d9, { 2, 1, 0 }
  uselistorder label %dec_label_pc_140004d90, { 1, 0 }
  uselistorder label %dec_label_pc_140004d5c, { 1, 0 }
}

define i64 @function_1400054d0(i64 %arg1) local_unnamed_addr {
dec_label_pc_1400054d0:
  %rsi.0.reg2mem = alloca i64, !insn.addr !2317
  %rcx.3.reg2mem = alloca i64, !insn.addr !2317
  %rdx.33.reg2mem = alloca i64, !insn.addr !2317
  %.reg2mem = alloca i64, !insn.addr !2317
  %rdx.21.reg2mem = alloca i64, !insn.addr !2317
  %rdx.22.reg2mem = alloca i64, !insn.addr !2317
  %rdi.0.reg2mem = alloca i64, !insn.addr !2317
  %rdx.1.reg2mem = alloca i64, !insn.addr !2317
  %rcx.1.reg2mem = alloca i64, !insn.addr !2317
  %rdx.0.reg2mem = alloca i64, !insn.addr !2317
  %rcx.0.reg2mem = alloca i64, !insn.addr !2317
  %0 = add i64 %arg1, 24, !insn.addr !2318
  %1 = inttoptr i64 %0 to i64*, !insn.addr !2318
  %2 = load i64, i64* %1, align 8, !insn.addr !2318
  %3 = icmp ult i64 %2, 8, !insn.addr !2319
  br i1 %3, label %dec_label_pc_140005514, label %dec_label_pc_1400054e3, !insn.addr !2320

dec_label_pc_1400054e3:                           ; preds = %dec_label_pc_1400054d0
  %4 = mul i64 %2, 2, !insn.addr !2321
  %5 = add i64 %4, 2, !insn.addr !2321
  %6 = icmp ult i64 %5, 4096, !insn.addr !2322
  store i64 %arg1, i64* %rcx.0.reg2mem, !insn.addr !2323
  store i64 %5, i64* %rdx.0.reg2mem, !insn.addr !2323
  br i1 %6, label %dec_label_pc_14000550f, label %dec_label_pc_1400054f7, !insn.addr !2323

dec_label_pc_1400054f7:                           ; preds = %dec_label_pc_1400054e3
  %7 = add i64 %arg1, -8, !insn.addr !2324
  %8 = inttoptr i64 %7 to i64*, !insn.addr !2324
  %9 = load i64, i64* %8, align 8, !insn.addr !2324
  %10 = add i64 %4, 41, !insn.addr !2325
  %11 = sub i64 %arg1, %9, !insn.addr !2326
  %12 = add i64 %11, -8, !insn.addr !2327
  %13 = icmp ult i64 %12, 32
  store i64 %9, i64* %rcx.0.reg2mem, !insn.addr !2328
  store i64 %10, i64* %rdx.0.reg2mem, !insn.addr !2328
  br i1 %13, label %dec_label_pc_14000550f, label %dec_label_pc_14000552b, !insn.addr !2328

dec_label_pc_14000550f:                           ; preds = %dec_label_pc_1400054f7, %dec_label_pc_1400054e3
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %14 = call i64 @function_1400065d0(i64 %rcx.0.reload, i64 %rdx.0.reload), !insn.addr !2329
  br label %dec_label_pc_140005514, !insn.addr !2329

dec_label_pc_140005514:                           ; preds = %dec_label_pc_14000550f, %dec_label_pc_1400054d0
  store i64 7, i64* %1, align 8, !insn.addr !2330
  %15 = add i64 %arg1, 16, !insn.addr !2331
  %16 = inttoptr i64 %15 to i64*, !insn.addr !2331
  store i64 0, i64* %16, align 8, !insn.addr !2331
  %17 = inttoptr i64 %arg1 to i16*, !insn.addr !2332
  store i16 0, i16* %17, align 2, !insn.addr !2332
  ret i64 0, !insn.addr !2333

dec_label_pc_14000552b:                           ; preds = %dec_label_pc_1400054f7
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !2334
  %18 = call i64 @__asm_int3(), !insn.addr !2335
  %19 = call i64 @__asm_int3(), !insn.addr !2336
  %20 = call i64 @__asm_int3(), !insn.addr !2337
  %21 = call i64 @__asm_int3(), !insn.addr !2338
  %22 = call i64 @__asm_int3(), !insn.addr !2339
  %23 = call i64 @__asm_int3(), !insn.addr !2340
  %24 = call i64 @__asm_int3(), !insn.addr !2341
  %25 = call i64 @__asm_int3(), !insn.addr !2342
  %26 = call i64 @__asm_int3(), !insn.addr !2343
  %27 = call i64 @__asm_int3(), !insn.addr !2344
  %28 = call i64 @__asm_int3(), !insn.addr !2345
  %29 = call i64 @__asm_int3(), !insn.addr !2346
  %30 = call i64 @__asm_int3(), !insn.addr !2347
  %31 = call i64 @__asm_int3(), !insn.addr !2348
  %32 = call i64 @__asm_int3(), !insn.addr !2349
  %33 = icmp eq i64 %11, %10, !insn.addr !2350
  br i1 %33, label %dec_label_pc_1400055be, label %dec_label_pc_140005555, !insn.addr !2351

dec_label_pc_140005555:                           ; preds = %dec_label_pc_14000552b
  %34 = add i64 %11, 24, !insn.addr !2352
  %35 = inttoptr i64 %34 to i64*, !insn.addr !2352
  %36 = load i64, i64* %35, align 8, !insn.addr !2352
  %37 = icmp ult i64 %36, 8, !insn.addr !2353
  br i1 %37, label %dec_label_pc_140005590, label %dec_label_pc_14000555f, !insn.addr !2354

dec_label_pc_14000555f:                           ; preds = %dec_label_pc_140005555
  %38 = inttoptr i64 %11 to i64*, !insn.addr !2355
  %39 = load i64, i64* %38, align 8, !insn.addr !2355
  %40 = mul i64 %36, 2, !insn.addr !2356
  %41 = add i64 %40, 2, !insn.addr !2356
  %42 = icmp ult i64 %41, 4096, !insn.addr !2357
  store i64 %39, i64* %rcx.1.reg2mem, !insn.addr !2358
  store i64 %41, i64* %rdx.1.reg2mem, !insn.addr !2358
  br i1 %42, label %dec_label_pc_14000558b, label %dec_label_pc_140005573, !insn.addr !2358

dec_label_pc_140005573:                           ; preds = %dec_label_pc_14000555f
  %43 = add i64 %39, -8, !insn.addr !2359
  %44 = inttoptr i64 %43 to i64*, !insn.addr !2359
  %45 = load i64, i64* %44, align 8, !insn.addr !2359
  %46 = add i64 %40, 41, !insn.addr !2360
  %47 = sub i64 %39, %45, !insn.addr !2361
  %48 = add i64 %47, -8, !insn.addr !2362
  %49 = icmp ult i64 %48, 32
  store i64 %45, i64* %rcx.1.reg2mem, !insn.addr !2363
  store i64 %46, i64* %rdx.1.reg2mem, !insn.addr !2363
  br i1 %49, label %dec_label_pc_14000558b, label %dec_label_pc_1400055cc, !insn.addr !2363

dec_label_pc_14000558b:                           ; preds = %dec_label_pc_140005573, %dec_label_pc_14000555f
  %rdx.1.reload = load i64, i64* %rdx.1.reg2mem
  %rcx.1.reload = load i64, i64* %rcx.1.reg2mem
  %50 = call i64 @function_1400065d0(i64 %rcx.1.reload, i64 %rdx.1.reload), !insn.addr !2364
  br label %dec_label_pc_140005590, !insn.addr !2364

dec_label_pc_140005590:                           ; preds = %dec_label_pc_14000558b, %dec_label_pc_140005555
  store i64 7, i64* %35, align 8, !insn.addr !2365
  %51 = add i64 %11, 16, !insn.addr !2366
  %52 = inttoptr i64 %51 to i64*, !insn.addr !2366
  store i64 0, i64* %52, align 8, !insn.addr !2366
  %53 = inttoptr i64 %11 to i16*, !insn.addr !2367
  store i16 0, i16* %53, align 2, !insn.addr !2367
  %54 = inttoptr i64 %10 to i128*, !insn.addr !2368
  %55 = load i128, i128* %54, align 8, !insn.addr !2368
  %56 = call i128 @__asm_movups(i128 %55), !insn.addr !2368
  %57 = inttoptr i64 %11 to i128*, !insn.addr !2369
  %58 = load i128, i128* %57, align 8, !insn.addr !2369
  call void @__asm_movups.2(i128 %58, i128 %56), !insn.addr !2369
  %59 = add i64 %4, 57, !insn.addr !2370
  %60 = inttoptr i64 %59 to i128*, !insn.addr !2370
  %61 = load i128, i128* %60, align 8, !insn.addr !2370
  %62 = call i128 @__asm_movups(i128 %61), !insn.addr !2370
  %63 = inttoptr i64 %51 to i128*, !insn.addr !2371
  %64 = load i128, i128* %63, align 8, !insn.addr !2371
  call void @__asm_movups.2(i128 %64, i128 %62), !insn.addr !2371
  %65 = inttoptr i64 %59 to i64*, !insn.addr !2372
  store i64 0, i64* %65, align 8, !insn.addr !2372
  %66 = add i64 %4, 65, !insn.addr !2373
  %67 = inttoptr i64 %66 to i64*, !insn.addr !2373
  store i64 7, i64* %67, align 8, !insn.addr !2373
  %68 = inttoptr i64 %10 to i16*, !insn.addr !2374
  store i16 0, i16* %68, align 2, !insn.addr !2374
  br label %dec_label_pc_1400055be, !insn.addr !2374

dec_label_pc_1400055be:                           ; preds = %dec_label_pc_140005590, %dec_label_pc_14000552b
  ret i64 %11, !insn.addr !2375

dec_label_pc_1400055cc:                           ; preds = %dec_label_pc_140005573
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !2376
  %69 = call i64 @__asm_int3(), !insn.addr !2377
  %70 = call i64 @__asm_int3(), !insn.addr !2378
  %71 = call i64 @__asm_int3(), !insn.addr !2379
  %72 = call i64 @__asm_int3(), !insn.addr !2380
  %73 = call i64 @__asm_int3(), !insn.addr !2381
  %74 = call i64 @__asm_int3(), !insn.addr !2382
  %75 = call i64 @__asm_int3(), !insn.addr !2383
  %76 = call i64 @__asm_int3(), !insn.addr !2384
  %77 = call i64 @__asm_int3(), !insn.addr !2385
  %78 = call i64 @__asm_int3(), !insn.addr !2386
  %79 = call i64 @__asm_int3(), !insn.addr !2387
  %80 = call i64 @__asm_int3(), !insn.addr !2388
  %81 = call i64 @__asm_int3(), !insn.addr !2389
  %82 = call i64 @__asm_int3(), !insn.addr !2390
  %83 = add i64 %47, 16, !insn.addr !2391
  %84 = inttoptr i64 %83 to i64*, !insn.addr !2391
  store i64 0, i64* %84, align 8, !insn.addr !2391
  %85 = add i64 %47, 24, !insn.addr !2392
  %86 = inttoptr i64 %85 to i64*, !insn.addr !2392
  store i64 0, i64* %86, align 8, !insn.addr !2392
  %87 = add i64 %40, 65, !insn.addr !2393
  %88 = inttoptr i64 %87 to i64*, !insn.addr !2393
  %89 = load i64, i64* %88, align 8, !insn.addr !2393
  %90 = icmp ult i64 %89, 8, !insn.addr !2393
  %91 = add i64 %40, 57, !insn.addr !2394
  %92 = inttoptr i64 %91 to i64*, !insn.addr !2394
  %93 = load i64, i64* %92, align 8, !insn.addr !2394
  store i64 %46, i64* %rdi.0.reg2mem, !insn.addr !2395
  br i1 %90, label %dec_label_pc_14000560d, label %dec_label_pc_14000560a, !insn.addr !2395

dec_label_pc_14000560a:                           ; preds = %dec_label_pc_1400055cc
  %94 = inttoptr i64 %46 to i64*, !insn.addr !2396
  %95 = load i64, i64* %94, align 8, !insn.addr !2396
  store i64 %95, i64* %rdi.0.reg2mem, !insn.addr !2396
  br label %dec_label_pc_14000560d, !insn.addr !2396

dec_label_pc_14000560d:                           ; preds = %dec_label_pc_14000560a, %dec_label_pc_1400055cc
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %96 = icmp ult i64 %93, 8, !insn.addr !2397
  %97 = icmp eq i1 %96, false, !insn.addr !2398
  br i1 %97, label %dec_label_pc_140005628, label %dec_label_pc_140005618, !insn.addr !2398

dec_label_pc_140005618:                           ; preds = %dec_label_pc_14000560d
  %98 = inttoptr i64 %rdi.0.reload to i128*, !insn.addr !2399
  %99 = load i128, i128* %98, align 8, !insn.addr !2399
  %100 = call i128 @__asm_movups(i128 %99), !insn.addr !2399
  %101 = inttoptr i64 %47 to i128*, !insn.addr !2400
  %102 = load i128, i128* %101, align 8, !insn.addr !2400
  call void @__asm_movups.2(i128 %102, i128 %100), !insn.addr !2400
  store i64 7, i64* %rsi.0.reg2mem, !insn.addr !2401
  br label %dec_label_pc_1400056b9, !insn.addr !2401

dec_label_pc_140005628:                           ; preds = %dec_label_pc_14000560d
  %103 = or i64 %93, 7, !insn.addr !2402
  %104 = icmp ult i64 %103, 9223372036854775806, !insn.addr !2403
  %105 = select i1 %104, i64 %103, i64 9223372036854775806, !insn.addr !2404
  %106 = add nuw i64 %105, 1, !insn.addr !2405
  %107 = icmp ult i64 %106, 9223372036854775807, !insn.addr !2406
  %108 = icmp ugt i64 %103, 9223372036854775805, !insn.addr !2406
  %109 = or i1 %108, %107, !insn.addr !2407
  store i64 -1, i64* %rdx.22.reg2mem, !insn.addr !2407
  br i1 %109, label %dec_label_pc_140005663, label %dec_label_pc_14000566c.thread, !insn.addr !2407

dec_label_pc_140005663:                           ; preds = %dec_label_pc_140005628
  %110 = mul i64 %106, 2, !insn.addr !2408
  %111 = icmp ult i64 %110, 4096, !insn.addr !2409
  br i1 %111, label %dec_label_pc_140005696, label %dec_label_pc_14000566c, !insn.addr !2410

dec_label_pc_14000566c:                           ; preds = %dec_label_pc_140005663
  %112 = add i64 %110, 39, !insn.addr !2411
  %113 = icmp ugt i64 %110, -40, !insn.addr !2412
  store i64 %110, i64* %rdx.22.reg2mem
  store i64 %110, i64* %rdx.21.reg2mem
  store i64 %112, i64* %.reg2mem
  br i1 %113, label %dec_label_pc_14000566c.thread, label %114

dec_label_pc_14000566c.thread:                    ; preds = %dec_label_pc_140005628, %dec_label_pc_14000566c
  %rdx.22.reload = load i64, i64* %rdx.22.reg2mem
  store i64 %rdx.22.reload, i64* %rdx.21.reg2mem
  store i64 -1, i64* %.reg2mem
  br label %114

; <label>:114:                                    ; preds = %dec_label_pc_14000566c, %dec_label_pc_14000566c.thread
  %.reload = load i64, i64* %.reg2mem
  %115 = call i64 @function_1400065e0(i64 %.reload), !insn.addr !2413
  %116 = icmp eq i64 %115, 0, !insn.addr !2414
  br i1 %116, label %dec_label_pc_140005696.thread, label %dec_label_pc_140005681, !insn.addr !2415

dec_label_pc_140005681:                           ; preds = %114
  %117 = add i64 %115, 39, !insn.addr !2416
  %118 = and i64 %117, -32, !insn.addr !2417
  %119 = add i64 %118, -8, !insn.addr !2418
  %120 = inttoptr i64 %119 to i64*, !insn.addr !2418
  store i64 %115, i64* %120, align 8, !insn.addr !2418
  store i64 %118, i64* %rcx.3.reg2mem, !insn.addr !2419
  br label %dec_label_pc_1400056a6, !insn.addr !2419

dec_label_pc_140005696.thread:                    ; preds = %114
  %rdx.21.reload = load i64, i64* %rdx.21.reg2mem
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !2420
  %121 = call i64 @__asm_int3(), !insn.addr !2421
  store i64 %rdx.21.reload, i64* %rdx.33.reg2mem
  br label %dec_label_pc_14000569b

dec_label_pc_140005696:                           ; preds = %dec_label_pc_140005663
  %122 = icmp eq i64 %110, 0, !insn.addr !2422
  store i64 %110, i64* %rdx.33.reg2mem, !insn.addr !2423
  store i64 0, i64* %rcx.3.reg2mem, !insn.addr !2423
  br i1 %122, label %dec_label_pc_1400056a6, label %dec_label_pc_14000569b, !insn.addr !2423

dec_label_pc_14000569b:                           ; preds = %dec_label_pc_140005696.thread, %dec_label_pc_140005696
  %rdx.33.reload = load i64, i64* %rdx.33.reg2mem
  %123 = call i64 @function_1400065e0(i64 %rdx.33.reload), !insn.addr !2424
  store i64 %123, i64* %rcx.3.reg2mem, !insn.addr !2425
  br label %dec_label_pc_1400056a6, !insn.addr !2425

dec_label_pc_1400056a6:                           ; preds = %dec_label_pc_14000569b, %dec_label_pc_140005696, %dec_label_pc_140005681
  %rcx.3.reload = load i64, i64* %rcx.3.reg2mem
  %124 = inttoptr i64 %47 to i64*, !insn.addr !2426
  store i64 %rcx.3.reload, i64* %124, align 8, !insn.addr !2426
  %125 = inttoptr i64 %rcx.3.reload to i64*, !insn.addr !2427
  %126 = inttoptr i64 %rdi.0.reload to i64*, !insn.addr !2427
  %.tr = trunc i64 %93 to i32
  %127 = mul i32 %.tr, 2
  %128 = add i32 %127, 2, !insn.addr !2427
  %129 = call i64* @memcpy(i64* %125, i64* %126, i32 %128), !insn.addr !2427
  store i64 %105, i64* %rsi.0.reg2mem, !insn.addr !2427
  br label %dec_label_pc_1400056b9, !insn.addr !2427

dec_label_pc_1400056b9:                           ; preds = %dec_label_pc_1400056a6, %dec_label_pc_140005618
  %rsi.0.reload = load i64, i64* %rsi.0.reg2mem
  store i64 %93, i64* %84, align 8, !insn.addr !2428
  store i64 %rsi.0.reload, i64* %86, align 8, !insn.addr !2429
  ret i64 %47, !insn.addr !2430

; uselistorder directives
  uselistorder i64 %rcx.3.reload, { 1, 0 }
  uselistorder i64 %115, { 1, 0, 2 }
  uselistorder i64 %110, { 0, 4, 1, 2, 6, 5, 3 }
  uselistorder i64 %93, { 0, 1, 3, 2 }
  uselistorder i64 %47, { 1, 2, 0, 3, 4, 5 }
  uselistorder i64 %46, { 2, 0, 1 }
  uselistorder i64 %40, { 3, 2, 1, 0 }
  uselistorder i64 %39, { 1, 2, 0 }
  uselistorder i64 %11, { 5, 1, 2, 3, 0, 4, 6, 7 }
  uselistorder i64 %10, { 1, 2, 3, 0 }
  uselistorder i64 %4, { 3, 2, 1, 0 }
  uselistorder i64* %rdx.22.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rdx.21.reg2mem, { 0, 2, 1 }
  uselistorder i64* %.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rcx.3.reg2mem, { 0, 2, 3, 1 }
  uselistorder i64* %rsi.0.reg2mem, { 0, 2, 1 }
  uselistorder i64 65, { 1, 0 }
  uselistorder i64 57, { 1, 0 }
  uselistorder i64 %arg1, { 3, 4, 1, 2, 0, 5 }
  uselistorder label %dec_label_pc_14000569b, { 1, 0 }
  uselistorder label %114, { 1, 0 }
  uselistorder label %dec_label_pc_14000566c.thread, { 1, 0 }
}

define i64 @function_1400056e0(i64 %arg1) local_unnamed_addr {
dec_label_pc_1400056e0:
  %rax.0.reg2mem = alloca i64, !insn.addr !2431
  %rdx.0.reg2mem = alloca i64, !insn.addr !2431
  %rcx.0.reg2mem = alloca i64, !insn.addr !2431
  %0 = add i64 %arg1, 24, !insn.addr !2432
  %1 = inttoptr i64 %0 to i64*, !insn.addr !2432
  %2 = load i64, i64* %1, align 8, !insn.addr !2432
  %3 = icmp ult i64 %2, 16, !insn.addr !2433
  br i1 %3, label %dec_label_pc_14000571f, label %dec_label_pc_1400056f3, !insn.addr !2434

dec_label_pc_1400056f3:                           ; preds = %dec_label_pc_1400056e0
  %4 = add i64 %2, 1, !insn.addr !2435
  %5 = icmp ult i64 %4, 4096, !insn.addr !2436
  store i64 %arg1, i64* %rcx.0.reg2mem, !insn.addr !2437
  store i64 %4, i64* %rdx.0.reg2mem, !insn.addr !2437
  br i1 %5, label %dec_label_pc_14000571a, label %dec_label_pc_140005702, !insn.addr !2437

dec_label_pc_140005702:                           ; preds = %dec_label_pc_1400056f3
  %6 = add i64 %arg1, -8
  %7 = inttoptr i64 %6 to i64*, !insn.addr !2438
  %8 = load i64, i64* %7, align 8, !insn.addr !2438
  %9 = sub i64 %6, %8, !insn.addr !2439
  %10 = icmp ult i64 %9, 32
  br i1 %10, label %dec_label_pc_140005717, label %dec_label_pc_140005738, !insn.addr !2440

dec_label_pc_140005717:                           ; preds = %dec_label_pc_140005702
  %11 = add i64 %2, 40, !insn.addr !2441
  store i64 %8, i64* %rcx.0.reg2mem, !insn.addr !2442
  store i64 %11, i64* %rdx.0.reg2mem, !insn.addr !2442
  br label %dec_label_pc_14000571a, !insn.addr !2442

dec_label_pc_14000571a:                           ; preds = %dec_label_pc_140005717, %dec_label_pc_1400056f3
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %12 = call i64 @function_1400065d0(i64 %rcx.0.reload, i64 %rdx.0.reload), !insn.addr !2443
  store i64 %12, i64* %rax.0.reg2mem, !insn.addr !2443
  br label %dec_label_pc_14000571f, !insn.addr !2443

dec_label_pc_14000571f:                           ; preds = %dec_label_pc_14000571a, %dec_label_pc_1400056e0
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %13 = add i64 %arg1, 16, !insn.addr !2444
  %14 = inttoptr i64 %13 to i64*, !insn.addr !2444
  store i64 0, i64* %14, align 8, !insn.addr !2444
  store i64 15, i64* %1, align 8, !insn.addr !2445
  %15 = inttoptr i64 %arg1 to i8*, !insn.addr !2446
  store i8 0, i8* %15, align 1, !insn.addr !2446
  ret i64 %rax.0.reload, !insn.addr !2447

dec_label_pc_140005738:                           ; preds = %dec_label_pc_140005702
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !2448
  %16 = call i64 @__asm_int3(), !insn.addr !2449
  %17 = call i64 @__asm_int3(), !insn.addr !2450
  ret i64 %17, !insn.addr !2450

; uselistorder directives
  uselistorder i64 %arg1, { 2, 3, 1, 0, 4 }
}

define i64 @function_140005740(i64* %arg1, i64* %arg2, i32 %arg3) local_unnamed_addr {
dec_label_pc_140005740:
  %rdx.1.reg2mem = alloca i64, !insn.addr !2451
  %rcx.0.reg2mem = alloca i64, !insn.addr !2451
  %rsi.1.reg2mem = alloca i64, !insn.addr !2451
  %rbx.01.reg2mem = alloca i64, !insn.addr !2451
  %.reg2mem = alloca i64, !insn.addr !2451
  %rbx.024.reg2mem = alloca i64, !insn.addr !2451
  %rbx.025.reg2mem = alloca i64, !insn.addr !2451
  %0 = sext i32 %arg3 to i64
  %1 = ptrtoint i64* %arg1 to i64
  %2 = add i64 %1, 24, !insn.addr !2452
  %3 = inttoptr i64 %2 to i64*, !insn.addr !2452
  %4 = load i64, i64* %3, align 8, !insn.addr !2452
  %5 = icmp ult i64 %4, %0
  br i1 %5, label %dec_label_pc_14000579c, label %dec_label_pc_140005770, !insn.addr !2453

dec_label_pc_140005770:                           ; preds = %dec_label_pc_140005740
  %6 = mul i64 %0, 2, !insn.addr !2454
  %7 = add i64 %1, 16, !insn.addr !2455
  %8 = inttoptr i64 %7 to i64*, !insn.addr !2455
  store i64 %0, i64* %8, align 8, !insn.addr !2455
  %9 = trunc i64 %6 to i32, !insn.addr !2456
  %10 = call i64* @memmove(i64* %arg1, i64* %arg2, i32 %9), !insn.addr !2456
  %11 = add i64 %6, %1, !insn.addr !2457
  %12 = inttoptr i64 %11 to i16*, !insn.addr !2457
  store i16 0, i16* %12, align 2, !insn.addr !2457
  br label %dec_label_pc_14000589b, !insn.addr !2458

dec_label_pc_14000579c:                           ; preds = %dec_label_pc_140005740
  %13 = icmp sgt i32 %arg3, -1
  br i1 %13, label %dec_label_pc_1400057af, label %dec_label_pc_1400058c4, !insn.addr !2459

dec_label_pc_1400057af:                           ; preds = %dec_label_pc_14000579c
  %14 = or i64 %0, 7, !insn.addr !2460
  %15 = icmp ugt i64 %14, 9223372036854775806
  store i64 9223372036854775806, i64* %rbx.025.reg2mem, !insn.addr !2461
  br i1 %15, label %dec_label_pc_140005806.thread, label %dec_label_pc_1400057bb, !insn.addr !2461

dec_label_pc_1400057bb:                           ; preds = %dec_label_pc_1400057af
  %16 = udiv i64 %4, 2, !insn.addr !2462
  %17 = sub nsw i64 9223372036854775806, %16, !insn.addr !2463
  %18 = icmp ugt i64 %4, %17
  store i64 9223372036854775806, i64* %rbx.025.reg2mem, !insn.addr !2464
  br i1 %18, label %dec_label_pc_140005806.thread, label %dec_label_pc_1400057da, !insn.addr !2464

dec_label_pc_1400057da:                           ; preds = %dec_label_pc_1400057bb
  %19 = add i64 %16, %4, !insn.addr !2465
  %20 = icmp ult i64 %14, %19, !insn.addr !2466
  %21 = select i1 %20, i64 %19, i64 %14, !insn.addr !2467
  %22 = add i64 %21, 1, !insn.addr !2468
  %23 = icmp sgt i64 %22, -1
  store i64 %21, i64* %rbx.025.reg2mem, !insn.addr !2469
  br i1 %23, label %dec_label_pc_1400057fd, label %dec_label_pc_140005806.thread, !insn.addr !2469

dec_label_pc_1400057fd:                           ; preds = %dec_label_pc_1400057da
  %24 = mul i64 %22, 2, !insn.addr !2470
  %25 = icmp ult i64 %24, 4096, !insn.addr !2471
  br i1 %25, label %dec_label_pc_14000582d, label %dec_label_pc_140005806, !insn.addr !2472

dec_label_pc_140005806:                           ; preds = %dec_label_pc_1400057fd
  %26 = add i64 %24, 39, !insn.addr !2473
  %27 = icmp ugt i64 %24, -40, !insn.addr !2474
  store i64 %21, i64* %rbx.025.reg2mem
  store i64 %21, i64* %rbx.024.reg2mem
  store i64 %26, i64* %.reg2mem
  br i1 %27, label %dec_label_pc_140005806.thread, label %28

dec_label_pc_140005806.thread:                    ; preds = %dec_label_pc_1400057af, %dec_label_pc_1400057bb, %dec_label_pc_1400057da, %dec_label_pc_140005806
  %rbx.025.reload = load i64, i64* %rbx.025.reg2mem
  store i64 %rbx.025.reload, i64* %rbx.024.reg2mem
  store i64 -1, i64* %.reg2mem
  br label %28

; <label>:28:                                     ; preds = %dec_label_pc_140005806, %dec_label_pc_140005806.thread
  %.reload = load i64, i64* %.reg2mem
  %29 = call i64 @function_1400065e0(i64 %.reload), !insn.addr !2475
  %30 = icmp eq i64 %29, 0, !insn.addr !2476
  br i1 %30, label %dec_label_pc_1400058bd, label %dec_label_pc_14000581f, !insn.addr !2477

dec_label_pc_14000581f:                           ; preds = %28
  %rbx.024.reload = load i64, i64* %rbx.024.reg2mem
  %31 = add i64 %29, 39, !insn.addr !2478
  %32 = and i64 %31, -32, !insn.addr !2479
  %33 = add i64 %32, -8, !insn.addr !2480
  %34 = inttoptr i64 %33 to i64*, !insn.addr !2480
  store i64 %29, i64* %34, align 8, !insn.addr !2480
  store i64 %rbx.024.reload, i64* %rbx.01.reg2mem, !insn.addr !2481
  store i64 %32, i64* %rsi.1.reg2mem, !insn.addr !2481
  br label %dec_label_pc_140005842, !insn.addr !2481

dec_label_pc_14000582d:                           ; preds = %dec_label_pc_1400057fd
  %35 = icmp eq i64 %24, 0, !insn.addr !2482
  store i64 %21, i64* %rbx.01.reg2mem, !insn.addr !2483
  store i64 0, i64* %rsi.1.reg2mem, !insn.addr !2483
  br i1 %35, label %dec_label_pc_140005842, label %dec_label_pc_140005832, !insn.addr !2483

dec_label_pc_140005832:                           ; preds = %dec_label_pc_14000582d
  %36 = call i64 @function_1400065e0(i64 %24), !insn.addr !2484
  store i64 %21, i64* %rbx.01.reg2mem, !insn.addr !2485
  store i64 %36, i64* %rsi.1.reg2mem, !insn.addr !2485
  br label %dec_label_pc_140005842, !insn.addr !2485

dec_label_pc_140005842:                           ; preds = %dec_label_pc_14000582d, %dec_label_pc_140005832, %dec_label_pc_14000581f
  %rsi.1.reload = load i64, i64* %rsi.1.reg2mem
  %rbx.01.reload = load i64, i64* %rbx.01.reg2mem
  store i64 %rbx.01.reload, i64* %3, align 8, !insn.addr !2486
  %37 = mul i64 %0, 2, !insn.addr !2487
  %38 = add i64 %1, 16, !insn.addr !2488
  %39 = inttoptr i64 %38 to i64*, !insn.addr !2488
  store i64 %0, i64* %39, align 8, !insn.addr !2488
  %40 = inttoptr i64 %rsi.1.reload to i64*, !insn.addr !2489
  %41 = trunc i64 %37 to i32, !insn.addr !2489
  %42 = call i64* @memcpy(i64* %40, i64* %arg2, i32 %41), !insn.addr !2489
  %43 = add i64 %rsi.1.reload, %37, !insn.addr !2490
  %44 = inttoptr i64 %43 to i16*, !insn.addr !2490
  store i16 0, i16* %44, align 2, !insn.addr !2490
  %45 = icmp ult i64 %4, 8, !insn.addr !2491
  br i1 %45, label %dec_label_pc_140005898, label %dec_label_pc_140005867, !insn.addr !2492

dec_label_pc_140005867:                           ; preds = %dec_label_pc_140005842
  %46 = mul i64 %4, 2, !insn.addr !2493
  %47 = add i64 %46, 2, !insn.addr !2493
  %48 = icmp ult i64 %47, 4096, !insn.addr !2494
  store i64 %rsi.1.reload, i64* %rcx.0.reg2mem, !insn.addr !2495
  store i64 %47, i64* %rdx.1.reg2mem, !insn.addr !2495
  br i1 %48, label %dec_label_pc_140005893, label %dec_label_pc_14000587b, !insn.addr !2495

dec_label_pc_14000587b:                           ; preds = %dec_label_pc_140005867
  %49 = add i64 %rsi.1.reload, -8
  %50 = inttoptr i64 %49 to i64*, !insn.addr !2496
  %51 = load i64, i64* %50, align 8, !insn.addr !2496
  %52 = sub i64 %49, %51, !insn.addr !2497
  %53 = icmp ult i64 %52, 32
  br i1 %53, label %dec_label_pc_140005890, label %dec_label_pc_1400058bd, !insn.addr !2498

dec_label_pc_140005890:                           ; preds = %dec_label_pc_14000587b
  %54 = add i64 %46, 41, !insn.addr !2499
  store i64 %51, i64* %rcx.0.reg2mem, !insn.addr !2500
  store i64 %54, i64* %rdx.1.reg2mem, !insn.addr !2500
  br label %dec_label_pc_140005893, !insn.addr !2500

dec_label_pc_140005893:                           ; preds = %dec_label_pc_140005890, %dec_label_pc_140005867
  %rdx.1.reload = load i64, i64* %rdx.1.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %55 = call i64 @function_1400065d0(i64 %rcx.0.reload, i64 %rdx.1.reload), !insn.addr !2501
  br label %dec_label_pc_140005898, !insn.addr !2501

dec_label_pc_140005898:                           ; preds = %dec_label_pc_140005893, %dec_label_pc_140005842
  store i64 %rsi.1.reload, i64* %arg1, align 8, !insn.addr !2502
  br label %dec_label_pc_14000589b, !insn.addr !2502

dec_label_pc_14000589b:                           ; preds = %dec_label_pc_140005898, %dec_label_pc_140005770
  ret i64 %1, !insn.addr !2503

dec_label_pc_1400058bd:                           ; preds = %dec_label_pc_14000587b, %28
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !2504
  %56 = call i64 @__asm_int3(), !insn.addr !2505
  br label %dec_label_pc_1400058c4, !insn.addr !2505

dec_label_pc_1400058c4:                           ; preds = %dec_label_pc_14000579c, %dec_label_pc_1400058bd
  %57 = call i64 @function_140006360(), !insn.addr !2506
  %58 = call i64 @__asm_int3(), !insn.addr !2507
  %59 = call i64 @__asm_int3(), !insn.addr !2508
  %60 = call i64 @__asm_int3(), !insn.addr !2509
  %61 = call i64 @__asm_int3(), !insn.addr !2510
  %62 = call i64 @__asm_int3(), !insn.addr !2511
  %63 = call i64 @__asm_int3(), !insn.addr !2512
  %64 = call i64 @__asm_int3(), !insn.addr !2513
  ret i64 %64, !insn.addr !2513

; uselistorder directives
  uselistorder i64 %46, { 1, 0 }
  uselistorder i64 %37, { 1, 0 }
  uselistorder i64 %rsi.1.reload, { 2, 3, 0, 4, 1 }
  uselistorder i64 %29, { 1, 0, 2 }
  uselistorder i64 %24, { 1, 0, 4, 3, 2 }
  uselistorder i64 %21, { 1, 0, 2, 4, 3, 5 }
  uselistorder i64 %19, { 1, 0 }
  uselistorder i64 %16, { 1, 0 }
  uselistorder i64 %6, { 1, 0 }
  uselistorder i64 %4, { 0, 4, 2, 3, 1, 5 }
  uselistorder i64 %1, { 2, 3, 0, 1, 4 }
  uselistorder i64 %0, { 3, 0, 4, 2, 1, 5 }
  uselistorder i64* %rbx.025.reg2mem, { 0, 4, 3, 2, 1 }
  uselistorder i64* %rbx.024.reg2mem, { 0, 2, 1 }
  uselistorder i64* %.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rbx.01.reg2mem, { 0, 3, 1, 2 }
  uselistorder i64* %rsi.1.reg2mem, { 0, 3, 1, 2 }
  uselistorder label %dec_label_pc_1400058c4, { 1, 0 }
  uselistorder label %dec_label_pc_140005842, { 1, 0, 2 }
  uselistorder label %28, { 1, 0 }
  uselistorder label %dec_label_pc_140005806.thread, { 3, 2, 1, 0 }
}

define i64 @function_1400058d0(i64 %arg1, i64* %arg2) local_unnamed_addr {
dec_label_pc_1400058d0:
  %rdx.0.reg2mem = alloca i64, !insn.addr !2514
  %rcx.0.reg2mem = alloca i64, !insn.addr !2514
  %rsi.1.reg2mem = alloca i64, !insn.addr !2514
  %rbp.01.reg2mem = alloca i64, !insn.addr !2514
  %.reg2mem = alloca i64, !insn.addr !2514
  %rbp.023.reg2mem = alloca i64, !insn.addr !2514
  %rbx.0.reg2mem = alloca i64, !insn.addr !2514
  %0 = ptrtoint i64* %arg2 to i64
  store i64 -1, i64* %rbx.0.reg2mem, !insn.addr !2515
  br label %dec_label_pc_1400058f0, !insn.addr !2515

dec_label_pc_1400058f0:                           ; preds = %dec_label_pc_1400058f0, %dec_label_pc_1400058d0
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %1 = add i64 %rbx.0.reload, 1, !insn.addr !2516
  %2 = add i64 %1, %0, !insn.addr !2517
  %3 = inttoptr i64 %2 to i8*, !insn.addr !2517
  %4 = load i8, i8* %3, align 1, !insn.addr !2517
  %5 = icmp eq i8 %4, 0, !insn.addr !2517
  %6 = icmp eq i1 %5, false, !insn.addr !2518
  store i64 %1, i64* %rbx.0.reg2mem, !insn.addr !2518
  br i1 %6, label %dec_label_pc_1400058f0, label %dec_label_pc_1400058f9, !insn.addr !2518

dec_label_pc_1400058f9:                           ; preds = %dec_label_pc_1400058f0
  %7 = add i64 %arg1, 24, !insn.addr !2519
  %8 = inttoptr i64 %7 to i64*, !insn.addr !2519
  %9 = load i64, i64* %8, align 8, !insn.addr !2519
  %10 = icmp ugt i64 %1, %9
  br i1 %10, label %dec_label_pc_140005930, label %dec_label_pc_14000590c, !insn.addr !2520

dec_label_pc_14000590c:                           ; preds = %dec_label_pc_1400058f9
  %11 = add i64 %arg1, 16, !insn.addr !2521
  %12 = inttoptr i64 %11 to i64*, !insn.addr !2521
  store i64 %1, i64* %12, align 8, !insn.addr !2521
  %13 = inttoptr i64 %arg1 to i64*, !insn.addr !2522
  %14 = trunc i64 %1 to i32, !insn.addr !2522
  %15 = call i64* @memmove(i64* %13, i64* %arg2, i32 %14), !insn.addr !2522
  %16 = add i64 %1, %arg1, !insn.addr !2523
  %17 = inttoptr i64 %16 to i8*, !insn.addr !2523
  store i8 0, i8* %17, align 1, !insn.addr !2523
  br label %dec_label_pc_140005a05, !insn.addr !2524

dec_label_pc_140005930:                           ; preds = %dec_label_pc_1400058f9
  %18 = icmp sgt i64 %1, -1
  br i1 %18, label %dec_label_pc_140005943, label %dec_label_pc_140005a28, !insn.addr !2525

dec_label_pc_140005943:                           ; preds = %dec_label_pc_140005930
  %19 = or i64 %1, 15, !insn.addr !2526
  %20 = icmp slt i64 %19, 0
  store i64 9223372036854775807, i64* %rbp.023.reg2mem, !insn.addr !2527
  store i64 -9223372036854775769, i64* %.reg2mem, !insn.addr !2527
  br i1 %20, label %dec_label_pc_14000597a.thread, label %dec_label_pc_14000594f, !insn.addr !2527

dec_label_pc_14000594f:                           ; preds = %dec_label_pc_140005943
  %21 = udiv i64 %9, 2, !insn.addr !2528
  %22 = xor i64 %21, 9223372036854775807, !insn.addr !2529
  %23 = icmp ugt i64 %9, %22
  store i64 9223372036854775807, i64* %rbp.023.reg2mem, !insn.addr !2530
  store i64 -9223372036854775769, i64* %.reg2mem, !insn.addr !2530
  br i1 %23, label %dec_label_pc_14000597a.thread, label %dec_label_pc_14000596e, !insn.addr !2530

dec_label_pc_14000596e:                           ; preds = %dec_label_pc_14000594f
  %24 = add i64 %21, %9, !insn.addr !2531
  %25 = icmp ult i64 %19, %24, !insn.addr !2532
  %26 = select i1 %25, i64 %24, i64 %19, !insn.addr !2533
  %27 = add i64 %26, 1, !insn.addr !2534
  %28 = icmp ult i64 %27, 4096, !insn.addr !2535
  br i1 %28, label %dec_label_pc_1400059a1, label %dec_label_pc_14000597a, !insn.addr !2536

dec_label_pc_14000597a:                           ; preds = %dec_label_pc_14000596e
  %29 = add i64 %26, 40, !insn.addr !2537
  %30 = icmp ugt i64 %27, -40, !insn.addr !2538
  %spec.select = select i1 %30, i64 -1, i64 %29
  store i64 %26, i64* %rbp.023.reg2mem
  store i64 %spec.select, i64* %.reg2mem
  br label %dec_label_pc_14000597a.thread

dec_label_pc_14000597a.thread:                    ; preds = %dec_label_pc_14000597a, %dec_label_pc_140005943, %dec_label_pc_14000594f
  %.reload = load i64, i64* %.reg2mem
  %31 = call i64 @function_1400065e0(i64 %.reload), !insn.addr !2539
  %32 = icmp eq i64 %31, 0, !insn.addr !2540
  br i1 %32, label %dec_label_pc_140005a21, label %dec_label_pc_140005993, !insn.addr !2541

dec_label_pc_140005993:                           ; preds = %dec_label_pc_14000597a.thread
  %rbp.023.reload = load i64, i64* %rbp.023.reg2mem
  %33 = add i64 %31, 39, !insn.addr !2542
  %34 = and i64 %33, -32, !insn.addr !2543
  %35 = add i64 %34, -8, !insn.addr !2544
  %36 = inttoptr i64 %35 to i64*, !insn.addr !2544
  store i64 %31, i64* %36, align 8, !insn.addr !2544
  store i64 %rbp.023.reload, i64* %rbp.01.reg2mem, !insn.addr !2545
  store i64 %34, i64* %rsi.1.reg2mem, !insn.addr !2545
  br label %dec_label_pc_1400059b5, !insn.addr !2545

dec_label_pc_1400059a1:                           ; preds = %dec_label_pc_14000596e
  %37 = icmp eq i64 %27, 0, !insn.addr !2546
  store i64 -1, i64* %rbp.01.reg2mem, !insn.addr !2547
  store i64 0, i64* %rsi.1.reg2mem, !insn.addr !2547
  br i1 %37, label %dec_label_pc_1400059b5, label %dec_label_pc_1400059a6, !insn.addr !2547

dec_label_pc_1400059a6:                           ; preds = %dec_label_pc_1400059a1
  %38 = call i64 @function_1400065e0(i64 %27), !insn.addr !2548
  store i64 %26, i64* %rbp.01.reg2mem, !insn.addr !2549
  store i64 %38, i64* %rsi.1.reg2mem, !insn.addr !2549
  br label %dec_label_pc_1400059b5, !insn.addr !2549

dec_label_pc_1400059b5:                           ; preds = %dec_label_pc_1400059a1, %dec_label_pc_1400059a6, %dec_label_pc_140005993
  %rsi.1.reload = load i64, i64* %rsi.1.reg2mem
  %rbp.01.reload = load i64, i64* %rbp.01.reg2mem
  %39 = add i64 %arg1, 16, !insn.addr !2550
  %40 = inttoptr i64 %39 to i64*, !insn.addr !2550
  store i64 %1, i64* %40, align 8, !insn.addr !2550
  store i64 %rbp.01.reload, i64* %8, align 8, !insn.addr !2551
  %41 = inttoptr i64 %rsi.1.reload to i64*, !insn.addr !2552
  %42 = trunc i64 %1 to i32, !insn.addr !2552
  %43 = call i64* @memcpy(i64* %41, i64* %arg2, i32 %42), !insn.addr !2552
  %44 = add i64 %rsi.1.reload, %1, !insn.addr !2553
  %45 = inttoptr i64 %44 to i8*, !insn.addr !2553
  store i8 0, i8* %45, align 1, !insn.addr !2553
  %46 = icmp ult i64 %9, 16, !insn.addr !2554
  br i1 %46, label %dec_label_pc_140005a02, label %dec_label_pc_1400059d5, !insn.addr !2555

dec_label_pc_1400059d5:                           ; preds = %dec_label_pc_1400059b5
  %47 = add i64 %9, 1, !insn.addr !2556
  %48 = icmp ult i64 %47, 4096, !insn.addr !2557
  store i64 %rsi.1.reload, i64* %rcx.0.reg2mem, !insn.addr !2558
  store i64 %47, i64* %rdx.0.reg2mem, !insn.addr !2558
  br i1 %48, label %dec_label_pc_1400059fd, label %dec_label_pc_1400059e5, !insn.addr !2558

dec_label_pc_1400059e5:                           ; preds = %dec_label_pc_1400059d5
  %49 = add i64 %rsi.1.reload, -8
  %50 = inttoptr i64 %49 to i64*, !insn.addr !2559
  %51 = load i64, i64* %50, align 8, !insn.addr !2559
  %52 = sub i64 %49, %51, !insn.addr !2560
  %53 = icmp ult i64 %52, 32
  br i1 %53, label %dec_label_pc_1400059fa, label %dec_label_pc_140005a21, !insn.addr !2561

dec_label_pc_1400059fa:                           ; preds = %dec_label_pc_1400059e5
  %54 = add i64 %9, 40, !insn.addr !2562
  store i64 %51, i64* %rcx.0.reg2mem, !insn.addr !2563
  store i64 %54, i64* %rdx.0.reg2mem, !insn.addr !2563
  br label %dec_label_pc_1400059fd, !insn.addr !2563

dec_label_pc_1400059fd:                           ; preds = %dec_label_pc_1400059fa, %dec_label_pc_1400059d5
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %55 = call i64 @function_1400065d0(i64 %rcx.0.reload, i64 %rdx.0.reload), !insn.addr !2564
  br label %dec_label_pc_140005a02, !insn.addr !2564

dec_label_pc_140005a02:                           ; preds = %dec_label_pc_1400059fd, %dec_label_pc_1400059b5
  %56 = inttoptr i64 %arg1 to i64*, !insn.addr !2565
  store i64 %rsi.1.reload, i64* %56, align 8, !insn.addr !2565
  br label %dec_label_pc_140005a05, !insn.addr !2565

dec_label_pc_140005a05:                           ; preds = %dec_label_pc_140005a02, %dec_label_pc_14000590c
  ret i64 %arg1, !insn.addr !2566

dec_label_pc_140005a21:                           ; preds = %dec_label_pc_1400059e5, %dec_label_pc_14000597a.thread
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !2567
  %57 = call i64 @__asm_int3(), !insn.addr !2568
  br label %dec_label_pc_140005a28, !insn.addr !2568

dec_label_pc_140005a28:                           ; preds = %dec_label_pc_140005930, %dec_label_pc_140005a21
  %58 = call i64 @function_140006360(), !insn.addr !2569
  %59 = call i64 @__asm_int3(), !insn.addr !2570
  %60 = call i64 @__asm_int3(), !insn.addr !2571
  %61 = call i64 @__asm_int3(), !insn.addr !2572
  ret i64 %61, !insn.addr !2572

; uselistorder directives
  uselistorder i64 %rsi.1.reload, { 2, 3, 0, 4, 1 }
  uselistorder i64 %31, { 1, 0, 2 }
  uselistorder i64 %27, { 1, 2, 0, 3 }
  uselistorder i64 %24, { 1, 0 }
  uselistorder i64 %21, { 1, 0 }
  uselistorder i64 %19, { 1, 2, 0 }
  uselistorder i64 %9, { 2, 5, 4, 1, 3, 0, 6 }
  uselistorder i64 %1, { 1, 5, 6, 8, 7, 2, 3, 4, 9, 0, 10 }
  uselistorder i64* %rbx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rbp.023.reg2mem, { 0, 1, 3, 2 }
  uselistorder i64* %.reg2mem, { 0, 1, 3, 2 }
  uselistorder i64* %rbp.01.reg2mem, { 0, 3, 1, 2 }
  uselistorder i64* %rsi.1.reg2mem, { 0, 3, 1, 2 }
  uselistorder i64 -9223372036854775769, { 1, 0 }
  uselistorder i64 9223372036854775807, { 1, 2, 0, 3 }
  uselistorder i64 15, { 1, 0, 2, 3, 4 }
  uselistorder i64 %arg1, { 3, 4, 5, 0, 1, 2, 6 }
  uselistorder label %dec_label_pc_140005a28, { 1, 0 }
  uselistorder label %dec_label_pc_1400059b5, { 1, 0, 2 }
  uselistorder label %dec_label_pc_14000597a.thread, { 0, 2, 1 }
}

define i64 @function_140005a30(i64* %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_140005a30:
  %rax.1.reg2mem = alloca i8*, !insn.addr !2573
  %rax.0.reg2mem = alloca i64, !insn.addr !2573
  %rdi.0.reg2mem = alloca i64, !insn.addr !2573
  %rbx.0.reg2mem = alloca i64, !insn.addr !2573
  %0 = call i64 @function_14000779c(i64* nonnull @global_var_14000c950, i32 0), !insn.addr !2574
  %1 = icmp eq i64 %0, 0, !insn.addr !2575
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !2576
  br i1 %1, label %dec_label_pc_140005ac5, label %dec_label_pc_140005a71, !insn.addr !2576

dec_label_pc_140005a71:                           ; preds = %dec_label_pc_140005a30
  %2 = ptrtoint i64* %arg1 to i64
  %3 = and i64 %arg2, 4294967295, !insn.addr !2577
  %4 = udiv i64 %arg2, 16, !insn.addr !2578
  %5 = add nuw nsw i64 %4, 1, !insn.addr !2579
  %6 = and i64 %5, 65535, !insn.addr !2580
  %7 = inttoptr i64 %6 to i16*
  store i64 %0, i64* %rbx.0.reg2mem, !insn.addr !2581
  store i64 1, i64* %rdi.0.reg2mem, !insn.addr !2581
  br label %dec_label_pc_140005a80, !insn.addr !2581

dec_label_pc_140005a80:                           ; preds = %dec_label_pc_140005aab, %dec_label_pc_140005a71
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %8 = inttoptr i64 %rbx.0.reload to i64*
  %9 = call i64* @FindResourceExW(i64* %8, i16* inttoptr (i64 6 to i16*), i16* %7, i16 0), !insn.addr !2582
  %10 = icmp eq i64* %9, null, !insn.addr !2583
  br i1 %10, label %dec_label_pc_140005aab, label %dec_label_pc_140005a98, !insn.addr !2584

dec_label_pc_140005a98:                           ; preds = %dec_label_pc_140005a80
  %11 = ptrtoint i64* %9 to i64, !insn.addr !2582
  %12 = call i64 @function_140001aa0(i64 %rbx.0.reload, i64 %11, i64 %3), !insn.addr !2585
  %13 = icmp eq i64 %12, 0, !insn.addr !2586
  %14 = icmp eq i1 %13, false, !insn.addr !2587
  br i1 %14, label %dec_label_pc_140005ae4, label %dec_label_pc_140005aab, !insn.addr !2587

dec_label_pc_140005aab:                           ; preds = %dec_label_pc_140005a98, %dec_label_pc_140005a80
  %15 = trunc i64 %rdi.0.reload to i32, !insn.addr !2588
  %16 = add nuw nsw i64 %rdi.0.reload, 1, !insn.addr !2589
  %17 = and i64 %16, 4294967295, !insn.addr !2589
  %18 = call i64 @function_14000779c(i64* nonnull @global_var_14000c950, i32 %15), !insn.addr !2590
  %19 = icmp eq i64 %18, 0, !insn.addr !2591
  %20 = icmp eq i1 %19, false, !insn.addr !2592
  store i64 %18, i64* %rbx.0.reg2mem, !insn.addr !2592
  store i64 %17, i64* %rdi.0.reg2mem, !insn.addr !2592
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !2592
  br i1 %20, label %dec_label_pc_140005a80, label %dec_label_pc_140005ac5, !insn.addr !2592

dec_label_pc_140005ac5:                           ; preds = %dec_label_pc_140005aab, %dec_label_pc_140005ae9, %dec_label_pc_140005b07, %dec_label_pc_140005a30, %dec_label_pc_140005ae4, %dec_label_pc_140005b9c
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !2593

dec_label_pc_140005ae4:                           ; preds = %dec_label_pc_140005a98
  %21 = icmp eq i64 %rbx.0.reload, 0, !insn.addr !2594
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !2595
  br i1 %21, label %dec_label_pc_140005ac5, label %dec_label_pc_140005ae9, !insn.addr !2595

dec_label_pc_140005ae9:                           ; preds = %dec_label_pc_140005ae4
  %22 = call i64* @FindResourceW(i64* %8, i16* %7, i16* inttoptr (i64 6 to i16*)), !insn.addr !2596
  %23 = icmp eq i64* %22, null, !insn.addr !2597
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !2598
  br i1 %23, label %dec_label_pc_140005ac5, label %dec_label_pc_140005b07, !insn.addr !2598

dec_label_pc_140005b07:                           ; preds = %dec_label_pc_140005ae9
  %24 = ptrtoint i64* %22 to i64, !insn.addr !2596
  %25 = call i64 @function_140001aa0(i64 %rbx.0.reload, i64 %24, i64 %3), !insn.addr !2599
  %26 = icmp eq i64 %25, 0, !insn.addr !2600
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !2601
  br i1 %26, label %dec_label_pc_140005ac5, label %dec_label_pc_140005b21, !insn.addr !2601

dec_label_pc_140005b21:                           ; preds = %dec_label_pc_140005b07
  %27 = inttoptr i64 %25 to i16*, !insn.addr !2602
  %28 = load i16, i16* %27, align 2, !insn.addr !2602
  %29 = add i64 %25, 2, !insn.addr !2603
  %30 = inttoptr i64 %29 to i16*, !insn.addr !2604
  %31 = zext i16 %28 to i32, !insn.addr !2604
  %32 = call i32 @WideCharToMultiByte(i32 3, i32 0, i16* %30, i32 %31, i8* null, i32 0, i8* null, i1* null), !insn.addr !2604
  %33 = icmp slt i32 %32, 0, !insn.addr !2605
  br i1 %33, label %dec_label_pc_140005bb7, label %dec_label_pc_140005b50, !insn.addr !2606

dec_label_pc_140005b50:                           ; preds = %dec_label_pc_140005b21
  %34 = sext i32 %32 to i64, !insn.addr !2607
  %35 = load i32, i32* inttoptr (i64 -9 to i32*), align 4, !insn.addr !2608
  %36 = load i32, i32* inttoptr (i64 -5 to i32*), align 4, !insn.addr !2609
  %37 = sub i32 1, %36, !insn.addr !2609
  %38 = sub i32 %35, %32, !insn.addr !2610
  %39 = or i32 %37, %38, !insn.addr !2611
  %40 = icmp slt i32 %39, 0, !insn.addr !2611
  %41 = icmp eq i1 %40, false, !insn.addr !2612
  store i8* inttoptr (i64 3 to i8*), i8** %rax.1.reg2mem, !insn.addr !2612
  br i1 %41, label %dec_label_pc_140005b6e, label %dec_label_pc_140005b61, !insn.addr !2612

dec_label_pc_140005b61:                           ; preds = %dec_label_pc_140005b50
  %42 = and i64 %34, 4294967295, !insn.addr !2613
  %43 = call i64 @function_140005ea0(i64 %2, i64 %42), !insn.addr !2614
  %phitmp = bitcast i64* %arg1 to i8*
  store i8* %phitmp, i8** %rax.1.reg2mem, !insn.addr !2615
  br label %dec_label_pc_140005b6e, !insn.addr !2615

dec_label_pc_140005b6e:                           ; preds = %dec_label_pc_140005b61, %dec_label_pc_140005b50
  %rax.1.reload = load i8*, i8** %rax.1.reg2mem
  %44 = load i16, i16* %27, align 2, !insn.addr !2616
  %45 = zext i16 %44 to i32, !insn.addr !2617
  %46 = call i32 @WideCharToMultiByte(i32 3, i32 0, i16* %30, i32 %45, i8* %rax.1.reload, i32 %32, i8* null, i1* null), !insn.addr !2617
  %47 = load i32, i32* inttoptr (i64 -9 to i32*), align 4, !insn.addr !2618
  %48 = icmp slt i32 %47, %32, !insn.addr !2619
  br i1 %48, label %dec_label_pc_140005bb7, label %dec_label_pc_140005b9c, !insn.addr !2619

dec_label_pc_140005b9c:                           ; preds = %dec_label_pc_140005b6e
  store i32 %32, i32* inttoptr (i64 -13 to i32*), align 4, !insn.addr !2620
  %49 = add nsw i64 %34, 3, !insn.addr !2621
  %50 = inttoptr i64 %49 to i8*, !insn.addr !2621
  store i8 0, i8* %50, align 1, !insn.addr !2621
  store i64 1, i64* %rax.0.reg2mem, !insn.addr !2622
  br label %dec_label_pc_140005ac5, !insn.addr !2622

dec_label_pc_140005bb7:                           ; preds = %dec_label_pc_140005b6e, %dec_label_pc_140005b21
  %51 = call i64 @function_140001a60(i64 2147942487), !insn.addr !2623
  unreachable, !insn.addr !2623

; uselistorder directives
  uselistorder i32 %32, { 0, 1, 2, 3, 5, 4 }
  uselistorder i64 %25, { 1, 0, 2 }
  uselistorder i64* %22, { 1, 0 }
  uselistorder i64* %9, { 1, 0 }
  uselistorder i64 %rbx.0.reload, { 3, 2, 1, 0 }
  uselistorder i64* %rbx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rdi.0.reg2mem, { 1, 0, 2 }
  uselistorder i64* %rax.0.reg2mem, { 6, 3, 2, 5, 0, 1, 4 }
  uselistorder i32* inttoptr (i64 -9 to i32*), { 1, 0 }
  uselistorder i32 (i32, i32, i16*, i32, i8*, i32, i8*, i1*)* @WideCharToMultiByte, { 1, 0 }
  uselistorder i8* null, { 0, 4, 5, 1, 6, 3, 2 }
  uselistorder i64 (i64, i64, i64)* @function_140001aa0, { 1, 0 }
  uselistorder i16* inttoptr (i64 6 to i16*), { 1, 0 }
  uselistorder i64 (i64*, i32)* @function_14000779c, { 1, 0 }
  uselistorder label %dec_label_pc_140005ac5, { 5, 2, 1, 4, 0, 3 }
}

define i64 @function_140005bd0(i128* %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_140005bd0:
  %0 = ptrtoint i128* %arg1 to i64
  %1 = add i64 %arg2, 16, !insn.addr !2624
  %2 = inttoptr i64 %1 to i64*, !insn.addr !2624
  %3 = load i64, i64* %2, align 8, !insn.addr !2624
  %4 = add i64 %0, 24, !insn.addr !2625
  %5 = inttoptr i64 %4 to i64*, !insn.addr !2625
  %6 = load i64, i64* %5, align 8, !insn.addr !2625
  %7 = add i64 %0, 16, !insn.addr !2626
  %8 = inttoptr i64 %7 to i64*, !insn.addr !2626
  %9 = load i64, i64* %8, align 8, !insn.addr !2626
  %10 = sub i64 %6, %9, !insn.addr !2627
  %11 = icmp ugt i64 %3, %10
  br i1 %11, label %dec_label_pc_140005c3e, label %dec_label_pc_140005bfa, !insn.addr !2628

dec_label_pc_140005bfa:                           ; preds = %dec_label_pc_140005bd0
  %12 = add i64 %9, %3, !insn.addr !2629
  store i64 %12, i64* %8, align 8, !insn.addr !2630
  %13 = icmp ult i64 %6, 8, !insn.addr !2631
  %spec.select = select i1 %13, i64 %0, i64 %3
  %14 = mul i64 %9, 2, !insn.addr !2632
  %15 = add i64 %spec.select, %14, !insn.addr !2632
  %16 = inttoptr i64 %15 to i64*, !insn.addr !2633
  %17 = inttoptr i64 %arg2 to i64*, !insn.addr !2633
  %.tr = trunc i64 %3 to i32
  %18 = mul i32 %.tr, 2, !insn.addr !2633
  %19 = call i64* @memmove(i64* %16, i64* %17, i32 %18), !insn.addr !2633
  %20 = mul i64 %12, 2, !insn.addr !2634
  %21 = add i64 %20, %spec.select, !insn.addr !2634
  %22 = inttoptr i64 %21 to i16*, !insn.addr !2634
  store i16 0, i16* %22, align 2, !insn.addr !2634
  ret i64 %0, !insn.addr !2635

dec_label_pc_140005c3e:                           ; preds = %dec_label_pc_140005bd0
  %23 = call i64 @function_1400061b0(i64 %0, i64 %3), !insn.addr !2636
  ret i64 %23, !insn.addr !2637

; uselistorder directives
  uselistorder i64 %3, { 4, 2, 1, 0, 3 }
  uselistorder i64 %0, { 2, 1, 0, 4, 3 }
}

define i64 @function_140005c60(i64* %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_140005c60:
  %rcx.1.reg2mem = alloca i64, !insn.addr !2638
  %rcx.0.reg2mem = alloca i64, !insn.addr !2638
  %rax.1.reg2mem = alloca i64, !insn.addr !2638
  %rax.0.reg2mem = alloca i64, !insn.addr !2638
  %0 = ptrtoint i64* %arg1 to i64
  %1 = trunc i64 %arg3 to i32, !insn.addr !2639
  %2 = icmp eq i32 %1, 0, !insn.addr !2639
  %3 = icmp eq i1 %2, false, !insn.addr !2640
  br i1 %3, label %dec_label_pc_140005d1e, label %dec_label_pc_140005c95, !insn.addr !2640

dec_label_pc_140005c95:                           ; preds = %dec_label_pc_140005c60
  %4 = add i64 %0, -24, !insn.addr !2641
  %5 = inttoptr i64 %4 to i64*, !insn.addr !2642
  %6 = load i64, i64* %5, align 8, !insn.addr !2642
  %7 = add i64 %0, -16, !insn.addr !2643
  %8 = inttoptr i64 %7 to i32*, !insn.addr !2643
  %9 = load i32, i32* %8, align 4, !insn.addr !2643
  %10 = icmp eq i32 %9, %1, !insn.addr !2643
  br i1 %10, label %dec_label_pc_140005d03, label %dec_label_pc_140005ca5, !insn.addr !2644

dec_label_pc_140005ca5:                           ; preds = %dec_label_pc_140005c95
  %11 = add i64 %0, -8, !insn.addr !2645
  %12 = inttoptr i64 %11 to i32*, !insn.addr !2645
  %13 = load i32, i32* %12, align 4, !insn.addr !2645
  %14 = icmp sgt i32 %13, -1, !insn.addr !2646
  br i1 %14, label %dec_label_pc_140005cc5, label %dec_label_pc_140005caf, !insn.addr !2647

dec_label_pc_140005caf:                           ; preds = %dec_label_pc_140005ca5
  %15 = add i64 %0, -12, !insn.addr !2648
  %16 = inttoptr i64 %15 to i32*, !insn.addr !2648
  %17 = load i32, i32* %16, align 4, !insn.addr !2648
  %18 = sext i32 %17 to i64, !insn.addr !2649
  %19 = icmp slt i64 %18, %arg3, !insn.addr !2649
  br i1 %19, label %dec_label_pc_140005dec, label %dec_label_pc_140005cb9, !insn.addr !2649

dec_label_pc_140005cb9:                           ; preds = %dec_label_pc_140005caf
  store i32 %1, i32* %8, align 4, !insn.addr !2650
  %20 = trunc i64 %arg3 to i8, !insn.addr !2651
  %21 = bitcast i64* %arg1 to i8*, !insn.addr !2651
  store i8 %20, i8* %21, align 1, !insn.addr !2651
  store i64 %0, i64* %rax.1.reg2mem, !insn.addr !2652
  br label %dec_label_pc_140005d03, !insn.addr !2652

dec_label_pc_140005cc5:                           ; preds = %dec_label_pc_140005ca5
  %22 = add i32 %13, -1, !insn.addr !2653
  store i32 %22, i32* %12, align 4, !insn.addr !2653
  %23 = inttoptr i64 %6 to i64*, !insn.addr !2654
  %24 = load i64, i64* %23, align 8, !insn.addr !2654
  %25 = icmp eq i64 %24, ptrtoint (i32* @global_var_140008d68 to i64), !insn.addr !2655
  %26 = icmp eq i1 %25, false, !insn.addr !2656
  store i64 %24, i64* %rax.0.reg2mem, !insn.addr !2656
  br i1 %26, label %dec_label_pc_140005cfc, label %dec_label_pc_140005cf4, !insn.addr !2656

dec_label_pc_140005cf4:                           ; preds = %dec_label_pc_140005cc5
  %27 = add i64 %6, 32, !insn.addr !2657
  %28 = inttoptr i64 %27 to i32*, !insn.addr !2657
  %29 = load i32, i32* %28, align 4, !insn.addr !2657
  %30 = add i32 %29, 1, !insn.addr !2657
  store i32 %30, i32* %28, align 4, !insn.addr !2657
  %31 = add i64 %6, 16, !insn.addr !2658
  store i64 %31, i64* %rax.0.reg2mem, !insn.addr !2658
  br label %dec_label_pc_140005cfc, !insn.addr !2658

dec_label_pc_140005cfc:                           ; preds = %dec_label_pc_140005cc5, %dec_label_pc_140005cf4
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %32 = add i64 %rax.0.reload, 24, !insn.addr !2659
  store i64 %32, i64* %arg1, align 8, !insn.addr !2660
  store i64 %32, i64* %rax.1.reg2mem, !insn.addr !2660
  br label %dec_label_pc_140005d03, !insn.addr !2660

dec_label_pc_140005d03:                           ; preds = %dec_label_pc_140005dc7, %dec_label_pc_140005cfc, %dec_label_pc_140005cb9, %dec_label_pc_140005c95
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  ret i64 %rax.1.reload, !insn.addr !2661

dec_label_pc_140005d1e:                           ; preds = %dec_label_pc_140005c60
  %33 = icmp eq i64 %arg2, 0, !insn.addr !2662
  br i1 %33, label %dec_label_pc_140005e01, label %dec_label_pc_140005d27, !insn.addr !2663

dec_label_pc_140005d27:                           ; preds = %dec_label_pc_140005d1e
  %34 = icmp slt i32 %1, 0, !insn.addr !2664
  br i1 %34, label %dec_label_pc_140005dd6, label %dec_label_pc_140005d3d, !insn.addr !2665

dec_label_pc_140005d3d:                           ; preds = %dec_label_pc_140005d27
  %sext = mul i64 %arg3, 4294967296
  %35 = ashr exact i64 %sext, 32, !insn.addr !2666
  %36 = add i64 %0, -16, !insn.addr !2667
  %37 = inttoptr i64 %36 to i32*, !insn.addr !2667
  %38 = load i32, i32* %37, align 4, !insn.addr !2667
  %39 = add i64 %0, -8, !insn.addr !2668
  %40 = inttoptr i64 %39 to i32*, !insn.addr !2668
  %41 = load i32, i32* %40, align 4, !insn.addr !2668
  %42 = sub i32 1, %41, !insn.addr !2668
  %43 = add i64 %0, -12, !insn.addr !2669
  %44 = inttoptr i64 %43 to i32*, !insn.addr !2669
  %45 = load i32, i32* %44, align 4, !insn.addr !2669
  %46 = trunc i64 %35 to i32, !insn.addr !2670
  %47 = sub i32 %45, %46, !insn.addr !2670
  %48 = or i32 %47, %42, !insn.addr !2671
  %49 = icmp slt i32 %48, 0, !insn.addr !2671
  %50 = zext i32 %48 to i64, !insn.addr !2671
  %51 = icmp eq i1 %49, false, !insn.addr !2672
  store i64 %50, i64* %rcx.0.reg2mem, !insn.addr !2672
  br i1 %51, label %dec_label_pc_140005d5d, label %dec_label_pc_140005d50, !insn.addr !2672

dec_label_pc_140005d50:                           ; preds = %dec_label_pc_140005d3d
  %52 = and i64 %35, 4294967295, !insn.addr !2673
  %53 = call i64 @function_140005ea0(i64 %0, i64 %52), !insn.addr !2674
  store i64 %0, i64* %rcx.0.reg2mem, !insn.addr !2675
  br label %dec_label_pc_140005d5d, !insn.addr !2675

dec_label_pc_140005d5d:                           ; preds = %dec_label_pc_140005d50, %dec_label_pc_140005d3d
  %54 = zext i32 %38 to i64, !insn.addr !2667
  %55 = sub i64 %arg2, %0, !insn.addr !2676
  %56 = icmp ugt i64 %55, %54
  br i1 %56, label %dec_label_pc_140005dad, label %dec_label_pc_140005d62, !insn.addr !2677

dec_label_pc_140005d62:                           ; preds = %dec_label_pc_140005d5d
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %57 = icmp eq i32 %46, 0, !insn.addr !2678
  store i64 %rcx.0.reload, i64* %rcx.1.reg2mem, !insn.addr !2679
  br i1 %57, label %dec_label_pc_140005dbf, label %dec_label_pc_140005d86, !insn.addr !2679

dec_label_pc_140005d86:                           ; preds = %dec_label_pc_140005d62
  %58 = load i32, i32* %44, align 4, !insn.addr !2680
  %59 = sext i32 %58 to i64, !insn.addr !2680
  %60 = icmp ugt i64 %35, %59, !insn.addr !2681
  %61 = icmp eq i1 %60, false, !insn.addr !2682
  br i1 %61, label %dec_label_pc_140005da3, label %dec_label_pc_140005d8f, !insn.addr !2682

dec_label_pc_140005d8f:                           ; preds = %dec_label_pc_140005d86
  %62 = call i32* @_errno(), !insn.addr !2683
  store i32 34, i32* %62, align 4, !insn.addr !2684
  call void @_invalid_parameter_noinfo(), !insn.addr !2685
  store i64 %rcx.0.reload, i64* %rcx.1.reg2mem, !insn.addr !2686
  br label %dec_label_pc_140005dbf, !insn.addr !2686

dec_label_pc_140005da3:                           ; preds = %dec_label_pc_140005d86
  %63 = inttoptr i64 %arg2 to i64*, !insn.addr !2687
  %64 = call i64* @memmove(i64* %arg1, i64* %63, i32 %46), !insn.addr !2687
  store i64 %0, i64* %rcx.1.reg2mem, !insn.addr !2688
  br label %dec_label_pc_140005dbf, !insn.addr !2688

dec_label_pc_140005dad:                           ; preds = %dec_label_pc_140005d5d
  %65 = load i32, i32* %44, align 4, !insn.addr !2689
  %66 = and i64 %35, 4294967295, !insn.addr !2690
  %67 = call i64 @function_140005e10(i64 %0, i32 %65, i64 %arg2, i64 %66), !insn.addr !2691
  store i64 %0, i64* %rcx.1.reg2mem, !insn.addr !2691
  br label %dec_label_pc_140005dbf, !insn.addr !2691

dec_label_pc_140005dbf:                           ; preds = %dec_label_pc_140005dad, %dec_label_pc_140005da3, %dec_label_pc_140005d8f, %dec_label_pc_140005d62
  %rcx.1.reload = load i64, i64* %rcx.1.reg2mem
  %68 = add i64 %rcx.1.reload, -12, !insn.addr !2692
  %69 = inttoptr i64 %68 to i32*, !insn.addr !2692
  %70 = load i32, i32* %69, align 4, !insn.addr !2692
  %71 = icmp slt i32 %70, %46, !insn.addr !2693
  br i1 %71, label %dec_label_pc_140005de1, label %dec_label_pc_140005dc7, !insn.addr !2693

dec_label_pc_140005dc7:                           ; preds = %dec_label_pc_140005dbf
  %72 = add i64 %rcx.1.reload, -16, !insn.addr !2694
  %73 = inttoptr i64 %72 to i32*, !insn.addr !2694
  store i32 %46, i32* %73, align 4, !insn.addr !2694
  %74 = add i64 %rcx.1.reload, %35, !insn.addr !2695
  %75 = inttoptr i64 %74 to i8*, !insn.addr !2695
  store i8 0, i8* %75, align 1, !insn.addr !2695
  store i64 %rcx.1.reload, i64* %rax.1.reg2mem, !insn.addr !2696
  br label %dec_label_pc_140005d03, !insn.addr !2696

dec_label_pc_140005dd6:                           ; preds = %dec_label_pc_140005d27
  %76 = call i64 @function_140001a60(i64 2147942487), !insn.addr !2697
  unreachable, !insn.addr !2697

dec_label_pc_140005de1:                           ; preds = %dec_label_pc_140005dbf
  %77 = call i64 @function_140001a60(i64 2147942487), !insn.addr !2698
  unreachable, !insn.addr !2698

dec_label_pc_140005dec:                           ; preds = %dec_label_pc_140005caf
  %78 = call i64 @function_140001a60(i64 2147942487), !insn.addr !2699
  unreachable, !insn.addr !2699

dec_label_pc_140005e01:                           ; preds = %dec_label_pc_140005d1e
  %79 = call i64 @function_140001a60(i64 2147942487), !insn.addr !2700
  unreachable, !insn.addr !2700

; uselistorder directives
  uselistorder i64 %rcx.1.reload, { 3, 2, 0, 1 }
  uselistorder i32 %46, { 3, 2, 0, 1, 4 }
  uselistorder i32* %44, { 1, 0, 2 }
  uselistorder i64 %35, { 0, 3, 2, 1, 4 }
  uselistorder i32 %1, { 2, 1, 0, 3 }
  uselistorder i64 %0, { 1, 5, 0, 12, 2, 9, 11, 10, 13, 3, 6, 4, 8, 7 }
  uselistorder i64* %rax.1.reg2mem, { 3, 0, 2, 1 }
  uselistorder i64* %rcx.1.reg2mem, { 0, 4, 2, 1, 3 }
  uselistorder i64 (i64, i64)* @function_140005ea0, { 1, 0 }
  uselistorder i64 %arg3, { 0, 2, 1, 3 }
  uselistorder i64 %arg2, { 1, 0, 2, 3 }
  uselistorder label %dec_label_pc_140005cfc, { 1, 0 }
}

define i64 @function_140005e10(i64 %arg1, i32 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_140005e10:
  %rax.0.reg2mem = alloca i64, !insn.addr !2701
  %0 = trunc i64 %arg4 to i32, !insn.addr !2701
  %1 = icmp eq i32 %0, 0, !insn.addr !2701
  br i1 %1, label %dec_label_pc_140005e9d, label %dec_label_pc_140005e19, !insn.addr !2702

dec_label_pc_140005e19:                           ; preds = %dec_label_pc_140005e10
  %2 = icmp eq i64 %arg1, 0, !insn.addr !2703
  %3 = icmp eq i1 %2, false, !insn.addr !2704
  br i1 %3, label %dec_label_pc_140005e44, label %dec_label_pc_140005e36, !insn.addr !2704

dec_label_pc_140005e36:                           ; preds = %dec_label_pc_140005e68, %dec_label_pc_140005e19
  %4 = call i32* @_errno(), !insn.addr !2705
  store i32 22, i32* %4, align 4, !insn.addr !2706
  br label %dec_label_pc_140005e88, !insn.addr !2707

dec_label_pc_140005e44:                           ; preds = %dec_label_pc_140005e19
  %5 = sext i32 %arg2 to i64
  %sext = mul i64 %arg4, 4294967296
  %6 = ashr exact i64 %sext, 32, !insn.addr !2708
  %7 = icmp eq i64 %arg3, 0, !insn.addr !2709
  %8 = icmp ugt i64 %6, %5, !insn.addr !2710
  %or.cond = or i1 %7, %8
  %9 = inttoptr i64 %arg1 to i64*
  br i1 %or.cond, label %dec_label_pc_140005e68, label %dec_label_pc_140005e4e, !insn.addr !2711

dec_label_pc_140005e4e:                           ; preds = %dec_label_pc_140005e44
  %10 = inttoptr i64 %arg3 to i64*, !insn.addr !2712
  %11 = trunc i64 %6 to i32, !insn.addr !2712
  %12 = call i64* @memcpy(i64* %9, i64* %10, i32 %11), !insn.addr !2712
  %13 = ptrtoint i64* %12 to i64, !insn.addr !2712
  ret i64 %13, !insn.addr !2712

dec_label_pc_140005e68:                           ; preds = %dec_label_pc_140005e44
  %14 = call i64* @memset(i64* %9, i32 0, i32 %arg2), !insn.addr !2713
  br i1 %7, label %dec_label_pc_140005e36, label %dec_label_pc_140005e77, !insn.addr !2714

dec_label_pc_140005e77:                           ; preds = %dec_label_pc_140005e68
  %15 = ptrtoint i64* %14 to i64, !insn.addr !2713
  %16 = icmp eq i1 %8, false, !insn.addr !2715
  store i64 %15, i64* %rax.0.reg2mem, !insn.addr !2715
  br i1 %16, label %dec_label_pc_140005e9d, label %dec_label_pc_140005e7c, !insn.addr !2715

dec_label_pc_140005e7c:                           ; preds = %dec_label_pc_140005e77
  %17 = call i32* @_errno(), !insn.addr !2716
  store i32 34, i32* %17, align 4, !insn.addr !2717
  br label %dec_label_pc_140005e88, !insn.addr !2717

dec_label_pc_140005e88:                           ; preds = %dec_label_pc_140005e7c, %dec_label_pc_140005e36
  call void @_invalid_parameter_noinfo(), !insn.addr !2718
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !2718
  br label %dec_label_pc_140005e9d, !insn.addr !2718

dec_label_pc_140005e9d:                           ; preds = %dec_label_pc_140005e77, %dec_label_pc_140005e88, %dec_label_pc_140005e10
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !2719

; uselistorder directives
  uselistorder i64* %9, { 1, 0 }
  uselistorder i64 %6, { 1, 0 }
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder void ()* @_invalid_parameter_noinfo, { 1, 0 }
  uselistorder i32* ()* @_errno, { 2, 1, 0 }
  uselistorder i64 %arg3, { 1, 0 }
  uselistorder label %dec_label_pc_140005e9d, { 1, 0, 2 }
}

define i64 @function_140005ea0(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_140005ea0:
  %0 = alloca i64
  %rax.1.reg2mem = alloca i64, !insn.addr !2720
  %rcx.2.reg2mem = alloca i64, !insn.addr !2720
  %rax.0.reg2mem = alloca i64, !insn.addr !2720
  %r9.0.reg2mem = alloca i64, !insn.addr !2720
  %rcx.1.reg2mem = alloca i64, !insn.addr !2720
  %storemerge.reg2mem = alloca i64, !insn.addr !2720
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = load i64, i64* %0
  %4 = add i64 %arg1, -16, !insn.addr !2721
  %5 = inttoptr i64 %4 to i32*, !insn.addr !2721
  %6 = load i32, i32* %5, align 4, !insn.addr !2721
  %7 = trunc i64 %arg2 to i32, !insn.addr !2721
  %8 = sub i32 %6, %7, !insn.addr !2721
  %9 = xor i32 %6, %7, !insn.addr !2721
  %10 = xor i32 %8, %6, !insn.addr !2721
  %11 = and i32 %10, %9, !insn.addr !2721
  %12 = icmp slt i32 %11, 0, !insn.addr !2721
  %13 = icmp eq i32 %8, 0, !insn.addr !2721
  %14 = icmp slt i32 %8, 0, !insn.addr !2721
  %15 = icmp eq i1 %14, %12, !insn.addr !2722
  %16 = icmp eq i1 %13, false, !insn.addr !2722
  %17 = icmp eq i1 %15, %16, !insn.addr !2722
  %18 = select i1 %17, i32 %6, i32 %7, !insn.addr !2722
  %19 = zext i32 %18 to i64, !insn.addr !2722
  %20 = add i64 %arg1, -8, !insn.addr !2723
  %21 = inttoptr i64 %20 to i32*, !insn.addr !2723
  %22 = load i32, i32* %21, align 4, !insn.addr !2723
  %23 = icmp slt i32 %22, 2, !insn.addr !2724
  br i1 %23, label %dec_label_pc_140005ec0, label %dec_label_pc_140005eb8, !insn.addr !2724

dec_label_pc_140005eb8:                           ; preds = %dec_label_pc_140005ea0
  %24 = add i64 %arg1, -24, !insn.addr !2725
  %25 = inttoptr i64 %24 to i64*, !insn.addr !2725
  %26 = load i64, i64* %25, align 8, !insn.addr !2725
  %27 = inttoptr i64 %26 to i64*, !insn.addr !2726
  %28 = load i64, i64* %27, align 8, !insn.addr !2726
  %29 = icmp eq i64 %28, ptrtoint (i32* @global_var_140008d68 to i64), !insn.addr !2727
  %30 = icmp eq i1 %29, false, !insn.addr !2728
  store i64 %28, i64* %rax.0.reg2mem, !insn.addr !2728
  store i64 %26, i64* %rcx.2.reg2mem, !insn.addr !2728
  br i1 %30, label %dec_label_pc_140006017, label %dec_label_pc_140005f98, !insn.addr !2728

dec_label_pc_140005ec0:                           ; preds = %dec_label_pc_140005ea0
  %31 = add i64 %arg1, -12, !insn.addr !2729
  %32 = inttoptr i64 %31 to i32*, !insn.addr !2729
  %33 = load i32, i32* %32, align 4, !insn.addr !2729
  %34 = icmp ugt i32 %18, %33, !insn.addr !2730
  br i1 %34, label %dec_label_pc_140005ec8, label %dec_label_pc_140005f04, !insn.addr !2730

dec_label_pc_140005ec8:                           ; preds = %dec_label_pc_140005ec0
  %35 = icmp slt i32 %33, 1073741825, !insn.addr !2731
  br i1 %35, label %dec_label_pc_140005ee9, label %dec_label_pc_140005ed0, !insn.addr !2731

dec_label_pc_140005ed0:                           ; preds = %dec_label_pc_140005ec8
  %36 = zext i32 %33 to i64, !insn.addr !2729
  %37 = add nuw nsw i64 %36, 1048576, !insn.addr !2732
  %38 = trunc i64 %37 to i32, !insn.addr !2733
  %39 = sub i32 %38, %18, !insn.addr !2733
  %40 = xor i32 %18, %38, !insn.addr !2733
  %41 = xor i32 %39, %38, !insn.addr !2733
  %42 = and i32 %41, %40, !insn.addr !2733
  %43 = icmp slt i32 %42, 0, !insn.addr !2733
  %44 = icmp slt i32 %39, 0, !insn.addr !2733
  %45 = icmp eq i1 %44, %43, !insn.addr !2734
  %.v1 = select i1 %45, i64 %37, i64 %19
  %46 = and i64 %.v1, 4294967295, !insn.addr !2735
  store i64 %46, i64* %storemerge.reg2mem, !insn.addr !2736
  br label %dec_label_pc_140005f10, !insn.addr !2736

dec_label_pc_140005ee9:                           ; preds = %dec_label_pc_140005ec8
  %47 = ashr i32 %33, 31, !insn.addr !2737
  %48 = sub i32 %33, %47, !insn.addr !2738
  %49 = ashr i32 %48, 1, !insn.addr !2739
  %50 = add i32 %49, %33, !insn.addr !2740
  %51 = sub i32 %50, %18, !insn.addr !2741
  %52 = xor i32 %50, %18, !insn.addr !2741
  %53 = xor i32 %51, %50, !insn.addr !2741
  %54 = and i32 %53, %52, !insn.addr !2741
  %55 = icmp slt i32 %54, 0, !insn.addr !2741
  %56 = icmp slt i32 %51, 0, !insn.addr !2741
  %57 = icmp eq i1 %56, %55, !insn.addr !2742
  %58 = select i1 %57, i32 %50, i32 %18, !insn.addr !2742
  %59 = zext i32 %58 to i64, !insn.addr !2743
  store i64 %59, i64* %storemerge.reg2mem, !insn.addr !2744
  br label %dec_label_pc_140005f10, !insn.addr !2744

dec_label_pc_140005f04:                           ; preds = %dec_label_pc_140005ec0
  ret i64 %3, !insn.addr !2745

dec_label_pc_140005f10:                           ; preds = %dec_label_pc_140005ee9, %dec_label_pc_140005ed0
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  %60 = add i64 %arg1, -24, !insn.addr !2746
  %61 = sext i32 %33 to i64, !insn.addr !2747
  %62 = icmp sle i64 %storemerge.reload, %61, !insn.addr !2747
  %63 = trunc i64 %storemerge.reload to i32, !insn.addr !2748
  %64 = icmp slt i32 %63, 1
  %or.cond = or i1 %62, %64
  store i64 %arg1, i64* %rcx.1.reg2mem, !insn.addr !2747
  store i64 %arg1, i64* %r9.0.reg2mem, !insn.addr !2747
  br i1 %or.cond, label %dec_label_pc_140005f4f, label %dec_label_pc_140005f2e, !insn.addr !2747

dec_label_pc_140005f2e:                           ; preds = %dec_label_pc_140005f10
  %65 = inttoptr i64 %60 to i64*, !insn.addr !2749
  %66 = load i64, i64* %65, align 8, !insn.addr !2749
  %67 = inttoptr i64 %66 to i64*, !insn.addr !2750
  %68 = load i64, i64* %67, align 8, !insn.addr !2750
  %69 = icmp eq i64 %68, 0, !insn.addr !2751
  store i64 %66, i64* %rcx.1.reg2mem, !insn.addr !2752
  store i64 1, i64* %r9.0.reg2mem, !insn.addr !2752
  br i1 %69, label %dec_label_pc_140005f4f, label %dec_label_pc_140005f42, !insn.addr !2752

dec_label_pc_140005f42:                           ; preds = %dec_label_pc_140005f2e
  %70 = add i64 %68, 24, !insn.addr !2753
  %71 = inttoptr i64 %arg1 to i64*, !insn.addr !2754
  store i64 %70, i64* %71, align 8, !insn.addr !2754
  ret i64 %70, !insn.addr !2755

dec_label_pc_140005f4f:                           ; preds = %dec_label_pc_140005f10, %dec_label_pc_140005f2e
  %r9.0.reload = load i64, i64* %r9.0.reg2mem
  %rcx.1.reload = load i64, i64* %rcx.1.reg2mem
  %72 = call i64 @function_140006030(i64 %rcx.1.reload, i64 %60, i32 %63, i64 %r9.0.reload, i64 %2), !insn.addr !2756
  unreachable, !insn.addr !2756

dec_label_pc_140005f98:                           ; preds = %dec_label_pc_140006017, %dec_label_pc_140005eb8
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %73 = icmp eq i64 %rax.0.reload, 0, !insn.addr !2757
  br i1 %73, label %dec_label_pc_140006011, label %dec_label_pc_140005faa, !insn.addr !2758

dec_label_pc_140005faa:                           ; preds = %dec_label_pc_140005f98
  %74 = zext i32 %6 to i64, !insn.addr !2759
  %75 = sub i32 %6, %18, !insn.addr !2760
  %76 = xor i32 %18, %6
  %77 = xor i32 %75, %6, !insn.addr !2760
  %78 = and i32 %77, %76, !insn.addr !2760
  %79 = icmp slt i32 %78, 0, !insn.addr !2760
  %80 = icmp slt i32 %75, 0, !insn.addr !2760
  %81 = add i64 %rax.0.reload, 24, !insn.addr !2761
  %82 = icmp eq i1 %80, %79, !insn.addr !2762
  %.v = select i1 %82, i64 %19, i64 %74
  %83 = add nuw nsw i64 %.v, 1, !insn.addr !2763
  %84 = trunc i64 %83 to i32, !insn.addr !2764
  %85 = and i64 %83, 4294967295, !insn.addr !2765
  %86 = call i64 @function_140005e10(i64 %81, i32 %84, i64 %arg1, i64 %85), !insn.addr !2766
  %87 = add i64 %rax.0.reload, 8, !insn.addr !2767
  %88 = inttoptr i64 %87 to i32*, !insn.addr !2767
  store i32 %6, i32* %88, align 4, !insn.addr !2767
  %89 = load i32, i32* %21, align 4, !insn.addr !2768
  %90 = add i32 %89, -1, !insn.addr !2768
  store i32 %90, i32* %21, align 4, !insn.addr !2768
  %91 = zext i32 %90 to i64, !insn.addr !2769
  %92 = icmp sgt i32 %89, 1, !insn.addr !2770
  store i64 %91, i64* %rax.1.reg2mem, !insn.addr !2770
  br i1 %92, label %dec_label_pc_140005fef, label %dec_label_pc_140005fe1, !insn.addr !2770

dec_label_pc_140005fe1:                           ; preds = %dec_label_pc_140005faa
  %93 = load i64, i64* %25, align 8, !insn.addr !2771
  %94 = inttoptr i64 %93 to i64*, !insn.addr !2772
  %95 = load i64, i64* %94, align 8, !insn.addr !2772
  store i64 %95, i64* %rax.1.reg2mem, !insn.addr !2773
  br label %dec_label_pc_140005fef, !insn.addr !2773

dec_label_pc_140005fef:                           ; preds = %dec_label_pc_140005fe1, %dec_label_pc_140005faa
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  %96 = inttoptr i64 %arg1 to i64*, !insn.addr !2774
  store i64 %81, i64* %96, align 8, !insn.addr !2774
  ret i64 %rax.1.reload, !insn.addr !2775

dec_label_pc_140006011:                           ; preds = %dec_label_pc_140005f98
  %rcx.2.reload = load i64, i64* %rcx.2.reg2mem
  %97 = call i64 @function_140006030(i64 %rcx.2.reload, i64 %19, i32 1, i64 %arg1, i64 %1), !insn.addr !2776
  unreachable, !insn.addr !2776

dec_label_pc_140006017:                           ; preds = %dec_label_pc_140005eb8
  %98 = inttoptr i64 %28 to i64*, !insn.addr !2777
  %99 = load i64, i64* %98, align 8, !insn.addr !2777
  store i64 %99, i64* %rax.0.reg2mem, !insn.addr !2778
  store i64 %28, i64* %rcx.2.reg2mem, !insn.addr !2778
  br label %dec_label_pc_140005f98, !insn.addr !2778

; uselistorder directives
  uselistorder i32 %75, { 1, 0 }
  uselistorder i64 %rax.0.reload, { 2, 1, 0 }
  uselistorder i64 %70, { 1, 0 }
  uselistorder i64 %storemerge.reload, { 1, 0 }
  uselistorder i32 %51, { 1, 0 }
  uselistorder i32 %50, { 2, 0, 1, 3 }
  uselistorder i32 %39, { 1, 0 }
  uselistorder i32 %38, { 1, 0, 2 }
  uselistorder i32 %33, { 1, 0, 3, 4, 6, 5, 2 }
  uselistorder i64 %28, { 0, 2, 1, 3 }
  uselistorder i32* %21, { 1, 0, 2 }
  uselistorder i32 %18, { 2, 7, 3, 1, 4, 0, 5, 6, 8 }
  uselistorder i32 %8, { 1, 2, 0 }
  uselistorder i32 %7, { 1, 0, 2 }
  uselistorder i32 %6, { 6, 0, 1, 5, 4, 7, 2, 3, 8 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rcx.1.reg2mem, { 0, 2, 1 }
  uselistorder i64* %r9.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %rcx.2.reg2mem, { 2, 0, 1 }
  uselistorder i64* %0, { 2, 1, 0 }
  uselistorder i64 (i64, i32, i64, i64)* @function_140005e10, { 1, 0 }
  uselistorder i64 (i64, i64, i32, i64, i64)* @function_140006030, { 1, 0 }
  uselistorder i64 -24, { 0, 2, 3, 1 }
  uselistorder i64 -16, { 1, 2, 3, 0 }
  uselistorder i64 %arg1, { 6, 4, 5, 3, 0, 1, 2, 8, 7, 10, 9 }
  uselistorder label %dec_label_pc_140005f4f, { 1, 0 }
}

define i64 @function_140006030(i64 %arg1, i64 %arg2, i32 %arg3, i64 %arg4, i64 %arg5) local_unnamed_addr {
dec_label_pc_140006030:
  %0 = call i64 @function_140001a60(i64 2147942414), !insn.addr !2779
  unreachable, !insn.addr !2779

; uselistorder directives
  uselistorder i64 (i64)* @function_140001a60, { 6, 5, 4, 3, 2, 1, 0 }
}

define i64 @function_140006040(i64* %arg1, i8* %arg2, i64* %arg3, i8* %arg4) local_unnamed_addr {
dec_label_pc_140006040:
  %0 = ptrtoint i64* %arg3 to i64
  %stack_var_24 = alloca i64, align 8
  store i64 %0, i64* %stack_var_24, align 8, !insn.addr !2780
  %1 = call i64 @function_140001160(), !insn.addr !2781
  %2 = ptrtoint i64* %stack_var_24 to i64, !insn.addr !2782
  %3 = inttoptr i64 %1 to i64*, !insn.addr !2783
  %4 = load i64, i64* %3, align 8, !insn.addr !2783
  %5 = bitcast i64* %arg1 to i8*, !insn.addr !2784
  %6 = call i32 @__stdio_common_vsprintf_s(i64 %4, i8* %5, i32 1040, i8* %arg2, i64 0, i64 %2), !insn.addr !2784
  %7 = icmp sgt i32 %6, -1, !insn.addr !2785
  %8 = select i1 %7, i32 %6, i32 -1, !insn.addr !2786
  %9 = zext i32 %8 to i64, !insn.addr !2786
  ret i64 %9, !insn.addr !2787

; uselistorder directives
  uselistorder i32 -1, { 2, 3, 4, 6, 5, 0, 1, 7, 8, 9, 10, 11, 12, 19, 13, 14, 15, 16, 17, 18 }
  uselistorder i32 (i64, i8*, i32, i8*, i64, i64)* @__stdio_common_vsprintf_s, { 1, 0 }
}

define i64 @function_1400060a0(i64* %arg1) local_unnamed_addr {
dec_label_pc_1400060a0:
  %0 = alloca i64
  %rdi.0.reg2mem = alloca i64, !insn.addr !2788
  %rdx.0.reg2mem = alloca i64, !insn.addr !2788
  %1 = load i64, i64* %0
  %2 = ptrtoint i64* %arg1 to i64
  %3 = add i64 %2, 16, !insn.addr !2789
  %4 = inttoptr i64 %3 to i64*, !insn.addr !2789
  store i64 0, i64* %4, align 8, !insn.addr !2789
  %5 = add i64 %2, 24, !insn.addr !2790
  %6 = inttoptr i64 %5 to i64*, !insn.addr !2790
  store i64 7, i64* %6, align 8, !insn.addr !2790
  %7 = bitcast i64* %arg1 to i16*, !insn.addr !2791
  store i16 0, i16* %7, align 2, !insn.addr !2791
  %8 = add i64 %1, 16, !insn.addr !2792
  %9 = inttoptr i64 %8 to i64*, !insn.addr !2792
  %10 = load i64, i64* %9, align 8, !insn.addr !2792
  %11 = add i64 %10, 19, !insn.addr !2793
  %12 = load i64, i64* %4, align 8, !insn.addr !2794
  %13 = icmp ult i64 %11, %12
  br i1 %13, label %dec_label_pc_140006174, label %dec_label_pc_1400060f6, !insn.addr !2795

dec_label_pc_1400060f6:                           ; preds = %dec_label_pc_1400060a0
  %14 = load i64, i64* %6, align 8, !insn.addr !2796
  %15 = icmp eq i64 %14, %11, !insn.addr !2797
  br i1 %15, label %dec_label_pc_140006174, label %dec_label_pc_1400060ff, !insn.addr !2798

dec_label_pc_1400060ff:                           ; preds = %dec_label_pc_1400060f6
  %16 = icmp ult i64 %14, %11, !insn.addr !2797
  %17 = icmp eq i1 %16, false, !insn.addr !2799
  br i1 %17, label %dec_label_pc_140006115, label %dec_label_pc_140006101, !insn.addr !2799

dec_label_pc_140006101:                           ; preds = %dec_label_pc_1400060ff
  %18 = sub i64 %11, %12, !insn.addr !2800
  %19 = call i64 @function_140006410(i64 %2, i64 %18), !insn.addr !2801
  store i64 %12, i64* %4, align 8, !insn.addr !2802
  br label %dec_label_pc_140006174, !insn.addr !2803

dec_label_pc_140006115:                           ; preds = %dec_label_pc_1400060ff
  %20 = icmp ult i64 %11, 8, !insn.addr !2804
  %21 = icmp eq i1 %20, false, !insn.addr !2805
  %22 = icmp ult i64 %14, 8, !insn.addr !2806
  %or.cond = or i1 %21, %22
  br i1 %or.cond, label %dec_label_pc_140006174, label %dec_label_pc_140006121, !insn.addr !2805

dec_label_pc_140006121:                           ; preds = %dec_label_pc_140006115
  %23 = inttoptr i64 %14 to i64*, !insn.addr !2807
  %.tr = trunc i64 %12 to i32
  %24 = mul i32 %.tr, 2
  %25 = add i32 %24, 2, !insn.addr !2807
  %26 = call i64* @memcpy(i64* nonnull %arg1, i64* %23, i32 %25), !insn.addr !2807
  %27 = load i64, i64* %6, align 8, !insn.addr !2808
  %28 = mul i64 %27, 2, !insn.addr !2809
  %29 = add i64 %28, 2, !insn.addr !2809
  %30 = icmp ult i64 %29, 4096, !insn.addr !2810
  store i64 %29, i64* %rdx.0.reg2mem, !insn.addr !2811
  store i64 %14, i64* %rdi.0.reg2mem, !insn.addr !2811
  br i1 %30, label %dec_label_pc_140006164, label %dec_label_pc_14000614c, !insn.addr !2811

dec_label_pc_14000614c:                           ; preds = %dec_label_pc_140006121
  %31 = add i64 %14, -8
  %32 = inttoptr i64 %31 to i64*, !insn.addr !2812
  %33 = load i64, i64* %32, align 8, !insn.addr !2812
  %34 = sub i64 %31, %33, !insn.addr !2813
  %35 = icmp ult i64 %34, 32
  br i1 %35, label %dec_label_pc_140006161, label %dec_label_pc_1400061a6, !insn.addr !2814

dec_label_pc_140006161:                           ; preds = %dec_label_pc_14000614c
  %36 = add i64 %28, 41, !insn.addr !2815
  store i64 %36, i64* %rdx.0.reg2mem, !insn.addr !2816
  store i64 %33, i64* %rdi.0.reg2mem, !insn.addr !2816
  br label %dec_label_pc_140006164, !insn.addr !2816

dec_label_pc_140006164:                           ; preds = %dec_label_pc_140006161, %dec_label_pc_140006121
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %37 = call i64 @function_1400065d0(i64 %rdi.0.reload, i64 %rdx.0.reload), !insn.addr !2817
  store i64 7, i64* %6, align 8, !insn.addr !2818
  br label %dec_label_pc_140006174, !insn.addr !2818

dec_label_pc_140006174:                           ; preds = %dec_label_pc_1400060a0, %dec_label_pc_140006164, %dec_label_pc_140006115, %dec_label_pc_140006101, %dec_label_pc_1400060f6
  %38 = bitcast i64* %arg1 to i128*, !insn.addr !2819
  %39 = call i64 @function_140006380(i128* %38, i64 ptrtoint ([20 x i16]* @global_var_140008aa0 to i64)), !insn.addr !2819
  %40 = call i64 @function_140005bd0(i128* %38, i64 %1), !insn.addr !2820
  ret i64 %2, !insn.addr !2821

dec_label_pc_1400061a6:                           ; preds = %dec_label_pc_14000614c
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !2822
  %41 = call i64 @__asm_int3(), !insn.addr !2823
  %42 = call i64 @__asm_int3(), !insn.addr !2824
  %43 = call i64 @__asm_int3(), !insn.addr !2825
  %44 = call i64 @__asm_int3(), !insn.addr !2826
  ret i64 %44, !insn.addr !2826

; uselistorder directives
  uselistorder i128* %38, { 1, 0 }
  uselistorder i64 %28, { 1, 0 }
  uselistorder i64 %14, { 1, 0, 3, 2, 5, 4 }
  uselistorder i64 %12, { 3, 2, 1, 0 }
  uselistorder i64 %11, { 1, 2, 3, 4, 0 }
  uselistorder i64 %2, { 1, 0, 3, 2 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64 (i128*, i64)* @function_140005bd0, { 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i64 (i128*, i64)* @function_140006380, { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i64* %arg1, { 1, 0, 2, 3 }
  uselistorder label %dec_label_pc_140006174, { 1, 2, 3, 4, 0 }
}

define i64 @function_1400061b0(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1400061b0:
  %0 = alloca i64
  %rdi.3.reg2mem = alloca i64, !insn.addr !2827
  %.pre-phi.reg2mem = alloca i64*, !insn.addr !2827
  %r15.1.reg2mem = alloca i64, !insn.addr !2827
  %r14.1.reg2mem = alloca i64, !insn.addr !2827
  %r12.1.reg2mem = alloca i64, !insn.addr !2827
  %r8.1.reg2mem = alloca i64, !insn.addr !2827
  %rdi.2.reg2mem = alloca i64, !insn.addr !2827
  %rcx.1.reg2mem = alloca i64, !insn.addr !2827
  %r15.0.reg2mem = alloca i64, !insn.addr !2827
  %r14.0.reg2mem = alloca i64, !insn.addr !2827
  %r12.0.reg2mem = alloca i64, !insn.addr !2827
  %r8.0.reg2mem = alloca i64, !insn.addr !2827
  %rdi.1.reg2mem = alloca i64, !insn.addr !2827
  %rcx.0.reg2mem = alloca i64, !insn.addr !2827
  %rbx.1.reg2mem = alloca i64, !insn.addr !2827
  %rdx.1.reg2mem = alloca i64, !insn.addr !2827
  %rdi.0.reg2mem = alloca i64, !insn.addr !2827
  %rbx.01.reg2mem = alloca i64, !insn.addr !2827
  %.reg2mem = alloca i64, !insn.addr !2827
  %rbx.024.reg2mem = alloca i64, !insn.addr !2827
  %rbx.025.reg2mem = alloca i64, !insn.addr !2827
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = add i64 %arg1, 16, !insn.addr !2828
  %4 = inttoptr i64 %3 to i64*, !insn.addr !2828
  %5 = load i64, i64* %4, align 8, !insn.addr !2828
  %6 = sub i64 9223372036854775806, %5, !insn.addr !2829
  %7 = icmp ult i64 %6, %arg2, !insn.addr !2830
  br i1 %7, label %dec_label_pc_140006350, label %dec_label_pc_1400061de, !insn.addr !2831

dec_label_pc_1400061de:                           ; preds = %dec_label_pc_1400061b0
  %8 = add i64 %arg1, 24, !insn.addr !2832
  %9 = inttoptr i64 %8 to i64*, !insn.addr !2832
  %10 = load i64, i64* %9, align 8, !insn.addr !2832
  %11 = add i64 %5, %arg2, !insn.addr !2833
  %12 = or i64 %11, 7, !insn.addr !2834
  %13 = icmp ugt i64 %12, 9223372036854775806
  store i64 9223372036854775806, i64* %rbx.025.reg2mem, !insn.addr !2835
  br i1 %13, label %dec_label_pc_140006251.thread, label %dec_label_pc_1400061fc, !insn.addr !2835

dec_label_pc_1400061fc:                           ; preds = %dec_label_pc_1400061de
  %14 = udiv i64 %10, 2, !insn.addr !2836
  %15 = sub nsw i64 9223372036854775806, %14, !insn.addr !2837
  %16 = icmp ugt i64 %10, %15
  store i64 9223372036854775806, i64* %rbx.025.reg2mem, !insn.addr !2838
  br i1 %16, label %dec_label_pc_140006251.thread, label %dec_label_pc_14000621b, !insn.addr !2838

dec_label_pc_14000621b:                           ; preds = %dec_label_pc_1400061fc
  %17 = add i64 %14, %10, !insn.addr !2839
  %18 = icmp ult i64 %12, %17, !insn.addr !2840
  %19 = select i1 %18, i64 %17, i64 %12, !insn.addr !2841
  %20 = add i64 %19, 1, !insn.addr !2842
  %21 = icmp sgt i64 %20, -1
  store i64 %19, i64* %rbx.025.reg2mem, !insn.addr !2843
  br i1 %21, label %dec_label_pc_140006248, label %dec_label_pc_140006251.thread, !insn.addr !2843

dec_label_pc_140006248:                           ; preds = %dec_label_pc_14000621b
  %22 = mul i64 %20, 2, !insn.addr !2844
  %23 = icmp ult i64 %22, 4096, !insn.addr !2845
  br i1 %23, label %dec_label_pc_140006278, label %dec_label_pc_140006251, !insn.addr !2846

dec_label_pc_140006251:                           ; preds = %dec_label_pc_140006248
  %24 = add i64 %22, 39, !insn.addr !2847
  %25 = icmp ugt i64 %22, -40, !insn.addr !2848
  store i64 %19, i64* %rbx.025.reg2mem
  store i64 %19, i64* %rbx.024.reg2mem
  store i64 %24, i64* %.reg2mem
  br i1 %25, label %dec_label_pc_140006251.thread, label %26

dec_label_pc_140006251.thread:                    ; preds = %dec_label_pc_1400061de, %dec_label_pc_1400061fc, %dec_label_pc_14000621b, %dec_label_pc_140006251
  %rbx.025.reload = load i64, i64* %rbx.025.reg2mem
  store i64 %rbx.025.reload, i64* %rbx.024.reg2mem
  store i64 -1, i64* %.reg2mem
  br label %26

; <label>:26:                                     ; preds = %dec_label_pc_140006251, %dec_label_pc_140006251.thread
  %.reload = load i64, i64* %.reg2mem
  %27 = call i64 @function_1400065e0(i64 %.reload), !insn.addr !2849
  %28 = icmp eq i64 %27, 0, !insn.addr !2850
  store i64 %.reload, i64* %rcx.0.reg2mem, !insn.addr !2851
  store i64 -1, i64* %r8.0.reg2mem, !insn.addr !2851
  store i64 %5, i64* %r14.0.reg2mem, !insn.addr !2851
  store i64 %11, i64* %r15.0.reg2mem, !insn.addr !2851
  br i1 %28, label %dec_label_pc_140006308, label %dec_label_pc_14000626a, !insn.addr !2851

dec_label_pc_14000626a:                           ; preds = %26
  %rbx.024.reload = load i64, i64* %rbx.024.reg2mem
  %29 = add i64 %27, 39, !insn.addr !2852
  %30 = and i64 %29, -32, !insn.addr !2853
  %31 = add i64 %30, -8, !insn.addr !2854
  %32 = inttoptr i64 %31 to i64*, !insn.addr !2854
  store i64 %27, i64* %32, align 8, !insn.addr !2854
  store i64 %rbx.024.reload, i64* %rbx.01.reg2mem, !insn.addr !2855
  store i64 %30, i64* %rdi.0.reg2mem, !insn.addr !2855
  br label %dec_label_pc_14000628d, !insn.addr !2855

dec_label_pc_140006278:                           ; preds = %dec_label_pc_140006248
  %33 = icmp eq i64 %22, 0, !insn.addr !2856
  store i64 %19, i64* %rbx.01.reg2mem, !insn.addr !2857
  store i64 0, i64* %rdi.0.reg2mem, !insn.addr !2857
  br i1 %33, label %dec_label_pc_14000628d, label %dec_label_pc_14000627d, !insn.addr !2857

dec_label_pc_14000627d:                           ; preds = %dec_label_pc_140006278
  %34 = call i64 @function_1400065e0(i64 %22), !insn.addr !2858
  store i64 %19, i64* %rbx.01.reg2mem, !insn.addr !2859
  store i64 %34, i64* %rdi.0.reg2mem, !insn.addr !2859
  br label %dec_label_pc_14000628d, !insn.addr !2859

dec_label_pc_14000628d:                           ; preds = %dec_label_pc_140006278, %dec_label_pc_14000627d, %dec_label_pc_14000626a
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rbx.01.reload = load i64, i64* %rbx.01.reg2mem
  %35 = mul i64 %5, 2, !insn.addr !2860
  store i64 %11, i64* %4, align 8, !insn.addr !2861
  %36 = add i64 %rdi.0.reload, %35, !insn.addr !2862
  store i64 %rbx.01.reload, i64* %9, align 8, !insn.addr !2863
  %37 = mul i64 %2, 2, !insn.addr !2864
  %38 = add i64 %5, %2, !insn.addr !2865
  %39 = mul i64 %38, 2, !insn.addr !2866
  %40 = add i64 %rdi.0.reload, %39, !insn.addr !2866
  %41 = icmp ult i64 %10, 8, !insn.addr !2867
  store i64 %rdi.0.reload, i64* %rcx.1.reg2mem, !insn.addr !2868
  store i64 %rdi.0.reload, i64* %rdi.2.reg2mem, !insn.addr !2868
  store i64 %35, i64* %r8.1.reg2mem, !insn.addr !2868
  store i64 %36, i64* %r12.1.reg2mem, !insn.addr !2868
  store i64 %40, i64* %r14.1.reg2mem, !insn.addr !2868
  store i64 %37, i64* %r15.1.reg2mem, !insn.addr !2868
  br i1 %41, label %dec_label_pc_14000630f, label %dec_label_pc_1400062b6, !insn.addr !2868

dec_label_pc_1400062b6:                           ; preds = %dec_label_pc_14000628d
  %42 = inttoptr i64 %rdi.0.reload to i64*, !insn.addr !2869
  %43 = trunc i64 %35 to i32, !insn.addr !2869
  %44 = call i64* @memcpy(i64* %42, i64* %42, i32 %43), !insn.addr !2869
  %45 = inttoptr i64 %36 to i64*, !insn.addr !2870
  %46 = inttoptr i64 %1 to i64*, !insn.addr !2870
  %47 = trunc i64 %37 to i32, !insn.addr !2870
  %48 = call i64* @memcpy(i64* %45, i64* %46, i32 %47), !insn.addr !2870
  %49 = mul i64 %10, 2, !insn.addr !2871
  %50 = add i64 %49, 2, !insn.addr !2871
  %51 = inttoptr i64 %40 to i16*, !insn.addr !2872
  store i16 0, i16* %51, align 2, !insn.addr !2872
  %52 = icmp ult i64 %50, 4096, !insn.addr !2873
  store i64 %50, i64* %rdx.1.reg2mem, !insn.addr !2874
  store i64 %rdi.0.reload, i64* %rbx.1.reg2mem, !insn.addr !2874
  br i1 %52, label %dec_label_pc_1400062fe, label %dec_label_pc_1400062e6, !insn.addr !2874

dec_label_pc_1400062e6:                           ; preds = %dec_label_pc_1400062b6
  %53 = add i64 %rdi.0.reload, -8
  %54 = inttoptr i64 %53 to i64*, !insn.addr !2875
  %55 = load i64, i64* %54, align 8, !insn.addr !2875
  %56 = sub i64 %53, %55, !insn.addr !2876
  %57 = icmp ult i64 %56, 32
  store i64 %55, i64* %rcx.0.reg2mem, !insn.addr !2877
  store i64 %rdi.0.reload, i64* %rdi.1.reg2mem, !insn.addr !2877
  store i64 %37, i64* %r8.0.reg2mem, !insn.addr !2877
  store i64 %36, i64* %r12.0.reg2mem, !insn.addr !2877
  store i64 %40, i64* %r14.0.reg2mem, !insn.addr !2877
  store i64 %37, i64* %r15.0.reg2mem, !insn.addr !2877
  br i1 %57, label %dec_label_pc_1400062fb, label %dec_label_pc_140006308, !insn.addr !2877

dec_label_pc_1400062fb:                           ; preds = %dec_label_pc_1400062e6
  %58 = add i64 %49, 41, !insn.addr !2878
  store i64 %58, i64* %rdx.1.reg2mem, !insn.addr !2879
  store i64 %55, i64* %rbx.1.reg2mem, !insn.addr !2879
  br label %dec_label_pc_1400062fe, !insn.addr !2879

dec_label_pc_1400062fe:                           ; preds = %dec_label_pc_1400062fb, %dec_label_pc_1400062b6
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %rdx.1.reload = load i64, i64* %rdx.1.reg2mem
  %59 = call i64 @function_1400065d0(i64 %rbx.1.reload, i64 %rdx.1.reload), !insn.addr !2880
  %.pre = inttoptr i64 %arg1 to i64*, !insn.addr !2881
  store i64* %.pre, i64** %.pre-phi.reg2mem, !insn.addr !2882
  store i64 %rdi.0.reload, i64* %rdi.3.reg2mem, !insn.addr !2882
  br label %dec_label_pc_14000632b, !insn.addr !2882

dec_label_pc_140006308:                           ; preds = %dec_label_pc_1400062e6, %26
  %r15.0.reload = load i64, i64* %r15.0.reg2mem
  %r14.0.reload = load i64, i64* %r14.0.reg2mem
  %r12.0.reload = load i64, i64* %r12.0.reg2mem
  %r8.0.reload = load i64, i64* %r8.0.reg2mem
  %rdi.1.reload = load i64, i64* %rdi.1.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !2883
  %60 = call i64 @__asm_int3(), !insn.addr !2884
  store i64 %rcx.0.reload, i64* %rcx.1.reg2mem, !insn.addr !2884
  store i64 %rdi.1.reload, i64* %rdi.2.reg2mem, !insn.addr !2884
  store i64 %r8.0.reload, i64* %r8.1.reg2mem, !insn.addr !2884
  store i64 %r12.0.reload, i64* %r12.1.reg2mem, !insn.addr !2884
  store i64 %r14.0.reload, i64* %r14.1.reg2mem, !insn.addr !2884
  store i64 %r15.0.reload, i64* %r15.1.reg2mem, !insn.addr !2884
  br label %dec_label_pc_14000630f, !insn.addr !2884

dec_label_pc_14000630f:                           ; preds = %dec_label_pc_140006308, %dec_label_pc_14000628d
  %r15.1.reload = load i64, i64* %r15.1.reg2mem
  %r14.1.reload = load i64, i64* %r14.1.reg2mem
  %r12.1.reload = load i64, i64* %r12.1.reg2mem
  %r8.1.reload = load i64, i64* %r8.1.reg2mem
  %rdi.2.reload = load i64, i64* %rdi.2.reg2mem
  %rcx.1.reload = load i64, i64* %rcx.1.reg2mem
  %61 = inttoptr i64 %rcx.1.reload to i64*, !insn.addr !2885
  %62 = inttoptr i64 %arg1 to i64*
  %63 = trunc i64 %r8.1.reload to i32, !insn.addr !2885
  %64 = call i64* @memcpy(i64* %61, i64* %62, i32 %63), !insn.addr !2885
  %65 = inttoptr i64 %r12.1.reload to i64*, !insn.addr !2886
  %66 = inttoptr i64 %1 to i64*, !insn.addr !2886
  %67 = trunc i64 %r15.1.reload to i32, !insn.addr !2886
  %68 = call i64* @memcpy(i64* %65, i64* %66, i32 %67), !insn.addr !2886
  %69 = inttoptr i64 %r14.1.reload to i16*, !insn.addr !2887
  store i16 0, i16* %69, align 2, !insn.addr !2887
  store i64* %62, i64** %.pre-phi.reg2mem, !insn.addr !2887
  store i64 %rdi.2.reload, i64* %rdi.3.reg2mem, !insn.addr !2887
  br label %dec_label_pc_14000632b, !insn.addr !2887

dec_label_pc_14000632b:                           ; preds = %dec_label_pc_14000630f, %dec_label_pc_1400062fe
  %rdi.3.reload = load i64, i64* %rdi.3.reg2mem
  %.pre-phi.reload = load i64*, i64** %.pre-phi.reg2mem
  store i64 %rdi.3.reload, i64* %.pre-phi.reload, align 8, !insn.addr !2881
  ret i64 %arg1, !insn.addr !2888

dec_label_pc_140006350:                           ; preds = %dec_label_pc_1400061b0
  %70 = call i64 @function_140006360(), !insn.addr !2889
  %71 = call i64 @__asm_int3(), !insn.addr !2890
  %72 = call i64 @__asm_int3(), !insn.addr !2891
  %73 = call i64 @__asm_int3(), !insn.addr !2892
  %74 = call i64 @__asm_int3(), !insn.addr !2893
  %75 = call i64 @__asm_int3(), !insn.addr !2894
  %76 = call i64 @__asm_int3(), !insn.addr !2895
  %77 = call i64 @__asm_int3(), !insn.addr !2896
  %78 = call i64 @__asm_int3(), !insn.addr !2897
  %79 = call i64 @__asm_int3(), !insn.addr !2898
  %80 = call i64 @__asm_int3(), !insn.addr !2899
  %81 = call i64 @__asm_int3(), !insn.addr !2900
  ret i64 %81, !insn.addr !2900

; uselistorder directives
  uselistorder i64 %55, { 1, 0, 2 }
  uselistorder i64 %49, { 1, 0 }
  uselistorder i64 %40, { 1, 2, 0 }
  uselistorder i64 %37, { 1, 2, 3, 0 }
  uselistorder i64 %36, { 1, 2, 0 }
  uselistorder i64 %35, { 1, 0, 2 }
  uselistorder i64 %rdi.0.reload, { 0, 3, 6, 4, 5, 1, 2, 8, 7 }
  uselistorder i64 %27, { 1, 0, 2 }
  uselistorder i64 %22, { 1, 0, 4, 3, 2 }
  uselistorder i64 %19, { 1, 0, 2, 4, 3, 5 }
  uselistorder i64 %17, { 1, 0 }
  uselistorder i64 %14, { 1, 0 }
  uselistorder i64 %11, { 1, 0, 2 }
  uselistorder i64 %10, { 0, 4, 2, 3, 1 }
  uselistorder i64 %5, { 2, 1, 0, 3, 4 }
  uselistorder i64* %rbx.025.reg2mem, { 0, 4, 3, 2, 1 }
  uselistorder i64* %rbx.024.reg2mem, { 0, 2, 1 }
  uselistorder i64* %.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rbx.01.reg2mem, { 0, 3, 1, 2 }
  uselistorder i64* %rdi.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder i64* %rcx.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %r8.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %r14.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %r15.0.reg2mem, { 0, 2, 1 }
  uselistorder i64** %.pre-phi.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rdi.3.reg2mem, { 0, 2, 1 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i64 %arg1, { 1, 2, 0, 3, 4 }
  uselistorder label %dec_label_pc_14000628d, { 1, 0, 2 }
  uselistorder label %26, { 1, 0 }
  uselistorder label %dec_label_pc_140006251.thread, { 3, 2, 1, 0 }
}

define i64 @function_140006360() local_unnamed_addr {
dec_label_pc_140006360:
  call void @"?_Xlength_error@std@@YAXPEBD@Z"(i8* bitcast (i32* @0 to i8*)), !insn.addr !2901
  %0 = call i64 @__asm_int3(), !insn.addr !2902
  %1 = call i64 @__asm_int3(), !insn.addr !2903
  %2 = call i64 @__asm_int3(), !insn.addr !2904
  %3 = call i64 @__asm_int3(), !insn.addr !2905
  %4 = call i64 @__asm_int3(), !insn.addr !2906
  %5 = call i64 @__asm_int3(), !insn.addr !2907
  %6 = call i64 @__asm_int3(), !insn.addr !2908
  %7 = call i64 @__asm_int3(), !insn.addr !2909
  %8 = call i64 @__asm_int3(), !insn.addr !2910
  %9 = call i64 @__asm_int3(), !insn.addr !2911
  %10 = call i64 @__asm_int3(), !insn.addr !2912
  %11 = call i64 @__asm_int3(), !insn.addr !2913
  %12 = call i64 @__asm_int3(), !insn.addr !2914
  %13 = call i64 @__asm_int3(), !insn.addr !2915
  %14 = call i64 @__asm_int3(), !insn.addr !2916
  ret i64 %14, !insn.addr !2916
}

define i64 @function_140006380(i128* %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_140006380:
  %rdx.0.reg2mem = alloca i64, !insn.addr !2917
  store i64 -1, i64* %rdx.0.reg2mem, !insn.addr !2918
  br label %dec_label_pc_140006393, !insn.addr !2918

dec_label_pc_140006393:                           ; preds = %dec_label_pc_140006393, %dec_label_pc_140006380
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %0 = add i64 %rdx.0.reload, 1, !insn.addr !2919
  %1 = mul i64 %0, 2, !insn.addr !2920
  %2 = add i64 %1, %arg2, !insn.addr !2920
  %3 = inttoptr i64 %2 to i16*, !insn.addr !2920
  %4 = load i16, i16* %3, align 2, !insn.addr !2920
  %5 = icmp eq i16 %4, 0, !insn.addr !2920
  %6 = icmp eq i1 %5, false, !insn.addr !2921
  store i64 %0, i64* %rdx.0.reg2mem, !insn.addr !2921
  br i1 %6, label %dec_label_pc_140006393, label %dec_label_pc_14000639e, !insn.addr !2921

dec_label_pc_14000639e:                           ; preds = %dec_label_pc_140006393
  %7 = ptrtoint i128* %arg1 to i64
  %8 = add i64 %7, 24, !insn.addr !2922
  %9 = inttoptr i64 %8 to i64*, !insn.addr !2922
  %10 = load i64, i64* %9, align 8, !insn.addr !2922
  %11 = add i64 %7, 16, !insn.addr !2923
  %12 = inttoptr i64 %11 to i64*, !insn.addr !2923
  %13 = load i64, i64* %12, align 8, !insn.addr !2923
  %14 = sub i64 %10, %13, !insn.addr !2924
  %15 = icmp ugt i64 %0, %14
  br i1 %15, label %dec_label_pc_1400063f8, label %dec_label_pc_1400063b1, !insn.addr !2925

dec_label_pc_1400063b1:                           ; preds = %dec_label_pc_14000639e
  %16 = add i64 %13, %0, !insn.addr !2926
  store i64 %16, i64* %12, align 8, !insn.addr !2927
  %17 = icmp ult i64 %10, 8, !insn.addr !2928
  %spec.select = select i1 %17, i64 %7, i64 %13
  %18 = mul i64 %13, 2, !insn.addr !2929
  %19 = add i64 %spec.select, %18, !insn.addr !2929
  %20 = inttoptr i64 %19 to i64*, !insn.addr !2930
  %21 = inttoptr i64 %arg2 to i64*, !insn.addr !2930
  %.tr = trunc i64 %0 to i32
  %22 = mul i32 %.tr, 2, !insn.addr !2930
  %23 = call i64* @memmove(i64* %20, i64* %21, i32 %22), !insn.addr !2930
  %24 = mul i64 %16, 2, !insn.addr !2931
  %25 = add i64 %24, %spec.select, !insn.addr !2931
  %26 = inttoptr i64 %25 to i16*, !insn.addr !2931
  store i16 0, i16* %26, align 2, !insn.addr !2931
  ret i64 %7, !insn.addr !2932

dec_label_pc_1400063f8:                           ; preds = %dec_label_pc_14000639e
  %27 = call i64 @function_1400061b0(i64 %7, i64 %0), !insn.addr !2933
  ret i64 %27, !insn.addr !2934

; uselistorder directives
  uselistorder i64 %13, { 0, 2, 1, 3 }
  uselistorder i64 %7, { 2, 1, 0, 3, 4 }
  uselistorder i64 %0, { 5, 3, 2, 4, 0, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 1, 0, 2 }
  uselistorder i64 (i64, i64)* @function_1400061b0, { 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
  uselistorder i64 %arg2, { 1, 0 }
}

define i64 @function_140006410(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_140006410:
  %rdi.3.reg2mem = alloca i64, !insn.addr !2935
  %.pre-phi.reg2mem = alloca i64*, !insn.addr !2935
  %r8.1.reg2mem = alloca i64, !insn.addr !2935
  %rdi.2.reg2mem = alloca i64, !insn.addr !2935
  %rcx.1.reg2mem = alloca i64, !insn.addr !2935
  %r8.0.reg2mem = alloca i64, !insn.addr !2935
  %rdi.1.reg2mem = alloca i64, !insn.addr !2935
  %rcx.0.reg2mem = alloca i64, !insn.addr !2935
  %rbx.1.reg2mem = alloca i64, !insn.addr !2935
  %rdx.1.reg2mem = alloca i64, !insn.addr !2935
  %rdi.0.reg2mem = alloca i64, !insn.addr !2935
  %rbx.01.reg2mem = alloca i64, !insn.addr !2935
  %.reg2mem = alloca i64, !insn.addr !2935
  %rbx.024.reg2mem = alloca i64, !insn.addr !2935
  %rbx.025.reg2mem = alloca i64, !insn.addr !2935
  %0 = add i64 %arg1, 16, !insn.addr !2936
  %1 = inttoptr i64 %0 to i64*, !insn.addr !2936
  %2 = load i64, i64* %1, align 8, !insn.addr !2936
  %3 = sub i64 9223372036854775806, %2, !insn.addr !2937
  %4 = icmp ult i64 %3, %arg2, !insn.addr !2938
  br i1 %4, label %dec_label_pc_140006562, label %dec_label_pc_140006439, !insn.addr !2939

dec_label_pc_140006439:                           ; preds = %dec_label_pc_140006410
  %5 = add i64 %arg1, 24, !insn.addr !2940
  %6 = inttoptr i64 %5 to i64*, !insn.addr !2940
  %7 = load i64, i64* %6, align 8, !insn.addr !2940
  %8 = add i64 %2, %arg2, !insn.addr !2941
  %9 = or i64 %8, 7, !insn.addr !2942
  %10 = icmp ugt i64 %9, 9223372036854775806
  store i64 9223372036854775806, i64* %rbx.025.reg2mem, !insn.addr !2943
  br i1 %10, label %dec_label_pc_1400064a7.thread, label %dec_label_pc_140006457, !insn.addr !2943

dec_label_pc_140006457:                           ; preds = %dec_label_pc_140006439
  %11 = udiv i64 %7, 2, !insn.addr !2944
  %12 = sub nsw i64 9223372036854775806, %11, !insn.addr !2945
  %13 = icmp ugt i64 %7, %12
  store i64 9223372036854775806, i64* %rbx.025.reg2mem, !insn.addr !2946
  br i1 %13, label %dec_label_pc_1400064a7.thread, label %dec_label_pc_140006476, !insn.addr !2946

dec_label_pc_140006476:                           ; preds = %dec_label_pc_140006457
  %14 = add i64 %11, %7, !insn.addr !2947
  %15 = icmp ult i64 %9, %14, !insn.addr !2948
  %16 = select i1 %15, i64 %14, i64 %9, !insn.addr !2949
  %17 = add i64 %16, 1, !insn.addr !2950
  %18 = icmp sgt i64 %17, -1
  store i64 %16, i64* %rbx.025.reg2mem, !insn.addr !2951
  br i1 %18, label %dec_label_pc_14000649e, label %dec_label_pc_1400064a7.thread, !insn.addr !2951

dec_label_pc_14000649e:                           ; preds = %dec_label_pc_140006476
  %19 = mul i64 %17, 2, !insn.addr !2952
  %20 = icmp ult i64 %19, 4096, !insn.addr !2953
  br i1 %20, label %dec_label_pc_1400064ca, label %dec_label_pc_1400064a7, !insn.addr !2954

dec_label_pc_1400064a7:                           ; preds = %dec_label_pc_14000649e
  %21 = add i64 %19, 39, !insn.addr !2955
  %22 = icmp ugt i64 %19, -40, !insn.addr !2956
  store i64 %16, i64* %rbx.025.reg2mem
  store i64 %16, i64* %rbx.024.reg2mem
  store i64 %21, i64* %.reg2mem
  br i1 %22, label %dec_label_pc_1400064a7.thread, label %23

dec_label_pc_1400064a7.thread:                    ; preds = %dec_label_pc_140006439, %dec_label_pc_140006457, %dec_label_pc_140006476, %dec_label_pc_1400064a7
  %rbx.025.reload = load i64, i64* %rbx.025.reg2mem
  store i64 %rbx.025.reload, i64* %rbx.024.reg2mem
  store i64 -1, i64* %.reg2mem
  br label %23

; <label>:23:                                     ; preds = %dec_label_pc_1400064a7, %dec_label_pc_1400064a7.thread
  %.reload = load i64, i64* %.reg2mem
  %24 = call i64 @function_1400065e0(i64 %.reload), !insn.addr !2957
  %25 = icmp eq i64 %24, 0, !insn.addr !2958
  store i64 %.reload, i64* %rcx.0.reg2mem, !insn.addr !2959
  store i64 -1, i64* %r8.0.reg2mem, !insn.addr !2959
  br i1 %25, label %dec_label_pc_140006535, label %dec_label_pc_1400064bc, !insn.addr !2959

dec_label_pc_1400064bc:                           ; preds = %23
  %rbx.024.reload = load i64, i64* %rbx.024.reg2mem
  %26 = add i64 %24, 39, !insn.addr !2960
  %27 = and i64 %26, -32, !insn.addr !2961
  %28 = add i64 %27, -8, !insn.addr !2962
  %29 = inttoptr i64 %28 to i64*, !insn.addr !2962
  store i64 %24, i64* %29, align 8, !insn.addr !2962
  store i64 %rbx.024.reload, i64* %rbx.01.reg2mem, !insn.addr !2963
  store i64 %27, i64* %rdi.0.reg2mem, !insn.addr !2963
  br label %dec_label_pc_1400064de, !insn.addr !2963

dec_label_pc_1400064ca:                           ; preds = %dec_label_pc_14000649e
  %30 = icmp eq i64 %19, 0, !insn.addr !2964
  store i64 %16, i64* %rbx.01.reg2mem, !insn.addr !2965
  store i64 0, i64* %rdi.0.reg2mem, !insn.addr !2965
  br i1 %30, label %dec_label_pc_1400064de, label %dec_label_pc_1400064cf, !insn.addr !2965

dec_label_pc_1400064cf:                           ; preds = %dec_label_pc_1400064ca
  %31 = call i64 @function_1400065e0(i64 %19), !insn.addr !2966
  store i64 %16, i64* %rbx.01.reg2mem, !insn.addr !2967
  store i64 %31, i64* %rdi.0.reg2mem, !insn.addr !2967
  br label %dec_label_pc_1400064de, !insn.addr !2967

dec_label_pc_1400064de:                           ; preds = %dec_label_pc_1400064ca, %dec_label_pc_1400064cf, %dec_label_pc_1400064bc
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %rbx.01.reload = load i64, i64* %rbx.01.reg2mem
  store i64 %8, i64* %1, align 8, !insn.addr !2968
  %32 = mul i64 %2, 2, !insn.addr !2969
  %33 = add i64 %32, 2, !insn.addr !2969
  store i64 %rbx.01.reload, i64* %6, align 8, !insn.addr !2970
  %34 = icmp ult i64 %7, 8, !insn.addr !2971
  store i64 %rdi.0.reload, i64* %rcx.1.reg2mem, !insn.addr !2972
  store i64 %rdi.0.reload, i64* %rdi.2.reg2mem, !insn.addr !2972
  store i64 %33, i64* %r8.1.reg2mem, !insn.addr !2972
  br i1 %34, label %dec_label_pc_14000653c, label %dec_label_pc_1400064f7, !insn.addr !2972

dec_label_pc_1400064f7:                           ; preds = %dec_label_pc_1400064de
  %35 = inttoptr i64 %rdi.0.reload to i64*, !insn.addr !2973
  %36 = trunc i64 %33 to i32, !insn.addr !2973
  %37 = call i64* @memcpy(i64* %35, i64* %35, i32 %36), !insn.addr !2973
  %38 = mul i64 %7, 2, !insn.addr !2974
  %39 = add i64 %38, 2, !insn.addr !2974
  %40 = icmp ult i64 %39, 4096, !insn.addr !2975
  store i64 %39, i64* %rdx.1.reg2mem, !insn.addr !2976
  store i64 %rdi.0.reload, i64* %rbx.1.reg2mem, !insn.addr !2976
  br i1 %40, label %dec_label_pc_14000652b, label %dec_label_pc_140006513, !insn.addr !2976

dec_label_pc_140006513:                           ; preds = %dec_label_pc_1400064f7
  %41 = add i64 %rdi.0.reload, -8
  %42 = inttoptr i64 %41 to i64*, !insn.addr !2977
  %43 = load i64, i64* %42, align 8, !insn.addr !2977
  %44 = sub i64 %41, %43, !insn.addr !2978
  %45 = icmp ult i64 %44, 32
  store i64 %43, i64* %rcx.0.reg2mem, !insn.addr !2979
  store i64 %rdi.0.reload, i64* %rdi.1.reg2mem, !insn.addr !2979
  store i64 %33, i64* %r8.0.reg2mem, !insn.addr !2979
  br i1 %45, label %dec_label_pc_140006528, label %dec_label_pc_140006535, !insn.addr !2979

dec_label_pc_140006528:                           ; preds = %dec_label_pc_140006513
  %46 = add i64 %38, 41, !insn.addr !2980
  store i64 %46, i64* %rdx.1.reg2mem, !insn.addr !2981
  store i64 %43, i64* %rbx.1.reg2mem, !insn.addr !2981
  br label %dec_label_pc_14000652b, !insn.addr !2981

dec_label_pc_14000652b:                           ; preds = %dec_label_pc_140006528, %dec_label_pc_1400064f7
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %rdx.1.reload = load i64, i64* %rdx.1.reg2mem
  %47 = call i64 @function_1400065d0(i64 %rbx.1.reload, i64 %rdx.1.reload), !insn.addr !2982
  %.pre = inttoptr i64 %arg1 to i64*, !insn.addr !2983
  store i64* %.pre, i64** %.pre-phi.reg2mem, !insn.addr !2984
  store i64 %rdi.0.reload, i64* %rdi.3.reg2mem, !insn.addr !2984
  br label %dec_label_pc_140006544, !insn.addr !2984

dec_label_pc_140006535:                           ; preds = %dec_label_pc_140006513, %23
  %r8.0.reload = load i64, i64* %r8.0.reg2mem
  %rdi.1.reload = load i64, i64* %rdi.1.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !2985
  %48 = call i64 @__asm_int3(), !insn.addr !2986
  store i64 %rcx.0.reload, i64* %rcx.1.reg2mem, !insn.addr !2986
  store i64 %rdi.1.reload, i64* %rdi.2.reg2mem, !insn.addr !2986
  store i64 %r8.0.reload, i64* %r8.1.reg2mem, !insn.addr !2986
  br label %dec_label_pc_14000653c, !insn.addr !2986

dec_label_pc_14000653c:                           ; preds = %dec_label_pc_140006535, %dec_label_pc_1400064de
  %r8.1.reload = load i64, i64* %r8.1.reg2mem
  %rdi.2.reload = load i64, i64* %rdi.2.reg2mem
  %rcx.1.reload = load i64, i64* %rcx.1.reg2mem
  %49 = inttoptr i64 %rcx.1.reload to i64*, !insn.addr !2987
  %50 = inttoptr i64 %arg1 to i64*
  %51 = trunc i64 %r8.1.reload to i32, !insn.addr !2987
  %52 = call i64* @memcpy(i64* %49, i64* %50, i32 %51), !insn.addr !2987
  store i64* %50, i64** %.pre-phi.reg2mem, !insn.addr !2987
  store i64 %rdi.2.reload, i64* %rdi.3.reg2mem, !insn.addr !2987
  br label %dec_label_pc_140006544, !insn.addr !2987

dec_label_pc_140006544:                           ; preds = %dec_label_pc_14000653c, %dec_label_pc_14000652b
  %rdi.3.reload = load i64, i64* %rdi.3.reg2mem
  %.pre-phi.reload = load i64*, i64** %.pre-phi.reg2mem
  store i64 %rdi.3.reload, i64* %.pre-phi.reload, align 8, !insn.addr !2983
  ret i64 %arg1, !insn.addr !2988

dec_label_pc_140006562:                           ; preds = %dec_label_pc_140006410
  %53 = call i64 @function_140006360(), !insn.addr !2989
  %54 = call i64 @__asm_int3(), !insn.addr !2990
  %55 = call i64 @__asm_int3(), !insn.addr !2991
  %56 = call i64 @__asm_int3(), !insn.addr !2992
  %57 = call i64 @__asm_int3(), !insn.addr !2993
  %58 = call i64 @__asm_int3(), !insn.addr !2994
  %59 = call i64 @__asm_int3(), !insn.addr !2995
  %60 = call i64 @__asm_int3(), !insn.addr !2996
  %61 = call i64 @__asm_int3(), !insn.addr !2997
  %62 = call i64 @__asm_int3(), !insn.addr !2998
  %63 = call i64 @__asm_int3(), !insn.addr !2999
  %64 = call i64 @__asm_int3(), !insn.addr !3000
  %65 = call i64 @__asm_int3(), !insn.addr !3001
  %66 = call i64 @__asm_int3(), !insn.addr !3002
  %67 = call i64 @__asm_int3(), !insn.addr !3003
  %68 = call i64 @__asm_int3(), !insn.addr !3004
  ret i64 %68, !insn.addr !3005

; uselistorder directives
  uselistorder i64 %43, { 1, 0, 2 }
  uselistorder i64 %38, { 1, 0 }
  uselistorder i64 %33, { 1, 2, 0 }
  uselistorder i64 %rdi.0.reload, { 0, 3, 6, 4, 5, 1, 2 }
  uselistorder i64 %24, { 1, 0, 2 }
  uselistorder i64 %19, { 1, 0, 4, 3, 2 }
  uselistorder i64 %16, { 1, 0, 2, 4, 3, 5 }
  uselistorder i64 %14, { 1, 0 }
  uselistorder i64 %11, { 1, 0 }
  uselistorder i64 %7, { 0, 4, 2, 3, 1 }
  uselistorder i64* %rbx.025.reg2mem, { 0, 4, 3, 2, 1 }
  uselistorder i64* %rbx.024.reg2mem, { 0, 2, 1 }
  uselistorder i64* %.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rbx.01.reg2mem, { 0, 3, 1, 2 }
  uselistorder i64* %rdi.0.reg2mem, { 0, 3, 1, 2 }
  uselistorder i64* %rcx.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %r8.0.reg2mem, { 0, 2, 1 }
  uselistorder i64** %.pre-phi.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rdi.3.reg2mem, { 0, 2, 1 }
  uselistorder i64 ()* @function_140006360, { 4, 3, 2, 1, 0 }
  uselistorder i64 -32, { 0, 1, 2, 3, 5, 4 }
  uselistorder i64 (i64)* @function_1400065e0, { 11, 10, 9, 8, 7, 6, 5, 4, 1, 0, 3, 2 }
  uselistorder i64 39, { 0, 1, 2, 3, 4, 5, 6, 9, 10, 7, 8 }
  uselistorder i64 9223372036854775806, { 1, 7, 0, 6, 13, 3, 9, 2, 8, 14, 5, 11, 4, 10, 12, 15 }
  uselistorder i64 %arg1, { 1, 2, 0, 3, 4 }
  uselistorder label %dec_label_pc_1400064de, { 1, 0, 2 }
  uselistorder label %23, { 1, 0 }
  uselistorder label %dec_label_pc_1400064a7.thread, { 3, 2, 1, 0 }
}

declare void @__security_check_cookie(i64) local_unnamed_addr

define i64 @function_1400065d0(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1400065d0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i64*, !insn.addr !3006
  call void @free(i64* %2), !insn.addr !3006
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !3006
}

define i64 @function_1400065d8(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1400065d8:
  %0 = call i64 @function_1400065d0(i64 %arg1, i64 %arg2), !insn.addr !3007
  ret i64 %0, !insn.addr !3007
}

define i64 @function_1400065e0(i64 %arg1) local_unnamed_addr {
dec_label_pc_1400065e0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !3008
  br label %dec_label_pc_1400065fa, !insn.addr !3009

dec_label_pc_1400065eb:                           ; preds = %dec_label_pc_1400065fa
  %1 = call i32 @_callnewh(i32 %0), !insn.addr !3010
  %2 = icmp eq i32 %1, 0, !insn.addr !3011
  br i1 %2, label %dec_label_pc_14000660a, label %dec_label_pc_1400065fa, !insn.addr !3012

dec_label_pc_1400065fa:                           ; preds = %dec_label_pc_1400065eb, %dec_label_pc_1400065e0
  %3 = call i64* @malloc(i32 %0), !insn.addr !3008
  %4 = icmp eq i64* %3, null, !insn.addr !3013
  br i1 %4, label %dec_label_pc_1400065eb, label %dec_label_pc_140006604, !insn.addr !3014

dec_label_pc_140006604:                           ; preds = %dec_label_pc_1400065fa
  %5 = ptrtoint i64* %3 to i64, !insn.addr !3008
  ret i64 %5, !insn.addr !3015

dec_label_pc_14000660a:                           ; preds = %dec_label_pc_1400065eb
  %6 = icmp eq i64 %arg1, -1, !insn.addr !3016
  br i1 %6, label %dec_label_pc_140006616, label %dec_label_pc_140006610, !insn.addr !3017

dec_label_pc_140006610:                           ; preds = %dec_label_pc_14000660a
  %7 = call i64 @function_140007120(), !insn.addr !3018
  unreachable, !insn.addr !3018

dec_label_pc_140006616:                           ; preds = %dec_label_pc_14000660a
  %8 = call i64 @function_140007140(), !insn.addr !3019
  unreachable, !insn.addr !3019

; uselistorder directives
  uselistorder i32 %0, { 1, 0 }
  uselistorder i64 %arg1, { 1, 0 }
}

declare i64 @__scrt_acquire_startup_lock() local_unnamed_addr

define i64 @function_140006658(i64 %arg1) local_unnamed_addr {
dec_label_pc_140006658:
  %storemerge.reg2mem = alloca i64, !insn.addr !3020
  %rax.0.reg2mem = alloca i64, !insn.addr !3020
  %0 = load i8, i8* bitcast (i32* @global_var_14000c330 to i8*), align 4, !insn.addr !3021
  %1 = trunc i64 %arg1 to i32, !insn.addr !3022
  %2 = icmp eq i32 %1, 0, !insn.addr !3022
  %3 = select i1 %2, i8 1, i8 %0, !insn.addr !3023
  store i8 %3, i8* bitcast (i32* @global_var_14000c330 to i8*), align 4, !insn.addr !3024
  %4 = call i64 @function_140007174(i64 %arg1), !insn.addr !3025
  %5 = call i64 @function_1400075fc(), !insn.addr !3026
  %6 = trunc i64 %5 to i8, !insn.addr !3027
  %7 = icmp eq i8 %6, 0, !insn.addr !3027
  %8 = icmp eq i1 %7, false, !insn.addr !3028
  store i64 %5, i64* %rax.0.reg2mem, !insn.addr !3028
  br i1 %8, label %dec_label_pc_140006687, label %dec_label_pc_140006683, !insn.addr !3028

dec_label_pc_140006683:                           ; preds = %dec_label_pc_140006690, %dec_label_pc_140006658
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %9 = and i64 %rax.0.reload, -256, !insn.addr !3029
  store i64 %9, i64* %storemerge.reg2mem, !insn.addr !3030
  br label %dec_label_pc_14000669b, !insn.addr !3030

dec_label_pc_140006687:                           ; preds = %dec_label_pc_140006658
  %10 = call i64 @function_1400075fc(), !insn.addr !3031
  %11 = trunc i64 %10 to i8, !insn.addr !3032
  %12 = icmp eq i8 %11, 0, !insn.addr !3032
  %13 = icmp eq i1 %12, false, !insn.addr !3033
  br i1 %13, label %dec_label_pc_140006699, label %dec_label_pc_140006690, !insn.addr !3033

dec_label_pc_140006690:                           ; preds = %dec_label_pc_140006687
  %14 = call i64 @function_1400075fc(), !insn.addr !3034
  store i64 %14, i64* %rax.0.reg2mem, !insn.addr !3035
  br label %dec_label_pc_140006683, !insn.addr !3035

dec_label_pc_140006699:                           ; preds = %dec_label_pc_140006687
  %15 = and i64 %10, -256, !insn.addr !3036
  %16 = or i64 %15, 1, !insn.addr !3036
  store i64 %16, i64* %storemerge.reg2mem, !insn.addr !3036
  br label %dec_label_pc_14000669b, !insn.addr !3036

dec_label_pc_14000669b:                           ; preds = %dec_label_pc_140006699, %dec_label_pc_140006683
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !3037

; uselistorder directives
  uselistorder i64* %rax.0.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @function_1400066a4(i32 %arg1) local_unnamed_addr {
dec_label_pc_1400066a4:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !3038
  %rax.2.reg2mem = alloca i64, !insn.addr !3038
  %rax.1.reg2mem = alloca i64, !insn.addr !3038
  %storemerge1.reg2mem = alloca i64, !insn.addr !3038
  %rax.0.in.reg2mem = alloca i32, !insn.addr !3038
  %1 = load i64, i64* %0
  %2 = load i8, i8* @global_var_14000c331, align 1, !insn.addr !3039
  %3 = icmp eq i8 %2, 0, !insn.addr !3039
  %4 = icmp eq i1 %3, false, !insn.addr !3040
  br i1 %4, label %dec_label_pc_140006769, label %dec_label_pc_1400066b9, !insn.addr !3040

dec_label_pc_1400066b9:                           ; preds = %dec_label_pc_1400066a4
  %5 = icmp ult i32 %arg1, 2
  br i1 %5, label %dec_label_pc_1400066c2, label %dec_label_pc_140006771, !insn.addr !3041

dec_label_pc_1400066c2:                           ; preds = %dec_label_pc_1400066b9
  %6 = call i64 @function_1400072f0(), !insn.addr !3042
  %7 = trunc i64 %6 to i32, !insn.addr !3043
  %8 = icmp eq i32 %7, 0, !insn.addr !3043
  %9 = icmp eq i32 %arg1, 0, !insn.addr !3044
  %10 = icmp eq i1 %9, false, !insn.addr !3045
  %or.cond = or i1 %10, %8
  br i1 %or.cond, label %dec_label_pc_1400066f3, label %dec_label_pc_1400066cf, !insn.addr !3046

dec_label_pc_1400066cf:                           ; preds = %dec_label_pc_1400066c2
  %11 = call i32 @_initialize_onexit_table(%_onexit_table_t* bitcast (%_onexit_table_t** @global_var_14000c338 to %_onexit_table_t*)), !insn.addr !3047
  %12 = icmp eq i32 %11, 0, !insn.addr !3048
  %13 = icmp eq i1 %12, false, !insn.addr !3049
  store i32 %11, i32* %rax.0.in.reg2mem, !insn.addr !3049
  br i1 %13, label %dec_label_pc_1400066ef, label %dec_label_pc_1400066df, !insn.addr !3049

dec_label_pc_1400066df:                           ; preds = %dec_label_pc_1400066cf
  %14 = call i32 @_initialize_onexit_table(%_onexit_table_t* bitcast (%_onexit_table_t** @global_var_14000c350 to %_onexit_table_t*)), !insn.addr !3050
  %15 = icmp eq i32 %14, 0, !insn.addr !3051
  store i32 %14, i32* %rax.0.in.reg2mem, !insn.addr !3052
  store i64 0, i64* %rax.1.reg2mem, !insn.addr !3052
  br i1 %15, label %dec_label_pc_140006762, label %dec_label_pc_1400066ef, !insn.addr !3052

dec_label_pc_1400066ef:                           ; preds = %dec_label_pc_1400066df, %dec_label_pc_1400066cf
  %rax.0.in.reload = load i32, i32* %rax.0.in.reg2mem
  %16 = and i32 %rax.0.in.reload, -256
  %17 = sext i32 %16 to i64, !insn.addr !3053
  store i64 %17, i64* %storemerge.reg2mem, !insn.addr !3054
  br label %dec_label_pc_14000676b, !insn.addr !3054

dec_label_pc_1400066f3:                           ; preds = %dec_label_pc_1400066c2
  %18 = load i32, i32* @global_var_14000c010, align 4, !insn.addr !3055
  %19 = sub i32 0, %18
  %20 = and i32 %19, 63
  %21 = icmp eq i32 %20, 0, !insn.addr !3056
  store i64 -1, i64* %storemerge1.reg2mem, !insn.addr !3056
  br i1 %21, label %28, label %22, !insn.addr !3056

; <label>:22:                                     ; preds = %dec_label_pc_1400066f3
  %23 = zext i32 %20 to i64, !insn.addr !3056
  %24 = lshr i64 -1, %23, !insn.addr !3056
  %25 = sub nsw i64 64, %23, !insn.addr !3056
  %26 = shl i64 -1, %25, !insn.addr !3056
  %27 = or i64 %26, %24, !insn.addr !3056
  store i64 %27, i64* %storemerge1.reg2mem, !insn.addr !3056
  br label %28, !insn.addr !3056

; <label>:28:                                     ; preds = %dec_label_pc_1400066f3, %22
  %29 = sext i32 %18 to i64, !insn.addr !3055
  %storemerge1.reload = load i64, i64* %storemerge1.reg2mem
  %30 = xor i64 %storemerge1.reload, %29, !insn.addr !3057
  %31 = sext i64 %30 to i128, !insn.addr !3058
  %32 = call i128 @__asm_movups(i128 %31), !insn.addr !3058
  %33 = call i128 @__asm_movsd(i64 %30), !insn.addr !3059
  %34 = load i128, i128* bitcast (%_onexit_table_t** @global_var_14000c338 to i128*), align 8, !insn.addr !3060
  call void @__asm_movups.2(i128 %34, i128 %32), !insn.addr !3060
  %35 = call i128 @__asm_movups(i128 %31), !insn.addr !3061
  %36 = call i64 @__asm_movsd.5(i128 %33), !insn.addr !3062
  store i64 %36, i64* @global_var_14000c348, align 8, !insn.addr !3062
  %37 = call i128 @__asm_movsd(i64 %30), !insn.addr !3063
  %38 = load i128, i128* bitcast (%_onexit_table_t** @global_var_14000c350 to i128*), align 8, !insn.addr !3064
  call void @__asm_movups.2(i128 %38, i128 %35), !insn.addr !3064
  %39 = call i64 @__asm_movsd.5(i128 %37), !insn.addr !3065
  store i64 %39, i64* @global_var_14000c360, align 8, !insn.addr !3065
  store i64 %30, i64* %rax.1.reg2mem, !insn.addr !3065
  br label %dec_label_pc_140006762, !insn.addr !3065

dec_label_pc_140006762:                           ; preds = %28, %dec_label_pc_1400066df
  %rax.1.reload = load i64, i64* %rax.1.reg2mem
  store i8 1, i8* @global_var_14000c331, align 1, !insn.addr !3066
  store i64 %rax.1.reload, i64* %rax.2.reg2mem, !insn.addr !3066
  br label %dec_label_pc_140006769, !insn.addr !3066

dec_label_pc_140006769:                           ; preds = %dec_label_pc_140006762, %dec_label_pc_1400066a4
  %rax.2.reload = load i64, i64* %rax.2.reg2mem
  %40 = and i64 %rax.2.reload, -256, !insn.addr !3067
  %41 = or i64 %40, 1, !insn.addr !3067
  store i64 %41, i64* %storemerge.reg2mem, !insn.addr !3067
  br label %dec_label_pc_14000676b, !insn.addr !3067

dec_label_pc_14000676b:                           ; preds = %dec_label_pc_140006769, %dec_label_pc_1400066ef
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !3068

dec_label_pc_140006771:                           ; preds = %dec_label_pc_1400066b9
  %42 = call i64 @function_140007304(i64 5, i64 %1), !insn.addr !3069
  %43 = call i64 @__asm_int3(), !insn.addr !3070
  ret i64 %43, !insn.addr !3070

; uselistorder directives
  uselistorder i64 %23, { 1, 0 }
  uselistorder i32 %20, { 1, 0 }
  uselistorder i32 %18, { 1, 0 }
  uselistorder i64* %storemerge1.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rax.1.reg2mem, { 0, 2, 1 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder void (i128, i128)* @__asm_movups.2, { 0, 1, 72, 73, 74, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71 }
  uselistorder i128 (i128)* @__asm_movups, { 0, 1, 72, 73, 74, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71 }
  uselistorder %_onexit_table_t** @global_var_14000c350, { 1, 0 }
  uselistorder %_onexit_table_t** @global_var_14000c338, { 1, 0 }
  uselistorder i8* @global_var_14000c331, { 1, 0 }
  uselistorder label %28, { 1, 0 }
}

define i64 @function_14000677c(i64 %arg1) local_unnamed_addr {
dec_label_pc_14000677c:
  %0 = load i16, i16* inttoptr (i64 5368709120 to i16*), align 536870912, !insn.addr !3071
  %1 = icmp eq i16 %0, 23117, !insn.addr !3071
  %2 = icmp eq i1 %1, false, !insn.addr !3072
  br i1 %2, label %dec_label_pc_14000680a, label %dec_label_pc_140006791, !insn.addr !3072

dec_label_pc_140006791:                           ; preds = %dec_label_pc_14000677c
  %3 = load i32, i32* inttoptr (i64 5368709180 to i32*), align 4, !insn.addr !3073
  %4 = sext i32 %3 to i64, !insn.addr !3073
  %5 = add nsw i64 %4, 5368709120, !insn.addr !3074
  %6 = inttoptr i64 %5 to i32*, !insn.addr !3075
  %7 = load i32, i32* %6, align 4, !insn.addr !3075
  %8 = icmp eq i32 %7, 17744, !insn.addr !3075
  %9 = icmp eq i1 %8, false, !insn.addr !3076
  br i1 %9, label %dec_label_pc_14000680a, label %dec_label_pc_1400067ab, !insn.addr !3076

dec_label_pc_1400067ab:                           ; preds = %dec_label_pc_140006791
  %10 = add nsw i64 %4, 5368709144, !insn.addr !3077
  %11 = inttoptr i64 %10 to i16*, !insn.addr !3077
  %12 = load i16, i16* %11, align 2, !insn.addr !3077
  %13 = icmp eq i16 %12, 523, !insn.addr !3077
  %14 = icmp eq i1 %13, false, !insn.addr !3078
  br i1 %14, label %dec_label_pc_14000680a, label %dec_label_pc_1400067f3, !insn.addr !3078

dec_label_pc_1400067f3:                           ; preds = %dec_label_pc_1400067ab
  %15 = call i64 @function_140006810()
  ret i64 %15, !insn.addr !3079

dec_label_pc_14000680a:                           ; preds = %dec_label_pc_1400067ab, %dec_label_pc_140006791, %dec_label_pc_14000677c
  %16 = call i64 @function_140006810(), !insn.addr !3080
  ret i64 %16, !insn.addr !3080

; uselistorder directives
  uselistorder i64 ()* @function_140006810, { 1, 0 }
}

define i64 @function_14000680e() local_unnamed_addr {
dec_label_pc_14000680e:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = and i64 %1, -256, !insn.addr !3081
  ret i64 %2, !insn.addr !3081
}

define i64 @function_140006810() local_unnamed_addr {
dec_label_pc_140006810:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !3082
}

declare i64 @__scrt_release_startup_lock(i64) local_unnamed_addr

define i64 @function_14000683c(i64 %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_14000683c:
  %rax.0.reg2mem = alloca i64, !insn.addr !3083
  %0 = load i8, i8* bitcast (i32* @global_var_14000c330 to i8*), align 4, !insn.addr !3084
  %1 = icmp eq i8 %0, 0, !insn.addr !3084
  br i1 %1, label %dec_label_pc_140006851, label %dec_label_pc_14000684d, !insn.addr !3085

dec_label_pc_14000684d:                           ; preds = %dec_label_pc_14000683c
  %2 = trunc i32 %arg2 to i8, !insn.addr !3086
  %3 = icmp eq i8 %2, 0, !insn.addr !3086
  %4 = icmp eq i1 %3, false, !insn.addr !3087
  br i1 %4, label %dec_label_pc_14000685f, label %dec_label_pc_140006851, !insn.addr !3087

dec_label_pc_140006851:                           ; preds = %dec_label_pc_14000684d, %dec_label_pc_14000683c
  %5 = call i64 @function_1400075fc(), !insn.addr !3088
  %6 = call i64 @function_1400075fc(), !insn.addr !3089
  store i64 %6, i64* %rax.0.reg2mem, !insn.addr !3089
  br label %dec_label_pc_14000685f, !insn.addr !3089

dec_label_pc_14000685f:                           ; preds = %dec_label_pc_140006851, %dec_label_pc_14000684d
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %7 = and i64 %rax.0.reload, -256, !insn.addr !3090
  %8 = or i64 %7, 1, !insn.addr !3090
  ret i64 %8, !insn.addr !3091

; uselistorder directives
  uselistorder i8* bitcast (i32* @global_var_14000c330 to i8*), { 2, 1, 0 }
}

declare i32 ()* @_onexit(i32 ()*) local_unnamed_addr

define i64 @function_1400068b8(i64 %arg1) local_unnamed_addr {
dec_label_pc_1400068b8:
  %0 = inttoptr i64 %arg1 to i32 ()*, !insn.addr !3092
  %1 = call i32 ()* @_onexit(i32 ()* %0), !insn.addr !3092
  %2 = icmp eq i32 ()* %1, null, !insn.addr !3093
  %3 = select i1 %2, i64 4294967295, i64 0, !insn.addr !3094
  ret i64 %3, !insn.addr !3095
}

define i64 @function_1400068d0() local_unnamed_addr {
dec_label_pc_1400068d0:
  %rdx.2.reg2mem = alloca i64, !insn.addr !3096
  %rdx.1.reg2mem = alloca i64, !insn.addr !3096
  %rdx.0.reg2mem = alloca i64, !insn.addr !3096
  %rbx.1.reg2mem = alloca i64, !insn.addr !3096
  %rbx.0.in.reg2mem = alloca i64*, !insn.addr !3096
  %0 = call i1 @InitializeCriticalSectionAndSpinCount(%_RTL_CRITICAL_SECTION* bitcast (%_RTL_CRITICAL_SECTION** @global_var_14000c368 to %_RTL_CRITICAL_SECTION*), i32 4000), !insn.addr !3097
  %1 = call i64* @GetModuleHandleW(i16* getelementptr inbounds ([33 x i16], [33 x i16]* @global_var_140008550, i64 0, i64 0)), !insn.addr !3098
  %2 = icmp eq i64* %1, null, !insn.addr !3099
  %3 = icmp eq i1 %2, false, !insn.addr !3100
  store i64* %1, i64** %rbx.0.in.reg2mem, !insn.addr !3100
  br i1 %3, label %dec_label_pc_14000692c, label %dec_label_pc_140006912, !insn.addr !3100

dec_label_pc_140006912:                           ; preds = %dec_label_pc_1400068d0
  %4 = call i64* @GetModuleHandleW(i16* getelementptr inbounds ([13 x i16], [13 x i16]* @global_var_140008598, i64 0, i64 0)), !insn.addr !3101
  %5 = icmp eq i64* %4, null, !insn.addr !3102
  store i64* %4, i64** %rbx.0.in.reg2mem, !insn.addr !3103
  store i64 4000, i64* %rdx.2.reg2mem, !insn.addr !3103
  br i1 %5, label %dec_label_pc_140006a22, label %dec_label_pc_14000692c, !insn.addr !3103

dec_label_pc_14000692c:                           ; preds = %dec_label_pc_140006912, %dec_label_pc_1400068d0
  %rbx.0.in.reload = load i64*, i64** %rbx.0.in.reg2mem
  %6 = call i32 ()* @GetProcAddress(i64* %rbx.0.in.reload, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_1400085b8, i64 0, i64 0)), !insn.addr !3104
  %7 = call i32 ()* @GetProcAddress(i64* %rbx.0.in.reload, i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_var_1400085d8, i64 0, i64 0)), !insn.addr !3105
  %8 = call i32 ()* @GetProcAddress(i64* %rbx.0.in.reload, i8* getelementptr inbounds ([25 x i8], [25 x i8]* @global_var_1400085f8, i64 0, i64 0)), !insn.addr !3106
  %9 = icmp eq i32 ()* %6, null, !insn.addr !3107
  %10 = icmp eq i32 ()* %7, null, !insn.addr !3108
  %or.cond = or i1 %9, %10
  %11 = icmp eq i32 ()* %8, null, !insn.addr !3109
  %or.cond3 = or i1 %or.cond, %11
  br i1 %or.cond3, label %dec_label_pc_1400069eb, label %dec_label_pc_140006977, !insn.addr !3110

dec_label_pc_140006977:                           ; preds = %dec_label_pc_14000692c
  %12 = ptrtoint i32 ()* %7 to i64, !insn.addr !3105
  %13 = ptrtoint i32 ()* %8 to i64, !insn.addr !3106
  store i64 0, i64* @global_var_14000c398, align 8, !insn.addr !3111
  %14 = call i64 @function_140007a00(), !insn.addr !3112
  %15 = load i32, i32* @global_var_14000c010, align 4, !insn.addr !3113
  %16 = sext i32 %15 to i64, !insn.addr !3113
  %17 = sub i32 0, %15, !insn.addr !3114
  %18 = and i32 %17, 63
  %19 = icmp eq i32 %18, 0, !insn.addr !3115
  br i1 %19, label %.thread, label %21, !insn.addr !3115

.thread:                                          ; preds = %dec_label_pc_140006977
  %20 = xor i64 %16, %12, !insn.addr !3116
  store i64 %20, i64* @global_var_14000c3a0, align 8, !insn.addr !3117
  store i64 %13, i64* %rbx.1.reg2mem
  br label %31

; <label>:21:                                     ; preds = %dec_label_pc_140006977
  %22 = zext i32 %18 to i64, !insn.addr !3115
  %23 = lshr i64 %12, %22, !insn.addr !3115
  %24 = sub nsw i64 64, %22
  %25 = shl i64 %12, %24, !insn.addr !3115
  %26 = or i64 %25, %23, !insn.addr !3115
  %27 = xor i64 %26, %16, !insn.addr !3116
  store i64 %27, i64* @global_var_14000c3a0, align 8, !insn.addr !3117
  %28 = lshr i64 %13, %22, !insn.addr !3118
  %29 = shl i64 %13, %24, !insn.addr !3118
  %30 = or i64 %29, %28, !insn.addr !3118
  store i64 %30, i64* %rbx.1.reg2mem, !insn.addr !3118
  br label %31, !insn.addr !3118

; <label>:31:                                     ; preds = %.thread, %21
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %32 = xor i64 %rbx.1.reload, %16, !insn.addr !3119
  store i64 %32, i64* @global_var_14000c3a8, align 8, !insn.addr !3120
  store i64 %32, i64* %rdx.0.reg2mem, !insn.addr !3120
  br label %dec_label_pc_1400069c0, !insn.addr !3120

dec_label_pc_1400069c0:                           ; preds = %dec_label_pc_1400069eb, %31
  %33 = call i64 @function_1400066a4(i32 0), !insn.addr !3121
  %34 = trunc i64 %33 to i8, !insn.addr !3122
  %35 = icmp eq i8 %34, 0, !insn.addr !3122
  br i1 %35, label %dec_label_pc_140006a0c, label %dec_label_pc_1400069cc, !insn.addr !3123

dec_label_pc_1400069cc:                           ; preds = %dec_label_pc_1400069c0
  %36 = call i64 @function_1400068b8(i64 5368736304), !insn.addr !3124
  ret i64 0, !insn.addr !3125

dec_label_pc_1400069eb:                           ; preds = %dec_label_pc_14000692c
  %37 = call i64* @CreateEventW(%_SECURITY_ATTRIBUTES* null, i1 true, i1 false, i16* null), !insn.addr !3126
  %38 = ptrtoint i64* %37 to i64, !insn.addr !3126
  store i64 %38, i64* @global_var_14000c398, align 8, !insn.addr !3127
  %39 = icmp eq i64* %37, null, !insn.addr !3128
  store i64 1, i64* %rdx.0.reg2mem, !insn.addr !3129
  store i64 1, i64* %rdx.1.reg2mem, !insn.addr !3129
  br i1 %39, label %dec_label_pc_140006a17, label %dec_label_pc_1400069c0, !insn.addr !3129

dec_label_pc_140006a0c:                           ; preds = %dec_label_pc_1400069c0
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %40 = call i64 @function_140007304(i64 7, i64 %rdx.0.reload), !insn.addr !3130
  store i64 %rdx.0.reload, i64* %rdx.1.reg2mem, !insn.addr !3131
  br label %dec_label_pc_140006a17, !insn.addr !3131

dec_label_pc_140006a17:                           ; preds = %dec_label_pc_140006a0c, %dec_label_pc_1400069eb
  %rdx.1.reload = load i64, i64* %rdx.1.reg2mem
  %41 = call i64 @function_140007304(i64 7, i64 %rdx.1.reload), !insn.addr !3132
  store i64 %rdx.1.reload, i64* %rdx.2.reg2mem, !insn.addr !3133
  br label %dec_label_pc_140006a22, !insn.addr !3133

dec_label_pc_140006a22:                           ; preds = %dec_label_pc_140006a17, %dec_label_pc_140006912
  %rdx.2.reload = load i64, i64* %rdx.2.reg2mem
  %42 = call i64 @function_140007304(i64 7, i64 %rdx.2.reload), !insn.addr !3134
  %43 = call i64 @__asm_int3(), !insn.addr !3135
  %44 = call i64 @__asm_int3(), !insn.addr !3136
  %45 = call i64 @__asm_int3(), !insn.addr !3137
  ret i64 %45, !insn.addr !3137

; uselistorder directives
  uselistorder i64 %22, { 0, 2, 1 }
  uselistorder i32 %18, { 1, 0 }
  uselistorder i64 %16, { 0, 2, 1 }
  uselistorder i64 %13, { 2, 1, 0 }
  uselistorder i64 %12, { 2, 1, 0 }
  uselistorder i32 ()* %8, { 1, 0 }
  uselistorder i32 ()* %7, { 1, 0 }
  uselistorder i64* %rbx.0.in.reload, { 2, 1, 0 }
  uselistorder i64* %rbx.1.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rdx.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rdx.2.reg2mem, { 0, 2, 1 }
  uselistorder %_SECURITY_ATTRIBUTES* null, { 0, 1, 2, 3, 5, 4, 6, 7, 8, 9, 10 }
  uselistorder i64* @global_var_14000c3a0, { 1, 0 }
  uselistorder i32 ()* (i64*, i8*)* @GetProcAddress, { 2, 1, 0 }
  uselistorder label %31, { 1, 0 }
}

declare i64 @_Init_thread_footer(i64*) local_unnamed_addr

declare i64 @_Init_thread_header(i64*) local_unnamed_addr

define i64 @function_140006b20() local_unnamed_addr {
dec_label_pc_140006b20:
  %0 = load i64, i64* @global_var_14000c398, align 8, !insn.addr !3138
  %1 = icmp eq i64 %0, 0, !insn.addr !3139
  %2 = icmp eq i1 %1, false, !insn.addr !3140
  br i1 %2, label %dec_label_pc_140006b58, label %dec_label_pc_140006b30, !insn.addr !3140

dec_label_pc_140006b30:                           ; preds = %dec_label_pc_140006b20
  %3 = call i64 @function_140007a00(), !insn.addr !3141
  ret i64 %3, !insn.addr !3141

dec_label_pc_140006b58:                           ; preds = %dec_label_pc_140006b20
  %4 = inttoptr i64 %0 to i64*, !insn.addr !3142
  %5 = call i1 @SetEvent(i64* %4), !insn.addr !3142
  %6 = load i64, i64* @global_var_14000c398, align 8, !insn.addr !3143
  %7 = inttoptr i64 %6 to i64*, !insn.addr !3144
  %8 = call i1 @ResetEvent(i64* %7), !insn.addr !3144
  %9 = sext i1 %8 to i64, !insn.addr !3144
  ret i64 %9, !insn.addr !3144
}

define i64 @function_140006b70(i64 %arg1) local_unnamed_addr {
dec_label_pc_140006b70:
  %0 = load i64, i64* @global_var_14000c398, align 8, !insn.addr !3145
  %1 = icmp eq i64 %0, 0, !insn.addr !3145
  %2 = icmp eq i1 %1, false, !insn.addr !3146
  br i1 %2, label %dec_label_pc_140006bb5, label %dec_label_pc_140006b82, !insn.addr !3146

dec_label_pc_140006b82:                           ; preds = %dec_label_pc_140006b70
  %3 = call i64 @function_140007a00(), !insn.addr !3147
  ret i64 %3, !insn.addr !3147

dec_label_pc_140006bb5:                           ; preds = %dec_label_pc_140006b70
  call void @LeaveCriticalSection(%_RTL_CRITICAL_SECTION* bitcast (%_RTL_CRITICAL_SECTION** @global_var_14000c368 to %_RTL_CRITICAL_SECTION*)), !insn.addr !3148
  %4 = load i64, i64* @global_var_14000c398, align 8, !insn.addr !3149
  %5 = trunc i64 %arg1 to i32, !insn.addr !3150
  %6 = inttoptr i64 %4 to i64*, !insn.addr !3151
  %7 = call i32 @WaitForSingleObjectEx(i64* %6, i32 %5, i1 false), !insn.addr !3151
  call void @EnterCriticalSection(%_RTL_CRITICAL_SECTION* bitcast (%_RTL_CRITICAL_SECTION** @global_var_14000c368 to %_RTL_CRITICAL_SECTION*)), !insn.addr !3152
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !3152
}

define i64 @function_140006be8() local_unnamed_addr {
dec_label_pc_140006be8:
  %0 = alloca i64
  %1 = load i64, i64* %0
  call void @_set_app_type(i64 2), !insn.addr !3153
  %2 = call i64 @function_1400075e4(), !insn.addr !3154
  %3 = trunc i64 %2 to i32, !insn.addr !3155
  %4 = call i32 @_set_fmode(i32 %3), !insn.addr !3156
  %5 = call i32* @__p__commode(), !insn.addr !3157
  %6 = call i64 @function_140007494(), !insn.addr !3158
  %7 = trunc i64 %6 to i32, !insn.addr !3159
  store i32 %7, i32* %5, align 4, !insn.addr !3159
  %8 = call i64 @function_1400066a4(i32 1), !insn.addr !3160
  %9 = trunc i64 %8 to i8, !insn.addr !3161
  %10 = icmp eq i8 %9, 0, !insn.addr !3161
  br i1 %10, label %dec_label_pc_140006c94, label %dec_label_pc_140006c21, !insn.addr !3162

dec_label_pc_140006c21:                           ; preds = %dec_label_pc_140006be8
  %11 = call i64 @function_140007640(), !insn.addr !3163
  %12 = call i64 @function_1400068b8(i64 5368739452), !insn.addr !3164
  %13 = call i64 @function_1400010a0(), !insn.addr !3165
  %14 = and i64 %13, 4294967295, !insn.addr !3166
  %15 = call i32 @_configure_narrow_argv(i64 %14), !insn.addr !3167
  %16 = icmp eq i32 %15, 0, !insn.addr !3168
  %17 = icmp eq i1 %16, false, !insn.addr !3169
  br i1 %17, label %dec_label_pc_140006c94, label %dec_label_pc_140006c42, !insn.addr !3169

dec_label_pc_140006c42:                           ; preds = %dec_label_pc_140006c21
  %18 = inttoptr i64 %14 to i64*, !insn.addr !3170
  call void @InitializeSListHead(i64* %18), !insn.addr !3170
  %19 = call i64 @function_140007624(), !insn.addr !3171
  %20 = trunc i64 %19 to i32, !insn.addr !3172
  %21 = icmp eq i32 %20, 0, !insn.addr !3172
  br i1 %21, label %dec_label_pc_140006c5c, label %dec_label_pc_140006c50, !insn.addr !3173

dec_label_pc_140006c50:                           ; preds = %dec_label_pc_140006c42
  call void @__setusermatherr(i64 5368738964), !insn.addr !3174
  br label %dec_label_pc_140006c5c, !insn.addr !3174

dec_label_pc_140006c5c:                           ; preds = %dec_label_pc_140006c50, %dec_label_pc_140006c42
  %22 = call i64 @function_140007534(), !insn.addr !3175
  %23 = call i64 @function_140007534(), !insn.addr !3176
  %24 = call i64 @function_140007494(), !insn.addr !3177
  %25 = trunc i64 %24 to i32, !insn.addr !3178
  %26 = call i32 @_configthreadlocale(i32 %25), !insn.addr !3179
  %27 = call i64 @function_1400075fc(), !insn.addr !3180
  %28 = trunc i64 %27 to i8, !insn.addr !3181
  %29 = icmp eq i8 %28, 0, !insn.addr !3181
  br i1 %29, label %dec_label_pc_140006c80, label %dec_label_pc_140006c7b, !insn.addr !3182

dec_label_pc_140006c7b:                           ; preds = %dec_label_pc_140006c5c
  %30 = call i32 @_initialize_narrow_environment(), !insn.addr !3183
  br label %dec_label_pc_140006c80, !insn.addr !3183

dec_label_pc_140006c80:                           ; preds = %dec_label_pc_140006c7b, %dec_label_pc_140006c5c
  %31 = call i64 @function_140007494(), !insn.addr !3184
  %32 = call i64 @function_140007494(), !insn.addr !3185
  %33 = trunc i64 %32 to i32, !insn.addr !3186
  %34 = icmp eq i32 %33, 0, !insn.addr !3186
  %35 = icmp eq i1 %34, false, !insn.addr !3187
  br i1 %35, label %dec_label_pc_140006c94, label %dec_label_pc_140006c8e, !insn.addr !3187

dec_label_pc_140006c8e:                           ; preds = %dec_label_pc_140006c80
  ret i64 %32, !insn.addr !3188

dec_label_pc_140006c94:                           ; preds = %dec_label_pc_140006c80, %dec_label_pc_140006c21, %dec_label_pc_140006be8
  %36 = call i64 @function_140007304(i64 7, i64 %1), !insn.addr !3189
  %37 = call i64 @__asm_int3(), !insn.addr !3190
  %38 = call i64 @__asm_int3(), !insn.addr !3191
  %39 = call i64 @function_140007608(), !insn.addr !3192
  ret i64 0, !insn.addr !3193

; uselistorder directives
  uselistorder i64 ()* @function_1400075fc, { 5, 4, 3, 2, 1, 0 }
  uselistorder i64 ()* @function_140007534, { 1, 0 }
  uselistorder i64 (i64)* @function_1400068b8, { 5, 4, 1, 0, 3, 2 }
  uselistorder i64 (i32)* @function_1400066a4, { 1, 0 }
}

define i64 @function_140006cb0() local_unnamed_addr {
dec_label_pc_140006cb0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = inttoptr i64 %1 to i32 (%_EXCEPTION_POINTERS*)*, !insn.addr !3194
  %3 = call i32 (%_EXCEPTION_POINTERS*)* @SetUnhandledExceptionFilter(i32 (%_EXCEPTION_POINTERS*)* %2), !insn.addr !3194
  %4 = call i64 @function_140007494(), !insn.addr !3195
  %5 = trunc i64 %4 to i32, !insn.addr !3196
  %6 = call i32 @_set_new_mode(i32 %5), !insn.addr !3197
  %7 = sext i32 %6 to i64, !insn.addr !3197
  ret i64 %7, !insn.addr !3197
}

define i64 @function_140006ccc() local_unnamed_addr {
dec_label_pc_140006ccc:
  %0 = alloca i64
  %rbx.1.reg2mem = alloca i64, !insn.addr !3198
  %rbx.0.reg2mem = alloca i64, !insn.addr !3198
  %rax.0.reg2mem = alloca i64, !insn.addr !3198
  %rdi.0.reg2mem = alloca i8, !insn.addr !3198
  %rcx.0.reg2mem = alloca i64, !insn.addr !3198
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = call i64 @function_140006658(i64 1), !insn.addr !3199
  %4 = trunc i64 %3 to i8, !insn.addr !3200
  %5 = icmp eq i8 %4, 0, !insn.addr !3200
  br i1 %5, label %dec_label_pc_140006e18, label %dec_label_pc_140006ce8, !insn.addr !3201

dec_label_pc_140006ce8:                           ; preds = %dec_label_pc_140006ccc
  %6 = call i64 @__scrt_acquire_startup_lock(), !insn.addr !3202
  %7 = and i64 %6, 255, !insn.addr !3203
  %8 = and i64 %1, -256, !insn.addr !3203
  %9 = or i64 %7, %8, !insn.addr !3203
  %10 = load i32, i32* @global_var_14000c320, align 4, !insn.addr !3204
  %11 = icmp eq i32 %10, 1, !insn.addr !3205
  store i64 %9, i64* %rbx.0.reg2mem, !insn.addr !3206
  br i1 %11, label %dec_label_pc_140006e23, label %dec_label_pc_140006d06, !insn.addr !3206

dec_label_pc_140006d06:                           ; preds = %dec_label_pc_140006ce8
  %12 = zext i32 %10 to i64, !insn.addr !3204
  %13 = icmp eq i32 %10, 0, !insn.addr !3207
  %14 = icmp eq i1 %13, false, !insn.addr !3208
  store i64 %12, i64* %rcx.0.reg2mem, !insn.addr !3208
  store i8 1, i8* %rdi.0.reg2mem, !insn.addr !3208
  br i1 %14, label %dec_label_pc_140006d5c, label %dec_label_pc_140006d0a, !insn.addr !3208

dec_label_pc_140006d0a:                           ; preds = %dec_label_pc_140006d06
  store i32 1, i32* @global_var_14000c320, align 4, !insn.addr !3209
  %15 = call i32 @_initterm_e(i32 ()** bitcast (i32 ()*** @global_var_1400084b8 to i32 ()**), i32 ()** bitcast (i32 ()*** @global_var_1400084d8 to i32 ()**)), !insn.addr !3210
  %16 = icmp eq i32 %15, 0, !insn.addr !3211
  store i64 255, i64* %rax.0.reg2mem, !insn.addr !3212
  br i1 %16, label %dec_label_pc_140006d35, label %dec_label_pc_140006e0d, !insn.addr !3212

dec_label_pc_140006d35:                           ; preds = %dec_label_pc_140006d0a
  call void @_initterm(void ()** bitcast (void ()*** @global_var_140008490 to void ()**), void ()** bitcast (void ()*** @global_var_1400084b0 to void ()**)), !insn.addr !3213
  store i32 2, i32* @global_var_14000c320, align 4, !insn.addr !3214
  store i64 ptrtoint (void ()*** @global_var_140008490 to i64), i64* %rcx.0.reg2mem, !insn.addr !3215
  store i8 0, i8* %rdi.0.reg2mem, !insn.addr !3215
  br label %dec_label_pc_140006d5c, !insn.addr !3215

dec_label_pc_140006d5c:                           ; preds = %dec_label_pc_140006d06, %dec_label_pc_140006d35
  %rdi.0.reload = load i8, i8* %rdi.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %17 = and i64 %rcx.0.reload, -256, !insn.addr !3216
  %18 = or i64 %17, %7, !insn.addr !3216
  %19 = call i64 @__scrt_release_startup_lock(i64 %18), !insn.addr !3217
  %20 = call i64 @function_140007630(), !insn.addr !3218
  %21 = inttoptr i64 %20 to i64*, !insn.addr !3219
  %22 = load i64, i64* %21, align 8, !insn.addr !3219
  %23 = icmp eq i64 %22, 0, !insn.addr !3219
  br i1 %23, label %dec_label_pc_140006d8f, label %dec_label_pc_140006d71, !insn.addr !3220

dec_label_pc_140006d71:                           ; preds = %dec_label_pc_140006d5c
  %24 = call i64 @function_14000677c(i64 %20), !insn.addr !3221
  %25 = trunc i64 %24 to i8, !insn.addr !3222
  %26 = icmp eq i8 %25, 0, !insn.addr !3222
  br i1 %26, label %dec_label_pc_140006d8f, label %dec_label_pc_140006d7d, !insn.addr !3223

dec_label_pc_140006d7d:                           ; preds = %dec_label_pc_140006d71
  %27 = call i64 @function_140007a00(), !insn.addr !3224
  br label %dec_label_pc_140006d8f, !insn.addr !3224

dec_label_pc_140006d8f:                           ; preds = %dec_label_pc_140006d7d, %dec_label_pc_140006d71, %dec_label_pc_140006d5c
  %28 = call i64 @function_140007638(), !insn.addr !3225
  %29 = inttoptr i64 %28 to i64*, !insn.addr !3226
  %30 = load i64, i64* %29, align 8, !insn.addr !3226
  %31 = icmp eq i64 %30, 0, !insn.addr !3226
  br i1 %31, label %dec_label_pc_140006db1, label %dec_label_pc_140006d9d, !insn.addr !3227

dec_label_pc_140006d9d:                           ; preds = %dec_label_pc_140006d8f
  %32 = call i64 @function_14000677c(i64 %28), !insn.addr !3228
  %33 = trunc i64 %32 to i8, !insn.addr !3229
  %34 = icmp eq i8 %33, 0, !insn.addr !3229
  br i1 %34, label %dec_label_pc_140006db1, label %dec_label_pc_140006da9, !insn.addr !3230

dec_label_pc_140006da9:                           ; preds = %dec_label_pc_140006d9d
  %35 = load i64, i64* %29, align 8, !insn.addr !3231
  %36 = inttoptr i64 %35 to void (i64*, i32, i64*)*, !insn.addr !3232
  call void @_register_thread_local_exe_atexit_callback(void (i64*, i32, i64*)* %36), !insn.addr !3232
  br label %dec_label_pc_140006db1, !insn.addr !3232

dec_label_pc_140006db1:                           ; preds = %dec_label_pc_140006da9, %dec_label_pc_140006d9d, %dec_label_pc_140006d8f
  %37 = call i64 @function_140007450(), !insn.addr !3233
  %38 = call i8* @_get_narrow_winmain_command_line(), !insn.addr !3234
  %39 = call i64 @function_140004ba0(), !insn.addr !3235
  %40 = and i64 %39, 4294967295, !insn.addr !3236
  %41 = call i64 @function_140007498(i64 5368709120), !insn.addr !3237
  %42 = trunc i64 %41 to i8, !insn.addr !3238
  %43 = icmp eq i8 %42, 0, !insn.addr !3238
  store i64 %40, i64* %rbx.1.reg2mem, !insn.addr !3239
  br i1 %43, label %dec_label_pc_140006e2d, label %dec_label_pc_140006ddd, !insn.addr !3239

dec_label_pc_140006ddd:                           ; preds = %dec_label_pc_140006db1
  %44 = icmp eq i8 %rdi.0.reload, 0, !insn.addr !3240
  %45 = icmp eq i1 %44, false, !insn.addr !3241
  br i1 %45, label %dec_label_pc_140006de7, label %dec_label_pc_140006de2, !insn.addr !3241

dec_label_pc_140006de2:                           ; preds = %dec_label_pc_140006ddd
  call void @_cexit(), !insn.addr !3242
  br label %dec_label_pc_140006de7, !insn.addr !3242

dec_label_pc_140006de7:                           ; preds = %dec_label_pc_140006de2, %dec_label_pc_140006ddd
  %46 = call i64 @function_14000683c(i64 5368709121, i32 0), !insn.addr !3243
  store i64 %40, i64* %rax.0.reg2mem, !insn.addr !3244
  br label %dec_label_pc_140006e0d, !insn.addr !3244

dec_label_pc_140006e0d:                           ; preds = %dec_label_pc_140006d0a, %dec_label_pc_140006de7
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !3245

dec_label_pc_140006e18:                           ; preds = %dec_label_pc_140006ccc
  %47 = call i64 @function_140007304(i64 7, i64 %2), !insn.addr !3246
  br label %dec_label_pc_140006e23, !insn.addr !3247

dec_label_pc_140006e23:                           ; preds = %dec_label_pc_140006e18, %dec_label_pc_140006ce8
  %rbx.0.reload = load i64, i64* %rbx.0.reg2mem
  %48 = call i64 @function_140007304(i64 7, i64 %2), !insn.addr !3248
  store i64 %rbx.0.reload, i64* %rbx.1.reg2mem, !insn.addr !3248
  br label %dec_label_pc_140006e2d, !insn.addr !3248

dec_label_pc_140006e2d:                           ; preds = %dec_label_pc_140006e23, %dec_label_pc_140006db1
  %rbx.1.reload = load i64, i64* %rbx.1.reg2mem
  %49 = trunc i64 %rbx.1.reload to i32, !insn.addr !3249
  call void @exit(i32 %49), !insn.addr !3250
  unreachable, !insn.addr !3250

; uselistorder directives
  uselistorder i64 %40, { 1, 0 }
  uselistorder i32 %10, { 0, 2, 1 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64* %rcx.0.reg2mem, { 0, 2, 1 }
  uselistorder i8* %rdi.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rax.0.reg2mem, { 0, 2, 1 }
  uselistorder i64* %rbx.1.reg2mem, { 0, 2, 1 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i64 (i64, i64)* @function_140007304, { 1, 0, 6, 5, 4, 3, 2 }
  uselistorder i64 4294967295, { 1, 2, 3, 5, 4, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 0, 17, 18, 19, 20, 21 }
  uselistorder i64 ()* @function_140007a00, { 0, 2, 1, 3 }
  uselistorder i64 (i64)* @function_14000677c, { 1, 0 }
  uselistorder void ()*** @global_var_140008490, { 1, 0 }
  uselistorder i32* @global_var_14000c320, { 2, 1, 0 }
  uselistorder label %dec_label_pc_140006e0d, { 1, 0 }
  uselistorder label %dec_label_pc_140006d5c, { 1, 0 }
}

define i64 @entry_point() local_unnamed_addr {
dec_label_pc_140006e40:
  %0 = call i64 @function_140007538(), !insn.addr !3251
  %1 = call i64 @function_140006ccc(), !insn.addr !3252
  ret i64 %1, !insn.addr !3252
}

define i64 @function_140007010(i64* %arg1) local_unnamed_addr {
dec_label_pc_140007010:
  %0 = ptrtoint i64* %arg1 to i64
  %1 = add i64 %0, 16, !insn.addr !3253
  %2 = inttoptr i64 %1 to i64*, !insn.addr !3253
  store i64 0, i64* %2, align 8, !insn.addr !3253
  %3 = add i64 %0, 8, !insn.addr !3254
  %4 = inttoptr i64 %3 to i64*, !insn.addr !3254
  store i64 ptrtoint ([15 x i8]* @global_var_140008670 to i64), i64* %4, align 8, !insn.addr !3254
  store i64 ptrtoint (i64* @global_var_140008660 to i64), i64* %arg1, align 8, !insn.addr !3255
  ret i64 %0, !insn.addr !3256

; uselistorder directives
  uselistorder i64 %0, { 0, 2, 1 }
}

define i64 @function_140007070(i64* %arg1) local_unnamed_addr {
dec_label_pc_140007070:
  %0 = ptrtoint i64* %arg1 to i64
  %1 = add i64 %0, 16, !insn.addr !3257
  %2 = inttoptr i64 %1 to i64*, !insn.addr !3257
  store i64 0, i64* %2, align 8, !insn.addr !3257
  %3 = add i64 %0, 8, !insn.addr !3258
  %4 = inttoptr i64 %3 to i64*, !insn.addr !3258
  store i64 ptrtoint ([21 x i8]* @global_var_140008698 to i64), i64* %4, align 8, !insn.addr !3258
  store i64 ptrtoint (i64* @global_var_140008688 to i64), i64* %arg1, align 8, !insn.addr !3259
  ret i64 %0, !insn.addr !3260

; uselistorder directives
  uselistorder i64 %0, { 0, 2, 1 }
}

define i64 @function_1400070dc(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1400070dc:
  %0 = inttoptr i64 %arg1 to i64*, !insn.addr !3261
  store i64 ptrtoint (i64* @global_var_140008630 to i64), i64* %0, align 8, !insn.addr !3261
  %1 = add i64 %arg1, 8, !insn.addr !3262
  %2 = call i64 @__std_exception_destroy(i64 %1), !insn.addr !3263
  %3 = and i64 %arg2, 1
  %4 = icmp eq i64 %3, 0, !insn.addr !3264
  br i1 %4, label %dec_label_pc_140007110, label %dec_label_pc_140007103, !insn.addr !3265

dec_label_pc_140007103:                           ; preds = %dec_label_pc_1400070dc
  %5 = call i64 @function_1400065d0(i64 %arg1, i64 24), !insn.addr !3266
  br label %dec_label_pc_140007110, !insn.addr !3266

dec_label_pc_140007110:                           ; preds = %dec_label_pc_140007103, %dec_label_pc_1400070dc
  ret i64 %arg1, !insn.addr !3267

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0, 3, 2 }
}

define i64 @function_140007120() local_unnamed_addr {
dec_label_pc_140007120:
  %stack_var_-40 = alloca i64, align 8
  %0 = call i64 @function_140007010(i64* nonnull %stack_var_-40), !insn.addr !3268
  call void @_CxxThrowException(i64* nonnull %stack_var_-40, i64* nonnull @global_var_14000a2d8), !insn.addr !3269
  unreachable, !insn.addr !3269
}

define i64 @function_140007140() local_unnamed_addr {
dec_label_pc_140007140:
  %stack_var_-40 = alloca i64, align 8
  %0 = call i64 @function_140007070(i64* nonnull %stack_var_-40), !insn.addr !3270
  call void @_CxxThrowException(i64* nonnull %stack_var_-40, i64* nonnull @global_var_14000a360), !insn.addr !3271
  unreachable, !insn.addr !3271
}

define i64 @function_140007174(i64 %arg1) local_unnamed_addr {
dec_label_pc_140007174:
  %rdi.0.reg2mem = alloca i64, !insn.addr !3272
  %rdx.0.reg2mem = alloca i32, !insn.addr !3272
  %r8.0.in.reg2mem = alloca i32, !insn.addr !3272
  store i32 2, i32* @global_var_14000c01c, align 4, !insn.addr !3273
  store i32 1, i32* bitcast (i64* @global_var_14000c018 to i32*), align 8, !insn.addr !3274
  %0 = call %0 @__asm_cpuid(i32 0), !insn.addr !3275
  %1 = extractvalue %0 %0, 1, !insn.addr !3275
  %2 = extractvalue %0 %0, 2, !insn.addr !3275
  %3 = extractvalue %0 %0, 3, !insn.addr !3275
  %4 = xor i32 %2, 1818588270, !insn.addr !3276
  %5 = xor i32 %1, 1970169159, !insn.addr !3277
  %6 = or i32 %5, %4, !insn.addr !3278
  %7 = call %1 @__asm_cpuid.3(i32 1), !insn.addr !3279
  %8 = xor i32 %3, 1231384169, !insn.addr !3280
  %9 = or i32 %6, %8, !insn.addr !3281
  %10 = icmp eq i32 %9, 0, !insn.addr !3281
  %11 = icmp eq i1 %10, false, !insn.addr !3282
  br i1 %11, label %dec_label_pc_140007230, label %dec_label_pc_1400071e0, !insn.addr !3282

dec_label_pc_1400071e0:                           ; preds = %dec_label_pc_140007174
  %12 = extractvalue %1 %7, 0, !insn.addr !3279
  store i64 -1, i64* bitcast ([3 x i8]* @global_var_14000c020 to i64*), align 8, !insn.addr !3283
  %13 = and i32 %12, 268386288
  switch i32 %13, label %dec_label_pc_140007202 [
    i32 67264, label %dec_label_pc_14000721c
    i32 132704, label %dec_label_pc_14000721c
    i32 132720, label %dec_label_pc_14000721c
  ]

dec_label_pc_140007202:                           ; preds = %dec_label_pc_1400071e0
  %14 = add nsw i32 %13, -198224, !insn.addr !3284
  %15 = icmp ult i32 %14, 33
  br i1 %15, label %dec_label_pc_14000720c, label %dec_label_pc_140007230, !insn.addr !3285

dec_label_pc_14000720c:                           ; preds = %dec_label_pc_140007202
  %16 = add nuw nsw i32 %13, 48
  %17 = and i32 %16, 48
  %18 = zext i32 %17 to i64, !insn.addr !3286
  %19 = shl i64 1, %18, !insn.addr !3286
  %20 = and i64 %19, 4295032833, !insn.addr !3286
  %21 = icmp ne i64 %20, 0, !insn.addr !3286
  %22 = icmp eq i1 %21, false, !insn.addr !3287
  br i1 %22, label %dec_label_pc_140007230, label %dec_label_pc_14000721c, !insn.addr !3287

dec_label_pc_14000721c:                           ; preds = %dec_label_pc_1400071e0, %dec_label_pc_1400071e0, %dec_label_pc_1400071e0, %dec_label_pc_14000720c
  %23 = load i32, i32* @global_var_14000c920, align 4, !insn.addr !3288
  %24 = or i32 %23, 1, !insn.addr !3289
  store i32 %24, i32* @global_var_14000c920, align 4, !insn.addr !3290
  store i32 %24, i32* %r8.0.in.reg2mem, !insn.addr !3291
  br label %dec_label_pc_140007237, !insn.addr !3291

dec_label_pc_140007230:                           ; preds = %dec_label_pc_140007202, %dec_label_pc_14000720c, %dec_label_pc_140007174
  %25 = load i32, i32* @global_var_14000c920, align 4, !insn.addr !3292
  store i32 %25, i32* %r8.0.in.reg2mem, !insn.addr !3292
  br label %dec_label_pc_140007237, !insn.addr !3292

dec_label_pc_140007237:                           ; preds = %dec_label_pc_140007230, %dec_label_pc_14000721c
  %26 = extractvalue %0 %0, 0, !insn.addr !3275
  %27 = extractvalue %1 %7, 3, !insn.addr !3279
  %28 = icmp ult i32 %26, 7, !insn.addr !3293
  store i32 %27, i32* %rdx.0.reg2mem, !insn.addr !3293
  store i64 0, i64* %rdi.0.reg2mem, !insn.addr !3293
  br i1 %28, label %dec_label_pc_140007266, label %dec_label_pc_140007240, !insn.addr !3293

dec_label_pc_140007240:                           ; preds = %dec_label_pc_140007237
  %29 = call %2 @__asm_cpuid.4(i32 7), !insn.addr !3294
  %30 = extractvalue %2 %29, 1, !insn.addr !3294
  %31 = extractvalue %2 %29, 3, !insn.addr !3294
  %32 = zext i32 %30 to i64, !insn.addr !3295
  %33 = and i32 %30, 512, !insn.addr !3296
  %34 = icmp ne i32 %33, 0, !insn.addr !3296
  %35 = icmp eq i1 %34, false, !insn.addr !3297
  store i32 %31, i32* %rdx.0.reg2mem, !insn.addr !3297
  store i64 %32, i64* %rdi.0.reg2mem, !insn.addr !3297
  br i1 %35, label %dec_label_pc_140007266, label %dec_label_pc_14000725b, !insn.addr !3297

dec_label_pc_14000725b:                           ; preds = %dec_label_pc_140007240
  %r8.0.in.reload = load i32, i32* %r8.0.in.reg2mem
  %36 = or i32 %r8.0.in.reload, 2, !insn.addr !3298
  store i32 %36, i32* @global_var_14000c920, align 4, !insn.addr !3299
  store i32 %31, i32* %rdx.0.reg2mem, !insn.addr !3299
  store i64 %32, i64* %rdi.0.reg2mem, !insn.addr !3299
  br label %dec_label_pc_140007266, !insn.addr !3299

dec_label_pc_140007266:                           ; preds = %dec_label_pc_14000725b, %dec_label_pc_140007240, %dec_label_pc_140007237
  %37 = extractvalue %1 %7, 2, !insn.addr !3279
  %38 = zext i32 %37 to i64, !insn.addr !3300
  %39 = and i64 %38, 1048576
  %40 = icmp ne i64 %39, 0, !insn.addr !3301
  %41 = icmp eq i1 %40, false, !insn.addr !3302
  br i1 %41, label %dec_label_pc_1400072dd, label %dec_label_pc_14000726d, !insn.addr !3302

dec_label_pc_14000726d:                           ; preds = %dec_label_pc_140007266
  store i32 2, i32* bitcast (i64* @global_var_14000c018 to i32*), align 8, !insn.addr !3303
  store i32 6, i32* @global_var_14000c01c, align 4, !insn.addr !3304
  %42 = and i64 %38, 134217728
  %43 = icmp ne i64 %42, 0, !insn.addr !3305
  %44 = icmp eq i1 %43, false, !insn.addr !3306
  br i1 %44, label %dec_label_pc_1400072dd, label %dec_label_pc_140007288, !insn.addr !3306

dec_label_pc_140007288:                           ; preds = %dec_label_pc_14000726d
  %45 = and i64 %38, 268435456
  %46 = icmp ne i64 %45, 0, !insn.addr !3307
  %47 = icmp eq i1 %46, false, !insn.addr !3308
  br i1 %47, label %dec_label_pc_1400072dd, label %dec_label_pc_14000728f, !insn.addr !3308

dec_label_pc_14000728f:                           ; preds = %dec_label_pc_140007288
  %rdx.0.reload = load i32, i32* %rdx.0.reg2mem
  %48 = call i64 @__asm_xgetbv(i32 0, i32 %rdx.0.reload), !insn.addr !3309
  %49 = and i64 %48, 6, !insn.addr !3310
  %50 = icmp eq i64 %49, 6, !insn.addr !3311
  %51 = icmp eq i1 %50, false, !insn.addr !3312
  br i1 %51, label %dec_label_pc_1400072dd, label %dec_label_pc_1400072ab, !insn.addr !3312

dec_label_pc_1400072ab:                           ; preds = %dec_label_pc_14000728f
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  %52 = load i32, i32* @global_var_14000c01c, align 4, !insn.addr !3313
  %53 = or i32 %52, 8, !insn.addr !3314
  store i32 3, i32* bitcast (i64* @global_var_14000c018 to i32*), align 8, !insn.addr !3315
  store i32 %53, i32* @global_var_14000c01c, align 4, !insn.addr !3316
  %54 = and i64 %rdi.0.reload, 32
  %55 = icmp eq i64 %54, 0, !insn.addr !3317
  br i1 %55, label %dec_label_pc_1400072dd, label %dec_label_pc_1400072ca, !insn.addr !3318

dec_label_pc_1400072ca:                           ; preds = %dec_label_pc_1400072ab
  %56 = or i32 %52, 40
  store i32 5, i32* bitcast (i64* @global_var_14000c018 to i32*), align 8, !insn.addr !3319
  store i32 %56, i32* @global_var_14000c01c, align 4, !insn.addr !3320
  br label %dec_label_pc_1400072dd, !insn.addr !3320

dec_label_pc_1400072dd:                           ; preds = %dec_label_pc_1400072ca, %dec_label_pc_1400072ab, %dec_label_pc_14000728f, %dec_label_pc_140007288, %dec_label_pc_14000726d, %dec_label_pc_140007266
  ret i64 0, !insn.addr !3321

; uselistorder directives
  uselistorder i64 %38, { 1, 0, 2 }
  uselistorder i32 %13, { 2, 1, 0 }
  uselistorder %1 %7, { 1, 0, 2 }
  uselistorder %0 %0, { 3, 0, 1, 2 }
  uselistorder i32* %r8.0.in.reg2mem, { 0, 2, 1 }
  uselistorder i32 5, { 1, 0 }
  uselistorder i32 3, { 2, 0, 1, 3 }
  uselistorder i32 8, { 1, 0 }
  uselistorder i64 6, { 0, 1, 2, 3, 6, 4, 7, 5, 8 }
  uselistorder i32 6, { 5, 2, 1, 3, 0, 4 }
  uselistorder i32 7, { 1, 0 }
  uselistorder i32* @global_var_14000c920, { 3, 2, 1, 0 }
  uselistorder i64 -1, { 17, 18, 19, 0, 20, 1, 2, 21, 3, 4, 5, 22, 6, 16, 23, 7, 8, 24, 9, 10, 11, 25, 12, 26, 27, 13, 14, 28, 29, 15 }
  uselistorder i32* @global_var_14000c01c, { 4, 3, 2, 1, 0 }
  uselistorder i32 2, { 19, 20, 21, 24, 6, 0, 7, 1, 8, 2, 9, 3, 10, 5, 18, 11, 12, 13, 4, 14, 15, 22, 23, 16, 17 }
  uselistorder label %dec_label_pc_140007230, { 1, 0, 2 }
  uselistorder label %dec_label_pc_14000721c, { 3, 0, 1, 2 }
}

define i64 @function_1400072f0() local_unnamed_addr {
dec_label_pc_1400072f0:
  %0 = load i32, i32* @global_var_14000c030, align 4, !insn.addr !3322
  %1 = icmp eq i32 %0, 0, !insn.addr !3322
  %2 = icmp eq i1 %1, false, !insn.addr !3323
  %3 = zext i1 %2 to i64, !insn.addr !3323
  ret i64 %3, !insn.addr !3324
}

define i64 @function_1400072fc() local_unnamed_addr {
dec_label_pc_1400072fc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  store i32 0, i32* @global_var_14000c924, align 4, !insn.addr !3325
  ret i64 %1, !insn.addr !3326
}

define i64 @function_140007304(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_140007304:
  %0 = alloca i64
  %rax.0.reg2mem = alloca i64, !insn.addr !3327
  %stack_var_-1416 = alloca i64, align 8
  %stack_var_-1400 = alloca i64, align 8
  %stack_var_32 = alloca i64, align 8
  %stack_var_24 = alloca i64, align 8
  %stack_var_16 = alloca i64, align 8
  %1 = load i64, i64* %0
  %stack_var_-1240 = alloca i64, align 8
  %2 = call i1 @IsProcessorFeaturePresent(i32 23), !insn.addr !3328
  %3 = icmp eq i1 %2, false, !insn.addr !3329
  br i1 %3, label %dec_label_pc_14000732d, label %dec_label_pc_140007329, !insn.addr !3330

dec_label_pc_140007329:                           ; preds = %dec_label_pc_140007304
  call void @__asm_int(i8 41), !insn.addr !3331
  br label %dec_label_pc_14000732d, !insn.addr !3331

dec_label_pc_14000732d:                           ; preds = %dec_label_pc_140007329, %dec_label_pc_140007304
  %4 = call i64 @function_1400072fc(), !insn.addr !3332
  %5 = call i64* @memset(i64* nonnull %stack_var_-1240, i32 0, i32 1232), !insn.addr !3333
  %6 = bitcast i64* %stack_var_-1240 to %_CONTEXT*, !insn.addr !3334
  call void @RtlCaptureContext(%_CONTEXT* nonnull %6), !insn.addr !3334
  %7 = call %_IMAGE_RUNTIME_FUNCTION_ENTRY* @RtlLookupFunctionEntry(i64 %1, i64* nonnull %stack_var_16, %_UNWIND_HISTORY_TABLE* null), !insn.addr !3335
  %8 = icmp eq %_IMAGE_RUNTIME_FUNCTION_ENTRY* %7, null, !insn.addr !3336
  br i1 %8, label %dec_label_pc_1400073ad, label %dec_label_pc_140007371, !insn.addr !3337

dec_label_pc_140007371:                           ; preds = %dec_label_pc_14000732d
  %9 = load i64, i64* %stack_var_16, align 8, !insn.addr !3338
  %10 = bitcast i64* %stack_var_32 to i64**, !insn.addr !3339
  %11 = call i64 (%_EXCEPTION_RECORD*, i64*, %_CONTEXT*, i64*)* @RtlVirtualUnwind(i32 0, i64 %9, i64 %1, %_IMAGE_RUNTIME_FUNCTION_ENTRY* nonnull %7, %_CONTEXT* nonnull %6, i64** nonnull %10, i64* nonnull %stack_var_24, %_KNONVOLATILE_CONTEXT_POINTERS* null), !insn.addr !3339
  br label %dec_label_pc_1400073ad, !insn.addr !3339

dec_label_pc_1400073ad:                           ; preds = %dec_label_pc_140007371, %dec_label_pc_14000732d
  %12 = call i64* @memset(i64* nonnull %stack_var_-1400, i32 0, i32 152), !insn.addr !3340
  store i64 1073741845, i64* %stack_var_-1400, align 8, !insn.addr !3341
  %13 = call i1 @IsDebuggerPresent(), !insn.addr !3342
  %14 = ptrtoint i64* %stack_var_-1400 to i64, !insn.addr !3343
  store i64 %14, i64* %stack_var_-1416, align 8, !insn.addr !3343
  %15 = call i32 (%_EXCEPTION_POINTERS*)* @SetUnhandledExceptionFilter(i32 (%_EXCEPTION_POINTERS*)* null), !insn.addr !3344
  %16 = bitcast i64* %stack_var_-1416 to %_EXCEPTION_POINTERS*, !insn.addr !3345
  %17 = call i32 @UnhandledExceptionFilter(%_EXCEPTION_POINTERS* nonnull %16), !insn.addr !3345
  %18 = sext i32 %17 to i64, !insn.addr !3345
  %19 = icmp eq i32 %17, 0, !insn.addr !3346
  %20 = icmp eq i1 %19, false, !insn.addr !3347
  store i64 %18, i64* %rax.0.reg2mem, !insn.addr !3347
  br i1 %20, label %dec_label_pc_14000743d, label %dec_label_pc_140007435, !insn.addr !3347

dec_label_pc_140007435:                           ; preds = %dec_label_pc_1400073ad
  %21 = call i64 @function_1400072fc(), !insn.addr !3348
  store i64 %21, i64* %rax.0.reg2mem, !insn.addr !3348
  br label %dec_label_pc_14000743d, !insn.addr !3348

dec_label_pc_14000743d:                           ; preds = %dec_label_pc_140007435, %dec_label_pc_1400073ad
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !3349

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %stack_var_16, { 1, 0 }
  uselistorder i64* %stack_var_-1400, { 1, 2, 0 }
  uselistorder i64 ()* @function_1400072fc, { 1, 0 }
}

define i64 @function_140007450() local_unnamed_addr {
dec_label_pc_140007450:
  %0 = alloca i16
  %1 = alloca i8
  %2 = load i16, i16* %0
  %3 = load i8, i8* %1
  %stack_var_-120 = alloca i64, align 8
  %4 = call i64* @memset(i64* nonnull %stack_var_-120, i32 0, i32 104), !insn.addr !3350
  %5 = bitcast i64* %stack_var_-120 to %_STARTUPINFOW*, !insn.addr !3351
  call void @GetStartupInfoW(%_STARTUPINFOW* nonnull %5), !insn.addr !3351
  %6 = and i8 %3, 1, !insn.addr !3352
  %7 = icmp eq i8 %6, 0, !insn.addr !3352
  %8 = icmp eq i1 %7, false, !insn.addr !3353
  %9 = zext i16 %2 to i64
  %10 = select i1 %8, i64 %9, i64 10, !insn.addr !3353
  ret i64 %10, !insn.addr !3354

; uselistorder directives
  uselistorder i64 10, { 0, 1, 3, 4, 2, 5, 6 }
}

define i64 @function_14000748c() local_unnamed_addr {
dec_label_pc_14000748c:
  %0 = call i64 @function_140007494(), !insn.addr !3355
  ret i64 %0, !insn.addr !3355

; uselistorder directives
  uselistorder i64 ()* @function_140007494, { 4, 5, 0, 3, 2, 1 }
}

define i64 @function_140007494() local_unnamed_addr {
dec_label_pc_140007494:
  ret i64 0, !insn.addr !3356
}

define i64 @function_140007498(i64 %arg1) local_unnamed_addr {
dec_label_pc_140007498:
  %storemerge.reg2mem = alloca i64, !insn.addr !3357
  %rax.0.reg2mem = alloca i64, !insn.addr !3357
  %0 = call i64* @GetModuleHandleW(i16* null), !insn.addr !3358
  %1 = ptrtoint i64* %0 to i64, !insn.addr !3358
  %2 = icmp eq i64* %0, null, !insn.addr !3359
  store i64 %1, i64* %rax.0.reg2mem, !insn.addr !3360
  br i1 %2, label %dec_label_pc_1400074e3, label %dec_label_pc_1400074a9, !insn.addr !3360

dec_label_pc_1400074a9:                           ; preds = %dec_label_pc_140007498
  %3 = bitcast i64* %0 to i16*, !insn.addr !3361
  %4 = load i16, i16* %3, align 2, !insn.addr !3361
  %5 = icmp eq i16 %4, 23117, !insn.addr !3361
  %6 = icmp eq i1 %5, false, !insn.addr !3362
  store i64 %1, i64* %rax.0.reg2mem, !insn.addr !3362
  br i1 %6, label %dec_label_pc_1400074e3, label %dec_label_pc_1400074b3, !insn.addr !3362

dec_label_pc_1400074b3:                           ; preds = %dec_label_pc_1400074a9
  %7 = add i64 %1, 60, !insn.addr !3363
  %8 = inttoptr i64 %7 to i32*, !insn.addr !3363
  %9 = load i32, i32* %8, align 4, !insn.addr !3363
  %10 = sext i32 %9 to i64, !insn.addr !3363
  %11 = add i64 %10, %1, !insn.addr !3364
  %12 = inttoptr i64 %11 to i32*, !insn.addr !3365
  %13 = load i32, i32* %12, align 4, !insn.addr !3365
  %14 = icmp eq i32 %13, 17744, !insn.addr !3365
  %15 = icmp eq i1 %14, false, !insn.addr !3366
  store i64 %1, i64* %rax.0.reg2mem, !insn.addr !3366
  br i1 %15, label %dec_label_pc_1400074e3, label %dec_label_pc_1400074c2, !insn.addr !3366

dec_label_pc_1400074c2:                           ; preds = %dec_label_pc_1400074b3
  %16 = add i64 %11, 24, !insn.addr !3367
  %17 = inttoptr i64 %16 to i16*, !insn.addr !3367
  %18 = load i16, i16* %17, align 2, !insn.addr !3367
  %19 = icmp eq i16 %18, 523, !insn.addr !3367
  %20 = icmp eq i1 %19, false, !insn.addr !3368
  store i64 523, i64* %rax.0.reg2mem, !insn.addr !3368
  br i1 %20, label %dec_label_pc_1400074e3, label %dec_label_pc_1400074cd, !insn.addr !3368

dec_label_pc_1400074cd:                           ; preds = %dec_label_pc_1400074c2
  %21 = add i64 %11, 132, !insn.addr !3369
  %22 = inttoptr i64 %21 to i32*, !insn.addr !3369
  %23 = load i32, i32* %22, align 4, !insn.addr !3369
  %24 = icmp ult i32 %23, 15
  store i64 523, i64* %rax.0.reg2mem, !insn.addr !3370
  br i1 %24, label %dec_label_pc_1400074e3, label %dec_label_pc_1400074d6, !insn.addr !3370

dec_label_pc_1400074d6:                           ; preds = %dec_label_pc_1400074cd
  %25 = add i64 %11, 248, !insn.addr !3371
  %26 = inttoptr i64 %25 to i32*, !insn.addr !3371
  %27 = load i32, i32* %26, align 4, !insn.addr !3371
  %28 = icmp eq i32 %27, 0, !insn.addr !3371
  store i64 523, i64* %rax.0.reg2mem, !insn.addr !3372
  store i64 513, i64* %storemerge.reg2mem, !insn.addr !3372
  br i1 %28, label %dec_label_pc_1400074e3, label %dec_label_pc_1400074e5, !insn.addr !3372

dec_label_pc_1400074e3:                           ; preds = %dec_label_pc_1400074d6, %dec_label_pc_1400074cd, %dec_label_pc_1400074c2, %dec_label_pc_1400074b3, %dec_label_pc_1400074a9, %dec_label_pc_140007498
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  %29 = and i64 %rax.0.reload, -256, !insn.addr !3373
  store i64 %29, i64* %storemerge.reg2mem, !insn.addr !3373
  br label %dec_label_pc_1400074e5, !insn.addr !3373

dec_label_pc_1400074e5:                           ; preds = %dec_label_pc_1400074d6, %dec_label_pc_1400074e3
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !3374

; uselistorder directives
  uselistorder i64 %11, { 2, 1, 0, 3 }
  uselistorder i64 %1, { 0, 3, 4, 1, 2 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64* null, { 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 0, 16, 15, 17, 18, 19, 1, 2, 3, 4, 20, 21, 22, 23, 24, 25 }
  uselistorder i64* (i16*)* @GetModuleHandleW, { 0, 2, 1 }
  uselistorder i16* null, { 2, 3, 1, 0 }
  uselistorder label %dec_label_pc_1400074e5, { 1, 0 }
}

define i32 (%_EXCEPTION_POINTERS*)* @function_1400074ec(i32 (%_EXCEPTION_POINTERS*)* %lpTopLevelExceptionFilter) local_unnamed_addr {
dec_label_pc_1400074ec:
  %0 = call i32 (%_EXCEPTION_POINTERS*)* @SetUnhandledExceptionFilter(i32 (%_EXCEPTION_POINTERS*)* inttoptr (i64 5368739068 to i32 (%_EXCEPTION_POINTERS*)*)), !insn.addr !3375
  ret i32 (%_EXCEPTION_POINTERS*)* %0, !insn.addr !3375

; uselistorder directives
  uselistorder i32 (%_EXCEPTION_POINTERS*)* (i32 (%_EXCEPTION_POINTERS*)*)* @SetUnhandledExceptionFilter, { 2, 1, 0 }
}

define i64 @function_1400074fc(i64 %arg1) local_unnamed_addr {
dec_label_pc_1400074fc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = icmp eq i32 %2, -529697949, !insn.addr !3376
  %4 = icmp eq i1 %3, false, !insn.addr !3377
  br i1 %4, label %dec_label_pc_140007527, label %dec_label_pc_14000750b, !insn.addr !3377

dec_label_pc_14000750b:                           ; preds = %dec_label_pc_1400074fc
  %5 = add i64 %arg1, 24, !insn.addr !3378
  %6 = inttoptr i64 %5 to i32*, !insn.addr !3378
  %7 = load i32, i32* %6, align 4, !insn.addr !3378
  %8 = icmp eq i32 %7, 4, !insn.addr !3378
  %9 = icmp eq i1 %8, false, !insn.addr !3379
  br i1 %9, label %dec_label_pc_140007527, label %dec_label_pc_140007511, !insn.addr !3379

dec_label_pc_140007511:                           ; preds = %dec_label_pc_14000750b
  %10 = add i64 %arg1, 32, !insn.addr !3380
  %11 = inttoptr i64 %10 to i32*, !insn.addr !3380
  %12 = load i32, i32* %11, align 4, !insn.addr !3380
  switch i32 %12, label %dec_label_pc_140007527 [
    i32 429065506, label %dec_label_pc_14000752e
    i32 429065505, label %dec_label_pc_14000752e
    i32 429065504, label %dec_label_pc_14000752e
    i32 26820608, label %dec_label_pc_14000752e
  ]

dec_label_pc_140007527:                           ; preds = %dec_label_pc_140007511, %dec_label_pc_14000750b, %dec_label_pc_1400074fc
  ret i64 0, !insn.addr !3381

dec_label_pc_14000752e:                           ; preds = %dec_label_pc_140007511, %dec_label_pc_140007511, %dec_label_pc_140007511, %dec_label_pc_140007511
  %13 = call i64 @terminate(i32 %12), !insn.addr !3382
  %14 = call i64 @__asm_int3(), !insn.addr !3383
  ret i64 %14, !insn.addr !3383

; uselistorder directives
  uselistorder i32 4, { 0, 1, 2, 3, 5, 4 }
}

define i64 @function_140007534() local_unnamed_addr {
dec_label_pc_140007534:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !3384
}

define i64 @function_140007538() local_unnamed_addr {
dec_label_pc_140007538:
  %0 = load i32, i32* @global_var_14000c010, align 4, !insn.addr !3385
  %1 = sub i32 0, %0
  %2 = sub i32 %1, 1
  %3 = sext i32 %2 to i64, !insn.addr !3386
  store i64 %3, i64* @global_var_14000c008, align 8, !insn.addr !3387
  ret i64 %3, !insn.addr !3388

; uselistorder directives
  uselistorder i32* @global_var_14000c010, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }
}

define i64 @function_1400075e4() local_unnamed_addr {
dec_label_pc_1400075e4:
  ret i64 16384, !insn.addr !3389
}

define void @function_1400075ec(i64* %ListHead) local_unnamed_addr {
dec_label_pc_1400075ec:
  call void @InitializeSListHead(i64* nonnull @global_var_14000c930), !insn.addr !3390
  ret void, !insn.addr !3390

; uselistorder directives
  uselistorder void (i64*)* @InitializeSListHead, { 1, 0 }
}

define i64 @function_1400075fc() local_unnamed_addr {
dec_label_pc_1400075fc:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = and i64 %1, -256, !insn.addr !3391
  %3 = or i64 %2, 1, !insn.addr !3391
  ret i64 %3, !insn.addr !3392

; uselistorder directives
  uselistorder i64 -256, { 2, 3, 7, 8, 4, 0, 1, 5, 6 }
}

define i64 @function_140007600() local_unnamed_addr {
dec_label_pc_140007600:
  ret i64 ptrtoint (i64* @global_var_14000c940 to i64), !insn.addr !3393
}

define i64 @function_140007608() local_unnamed_addr {
dec_label_pc_140007608:
  %0 = call i64 @function_140001160(), !insn.addr !3394
  %1 = inttoptr i64 %0 to i64*, !insn.addr !3395
  %2 = load i64, i64* %1, align 8, !insn.addr !3395
  %3 = or i64 %2, 4, !insn.addr !3395
  store i64 %3, i64* %1, align 8, !insn.addr !3395
  %4 = call i64 @function_140007600(), !insn.addr !3396
  %5 = inttoptr i64 %4 to i64*, !insn.addr !3397
  %6 = load i64, i64* %5, align 8, !insn.addr !3397
  %7 = or i64 %6, 2, !insn.addr !3397
  store i64 %7, i64* %5, align 8, !insn.addr !3397
  ret i64 %4, !insn.addr !3398

; uselistorder directives
  uselistorder i64 %4, { 1, 0 }
  uselistorder i64 ()* @function_140001160, { 4, 3, 2, 0, 1 }
}

define i64 @function_140007624() local_unnamed_addr {
dec_label_pc_140007624:
  %0 = load i32, i32* @global_var_14000c028, align 4, !insn.addr !3399
  %1 = icmp eq i32 %0, 0, !insn.addr !3399
  %2 = zext i1 %1 to i64, !insn.addr !3400
  ret i64 %2, !insn.addr !3401
}

define i64 @function_140007630() local_unnamed_addr {
dec_label_pc_140007630:
  ret i64 ptrtoint (i64* @global_var_14000ce40 to i64), !insn.addr !3402
}

define i64 @function_140007638() local_unnamed_addr {
dec_label_pc_140007638:
  ret i64 ptrtoint (i64* @global_var_14000ce38 to i64), !insn.addr !3403
}

define i64 @function_140007640() local_unnamed_addr {
dec_label_pc_140007671:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !3404
}

define i64 @function_14000767c() local_unnamed_addr {
dec_label_pc_1400076ad:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !3405
}

define i64 @function_1400076c0(i64* %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_1400076c0:
  %0 = ptrtoint i64* %arg1 to i64
  %1 = add i64 %0, 40, !insn.addr !3406
  %2 = inttoptr i64 %1 to i64*, !insn.addr !3407
  %3 = call i64* @memset(i64* %2, i32 0, i32 40), !insn.addr !3407
  %4 = add i64 %0, 80, !insn.addr !3408
  %5 = inttoptr i64 %4 to i64*, !insn.addr !3408
  store i64 0, i64* %5, align 8, !insn.addr !3408
  %6 = add i64 %0, 88, !insn.addr !3409
  %7 = inttoptr i64 %6 to i32*, !insn.addr !3409
  store i32 0, i32* %7, align 4, !insn.addr !3409
  %8 = add i64 %0, 92, !insn.addr !3410
  %9 = inttoptr i64 %8 to i32*, !insn.addr !3410
  store i32 0, i32* %9, align 4, !insn.addr !3410
  %10 = add i64 %0, 16, !insn.addr !3411
  %11 = inttoptr i64 %10 to i64*, !insn.addr !3411
  store i64 5368709120, i64* %11, align 8, !insn.addr !3411
  %12 = add i64 %0, 8, !insn.addr !3412
  %13 = inttoptr i64 %12 to i64*, !insn.addr !3412
  store i64 5368709120, i64* %13, align 8, !insn.addr !3412
  %14 = add i64 %0, 32, !insn.addr !3413
  %15 = inttoptr i64 %14 to i64*, !insn.addr !3413
  store i64 ptrtoint (i32* @global_var_1400086b0 to i64), i64* %15, align 8, !insn.addr !3413
  %16 = bitcast i64* %arg1 to i32*, !insn.addr !3414
  store i32 96, i32* %16, align 4, !insn.addr !3414
  %17 = add i64 %0, 24, !insn.addr !3415
  %18 = inttoptr i64 %17 to i32*, !insn.addr !3415
  store i32 3584, i32* %18, align 4, !insn.addr !3415
  br i1 icmp ne (i32 and (i32 ptrtoint (i32* @global_var_1400086b0 to i32), i32 ptrtoint (i32* @global_var_1400086b0 to i32)), i32 0), label %dec_label_pc_140007757, label %dec_label_pc_140007721, !insn.addr !3416

dec_label_pc_140007721:                           ; preds = %dec_label_pc_1400076c0
  %19 = call i32 @GetLastError(), !insn.addr !3417
  %20 = icmp ne i32 %19, 0
  %21 = icmp eq i1 %20, false, !insn.addr !3418
  br i1 %21, label %dec_label_pc_140007757, label %dec_label_pc_140007739, !insn.addr !3418

dec_label_pc_140007739:                           ; preds = %dec_label_pc_140007721
  %22 = call i1 @IsDebuggerPresent(), !insn.addr !3419
  %23 = icmp eq i1 %22, false, !insn.addr !3420
  br i1 %23, label %dec_label_pc_140007750, label %dec_label_pc_140007743, !insn.addr !3421

dec_label_pc_140007743:                           ; preds = %dec_label_pc_140007739
  call void @OutputDebugStringW(i16* getelementptr inbounds ([65 x i16], [65 x i16]* @global_var_1400086c0, i64 0, i64 0)), !insn.addr !3422
  br label %dec_label_pc_140007750, !insn.addr !3422

dec_label_pc_140007750:                           ; preds = %dec_label_pc_140007743, %dec_label_pc_140007739
  store i8 1, i8* bitcast (i64* @global_var_14000c9c4 to i8*), align 8, !insn.addr !3423
  br label %dec_label_pc_140007757, !insn.addr !3423

dec_label_pc_140007757:                           ; preds = %dec_label_pc_140007750, %dec_label_pc_140007721, %dec_label_pc_1400076c0
  ret i64 %0, !insn.addr !3424

; uselistorder directives
  uselistorder i64 %0, { 0, 5, 4, 2, 7, 6, 3, 1, 8 }
  uselistorder i8 1, { 3, 4, 0, 2, 1 }
  uselistorder i1 ()* @IsDebuggerPresent, { 1, 0 }
  uselistorder i64 24, { 14, 10, 15, 8, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 11, 71, 72, 73, 74, 26, 27, 28, 29, 30, 31, 32, 33, 34, 5, 35, 1, 36, 37, 38, 39, 40, 41, 42, 43, 6, 44, 0, 45, 46, 53, 54, 55, 56, 57, 58, 59, 60, 3, 61, 62, 63, 64, 65, 66, 67, 2, 68, 47, 48, 49, 50, 51, 52, 7, 9, 69, 70, 4, 12, 13 }
  uselistorder i64 5368709120, { 2, 1, 3, 0, 4 }
  uselistorder i32 40, { 1, 0 }
}

define i64 @function_140007768(i64* %arg1) local_unnamed_addr {
dec_label_pc_140007768:
  %0 = ptrtoint i64* %arg1 to i64
  %1 = add i64 %0, 40, !insn.addr !3425
  %2 = inttoptr i64 %1 to %_RTL_CRITICAL_SECTION*, !insn.addr !3426
  call void @DeleteCriticalSection(%_RTL_CRITICAL_SECTION* %2), !insn.addr !3426
  %3 = add i64 %0, 80, !insn.addr !3427
  %4 = inttoptr i64 %3 to i64*, !insn.addr !3427
  %5 = load i64, i64* %4, align 8, !insn.addr !3427
  %6 = icmp eq i64 %5, 0, !insn.addr !3428
  br i1 %6, label %dec_label_pc_14000778e, label %dec_label_pc_140007784, !insn.addr !3429

dec_label_pc_140007784:                           ; preds = %dec_label_pc_140007768
  %7 = inttoptr i64 %5 to i64*, !insn.addr !3430
  call void @free(i64* %7), !insn.addr !3430
  store i64 0, i64* %4, align 8, !insn.addr !3431
  br label %dec_label_pc_14000778e, !insn.addr !3431

dec_label_pc_14000778e:                           ; preds = %dec_label_pc_140007784, %dec_label_pc_140007768
  %8 = add i64 %0, 88, !insn.addr !3432
  %9 = inttoptr i64 %8 to i32*, !insn.addr !3432
  store i32 0, i32* %9, align 4, !insn.addr !3432
  %10 = add i64 %0, 92, !insn.addr !3433
  %11 = inttoptr i64 %10 to i32*, !insn.addr !3433
  store i32 0, i32* %11, align 4, !insn.addr !3433
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !3434
}

define i64 @function_14000779c(i64* %arg1, i32 %arg2) local_unnamed_addr {
dec_label_pc_14000779c:
  %0 = alloca i64
  %rdi.0.reg2mem = alloca i64, !insn.addr !3435
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = ptrtoint i64* %arg1 to i64
  %4 = add i64 %3, 40, !insn.addr !3436
  %5 = inttoptr i64 %4 to %_RTL_CRITICAL_SECTION*, !insn.addr !3437
  call void @EnterCriticalSection(%_RTL_CRITICAL_SECTION* %5), !insn.addr !3437
  %6 = add i64 %3, 88, !insn.addr !3438
  %7 = inttoptr i64 %6 to i32*, !insn.addr !3438
  %8 = load i32, i32* %7, align 4, !insn.addr !3438
  %9 = icmp slt i32 %8, %arg2, !insn.addr !3439
  %10 = icmp slt i32 %arg2, 0, !insn.addr !3440
  %or.cond = or i1 %10, %9
  store i64 0, i64* %rdi.0.reg2mem, !insn.addr !3439
  br i1 %or.cond, label %dec_label_pc_1400077d4, label %dec_label_pc_1400077cb, !insn.addr !3439

dec_label_pc_1400077cb:                           ; preds = %dec_label_pc_14000779c
  %11 = icmp eq i32 %8, %arg2, !insn.addr !3441
  %12 = icmp eq i1 %11, false, !insn.addr !3442
  br i1 %12, label %dec_label_pc_1400077f6, label %dec_label_pc_1400077d0, !insn.addr !3442

dec_label_pc_1400077d0:                           ; preds = %dec_label_pc_1400077cb
  %13 = add i64 %3, 16, !insn.addr !3443
  %14 = inttoptr i64 %13 to i64*, !insn.addr !3443
  %15 = load i64, i64* %14, align 8, !insn.addr !3443
  store i64 %15, i64* %rdi.0.reg2mem, !insn.addr !3443
  br label %dec_label_pc_1400077d4, !insn.addr !3443

dec_label_pc_1400077d4:                           ; preds = %dec_label_pc_1400077f8, %dec_label_pc_1400077d0, %dec_label_pc_14000779c
  %rdi.0.reload = load i64, i64* %rdi.0.reg2mem
  call void @LeaveCriticalSection(%_RTL_CRITICAL_SECTION* %5), !insn.addr !3444
  ret i64 %rdi.0.reload, !insn.addr !3445

dec_label_pc_1400077f6:                           ; preds = %dec_label_pc_1400077cb
  %16 = icmp sgt i32 %8, %arg2, !insn.addr !3446
  br i1 %16, label %dec_label_pc_1400077f8, label %dec_label_pc_140007802, !insn.addr !3446

dec_label_pc_1400077f8:                           ; preds = %dec_label_pc_1400077f6
  %17 = sext i32 %arg2 to i64, !insn.addr !3447
  %18 = add i64 %3, 80, !insn.addr !3448
  %19 = inttoptr i64 %18 to i64*, !insn.addr !3448
  %20 = load i64, i64* %19, align 8, !insn.addr !3448
  %21 = mul i64 %17, 8, !insn.addr !3449
  %22 = add i64 %20, %21, !insn.addr !3449
  %23 = inttoptr i64 %22 to i64*, !insn.addr !3449
  %24 = load i64, i64* %23, align 8, !insn.addr !3449
  store i64 %24, i64* %rdi.0.reg2mem, !insn.addr !3450
  br label %dec_label_pc_1400077d4, !insn.addr !3450

dec_label_pc_140007802:                           ; preds = %dec_label_pc_1400077f6
  %25 = trunc i64 %2 to i32, !insn.addr !3451
  %26 = inttoptr i64 %1 to i32*, !insn.addr !3451
  call void @RaiseException(i32 -1073741684, i32 1, i32 %25, i32* %26), !insn.addr !3451
  %27 = call i64 @__asm_int3(), !insn.addr !3452
  %28 = call i64 @__CxxFrameHandler3(), !insn.addr !3453
  ret i64 %28, !insn.addr !3453

; uselistorder directives
  uselistorder i32 %8, { 1, 0, 2 }
  uselistorder i64 %3, { 1, 0, 2, 3 }
  uselistorder i64* %rdi.0.reg2mem, { 2, 0, 1, 3 }
  uselistorder i64* %0, { 1, 0 }
  uselistorder i64 80, { 2, 0, 1 }
  uselistorder void (%_RTL_CRITICAL_SECTION*)* @LeaveCriticalSection, { 1, 0 }
  uselistorder i1 false, { 40, 6, 39, 26, 27, 41, 42, 43, 44, 45, 7, 46, 47, 48, 49, 50, 51, 52, 53, 135, 136, 28, 29, 8, 54, 55, 9, 30, 56, 57, 58, 59, 31, 0, 32, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 24, 70, 71, 25, 75, 76, 77, 122, 123, 124, 10, 125, 126, 11, 127, 12, 13, 128, 129, 130, 131, 132, 133, 134, 78, 79, 80, 81, 82, 83, 84, 14, 15, 16, 17, 18, 19, 20, 85, 21, 86, 87, 88, 89, 90, 91, 92, 99, 100, 101, 102, 103, 104, 107, 105, 106, 108, 109, 22, 23, 1, 93, 94, 95, 96, 97, 98, 33, 34, 35, 110, 111, 36, 37, 72, 73, 74, 2, 114, 3, 115, 4, 116, 5, 117, 118, 119, 120, 121, 112, 113, 38 }
  uselistorder void (%_RTL_CRITICAL_SECTION*)* @EnterCriticalSection, { 1, 0 }
  uselistorder i64 40, { 8, 6, 5, 0, 1, 2, 3, 4, 7 }
  uselistorder i32 %arg2, { 4, 1, 2, 0, 3 }
}

define i64 @function_140007818() local_unnamed_addr {
dec_label_pc_140007818:
  %0 = call i64 @__std_terminate(), !insn.addr !3454
  ret i64 %0, !insn.addr !3454
}

define i64 @function_14000781e() local_unnamed_addr {
dec_label_pc_14000781e:
  %0 = call i64 @_purecall(), !insn.addr !3455
  ret i64 %0, !insn.addr !3455
}

define i64 @function_140007824() local_unnamed_addr {
dec_label_pc_140007824:
  %0 = call i64 @__C_specific_handler(), !insn.addr !3456
  ret i64 %0, !insn.addr !3456
}

define i64 @function_14000782a() local_unnamed_addr {
dec_label_pc_14000782a:
  %0 = call i64 @__std_exception_copy(), !insn.addr !3457
  ret i64 %0, !insn.addr !3457
}

define i64 @function_140007830(i64 %arg1) local_unnamed_addr {
dec_label_pc_140007830:
  %0 = call i64 @__std_exception_destroy(i64 %arg1), !insn.addr !3458
  ret i64 %0, !insn.addr !3458

; uselistorder directives
  uselistorder i64 (i64)* @__std_exception_destroy, { 1, 0 }
}

define void @function_140007836(i64* %pExceptionObject, i64* %pThrowInfo) local_unnamed_addr {
dec_label_pc_140007836:
  call void @_CxxThrowException(i64* %pExceptionObject, i64* %pThrowInfo), !insn.addr !3459
  ret void, !insn.addr !3459

; uselistorder directives
  uselistorder void (i64*, i64*)* @_CxxThrowException, { 3, 2, 1, 0 }
}

define i64* @function_14000783c(i64* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_14000783c:
  %0 = call i64* @memset(i64* %s, i32 %c, i32 %n), !insn.addr !3460
  ret i64* %0, !insn.addr !3460

; uselistorder directives
  uselistorder i64* (i64*, i32, i32)* @memset, { 20, 19, 18, 11, 10, 9, 15, 6, 7, 3, 2, 14, 8, 13, 12, 5, 16, 4, 1, 0, 17 }
}

define i64* @function_140007842(i64* %dest, i64* %src, i32 %n) local_unnamed_addr {
dec_label_pc_140007842:
  %0 = call i64* @memmove(i64* %dest, i64* %src, i32 %n), !insn.addr !3461
  ret i64* %0, !insn.addr !3461

; uselistorder directives
  uselistorder i64* (i64*, i64*, i32)* @memmove, { 24, 8, 23, 22, 11, 10, 16, 15, 18, 17, 7, 6, 1, 0, 14, 13, 12, 21, 20, 19, 5, 4, 3, 2, 9 }
}

define void @function_140007848(i64* %ptr) local_unnamed_addr {
dec_label_pc_140007848:
  call void @free(i64* %ptr), !insn.addr !3462
  ret void, !insn.addr !3462

; uselistorder directives
  uselistorder void (i64*)* @free, { 5, 3, 2, 4, 0, 1 }
}

define i32 @function_14000784e(i32 %Size) local_unnamed_addr {
dec_label_pc_14000784e:
  %0 = call i32 @_callnewh(i32 %Size), !insn.addr !3463
  ret i32 %0, !insn.addr !3463

; uselistorder directives
  uselistorder i32 (i32)* @_callnewh, { 1, 0 }
}

define i64* @function_140007854(i32 %size) local_unnamed_addr {
dec_label_pc_140007854:
  %0 = call i64* @malloc(i32 %size), !insn.addr !3464
  ret i64* %0, !insn.addr !3464

; uselistorder directives
  uselistorder i64* (i32)* @malloc, { 1, 0 }
}

define i32 @function_14000785a(i64 %arg1) local_unnamed_addr {
dec_label_pc_14000785a:
  %0 = call i32 @_configure_narrow_argv(i64 %arg1), !insn.addr !3465
  ret i32 %0, !insn.addr !3465

; uselistorder directives
  uselistorder i32 (i64)* @_configure_narrow_argv, { 1, 0 }
}

define i32 @function_140007860() local_unnamed_addr {
dec_label_pc_140007860:
  %0 = call i32 @_initialize_narrow_environment(), !insn.addr !3466
  ret i32 %0, !insn.addr !3466

; uselistorder directives
  uselistorder i32 ()* @_initialize_narrow_environment, { 1, 0 }
}

define i32 @function_140007866(%_onexit_table_t* %Table) local_unnamed_addr {
dec_label_pc_140007866:
  %0 = call i32 @_initialize_onexit_table(%_onexit_table_t* %Table), !insn.addr !3467
  ret i32 %0, !insn.addr !3467

; uselistorder directives
  uselistorder i32 (%_onexit_table_t*)* @_initialize_onexit_table, { 2, 1, 0 }
}

define i32 @function_14000786c(%_onexit_table_t* %Table, i32 ()* %Function) local_unnamed_addr {
dec_label_pc_14000786c:
  %0 = call i32 @_register_onexit_function(%_onexit_table_t* %Table, i32 ()* %Function), !insn.addr !3468
  ret i32 %0, !insn.addr !3468
}

define i64 @function_140007872() local_unnamed_addr {
dec_label_pc_140007872:
  %0 = call i64 @_crt_atexit(), !insn.addr !3469
  ret i64 %0, !insn.addr !3469
}

define void @function_140007878() local_unnamed_addr {
dec_label_pc_140007878:
  call void @_cexit(), !insn.addr !3470
  ret void, !insn.addr !3470

; uselistorder directives
  uselistorder void ()* @_cexit, { 1, 0 }
}

define i32 @function_14000787e(i32 %ExceptionNum, %_EXCEPTION_POINTERS* %ExceptionPtr) local_unnamed_addr {
dec_label_pc_14000787e:
  %0 = call i32 @_seh_filter_exe(i32 %ExceptionNum, %_EXCEPTION_POINTERS* %ExceptionPtr), !insn.addr !3471
  ret i32 %0, !insn.addr !3471
}

define void @function_140007884(i64 %arg1) local_unnamed_addr {
dec_label_pc_140007884:
  call void @_set_app_type(i64 %arg1), !insn.addr !3472
  ret void, !insn.addr !3472

; uselistorder directives
  uselistorder void (i64)* @_set_app_type, { 1, 0 }
}

define void @function_14000788a(i64 %pf) local_unnamed_addr {
dec_label_pc_14000788a:
  call void @__setusermatherr(i64 %pf), !insn.addr !3473
  ret void, !insn.addr !3473

; uselistorder directives
  uselistorder void (i64)* @__setusermatherr, { 1, 0 }
}

define i8* @function_140007890() local_unnamed_addr {
dec_label_pc_140007890:
  %0 = call i8* @_get_narrow_winmain_command_line(), !insn.addr !3474
  ret i8* %0, !insn.addr !3474

; uselistorder directives
  uselistorder i8* ()* @_get_narrow_winmain_command_line, { 1, 0 }
}

define void @function_140007896(void ()** %First, void ()** %Last) local_unnamed_addr {
dec_label_pc_140007896:
  call void @_initterm(void ()** %First, void ()** %Last), !insn.addr !3475
  ret void, !insn.addr !3475

; uselistorder directives
  uselistorder void (void ()**, void ()**)* @_initterm, { 1, 0 }
}

define i32 @function_14000789c(i32 ()** %First, i32 ()** %Last) local_unnamed_addr {
dec_label_pc_14000789c:
  %0 = call i32 @_initterm_e(i32 ()** %First, i32 ()** %Last), !insn.addr !3476
  ret i32 %0, !insn.addr !3476

; uselistorder directives
  uselistorder i32 (i32 ()**, i32 ()**)* @_initterm_e, { 1, 0 }
}

define void @function_1400078a2(i32 %status) local_unnamed_addr {
dec_label_pc_1400078a2:
  call void @exit(i32 %status), !insn.addr !3477
  ret void, !insn.addr !3477

; uselistorder directives
  uselistorder void (i32)* @exit, { 1, 0 }
}

define void @function_1400078a8(i32 %Code) local_unnamed_addr {
dec_label_pc_1400078a8:
  call void @_exit(i32 %Code), !insn.addr !3478
  ret void, !insn.addr !3478
}

define i32 @function_1400078ae(i32 %Mode) local_unnamed_addr {
dec_label_pc_1400078ae:
  %0 = call i32 @_set_fmode(i32 %Mode), !insn.addr !3479
  ret i32 %0, !insn.addr !3479

; uselistorder directives
  uselistorder i32 (i32)* @_set_fmode, { 1, 0 }
}

define void @function_1400078b4() local_unnamed_addr {
dec_label_pc_1400078b4:
  call void @_c_exit(), !insn.addr !3480
  ret void, !insn.addr !3480
}

define void @function_1400078ba(void (i64*, i32, i64*)* %Callback) local_unnamed_addr {
dec_label_pc_1400078ba:
  call void @_register_thread_local_exe_atexit_callback(void (i64*, i32, i64*)* %Callback), !insn.addr !3481
  ret void, !insn.addr !3481

; uselistorder directives
  uselistorder void (void (i64*, i32, i64*)*)* @_register_thread_local_exe_atexit_callback, { 1, 0 }
}

define i32 @function_1400078c0(i32 %Flag) local_unnamed_addr {
dec_label_pc_1400078c0:
  %0 = call i32 @_configthreadlocale(i32 %Flag), !insn.addr !3482
  ret i32 %0, !insn.addr !3482

; uselistorder directives
  uselistorder i32 (i32)* @_configthreadlocale, { 1, 0 }
}

define i32 @function_1400078c6(i32 %NewMode) local_unnamed_addr {
dec_label_pc_1400078c6:
  %0 = call i32 @_set_new_mode(i32 %NewMode), !insn.addr !3483
  ret i32 %0, !insn.addr !3483

; uselistorder directives
  uselistorder i32 (i32)* @_set_new_mode, { 1, 0 }
}

define i32* @function_1400078cc() local_unnamed_addr {
dec_label_pc_1400078cc:
  %0 = call i32* @__p__commode(), !insn.addr !3484
  ret i32* %0, !insn.addr !3484

; uselistorder directives
  uselistorder i32* ()* @__p__commode, { 1, 0 }
}

define i64 @function_1400078d2(i32 %arg1) local_unnamed_addr {
dec_label_pc_1400078d2:
  %0 = call i64 @terminate(i32 %arg1), !insn.addr !3485
  ret i64 %0, !insn.addr !3485

; uselistorder directives
  uselistorder i64 (i32)* @terminate, { 1, 0 }
}

define i1 @function_1400078d8(i32 %ProcessorFeature) local_unnamed_addr {
dec_label_pc_1400078d8:
  %0 = call i1 @IsProcessorFeaturePresent(i32 %ProcessorFeature), !insn.addr !3486
  ret i1 %0, !insn.addr !3486

; uselistorder directives
  uselistorder i1 (i32)* @IsProcessorFeaturePresent, { 1, 0 }
}

define i64 @function_1400078e0() local_unnamed_addr {
dec_label_pc_1400078e0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i64, i64* %0
  %3 = add i64 %1, 56, !insn.addr !3487
  %4 = inttoptr i64 %3 to i64*, !insn.addr !3487
  %5 = load i64, i64* %4, align 8, !insn.addr !3487
  %6 = call i64 @function_140007900(i64 %2, i64 %1, i64 %5), !insn.addr !3488
  ret i64 1, !insn.addr !3489

; uselistorder directives
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %0, { 1, 0 }
}

define i64 @function_140007900(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_140007900:
  %r9.0.reg2mem = alloca i64, !insn.addr !3490
  %r10.0.reg2mem = alloca i64, !insn.addr !3490
  %0 = and i64 %arg3, 4
  %1 = icmp eq i64 %0, 0, !insn.addr !3491
  store i64 %arg1, i64* %r10.0.reg2mem, !insn.addr !3492
  br i1 %1, label %dec_label_pc_14000792b, label %dec_label_pc_140007918, !insn.addr !3492

dec_label_pc_140007918:                           ; preds = %dec_label_pc_140007900
  %2 = add i64 %arg3, 8, !insn.addr !3493
  %3 = inttoptr i64 %2 to i32*, !insn.addr !3493
  %4 = load i32, i32* %3, align 4, !insn.addr !3493
  %5 = add i64 %arg3, 4, !insn.addr !3494
  %6 = inttoptr i64 %5 to i32*, !insn.addr !3494
  %7 = load i32, i32* %6, align 4, !insn.addr !3494
  %8 = sext i32 %7 to i64, !insn.addr !3494
  %9 = sub i32 0, %4, !insn.addr !3495
  %10 = add i64 %8, %arg1, !insn.addr !3496
  %11 = sext i32 %9 to i64, !insn.addr !3497
  %12 = and i64 %10, %11, !insn.addr !3498
  store i64 %12, i64* %r10.0.reg2mem, !insn.addr !3498
  br label %dec_label_pc_14000792b, !insn.addr !3498

dec_label_pc_14000792b:                           ; preds = %dec_label_pc_140007918, %dec_label_pc_140007900
  %r10.0.reload = load i64, i64* %r10.0.reg2mem
  %13 = mul i64 %arg3, 4294967296, !insn.addr !3499
  %sext = ashr exact i64 %13, 32
  %14 = and i64 %sext, -8, !insn.addr !3500
  %15 = add i64 %r10.0.reload, %14, !insn.addr !3501
  %16 = inttoptr i64 %15 to i64*, !insn.addr !3501
  %17 = load i64, i64* %16, align 8, !insn.addr !3501
  %18 = add i64 %arg2, 16, !insn.addr !3502
  %19 = inttoptr i64 %18 to i64*, !insn.addr !3502
  %20 = load i64, i64* %19, align 8, !insn.addr !3502
  %21 = add i64 %20, 8, !insn.addr !3503
  %22 = inttoptr i64 %21 to i32*, !insn.addr !3503
  %23 = load i32, i32* %22, align 4, !insn.addr !3503
  %24 = zext i32 %23 to i64, !insn.addr !3503
  %25 = add i64 %arg2, 8, !insn.addr !3504
  %26 = inttoptr i64 %25 to i64*, !insn.addr !3504
  %27 = load i64, i64* %26, align 8, !insn.addr !3504
  %28 = add nuw nsw i64 %24, 3, !insn.addr !3505
  %29 = add i64 %28, %27, !insn.addr !3505
  %30 = inttoptr i64 %29 to i8*, !insn.addr !3505
  %31 = load i8, i8* %30, align 1, !insn.addr !3505
  %32 = and i8 %31, 15, !insn.addr !3505
  %33 = icmp eq i8 %32, 0, !insn.addr !3505
  store i64 %arg1, i64* %r9.0.reg2mem, !insn.addr !3506
  br i1 %33, label %dec_label_pc_14000794f, label %dec_label_pc_140007944, !insn.addr !3506

dec_label_pc_140007944:                           ; preds = %dec_label_pc_14000792b
  %34 = and i8 %31, -16
  %35 = zext i8 %34 to i64, !insn.addr !3507
  %36 = add i64 %35, %arg1, !insn.addr !3508
  store i64 %36, i64* %r9.0.reg2mem, !insn.addr !3508
  br label %dec_label_pc_14000794f, !insn.addr !3508

dec_label_pc_14000794f:                           ; preds = %dec_label_pc_140007944, %dec_label_pc_14000792b
  %r9.0.reload = load i64, i64* %r9.0.reg2mem
  %37 = xor i64 %r9.0.reload, %17, !insn.addr !3509
  call void @__security_check_cookie(i64 %37), !insn.addr !3510
  ret i64 ptrtoint (i32* @0 to i64), !insn.addr !3510

; uselistorder directives
  uselistorder i64 ptrtoint (i32* @0 to i64), { 2, 1, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 13 }
  uselistorder void (i64)* @__security_check_cookie, { 9, 0, 7, 8, 6, 3, 5, 4, 1, 2 }
  uselistorder i64 3, { 2, 1, 0 }
  uselistorder i64 16, { 7, 16, 15, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 0, 27, 28, 29, 30, 31, 8, 9, 81, 82, 83, 5, 84, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 2, 42, 43, 44, 45, 46, 47, 48, 49, 1, 50, 51, 58, 59, 60, 61, 62, 63, 64, 65, 4, 66, 67, 68, 69, 70, 71, 3, 72, 73, 52, 53, 54, 55, 56, 57, 10, 11, 12, 80, 74, 75, 76, 77, 78, 6, 79, 13, 14 }
  uselistorder i64 4294967296, { 0, 1, 2, 5, 3, 4 }
  uselistorder i64 %arg3, { 0, 3, 2, 1 }
  uselistorder i64 %arg1, { 2, 0, 3, 1 }
}

define i64 @function_14000795c(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4) local_unnamed_addr {
dec_label_pc_14000795c:
  %0 = add i64 %arg4, 56, !insn.addr !3511
  %1 = inttoptr i64 %0 to i64*, !insn.addr !3511
  %2 = load i64, i64* %1, align 8, !insn.addr !3511
  %3 = add i64 %2, 4, !insn.addr !3512
  %4 = call i64 @function_140007900(i64 %arg2, i64 %arg4, i64 %3), !insn.addr !3513
  ret i64 1, !insn.addr !3514

; uselistorder directives
  uselistorder i64 1, { 7, 8, 30, 31, 13, 22, 0, 1, 32, 28, 10, 33, 34, 35, 14, 2, 3, 15, 4, 16, 36, 37, 38, 39, 29, 50, 51, 52, 41, 17, 18, 5, 42, 23, 24, 25, 26, 27, 43, 44, 19, 20, 21, 11, 48, 49, 45, 46, 12, 47, 40, 6, 9 }
  uselistorder i64 (i64, i64, i64)* @function_140007900, { 1, 0 }
  uselistorder i64 4, { 2, 3, 0, 4, 5, 1 }
}

define i64* @function_1400079db(i64* %dest, i64* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1400079db:
  %0 = call i64* @memcpy(i64* %dest, i64* %src, i32 %n), !insn.addr !3515
  ret i64* %0, !insn.addr !3515

; uselistorder directives
  uselistorder i64* (i64*, i64*, i32)* @memcpy, { 12, 4, 3, 11, 10, 2, 1, 0, 6, 5, 9, 7, 8 }
}

define i32 @function_1400079e1(i8* %s1, i8* %s2) local_unnamed_addr {
dec_label_pc_1400079e1:
  %0 = call i32 @strcmp(i8* %s1, i8* %s2), !insn.addr !3516
  ret i32 %0, !insn.addr !3516

; uselistorder directives
  uselistorder i32 (i8*, i8*)* @strcmp, { 1, 0 }
}

define i64 @function_140007a00() local_unnamed_addr {
dec_label_pc_140007a00:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !3517
}

define i64 @function_140007a10() local_unnamed_addr {
dec_label_pc_140007a10:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 88, !insn.addr !3518
  %3 = inttoptr i64 %2 to i64*, !insn.addr !3518
  %4 = load i64, i64* %3, align 8, !insn.addr !3518
  %5 = call i64 @function_1400056e0(i64 %4), !insn.addr !3519
  ret i64 %5, !insn.addr !3519

; uselistorder directives
  uselistorder i64 88, { 1, 4, 2, 3, 0 }
}

define i64 @function_140007a20() local_unnamed_addr {
dec_label_pc_140007a20:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !3520
}

define i64 @function_140007a30() local_unnamed_addr {
dec_label_pc_140007a30:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !3521
}

define i64 @function_140007a40() local_unnamed_addr {
dec_label_pc_140007a40:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !3522
}

define i64 @function_140007a50() local_unnamed_addr {
dec_label_pc_140007a50:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !3523
}

define i64 @function_140007a60() local_unnamed_addr {
dec_label_pc_140007a60:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !3524
}

define i64 @function_140007a70() local_unnamed_addr {
dec_label_pc_140007a70:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !3525
}

define i64 @function_140007a80() local_unnamed_addr {
dec_label_pc_140007a80:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !3526
}

define i64 @function_140007a90() local_unnamed_addr {
dec_label_pc_140007a90:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !3527
}

define i64 @function_140007aa0() local_unnamed_addr {
dec_label_pc_140007aa0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !3528
}

define i64 @function_140007ab0() local_unnamed_addr {
dec_label_pc_140007ab0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !3529
}

define i64 @function_140007ac0() local_unnamed_addr {
dec_label_pc_140007ac0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !3530
}

define i64 @function_140007ad0() local_unnamed_addr {
dec_label_pc_140007ad0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !3531
}

define i64 @function_140007ae0() local_unnamed_addr {
dec_label_pc_140007ae0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !3532
}

define i64 @function_140007af0() local_unnamed_addr {
dec_label_pc_140007af0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !3533
}

define i64 @function_140007b00() local_unnamed_addr {
dec_label_pc_140007b00:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !3534
}

define i64 @function_140007b10() local_unnamed_addr {
dec_label_pc_140007b10:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !3535
}

define i64 @function_140007b20() local_unnamed_addr {
dec_label_pc_140007b20:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !3536
}

define i64 @function_140007b30() local_unnamed_addr {
dec_label_pc_140007b30:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !3537
}

define i64 @function_140007b40() local_unnamed_addr {
dec_label_pc_140007b40:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !3538
}

define i64 @function_140007b50() local_unnamed_addr {
dec_label_pc_140007b50:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !3539
}

define i64 @function_140007b60() local_unnamed_addr {
dec_label_pc_140007b60:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !3540
}

define i64 @function_140007b70() local_unnamed_addr {
dec_label_pc_140007b70:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 136, !insn.addr !3541
  %3 = call i64 @function_140001050(i64 %2), !insn.addr !3542
  ret i64 %3, !insn.addr !3542
}

define i64 @function_140007b80() local_unnamed_addr {
dec_label_pc_140007b80:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !3543
}

define i64 @function_140007b90() local_unnamed_addr {
dec_label_pc_140007b90:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !3544
}

define i64 @function_140007ba0() local_unnamed_addr {
dec_label_pc_140007ba0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !3545
}

define i64 @function_140007bb0() local_unnamed_addr {
dec_label_pc_140007bb0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = add i64 %1, 32, !insn.addr !3546
  %3 = inttoptr i64 %2 to i32*, !insn.addr !3546
  %4 = load i32, i32* %3, align 4, !insn.addr !3546
  %5 = and i32 %4, 1, !insn.addr !3547
  %6 = icmp eq i32 %5, 0, !insn.addr !3548
  br i1 %6, label %dec_label_pc_140007bd0, label %dec_label_pc_140007bc3, !insn.addr !3549

dec_label_pc_140007bc3:                           ; preds = %dec_label_pc_140007bb0
  %7 = and i32 %4, -2, !insn.addr !3550
  store i32 %7, i32* %3, align 4, !insn.addr !3550
  br label %dec_label_pc_140007bd0, !insn.addr !3551

dec_label_pc_140007bd0:                           ; preds = %dec_label_pc_140007bc3, %dec_label_pc_140007bb0
  %8 = zext i32 %5 to i64, !insn.addr !3547
  ret i64 %8, !insn.addr !3552

; uselistorder directives
  uselistorder i32 %5, { 1, 0 }
}

define i64 @function_140007bd6(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_140007bd6:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = icmp eq i32 %2, -1073741819, !insn.addr !3553
  %4 = zext i1 %3 to i64, !insn.addr !3554
  ret i64 %4, !insn.addr !3555
}

define i64 @function_140007bee(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_140007bee:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = trunc i64 %1 to i32
  %3 = inttoptr i64 %arg1 to %_EXCEPTION_POINTERS*, !insn.addr !3556
  %4 = call i32 @_seh_filter_exe(i32 %2, %_EXCEPTION_POINTERS* %3), !insn.addr !3556
  %5 = sext i32 %4 to i64, !insn.addr !3556
  ret i64 %5, !insn.addr !3557
}

define i64 @function_140007c10() local_unnamed_addr {
dec_label_pc_140007c10:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !3558
}

define i64 @function_140007c20() local_unnamed_addr {
dec_label_pc_140007c20:
  %0 = load i8, i8* @global_var_14000cdf8, align 1, !insn.addr !3559
  %1 = icmp eq i8 %0, 0, !insn.addr !3559
  store i32 ptrtoint (i32* @global_var_140008da0 to i32), i32* @global_var_14000cde8, align 4, !insn.addr !3560
  br i1 %1, label %dec_label_pc_140007c4a, label %dec_label_pc_140007c37, !insn.addr !3561

dec_label_pc_140007c37:                           ; preds = %dec_label_pc_140007c20
  %2 = load i64, i64* @global_var_14000cdf0, align 8, !insn.addr !3562
  %3 = icmp eq i64 %2, 0, !insn.addr !3563
  br i1 %3, label %dec_label_pc_140007c4a, label %dec_label_pc_140007c43, !insn.addr !3564

dec_label_pc_140007c43:                           ; preds = %dec_label_pc_140007c37
  %4 = inttoptr i64 %2 to i64*, !insn.addr !3565
  %5 = call i1 @HeapDestroy(i64* %4), !insn.addr !3565
  %6 = sext i1 %5 to i64, !insn.addr !3565
  ret i64 %6, !insn.addr !3565

dec_label_pc_140007c4a:                           ; preds = %dec_label_pc_140007c37, %dec_label_pc_140007c20
  ret i64 ptrtoint (i32* @global_var_140008da0 to i64), !insn.addr !3566

; uselistorder directives
  uselistorder i1 (i64*)* @HeapDestroy, { 1, 0 }
  uselistorder i32 0, { 95, 96, 7, 26, 27, 28, 32, 29, 30, 31, 97, 5, 108, 33, 109, 34, 35, 36, 37, 110, 38, 111, 112, 39, 40, 149, 150, 98, 99, 100, 41, 42, 6, 43, 44, 101, 102, 8, 103, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 45, 124, 125, 126, 127, 128, 46, 131, 132, 48, 47, 49, 10, 50, 11, 51, 18, 12, 13, 14, 15, 16, 17, 52, 145, 146, 53, 147, 54, 148, 55, 133, 58, 0, 3, 134, 2, 1, 59, 60, 135, 61, 62, 63, 4, 19, 56, 57, 64, 65, 20, 66, 67, 21, 68, 69, 70, 136, 137, 71, 72, 24, 25, 104, 73, 105, 74, 106, 75, 76, 77, 78, 79, 129, 130, 80, 139, 140, 141, 142, 143, 144, 82, 81, 23, 22, 83, 84, 138, 85, 9, 107, 86, 87, 88, 89, 90, 91, 92, 93, 94 }
  uselistorder i32* @global_var_14000cde8, { 2, 1, 0 }
  uselistorder i8 0, { 10, 11, 18, 30, 31, 32, 33, 0, 34, 12, 13, 14, 19, 20, 15, 21, 22, 23, 1, 24, 25, 26, 16, 29, 2, 27, 28, 17, 7, 4, 3, 5, 6, 8, 9 }
  uselistorder i8* @global_var_14000cdf8, { 1, 0 }
}

define i64 @function_140007c50() local_unnamed_addr {
dec_label_pc_140007c50:
  %rdx.0.reg2mem = alloca i64, !insn.addr !3567
  %rcx.0.reg2mem = alloca i64, !insn.addr !3567
  %0 = load i64, i64* @global_var_14000c160, align 8, !insn.addr !3568
  %1 = icmp ult i64 %0, 8, !insn.addr !3569
  br i1 %1, label %dec_label_pc_140007c96, label %dec_label_pc_140007c61, !insn.addr !3570

dec_label_pc_140007c61:                           ; preds = %dec_label_pc_140007c50
  %2 = load i64, i64* @global_var_14000c148, align 8, !insn.addr !3571
  %3 = mul i64 %0, 2, !insn.addr !3572
  %4 = add i64 %3, 2, !insn.addr !3572
  %5 = icmp ult i64 %4, 4096, !insn.addr !3573
  store i64 %2, i64* %rcx.0.reg2mem, !insn.addr !3574
  store i64 %4, i64* %rdx.0.reg2mem, !insn.addr !3574
  br i1 %5, label %dec_label_pc_140007c91, label %dec_label_pc_140007c79, !insn.addr !3574

dec_label_pc_140007c79:                           ; preds = %dec_label_pc_140007c61
  %6 = add i64 %2, -8
  %7 = inttoptr i64 %6 to i64*, !insn.addr !3575
  %8 = load i64, i64* %7, align 8, !insn.addr !3575
  %9 = sub i64 %6, %8, !insn.addr !3576
  %10 = icmp ult i64 %9, 32
  br i1 %10, label %dec_label_pc_140007c8e, label %dec_label_pc_140007cb4, !insn.addr !3577

dec_label_pc_140007c8e:                           ; preds = %dec_label_pc_140007c79
  %11 = add i64 %3, 41, !insn.addr !3578
  store i64 %8, i64* %rcx.0.reg2mem, !insn.addr !3579
  store i64 %11, i64* %rdx.0.reg2mem, !insn.addr !3579
  br label %dec_label_pc_140007c91, !insn.addr !3579

dec_label_pc_140007c91:                           ; preds = %dec_label_pc_140007c8e, %dec_label_pc_140007c61
  %rdx.0.reload = load i64, i64* %rdx.0.reg2mem
  %rcx.0.reload = load i64, i64* %rcx.0.reg2mem
  %12 = call i64 @function_1400065d0(i64 %rcx.0.reload, i64 %rdx.0.reload), !insn.addr !3580
  br label %dec_label_pc_140007c96, !insn.addr !3580

dec_label_pc_140007c96:                           ; preds = %dec_label_pc_140007c91, %dec_label_pc_140007c50
  %13 = load i128, i128* @global_var_140008dd0, align 8, !insn.addr !3581
  %14 = call i128 @__asm_movdqa(i128 %13), !insn.addr !3581
  %15 = call i64 @__asm_movdqu(i128 %14), !insn.addr !3582
  %16 = sext i64 %15 to i128, !insn.addr !3582
  store i128 %16, i128* bitcast (i64* @global_var_14000c158 to i128*), align 8, !insn.addr !3582
  store i16 0, i16* bitcast (i64* @global_var_14000c148 to i16*), align 8, !insn.addr !3583
  ret i64 0, !insn.addr !3584

dec_label_pc_140007cb4:                           ; preds = %dec_label_pc_140007c79
  call void @_invalid_parameter_noinfo_noreturn(), !insn.addr !3585
  %17 = call i64 @__asm_int3(), !insn.addr !3586
  %18 = call i64 @__asm_int3(), !insn.addr !3587
  %19 = call i64 @function_140007768(i64* nonnull @global_var_14000c950), !insn.addr !3588
  ret i64 %19, !insn.addr !3588

; uselistorder directives
  uselistorder i64 %3, { 1, 0 }
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 ()* @__asm_int3, { 198, 197, 187, 196, 195, 194, 193, 192, 191, 190, 186, 185, 184, 183, 182, 181, 180, 179, 178, 177, 176, 175, 174, 173, 172, 171, 170, 169, 168, 167, 166, 165, 164, 163, 162, 161, 160, 159, 158, 157, 156, 155, 154, 153, 152, 151, 150, 149, 148, 147, 146, 145, 144, 143, 142, 141, 140, 139, 138, 137, 136, 135, 134, 133, 132, 131, 130, 129, 128, 189, 188, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 127, 126, 125, 124, 123, 122, 121, 120, 119, 118, 117, 116, 115, 114, 113, 112, 111, 110, 109, 108, 107, 106, 105, 104, 103, 102, 101, 74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 40, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41 }
  uselistorder void ()* @_invalid_parameter_noinfo_noreturn, { 74, 72, 71, 70, 69, 68, 73, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 40, 39, 38, 14, 17, 16, 15 }
  uselistorder i16 0, { 67, 68, 88, 69, 70, 71, 72, 73, 0, 74, 75, 76, 77, 1, 2, 3, 4, 5, 6, 7, 8, 78, 79, 80, 10, 9, 11, 81, 82, 83, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 84, 85, 86, 66, 87, 90, 89 }
  uselistorder i64 (i128)* @__asm_movdqu, { 0, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65 }
  uselistorder i128 (i128)* @__asm_movdqa, { 0, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37 }
  uselistorder i128* @global_var_140008dd0, { 5, 4, 3, 2, 1, 0 }
  uselistorder i64 (i64, i64)* @function_1400065d0, { 69, 68, 73, 1, 0, 72, 2, 3, 67, 53, 52, 51, 50, 49, 48, 47, 46, 45, 9, 8, 7, 4, 6, 70, 27, 26, 25, 24, 23, 22, 33, 32, 31, 30, 29, 28, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 63, 62, 61, 60, 59, 58, 57, 56, 55, 39, 38, 37, 36, 35, 34, 44, 43, 42, 41, 10, 66, 65, 64, 71, 5, 54, 40 }
  uselistorder i64 32, { 1, 80, 0, 84, 81, 2, 3, 4, 5, 6, 7, 85, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 86, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 82, 75, 76, 77, 78, 79, 83 }
  uselistorder i64 -8, { 3, 0, 5, 6, 7, 8, 9, 10, 11, 1, 12, 13, 14, 15, 4, 72, 73, 74, 75, 76, 2, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 43, 44, 45, 46, 71, 67, 68, 69, 70 }
  uselistorder i64 4096, { 0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 38, 39, 40, 41, 65, 62, 63, 64 }
  uselistorder i64 2, { 121, 1, 194, 192, 122, 2, 123, 3, 4, 111, 5, 6, 7, 124, 8, 9, 10, 11, 12, 112, 125, 13, 14, 15, 195, 113, 126, 16, 17, 18, 114, 19, 20, 127, 21, 128, 22, 193, 129, 130, 23, 131, 24, 132, 25, 133, 26, 134, 27, 135, 28, 136, 29, 137, 30, 138, 31, 139, 32, 140, 33, 34, 0, 141, 35, 142, 36, 143, 37, 144, 38, 145, 39, 146, 40, 147, 41, 148, 42, 149, 43, 150, 44, 151, 45, 152, 46, 153, 47, 154, 48, 155, 49, 156, 50, 157, 51, 158, 52, 53, 54, 55, 56, 159, 57, 160, 58, 161, 59, 162, 60, 163, 61, 164, 62, 165, 63, 166, 64, 167, 65, 115, 66, 67, 116, 68, 69, 70, 71, 168, 72, 169, 73, 170, 74, 171, 75, 172, 76, 173, 77, 174, 78, 175, 79, 176, 80, 177, 81, 178, 82, 179, 83, 180, 84, 85, 117, 86, 87, 88, 89, 90, 91, 181, 92, 182, 93, 183, 94, 184, 95, 185, 96, 186, 97, 187, 98, 118, 99, 100, 119, 101, 102, 103, 188, 104, 189, 105, 106, 196, 190, 107, 191, 108, 109, 120, 110 }
  uselistorder i64 0, { 36, 238, 49, 0, 116, 239, 118, 119, 117, 37, 38, 39, 120, 121, 122, 123, 1, 252, 124, 125, 126, 287, 288, 40, 253, 254, 41, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 2, 3, 255, 256, 4, 257, 258, 139, 206, 259, 260, 261, 262, 263, 7, 264, 6, 9, 265, 5, 266, 267, 8, 268, 10, 269, 270, 55, 11, 271, 272, 240, 12, 282, 283, 140, 141, 142, 143, 42, 144, 284, 68, 69, 13, 66, 67, 50, 51, 52, 53, 65, 70, 71, 145, 146, 14, 147, 148, 149, 150, 15, 285, 286, 273, 274, 16, 43, 153, 154, 151, 152, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 17, 114, 165, 166, 18, 19, 21, 20, 167, 168, 44, 45, 169, 170, 173, 174, 171, 172, 80, 56, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 72, 73, 74, 75, 76, 77, 78, 79, 275, 98, 57, 99, 100, 101, 102, 103, 104, 105, 106, 91, 92, 93, 94, 95, 96, 22, 97, 278, 107, 108, 23, 175, 176, 177, 276, 109, 178, 24, 54, 277, 25, 179, 46, 241, 242, 243, 47, 26, 58, 180, 244, 48, 245, 246, 247, 115, 30, 27, 29, 28, 182, 183, 59, 184, 185, 60, 186, 187, 61, 188, 189, 62, 190, 191, 31, 192, 193, 194, 195, 181, 110, 196, 32, 279, 280, 63, 64, 198, 199, 200, 201, 202, 203, 197, 281, 207, 208, 209, 33, 204, 205, 34, 35, 248, 111, 249, 250, 251, 112, 113, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237 }
  uselistorder i64* @global_var_14000c148, { 2, 3, 0, 1 }
  uselistorder i64 8, { 8, 9, 10, 11, 0, 26, 12, 27, 28, 29, 30, 31, 4, 32, 33, 34, 35, 109, 110, 111, 112, 3, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 38, 1, 2, 36, 37, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 108, 105, 106, 107, 73, 74, 75, 76, 77, 13, 14, 5, 15, 16, 17, 18, 19, 6, 20, 21, 22, 23, 24, 7, 25 }
  uselistorder i64 7, { 3, 4, 5, 6, 7, 8, 10, 11, 12, 13, 14, 54, 0, 55, 56, 57, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 1, 2, 34, 35, 36, 37, 38, 9 }
  uselistorder i32 1, { 67, 66, 62, 61, 60, 543, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 69, 68, 31, 428, 70, 30, 29, 28, 27, 419, 26, 25, 72, 71, 451, 65, 64, 457, 456, 455, 454, 453, 452, 73, 24, 23, 546, 429, 547, 76, 75, 74, 458, 459, 551, 430, 81, 80, 79, 78, 77, 22, 21, 431, 20, 86, 85, 84, 83, 82, 87, 19, 18, 92, 91, 90, 89, 88, 17, 94, 93, 16, 109, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98, 97, 96, 95, 110, 131, 130, 129, 128, 127, 126, 125, 124, 123, 122, 121, 120, 119, 118, 117, 116, 115, 114, 113, 112, 111, 15, 133, 132, 14, 460, 423, 450, 422, 548, 139, 138, 137, 136, 135, 134, 13, 140, 432, 549, 144, 143, 142, 141, 424, 148, 147, 146, 145, 155, 154, 153, 152, 151, 150, 149, 162, 161, 160, 159, 158, 157, 156, 165, 164, 163, 176, 175, 174, 173, 172, 171, 170, 169, 168, 167, 166, 434, 433, 425, 550, 477, 476, 475, 439, 474, 473, 472, 471, 470, 469, 468, 467, 466, 465, 464, 463, 462, 461, 204, 203, 202, 201, 200, 199, 198, 197, 196, 195, 194, 193, 192, 191, 190, 189, 188, 187, 186, 185, 184, 183, 182, 181, 180, 179, 178, 177, 12, 209, 212, 215, 435, 491, 490, 489, 488, 487, 486, 440, 485, 484, 483, 482, 481, 480, 479, 478, 238, 237, 236, 235, 234, 233, 232, 231, 230, 229, 228, 227, 226, 225, 224, 223, 222, 221, 220, 219, 218, 217, 216, 214, 213, 211, 210, 208, 207, 206, 205, 497, 496, 495, 494, 493, 492, 244, 243, 242, 241, 240, 239, 63, 11, 441, 508, 442, 507, 506, 505, 504, 503, 502, 501, 500, 499, 498, 309, 308, 307, 306, 305, 304, 303, 302, 301, 300, 299, 298, 297, 296, 295, 294, 293, 292, 291, 290, 289, 288, 287, 286, 285, 284, 283, 282, 281, 280, 279, 278, 277, 276, 275, 274, 273, 272, 271, 270, 269, 268, 267, 266, 265, 264, 263, 262, 261, 260, 259, 258, 257, 256, 255, 254, 253, 252, 251, 250, 249, 248, 247, 246, 245, 10, 2, 443, 444, 445, 446, 447, 515, 514, 513, 512, 511, 510, 509, 375, 374, 373, 372, 371, 370, 369, 368, 367, 366, 365, 364, 363, 362, 361, 360, 359, 358, 357, 356, 355, 354, 353, 352, 351, 350, 349, 348, 347, 346, 345, 344, 343, 342, 341, 340, 339, 338, 337, 336, 335, 334, 333, 332, 331, 330, 329, 328, 327, 326, 325, 324, 323, 322, 321, 320, 319, 318, 317, 316, 315, 314, 313, 312, 311, 310, 9, 1, 519, 518, 517, 516, 382, 381, 380, 379, 378, 377, 376, 520, 383, 522, 521, 526, 525, 524, 523, 392, 391, 390, 389, 388, 387, 386, 385, 384, 8, 544, 420, 393, 7, 545, 421, 394, 6, 398, 397, 396, 395, 527, 427, 426, 436, 437, 533, 532, 531, 530, 529, 528, 401, 400, 399, 5, 539, 538, 537, 536, 535, 534, 438, 416, 415, 414, 413, 412, 411, 410, 409, 408, 407, 406, 405, 404, 403, 402, 4, 0, 540, 541, 542, 418, 417, 3, 448, 449 }
}

declare i1 @EqualSid(i64*, i64*) local_unnamed_addr

declare i1 @GetTokenInformation(i64*, i64, i64*, i32, i32*) local_unnamed_addr

declare i64* @FreeSid(i64*) local_unnamed_addr

declare i1 @OpenProcessToken(i64*, i32, i64**) local_unnamed_addr

declare i1 @OpenThreadToken(i64*, i32, i1, i64**) local_unnamed_addr

declare i1 @AllocateAndInitializeSid(%_SID_IDENTIFIER_AUTHORITY*, i8, i32, i32, i32, i32, i32, i32, i32, i32, i64**) local_unnamed_addr

declare i32 @RegQueryValueExW(i64*, i16*, i32*, i32*, i8*, i32*) local_unnamed_addr

declare i32 @RegOpenKeyExW(i64*, i16*, i32, i32, i64**) local_unnamed_addr

declare i32 @RegCloseKey(i64*) local_unnamed_addr

declare i32 @RegQueryValueExA(i64*, i8*, i32*, i32*, i8*, i32*) local_unnamed_addr

declare i32 @RegOpenKeyExA(i64*, i8*, i32, i32, i64**) local_unnamed_addr

declare i32 @GetModuleFileNameA(i64*, i8*, i32) local_unnamed_addr

declare i32 @GetPrivateProfileStringA(i8*, i8*, i8*, i8*, i32, i8*) local_unnamed_addr

declare i64* @LoadLibraryA(i8*) local_unnamed_addr

declare void @GetLocalTime(%_SYSTEMTIME*) local_unnamed_addr

declare i32 @WideCharToMultiByte(i32, i32, i16*, i32, i8*, i32, i8*, i1*) local_unnamed_addr

declare void @RaiseException(i32, i32, i32, i32*) local_unnamed_addr

declare i32 @GetLastError() local_unnamed_addr

declare i1 @InitializeCriticalSectionEx(%_RTL_CRITICAL_SECTION*, i32, i32) local_unnamed_addr

declare void @EnterCriticalSection(%_RTL_CRITICAL_SECTION*) local_unnamed_addr

declare void @LeaveCriticalSection(%_RTL_CRITICAL_SECTION*) local_unnamed_addr

declare void @DeleteCriticalSection(%_RTL_CRITICAL_SECTION*) local_unnamed_addr

declare i64* @LoadResource(i64*, i64*) local_unnamed_addr

declare i64* @LockResource(i64*) local_unnamed_addr

declare i32 @SizeofResource(i64*, i64*) local_unnamed_addr

declare i64* @FindResourceW(i64*, i16*, i16*) local_unnamed_addr

declare i64* @FindResourceExW(i64*, i16*, i16*, i16) local_unnamed_addr

declare i32 ()* @GetProcAddress(i64*, i8*) local_unnamed_addr

declare i64* @CreateFileA(i8*, i32, i32, %_SECURITY_ATTRIBUTES*, i32, i32, i64*) local_unnamed_addr

declare i1 @FreeLibrary(i64*) local_unnamed_addr

declare i1 @HeapDestroy(i64*) local_unnamed_addr

declare i1 @WriteFile(i64*, i64*, i32, i32*, %_OVERLAPPED*) local_unnamed_addr

declare i1 @HeapFree(i64*, i32, i64*) local_unnamed_addr

declare i64* @HeapReAlloc(i64*, i32, i64*, i32) local_unnamed_addr

declare i32 @HeapSize(i64*, i32, i64*) local_unnamed_addr

declare i64* @GetProcessHeap() local_unnamed_addr

declare i64* @CreateEventA(%_SECURITY_ATTRIBUTES*, i1, i1, i8*) local_unnamed_addr

declare i32 @GetModuleFileNameW(i64*, i16*, i32) local_unnamed_addr

declare i1 @CreateProcessW(i16*, i16*, %_SECURITY_ATTRIBUTES*, %_SECURITY_ATTRIBUTES*, i1, i32, i64*, i16*, %_STARTUPINFOW*, %_PROCESS_INFORMATION*) local_unnamed_addr

declare i1 @GetExitCodeProcess(i64*, i32*) local_unnamed_addr

declare i1 @CreateDirectoryA(i8*, %_SECURITY_ATTRIBUTES*) local_unnamed_addr

declare i1 @CreateProcessA(i8*, i8*, %_SECURITY_ATTRIBUTES*, %_SECURITY_ATTRIBUTES*, i1, i32, i64*, i8*, %_STARTUPINFOA*, %_PROCESS_INFORMATION*) local_unnamed_addr

declare i64 @GetTickCount64() local_unnamed_addr

declare i1 @SetEnvironmentVariableA(i8*, i8*) local_unnamed_addr

declare i32 @WaitForMultipleObjects(i32, i64**, i1, i32) local_unnamed_addr

declare i64* @GetCurrentThread() local_unnamed_addr

declare i64* @GetCurrentProcess() local_unnamed_addr

declare i32 @GetVersion() local_unnamed_addr

declare void @InitializeSListHead(i64*) local_unnamed_addr

declare i1 @ResetEvent(i64*) local_unnamed_addr

declare i32 @WaitForSingleObjectEx(i64*, i32, i1) local_unnamed_addr

declare i64* @CreateEventW(%_SECURITY_ATTRIBUTES*, i1, i1, i16*) local_unnamed_addr

declare i64* @GetModuleHandleW(i16*) local_unnamed_addr

declare i64* @CreateMutexA(%_SECURITY_ATTRIBUTES*, i1, i8*) local_unnamed_addr

declare i64* @MapViewOfFile(i64*, i32, i32, i32, i32) local_unnamed_addr

declare i64* @CreateFileMappingA(i64*, %_SECURITY_ATTRIBUTES*, i32, i32, i32, i8*) local_unnamed_addr

declare void @OutputDebugStringA(i8*) local_unnamed_addr

declare i1 @ReleaseMutex(i64*) local_unnamed_addr

declare i32 @WaitForSingleObject(i64*, i32) local_unnamed_addr

declare i1 @CloseHandle(i64*) local_unnamed_addr

declare i1 @UnmapViewOfFile(i64*) local_unnamed_addr

declare i1 @SetEvent(i64*) local_unnamed_addr

declare i64* @HeapAlloc(i64*, i32, i32) local_unnamed_addr

declare i1 @InitializeCriticalSectionAndSpinCount(%_RTL_CRITICAL_SECTION*, i32) local_unnamed_addr

declare void @RtlCaptureContext(%_CONTEXT*) local_unnamed_addr

declare %_IMAGE_RUNTIME_FUNCTION_ENTRY* @RtlLookupFunctionEntry(i64, i64*, %_UNWIND_HISTORY_TABLE*) local_unnamed_addr

declare i64 (%_EXCEPTION_RECORD*, i64*, %_CONTEXT*, i64*)* @RtlVirtualUnwind(i32, i64, i64, %_IMAGE_RUNTIME_FUNCTION_ENTRY*, %_CONTEXT*, i64**, i64*, %_KNONVOLATILE_CONTEXT_POINTERS*) local_unnamed_addr

declare i32 @UnhandledExceptionFilter(%_EXCEPTION_POINTERS*) local_unnamed_addr

declare i32 (%_EXCEPTION_POINTERS*)* @SetUnhandledExceptionFilter(i32 (%_EXCEPTION_POINTERS*)*) local_unnamed_addr

declare i1 @IsProcessorFeaturePresent(i32) local_unnamed_addr

declare i1 @IsDebuggerPresent() local_unnamed_addr

declare void @GetStartupInfoW(%_STARTUPINFOW*) local_unnamed_addr

declare void @OutputDebugStringW(i16*) local_unnamed_addr

declare void @"?_Xlength_error@std@@YAXPEBD@Z"(i8*) local_unnamed_addr

declare void @"?DebugTrace@@YAXPEBDZZ"(i8*) local_unnamed_addr

declare i32 @LoadStringA(i64*, i32, i8*, i32) local_unnamed_addr

declare i32 @MessageBoxA(i64*, i8*, i8*, i32) local_unnamed_addr

declare i64* @memset(i64*, i32, i32) local_unnamed_addr

declare i64 @__std_exception_copy() local_unnamed_addr

declare i64 @__CxxFrameHandler3() local_unnamed_addr

declare i64* @memmove(i64*, i64*, i32) local_unnamed_addr

declare i16* @wcsrchr(i16*, i16) local_unnamed_addr

declare i64 @__C_specific_handler() local_unnamed_addr

declare i64 @__std_exception_destroy(i64) local_unnamed_addr

declare i64 @__std_terminate() local_unnamed_addr

declare void @_CxxThrowException(i64*, i64*) local_unnamed_addr

declare i64 @_purecall() local_unnamed_addr

declare i64* @memcpy(i64*, i64*, i32) local_unnamed_addr

declare i32 @_splitpath_s(i8*, i8*, i32, i8*, i32, i8*, i32, i8*, i32) local_unnamed_addr

declare void @free(i64*) local_unnamed_addr

declare i64* @calloc(i32, i32) local_unnamed_addr

declare i32 @_set_new_mode(i32) local_unnamed_addr

declare i64* @malloc(i32) local_unnamed_addr

declare i32 @_callnewh(i32) local_unnamed_addr

declare i32 @_configthreadlocale(i32) local_unnamed_addr

declare void @__setusermatherr(i64) local_unnamed_addr

declare i8* @_mbsrchr(i8*, i32) local_unnamed_addr

declare i32 @_mbscmp(i8*, i8*) local_unnamed_addr

declare void @_c_exit() local_unnamed_addr

declare void @_exit(i32) local_unnamed_addr

declare void @exit(i32) local_unnamed_addr

declare i32* @_errno() local_unnamed_addr

declare i32 @_initterm_e(i32 ()**, i32 ()**) local_unnamed_addr

declare void @_initterm(void ()**, void ()**) local_unnamed_addr

declare i8* @_get_narrow_winmain_command_line() local_unnamed_addr

declare i64 @terminate(i32) local_unnamed_addr

declare void @_invalid_parameter_noinfo_noreturn() local_unnamed_addr

declare void @_set_app_type(i64) local_unnamed_addr

declare i64 @_crt_atexit() local_unnamed_addr

declare i32 @_register_onexit_function(%_onexit_table_t*, i32 ()*) local_unnamed_addr

declare i32 @_initialize_onexit_table(%_onexit_table_t*) local_unnamed_addr

declare i32 @_initialize_narrow_environment() local_unnamed_addr

declare i32 @_configure_narrow_argv(i64) local_unnamed_addr

declare i32 @_seh_filter_exe(i32, %_EXCEPTION_POINTERS*) local_unnamed_addr

declare void @_cexit() local_unnamed_addr

declare void @_register_thread_local_exe_atexit_callback(void (i64*, i32, i64*)*) local_unnamed_addr

declare void @_invalid_parameter_noinfo() local_unnamed_addr

declare i32 @_set_fmode(i32) local_unnamed_addr

declare i32* @__p__commode() local_unnamed_addr

declare i32 @__stdio_common_vsprintf(i64, i8*, i32, i8*, i64, i64) local_unnamed_addr

declare i32 @__stdio_common_vswprintf(i64, i16*, i32, i16*, i64, i64) local_unnamed_addr

declare i32 @__stdio_common_vsprintf_s(i64, i8*, i32, i8*, i64, i64) local_unnamed_addr

declare i32 @_stricmp(i8*, i8*) local_unnamed_addr

declare i32 @strcat_s(i8*, i32, i8*) local_unnamed_addr

declare i32 @strcmp(i8*, i8*) local_unnamed_addr

declare i64 @__asm_int3() local_unnamed_addr

declare i128 @__asm_movdqa(i128) local_unnamed_addr

declare i64 @__asm_movdqu(i128) local_unnamed_addr

declare i128 @__asm_movups(i128) local_unnamed_addr

declare void @__asm_movups.2(i128, i128) local_unnamed_addr

declare i128 @__asm_xorps(i128, i128) local_unnamed_addr

declare void @__asm_int(i8) local_unnamed_addr

declare %0 @__asm_cpuid(i32) local_unnamed_addr

declare %1 @__asm_cpuid.3(i32) local_unnamed_addr

declare %2 @__asm_cpuid.4(i32) local_unnamed_addr

declare i64 @__asm_xgetbv(i32, i32) local_unnamed_addr

declare i128 @__asm_movsd(i64) local_unnamed_addr

declare i64 @__asm_movsd.5(i128) local_unnamed_addr

declare i64 @__readgsqword(i64) local_unnamed_addr

!0 = !{i64 5368713237}
!1 = !{i64 5368713253}
!2 = !{i64 5368713271}
!3 = !{i64 5368713287}
!4 = !{i64 5368713312}
!5 = !{i64 5368713315}
!6 = !{i64 5368713319}
!7 = !{i64 5368713322}
!8 = !{i64 5368713324}
!9 = !{i64 5368713330}
!10 = !{i64 5368713334}
!11 = !{i64 5368713337}
!12 = !{i64 5368713339}
!13 = !{i64 5368713345}
!14 = !{i64 5368713349}
!15 = !{i64 5368713352}
!16 = !{i64 5368713354}
!17 = !{i64 5368713367}
!18 = !{i64 5368713375}
!19 = !{i64 5368713381}
!20 = !{i64 5368713392}
!21 = !{i64 5368713426}
!22 = !{i64 5368713432}
!23 = !{i64 5368713438}
!24 = !{i64 5368713440}
!25 = !{i64 5368713442}
!26 = !{i64 5368713446}
!27 = !{i64 5368713453}
!28 = !{i64 5368713458}
!29 = !{i64 5368713456}
!30 = !{i64 5368713462}
!31 = !{i64 5368713466}
!32 = !{i64 5368713469}
!33 = !{i64 5368713472}
!34 = !{i64 5368713475}
!35 = !{i64 5368713478}
!36 = !{i64 5368713483}
!37 = !{i64 5368713489}
!38 = !{i64 5368713494}
!39 = !{i64 5368713497}
!40 = !{i64 5368713502}
!41 = !{i64 5368713506}
!42 = !{i64 5368713517}
!43 = !{i64 5368713526}
!44 = !{i64 5368713537}
!45 = !{i64 5368713554}
!46 = !{i64 5368713575}
!47 = !{i64 5368713589}
!48 = !{i64 5368713616}
!49 = !{i64 5368713621}
!50 = !{i64 5368713644}
!51 = !{i64 5368713647}
!52 = !{i64 5368713653}
!53 = !{i64 5368713660}
!54 = !{i64 5368713671}
!55 = !{i64 5368713685}
!56 = !{i64 5368713712}
!57 = !{i64 5368713717}
!58 = !{i64 5368713740}
!59 = !{i64 5368713743}
!60 = !{i64 5368713749}
!61 = !{i64 5368713756}
!62 = !{i64 5368713767}
!63 = !{i64 5368713781}
!64 = !{i64 5368713808}
!65 = !{i64 5368713813}
!66 = !{i64 5368713836}
!67 = !{i64 5368713839}
!68 = !{i64 5368713843}
!69 = !{i64 5368713849}
!70 = !{i64 5368713856}
!71 = !{i64 5368713867}
!72 = !{i64 5368713872}
!73 = !{i64 5368713914}
!74 = !{i64 5368713942}
!75 = !{i64 5368713954}
!76 = !{i64 5368713957}
!77 = !{i64 5368713978}
!78 = !{i64 5368713986}
!79 = !{i64 5368713993}
!80 = !{i64 5368713995}
!81 = !{i64 5368714002}
!82 = !{i64 5368714010}
!83 = !{i64 5368714045}
!84 = !{i64 5368714065}
!85 = !{i64 5368714085}
!86 = !{i64 5368714145}
!87 = !{i64 5368714187}
!88 = !{i64 5368714192}
!89 = !{i64 5368714226}
!90 = !{i64 5368714243}
!91 = !{i64 5368714251}
!92 = !{i64 5368714256}
!93 = !{i64 5368714258}
!94 = !{i64 5368713890}
!95 = !{i64 5368714295}
!96 = !{i64 5368714310}
!97 = !{i64 5368714315}
!98 = !{i64 5368714329}
!99 = !{i64 5368714336}
!100 = !{i64 5368714339}
!101 = !{i64 5368714343}
!102 = !{i64 5368714349}
!103 = !{i64 5368714368}
!104 = !{i64 5368714373}
!105 = !{i64 5368714378}
!106 = !{i64 5368714396}
!107 = !{i64 5368714405}
!108 = !{i64 5368714412}
!109 = !{i64 5368714425}
!110 = !{i64 5368714433}
!111 = !{i64 5368714439}
!112 = !{i64 5368714441}
!113 = !{i64 5368714452}
!114 = !{i64 5368714457}
!115 = !{i64 5368714460}
!116 = !{i64 5368714462}
!117 = !{i64 5368714466}
!118 = !{i64 5368714470}
!119 = !{i64 5368714474}
!120 = !{i64 5368714476}
!121 = !{i64 5368714482}
!122 = !{i64 5368714483}
!123 = !{i64 5368714486}
!124 = !{i64 5368714491}
!125 = !{i64 5368714499}
!126 = !{i64 5368714524}
!127 = !{i64 5368714529}
!128 = !{i64 5368714533}
!129 = !{i64 5368714538}
!130 = !{i64 5368714543}
!131 = !{i64 5368714546}
!132 = !{i64 5368714551}
!133 = !{i64 5368714555}
!134 = !{i64 5368714559}
!135 = !{i64 5368714563}
!136 = !{i64 5368714569}
!137 = !{i64 5368714572}
!138 = !{i64 5368714575}
!139 = !{i64 5368714582}
!140 = !{i64 5368714588}
!141 = !{i64 5368714592}
!142 = !{i64 5368714595}
!143 = !{i64 5368714603}
!144 = !{i64 5368714605}
!145 = !{i64 5368714611}
!146 = !{i64 5368714615}
!147 = !{i64 5368714619}
!148 = !{i64 5368714627}
!149 = !{i64 5368714637}
!150 = !{i64 5368714643}
!151 = !{i64 5368714647}
!152 = !{i64 5368714651}
!153 = !{i64 5368714653}
!154 = !{i64 5368714656}
!155 = !{i64 5368714659}
!156 = !{i64 5368714666}
!157 = !{i64 5368714672}
!158 = !{i64 5368714679}
!159 = !{i64 5368714687}
!160 = !{i64 5368714689}
!161 = !{i64 5368714692}
!162 = !{i64 5368714697}
!163 = !{i64 5368714701}
!164 = !{i64 5368714725}
!165 = !{i64 5368714757}
!166 = !{i64 5368714758}
!167 = !{i64 5368714764}
!168 = !{i64 5368714765}
!169 = !{i64 5368714771}
!170 = !{i64 5368714772}
!171 = !{i64 5368714773}
!172 = !{i64 5368714774}
!173 = !{i64 5368714775}
!174 = !{i64 5368714776}
!175 = !{i64 5368714777}
!176 = !{i64 5368714778}
!177 = !{i64 5368714779}
!178 = !{i64 5368714780}
!179 = !{i64 5368714781}
!180 = !{i64 5368714782}
!181 = !{i64 5368714783}
!182 = !{i64 5368714784}
!183 = !{i64 5368714815}
!184 = !{i64 5368714838}
!185 = !{i64 5368714848}
!186 = !{i64 5368714855}
!187 = !{i64 5368714873}
!188 = !{i64 5368714908}
!189 = !{i64 5368714914}
!190 = !{i64 5368714916}
!191 = !{i64 5368714918}
!192 = !{i64 5368714957}
!193 = !{i64 5368714963}
!194 = !{i64 5368714968}
!195 = !{i64 5368714974}
!196 = !{i64 5368714989}
!197 = !{i64 5368715000}
!198 = !{i64 5368715008}
!199 = !{i64 5368715015}
!200 = !{i64 5368715020}
!201 = !{i64 5368715012}
!202 = !{i64 5368715022}
!203 = !{i64 5368715026}
!204 = !{i64 5368715028}
!205 = !{i64 5368715038}
!206 = !{i64 5368715054}
!207 = !{i64 5368715059}
!208 = !{i64 5368715061}
!209 = !{i64 5368715063}
!210 = !{i64 5368715073}
!211 = !{i64 5368715090}
!212 = !{i64 5368715104}
!213 = !{i64 5368715108}
!214 = !{i64 5368715135}
!215 = !{i64 5368715140}
!216 = !{i64 5368715145}
!217 = !{i64 5368715157}
!218 = !{i64 5368715163}
!219 = !{i64 5368715185}
!220 = !{i64 5368715187}
!221 = !{i64 5368715192}
!222 = !{i64 5368715198}
!223 = !{i64 5368715205}
!224 = !{i64 5368715207}
!225 = !{i64 5368715211}
!226 = !{i64 5368715218}
!227 = !{i64 5368715226}
!228 = !{i64 5368715228}
!229 = !{i64 5368715234}
!230 = !{i64 5368715235}
!231 = !{i64 5368715175}
!232 = !{i64 5368715240}
!233 = !{i64 5368715242}
!234 = !{i64 5368715273}
!235 = !{i64 5368715277}
!236 = !{i64 5368715304}
!237 = !{i64 5368715333}
!238 = !{i64 5368715346}
!239 = !{i64 5368715411}
!240 = !{i64 5368715413}
!241 = !{i64 5368715444}
!242 = !{i64 5368715448}
!243 = !{i64 5368715475}
!244 = !{i64 5368715504}
!245 = !{i64 5368715517}
!246 = !{i64 5368715582}
!247 = !{i64 5368715584}
!248 = !{i64 5368715615}
!249 = !{i64 5368715619}
!250 = !{i64 5368715646}
!251 = !{i64 5368715675}
!252 = !{i64 5368715686}
!253 = !{i64 5368715751}
!254 = !{i64 5368715761}
!255 = !{i64 5368715763}
!256 = !{i64 5368715765}
!257 = !{i64 5368715782}
!258 = !{i64 5368715799}
!259 = !{i64 5368715828}
!260 = !{i64 5368715846}
!261 = !{i64 5368715856}
!262 = !{i64 5368715861}
!263 = !{i64 5368715876}
!264 = !{i64 5368715883}
!265 = !{i64 5368715900}
!266 = !{i64 5368715920}
!267 = !{i64 5368715936}
!268 = !{i64 5368715965}
!269 = !{i64 5368715971}
!270 = !{i64 5368715974}
!271 = !{i64 5368715979}
!272 = !{i64 5368715988}
!273 = !{i64 5368715991}
!274 = !{i64 5368715999}
!275 = !{i64 5368716005}
!276 = !{i64 5368716007}
!277 = !{i64 5368716010}
!278 = !{i64 5368716013}
!279 = !{i64 5368716016}
!280 = !{i64 5368716019}
!281 = !{i64 5368716021}
!282 = !{i64 5368716024}
!283 = !{i64 5368716028}
!284 = !{i64 5368716032}
!285 = !{i64 5368716035}
!286 = !{i64 5368716037}
!287 = !{i64 5368716040}
!288 = !{i64 5368716042}
!289 = !{i64 5368716075}
!290 = !{i64 5368716080}
!291 = !{i64 5368716089}
!292 = !{i64 5368716096}
!293 = !{i64 5368716099}
!294 = !{i64 5368716101}
!295 = !{i64 5368716110}
!296 = !{i64 5368716117}
!297 = !{i64 5368716132}
!298 = !{i64 5368716136}
!299 = !{i64 5368716139}
!300 = !{i64 5368716145}
!301 = !{i64 5368716152}
!302 = !{i64 5368716155}
!303 = !{i64 5368716162}
!304 = !{i64 5368716174}
!305 = !{i64 5368716187}
!306 = !{i64 5368716208}
!307 = !{i64 5368716217}
!308 = !{i64 5368716234}
!309 = !{i64 5368716245}
!310 = !{i64 5368716253}
!311 = !{i64 5368716255}
!312 = !{i64 5368716259}
!313 = !{i64 5368716262}
!314 = !{i64 5368716264}
!315 = !{i64 5368716270}
!316 = !{i64 5368716274}
!317 = !{i64 5368716284}
!318 = !{i64 5368716302}
!319 = !{i64 5368716310}
!320 = !{i64 5368716324}
!321 = !{i64 5368716327}
!322 = !{i64 5368716329}
!323 = !{i64 5368716335}
!324 = !{i64 5368716341}
!325 = !{i64 5368716343}
!326 = !{i64 5368716349}
!327 = !{i64 5368716363}
!328 = !{i64 5368716371}
!329 = !{i64 5368716376}
!330 = !{i64 5368716383}
!331 = !{i64 5368716392}
!332 = !{i64 5368716402}
!333 = !{i64 5368716423}
!334 = !{i64 5368716430}
!335 = !{i64 5368716446}
!336 = !{i64 5368716453}
!337 = !{i64 5368716459}
!338 = !{i64 5368716471}
!339 = !{i64 5368716484}
!340 = !{i64 5368716492}
!341 = !{i64 5368716497}
!342 = !{i64 5368716504}
!343 = !{i64 5368716510}
!344 = !{i64 5368716523}
!345 = !{i64 5368716537}
!346 = !{i64 5368716544}
!347 = !{i64 5368716551}
!348 = !{i64 5368716563}
!349 = !{i64 5368716568}
!350 = !{i64 5368716576}
!351 = !{i64 5368716589}
!352 = !{i64 5368716603}
!353 = !{i64 5368716591}
!354 = !{i64 5368716605}
!355 = !{i64 5368716607}
!356 = !{i64 5368716610}
!357 = !{i64 5368716615}
!358 = !{i64 5368716623}
!359 = !{i64 5368716625}
!360 = !{i64 5368716617}
!361 = !{i64 5368716620}
!362 = !{i64 5368716641}
!363 = !{i64 5368716644}
!364 = !{i64 5368716647}
!365 = !{i64 5368716649}
!366 = !{i64 5368716657}
!367 = !{i64 5368716659}
!368 = !{i64 5368716669}
!369 = !{i64 5368716673}
!370 = !{i64 5368716679}
!371 = !{i64 5368716682}
!372 = !{i64 5368716684}
!373 = !{i64 5368716687}
!374 = !{i64 5368716690}
!375 = !{i64 5368716693}
!376 = !{i64 5368716700}
!377 = !{i64 5368716717}
!378 = !{i64 5368716730}
!379 = !{i64 5368716736}
!380 = !{i64 5368716739}
!381 = !{i64 5368716741}
!382 = !{i64 5368716750}
!383 = !{i64 5368716754}
!384 = !{i64 5368716761}
!385 = !{i64 5368716768}
!386 = !{i64 5368716777}
!387 = !{i64 5368716793}
!388 = !{i64 5368716780}
!389 = !{i64 5368716795}
!390 = !{i64 5368716798}
!391 = !{i64 5368716802}
!392 = !{i64 5368716808}
!393 = !{i64 5368716810}
!394 = !{i64 5368716829}
!395 = !{i64 5368716827}
!396 = !{i64 5368716834}
!397 = !{i64 5368716838}
!398 = !{i64 5368716842}
!399 = !{i64 5368716846}
!400 = !{i64 5368716849}
!401 = !{i64 5368716851}
!402 = !{i64 5368716854}
!403 = !{i64 5368716860}
!404 = !{i64 5368716867}
!405 = !{i64 5368716870}
!406 = !{i64 5368716872}
!407 = !{i64 5368716885}
!408 = !{i64 5368716886}
!409 = !{i64 5368716895}
!410 = !{i64 5368716898}
!411 = !{i64 5368716900}
!412 = !{i64 5368716903}
!413 = !{i64 5368716914}
!414 = !{i64 5368716928}
!415 = !{i64 5368716932}
!416 = !{i64 5368716936}
!417 = !{i64 5368716947}
!418 = !{i64 5368716969}
!419 = !{i64 5368716972}
!420 = !{i64 5368716979}
!421 = !{i64 5368716992}
!422 = !{i64 5368717008}
!423 = !{i64 5368717036}
!424 = !{i64 5368717070}
!425 = !{i64 5368717091}
!426 = !{i64 5368717135}
!427 = !{i64 5368717141}
!428 = !{i64 5368717143}
!429 = !{i64 5368717145}
!430 = !{i64 5368717150}
!431 = !{i64 5368717159}
!432 = !{i64 5368717197}
!433 = !{i64 5368717202}
!434 = !{i64 5368717208}
!435 = !{i64 5368717210}
!436 = !{i64 5368717212}
!437 = !{i64 5368717224}
!438 = !{i64 5368717232}
!439 = !{i64 5368717235}
!440 = !{i64 5368717241}
!441 = !{i64 5368717255}
!442 = !{i64 5368717267}
!443 = !{i64 5368717274}
!444 = !{i64 5368717278}
!445 = !{i64 5368717282}
!446 = !{i64 5368717287}
!447 = !{i64 5368717295}
!448 = !{i64 5368717302}
!449 = !{i64 5368717308}
!450 = !{i64 5368717315}
!451 = !{i64 5368717323}
!452 = !{i64 5368717304}
!453 = !{i64 5368717329}
!454 = !{i64 5368717332}
!455 = !{i64 5368717339}
!456 = !{i64 5368717343}
!457 = !{i64 5368717351}
!458 = !{i64 5368717354}
!459 = !{i64 5368717358}
!460 = !{i64 5368717362}
!461 = !{i64 5368717364}
!462 = !{i64 5368717375}
!463 = !{i64 5368717382}
!464 = !{i64 5368717388}
!465 = !{i64 5368717395}
!466 = !{i64 5368717403}
!467 = !{i64 5368717384}
!468 = !{i64 5368717405}
!469 = !{i64 5368717408}
!470 = !{i64 5368717413}
!471 = !{i64 5368717417}
!472 = !{i64 5368717425}
!473 = !{i64 5368717439}
!474 = !{i64 5368717464}
!475 = !{i64 5368717465}
!476 = !{i64 5368717471}
!477 = !{i64 5368717472}
!478 = !{i64 5368717478}
!479 = !{i64 5368717479}
!480 = !{i64 5368717480}
!481 = !{i64 5368717481}
!482 = !{i64 5368717482}
!483 = !{i64 5368717483}
!484 = !{i64 5368717484}
!485 = !{i64 5368717485}
!486 = !{i64 5368717486}
!487 = !{i64 5368717487}
!488 = !{i64 5368717515}
!489 = !{i64 5368717523}
!490 = !{i64 5368717547}
!491 = !{i64 5368717567}
!492 = !{i64 5368717587}
!493 = !{i64 5368717608}
!494 = !{i64 5368717624}
!495 = !{i64 5368717660}
!496 = !{i64 5368717664}
!497 = !{i64 5368717673}
!498 = !{i64 5368717712}
!499 = !{i64 5368717730}
!500 = !{i64 5368717746}
!501 = !{i64 5368717761}
!502 = !{i64 5368717765}
!503 = !{i64 5368717770}
!504 = !{i64 5368717774}
!505 = !{i64 5368717782}
!506 = !{i64 5368717785}
!507 = !{i64 5368717792}
!508 = !{i64 5368717795}
!509 = !{i64 5368717800}
!510 = !{i64 5368717810}
!511 = !{i64 5368717829}
!512 = !{i64 5368717842}
!513 = !{i64 5368717856}
!514 = !{i64 5368717875}
!515 = !{i64 5368717890}
!516 = !{i64 5368717897}
!517 = !{i64 5368717913}
!518 = !{i64 5368717998}
!519 = !{i64 5368718004}
!520 = !{i64 5368718006}
!521 = !{i64 5368718008}
!522 = !{i64 5368718018}
!523 = !{i64 5368718024}
!524 = !{i64 5368718026}
!525 = !{i64 5368718028}
!526 = !{i64 5368718033}
!527 = !{i64 5368718044}
!528 = !{i64 5368718050}
!529 = !{i64 5368718054}
!530 = !{i64 5368718061}
!531 = !{i64 5368718065}
!532 = !{i64 5368718069}
!533 = !{i64 5368718073}
!534 = !{i64 5368718078}
!535 = !{i64 5368718086}
!536 = !{i64 5368718093}
!537 = !{i64 5368718095}
!538 = !{i64 5368718106}
!539 = !{i64 5368718114}
!540 = !{i64 5368718099}
!541 = !{i64 5368718116}
!542 = !{i64 5368718119}
!543 = !{i64 5368718124}
!544 = !{i64 5368718128}
!545 = !{i64 5368718136}
!546 = !{i64 5368718139}
!547 = !{i64 5368718143}
!548 = !{i64 5368718147}
!549 = !{i64 5368718152}
!550 = !{i64 5368718160}
!551 = !{i64 5368718167}
!552 = !{i64 5368718169}
!553 = !{i64 5368718180}
!554 = !{i64 5368718188}
!555 = !{i64 5368718173}
!556 = !{i64 5368718190}
!557 = !{i64 5368718193}
!558 = !{i64 5368718198}
!559 = !{i64 5368718212}
!560 = !{i64 5368718220}
!561 = !{i64 5368718233}
!562 = !{i64 5368718234}
!563 = !{i64 5368718240}
!564 = !{i64 5368718241}
!565 = !{i64 5368718242}
!566 = !{i64 5368718243}
!567 = !{i64 5368718244}
!568 = !{i64 5368718245}
!569 = !{i64 5368718246}
!570 = !{i64 5368718247}
!571 = !{i64 5368718248}
!572 = !{i64 5368718249}
!573 = !{i64 5368718250}
!574 = !{i64 5368718251}
!575 = !{i64 5368718252}
!576 = !{i64 5368718253}
!577 = !{i64 5368718254}
!578 = !{i64 5368718255}
!579 = !{i64 5368718256}
!580 = !{i64 5368718291}
!581 = !{i64 5368718314}
!582 = !{i64 5368718322}
!583 = !{i64 5368718330}
!584 = !{i64 5368718335}
!585 = !{i64 5368718339}
!586 = !{i64 5368718345}
!587 = !{i64 5368718352}
!588 = !{i64 5368718375}
!589 = !{i64 5368718396}
!590 = !{i64 5368718414}
!591 = !{i64 5368718435}
!592 = !{i64 5368718449}
!593 = !{i64 5368718492}
!594 = !{i64 5368718500}
!595 = !{i64 5368718504}
!596 = !{i64 5368718511}
!597 = !{i64 5368718514}
!598 = !{i64 5368718518}
!599 = !{i64 5368718520}
!600 = !{i64 5368718524}
!601 = !{i64 5368718531}
!602 = !{i64 5368718535}
!603 = !{i64 5368718537}
!604 = !{i64 5368718540}
!605 = !{i64 5368718557}
!606 = !{i64 5368718562}
!607 = !{i64 5368718567}
!608 = !{i64 5368718593}
!609 = !{i64 5368718616}
!610 = !{i64 5368718624}
!611 = !{i64 5368718628}
!612 = !{i64 5368718598}
!613 = !{i64 5368718601}
!614 = !{i64 5368718604}
!615 = !{i64 5368718609}
!616 = !{i64 5368718612}
!617 = !{i64 5368718620}
!618 = !{i64 5368718636}
!619 = !{i64 5368718647}
!620 = !{i64 5368718652}
!621 = !{i64 5368718655}
!622 = !{i64 5368718660}
!623 = !{i64 5368718663}
!624 = !{i64 5368718667}
!625 = !{i64 5368718671}
!626 = !{i64 5368718675}
!627 = !{i64 5368718679}
!628 = !{i64 5368718687}
!629 = !{i64 5368718705}
!630 = !{i64 5368718709}
!631 = !{i64 5368718723}
!632 = !{i64 5368718727}
!633 = !{i64 5368718732}
!634 = !{i64 5368718749}
!635 = !{i64 5368718754}
!636 = !{i64 5368718763}
!637 = !{i64 5368718790}
!638 = !{i64 5368718795}
!639 = !{i64 5368718798}
!640 = !{i64 5368718804}
!641 = !{i64 5368718807}
!642 = !{i64 5368718812}
!643 = !{i64 5368718816}
!644 = !{i64 5368718821}
!645 = !{i64 5368718825}
!646 = !{i64 5368718833}
!647 = !{i64 5368718849}
!648 = !{i64 5368718852}
!649 = !{i64 5368718856}
!650 = !{i64 5368718872}
!651 = !{i64 5368718876}
!652 = !{i64 5368718882}
!653 = !{i64 5368718899}
!654 = !{i64 5368718904}
!655 = !{i64 5368718914}
!656 = !{i64 5368718942}
!657 = !{i64 5368718471}
!658 = !{i64 5368718475}
!659 = !{i64 5368718480}
!660 = !{i64 5368718947}
!661 = !{i64 5368718950}
!662 = !{i64 5368718955}
!663 = !{i64 5368718958}
!664 = !{i64 5368718962}
!665 = !{i64 5368718966}
!666 = !{i64 5368718970}
!667 = !{i64 5368718974}
!668 = !{i64 5368718982}
!669 = !{i64 5368718993}
!670 = !{i64 5368718998}
!671 = !{i64 5368719001}
!672 = !{i64 5368719007}
!673 = !{i64 5368719010}
!674 = !{i64 5368719015}
!675 = !{i64 5368719019}
!676 = !{i64 5368719024}
!677 = !{i64 5368719028}
!678 = !{i64 5368719036}
!679 = !{i64 5368719056}
!680 = !{i64 5368719060}
!681 = !{i64 5368719076}
!682 = !{i64 5368719080}
!683 = !{i64 5368719086}
!684 = !{i64 5368719103}
!685 = !{i64 5368719108}
!686 = !{i64 5368719118}
!687 = !{i64 5368719146}
!688 = !{i64 5368719151}
!689 = !{i64 5368719154}
!690 = !{i64 5368719158}
!691 = !{i64 5368719162}
!692 = !{i64 5368719170}
!693 = !{i64 5368719174}
!694 = !{i64 5368719178}
!695 = !{i64 5368719187}
!696 = !{i64 5368719191}
!697 = !{i64 5368719193}
!698 = !{i64 5368719201}
!699 = !{i64 5368719209}
!700 = !{i64 5368719216}
!701 = !{i64 5368719218}
!702 = !{i64 5368719222}
!703 = !{i64 5368719229}
!704 = !{i64 5368719237}
!705 = !{i64 5368719239}
!706 = !{i64 5368719245}
!707 = !{i64 5368719246}
!708 = !{i64 5368719251}
!709 = !{i64 5368719259}
!710 = !{i64 5368719265}
!711 = !{i64 5368719275}
!712 = !{i64 5368719279}
!713 = !{i64 5368719281}
!714 = !{i64 5368719289}
!715 = !{i64 5368719296}
!716 = !{i64 5368719303}
!717 = !{i64 5368719305}
!718 = !{i64 5368719309}
!719 = !{i64 5368719316}
!720 = !{i64 5368719324}
!721 = !{i64 5368719326}
!722 = !{i64 5368719332}
!723 = !{i64 5368719333}
!724 = !{i64 5368719338}
!725 = !{i64 5368719346}
!726 = !{i64 5368719351}
!727 = !{i64 5368719360}
!728 = !{i64 5368719364}
!729 = !{i64 5368719366}
!730 = !{i64 5368719374}
!731 = !{i64 5368719382}
!732 = !{i64 5368719389}
!733 = !{i64 5368719391}
!734 = !{i64 5368719395}
!735 = !{i64 5368719402}
!736 = !{i64 5368719410}
!737 = !{i64 5368719412}
!738 = !{i64 5368719418}
!739 = !{i64 5368719419}
!740 = !{i64 5368719424}
!741 = !{i64 5368719432}
!742 = !{i64 5368719438}
!743 = !{i64 5368719448}
!744 = !{i64 5368719452}
!745 = !{i64 5368719454}
!746 = !{i64 5368719462}
!747 = !{i64 5368719469}
!748 = !{i64 5368719476}
!749 = !{i64 5368719478}
!750 = !{i64 5368719482}
!751 = !{i64 5368719489}
!752 = !{i64 5368719497}
!753 = !{i64 5368719499}
!754 = !{i64 5368719505}
!755 = !{i64 5368719506}
!756 = !{i64 5368719511}
!757 = !{i64 5368719519}
!758 = !{i64 5368719524}
!759 = !{i64 5368719533}
!760 = !{i64 5368719537}
!761 = !{i64 5368719539}
!762 = !{i64 5368719547}
!763 = !{i64 5368719554}
!764 = !{i64 5368719561}
!765 = !{i64 5368719563}
!766 = !{i64 5368719567}
!767 = !{i64 5368719574}
!768 = !{i64 5368719582}
!769 = !{i64 5368719584}
!770 = !{i64 5368719590}
!771 = !{i64 5368719591}
!772 = !{i64 5368719596}
!773 = !{i64 5368719604}
!774 = !{i64 5368719609}
!775 = !{i64 5368719618}
!776 = !{i64 5368719622}
!777 = !{i64 5368719624}
!778 = !{i64 5368719632}
!779 = !{i64 5368719639}
!780 = !{i64 5368719646}
!781 = !{i64 5368719648}
!782 = !{i64 5368719652}
!783 = !{i64 5368719659}
!784 = !{i64 5368719667}
!785 = !{i64 5368719669}
!786 = !{i64 5368719675}
!787 = !{i64 5368719676}
!788 = !{i64 5368719681}
!789 = !{i64 5368719689}
!790 = !{i64 5368719694}
!791 = !{i64 5368719707}
!792 = !{i64 5368719713}
!793 = !{i64 5368719721}
!794 = !{i64 5368719728}
!795 = !{i64 5368719735}
!796 = !{i64 5368719741}
!797 = !{i64 5368719745}
!798 = !{i64 5368719752}
!799 = !{i64 5368719760}
!800 = !{i64 5368719766}
!801 = !{i64 5368719772}
!802 = !{i64 5368719793}
!803 = !{i64 5368719801}
!804 = !{i64 5368719806}
!805 = !{i64 5368719808}
!806 = !{i64 5368719821}
!807 = !{i64 5368719829}
!808 = !{i64 5368719833}
!809 = !{i64 5368719840}
!810 = !{i64 5368719843}
!811 = !{i64 5368719847}
!812 = !{i64 5368719849}
!813 = !{i64 5368719853}
!814 = !{i64 5368719860}
!815 = !{i64 5368719864}
!816 = !{i64 5368719866}
!817 = !{i64 5368719869}
!818 = !{i64 5368719886}
!819 = !{i64 5368719891}
!820 = !{i64 5368719896}
!821 = !{i64 5368719922}
!822 = !{i64 5368719945}
!823 = !{i64 5368719953}
!824 = !{i64 5368719957}
!825 = !{i64 5368719927}
!826 = !{i64 5368719930}
!827 = !{i64 5368719933}
!828 = !{i64 5368719938}
!829 = !{i64 5368719941}
!830 = !{i64 5368719949}
!831 = !{i64 5368719965}
!832 = !{i64 5368719976}
!833 = !{i64 5368719981}
!834 = !{i64 5368719984}
!835 = !{i64 5368719989}
!836 = !{i64 5368719992}
!837 = !{i64 5368719996}
!838 = !{i64 5368720000}
!839 = !{i64 5368720004}
!840 = !{i64 5368720008}
!841 = !{i64 5368720016}
!842 = !{i64 5368720031}
!843 = !{i64 5368720034}
!844 = !{i64 5368720038}
!845 = !{i64 5368720052}
!846 = !{i64 5368720056}
!847 = !{i64 5368720061}
!848 = !{i64 5368720078}
!849 = !{i64 5368720083}
!850 = !{i64 5368720092}
!851 = !{i64 5368720119}
!852 = !{i64 5368720124}
!853 = !{i64 5368720127}
!854 = !{i64 5368720133}
!855 = !{i64 5368720136}
!856 = !{i64 5368720141}
!857 = !{i64 5368720145}
!858 = !{i64 5368720150}
!859 = !{i64 5368720154}
!860 = !{i64 5368720162}
!861 = !{i64 5368720199}
!862 = !{i64 5368720209}
!863 = !{i64 5368720170}
!864 = !{i64 5368720178}
!865 = !{i64 5368720182}
!866 = !{i64 5368720166}
!867 = !{i64 5368720211}
!868 = !{i64 5368720220}
!869 = !{i64 5368720225}
!870 = !{i64 5368720229}
!871 = !{i64 5368720239}
!872 = !{i64 5368720246}
!873 = !{i64 5368720251}
!874 = !{i64 5368720261}
!875 = !{i64 5368720268}
!876 = !{i64 5368720273}
!877 = !{i64 5368720282}
!878 = !{i64 5368720286}
!879 = !{i64 5368720289}
!880 = !{i64 5368720295}
!881 = !{i64 5368720298}
!882 = !{i64 5368720303}
!883 = !{i64 5368720307}
!884 = !{i64 5368720312}
!885 = !{i64 5368720316}
!886 = !{i64 5368720324}
!887 = !{i64 5368720343}
!888 = !{i64 5368720347}
!889 = !{i64 5368720363}
!890 = !{i64 5368720367}
!891 = !{i64 5368720373}
!892 = !{i64 5368720390}
!893 = !{i64 5368720395}
!894 = !{i64 5368720405}
!895 = !{i64 5368720433}
!896 = !{i64 5368720438}
!897 = !{i64 5368720441}
!898 = !{i64 5368720446}
!899 = !{i64 5368720449}
!900 = !{i64 5368720453}
!901 = !{i64 5368720457}
!902 = !{i64 5368720461}
!903 = !{i64 5368720465}
!904 = !{i64 5368720473}
!905 = !{i64 5368720488}
!906 = !{i64 5368720491}
!907 = !{i64 5368720495}
!908 = !{i64 5368720509}
!909 = !{i64 5368720513}
!910 = !{i64 5368720518}
!911 = !{i64 5368720535}
!912 = !{i64 5368720540}
!913 = !{i64 5368720549}
!914 = !{i64 5368720576}
!915 = !{i64 5368720581}
!916 = !{i64 5368720584}
!917 = !{i64 5368720589}
!918 = !{i64 5368720592}
!919 = !{i64 5368720596}
!920 = !{i64 5368720600}
!921 = !{i64 5368720604}
!922 = !{i64 5368720608}
!923 = !{i64 5368720616}
!924 = !{i64 5368720627}
!925 = !{i64 5368720632}
!926 = !{i64 5368720635}
!927 = !{i64 5368720640}
!928 = !{i64 5368720643}
!929 = !{i64 5368720647}
!930 = !{i64 5368720651}
!931 = !{i64 5368720655}
!932 = !{i64 5368720659}
!933 = !{i64 5368720667}
!934 = !{i64 5368720682}
!935 = !{i64 5368720687}
!936 = !{i64 5368720690}
!937 = !{i64 5368720694}
!938 = !{i64 5368720698}
!939 = !{i64 5368720702}
!940 = !{i64 5368720706}
!941 = !{i64 5368720714}
!942 = !{i64 5368720735}
!943 = !{i64 5368720739}
!944 = !{i64 5368720741}
!945 = !{i64 5368720749}
!946 = !{i64 5368720756}
!947 = !{i64 5368720763}
!948 = !{i64 5368720765}
!949 = !{i64 5368720769}
!950 = !{i64 5368720776}
!951 = !{i64 5368720784}
!952 = !{i64 5368720786}
!953 = !{i64 5368720792}
!954 = !{i64 5368720793}
!955 = !{i64 5368720798}
!956 = !{i64 5368720803}
!957 = !{i64 5368720807}
!958 = !{i64 5368720809}
!959 = !{i64 5368720817}
!960 = !{i64 5368720824}
!961 = !{i64 5368720831}
!962 = !{i64 5368720833}
!963 = !{i64 5368720837}
!964 = !{i64 5368720844}
!965 = !{i64 5368720852}
!966 = !{i64 5368720854}
!967 = !{i64 5368720860}
!968 = !{i64 5368720861}
!969 = !{i64 5368720866}
!970 = !{i64 5368720874}
!971 = !{i64 5368720879}
!972 = !{i64 5368720888}
!973 = !{i64 5368720892}
!974 = !{i64 5368720894}
!975 = !{i64 5368720902}
!976 = !{i64 5368720909}
!977 = !{i64 5368720916}
!978 = !{i64 5368720918}
!979 = !{i64 5368720922}
!980 = !{i64 5368720929}
!981 = !{i64 5368720937}
!982 = !{i64 5368720939}
!983 = !{i64 5368720945}
!984 = !{i64 5368720946}
!985 = !{i64 5368720951}
!986 = !{i64 5368720959}
!987 = !{i64 5368720964}
!988 = !{i64 5368720973}
!989 = !{i64 5368720977}
!990 = !{i64 5368720979}
!991 = !{i64 5368720987}
!992 = !{i64 5368720994}
!993 = !{i64 5368721001}
!994 = !{i64 5368721003}
!995 = !{i64 5368721007}
!996 = !{i64 5368721014}
!997 = !{i64 5368721022}
!998 = !{i64 5368721024}
!999 = !{i64 5368721030}
!1000 = !{i64 5368721031}
!1001 = !{i64 5368721036}
!1002 = !{i64 5368721044}
!1003 = !{i64 5368721049}
!1004 = !{i64 5368721058}
!1005 = !{i64 5368721062}
!1006 = !{i64 5368721064}
!1007 = !{i64 5368721072}
!1008 = !{i64 5368721080}
!1009 = !{i64 5368721087}
!1010 = !{i64 5368721089}
!1011 = !{i64 5368721093}
!1012 = !{i64 5368721100}
!1013 = !{i64 5368721108}
!1014 = !{i64 5368721110}
!1015 = !{i64 5368721116}
!1016 = !{i64 5368721117}
!1017 = !{i64 5368721122}
!1018 = !{i64 5368721130}
!1019 = !{i64 5368721136}
!1020 = !{i64 5368721147}
!1021 = !{i64 5368721151}
!1022 = !{i64 5368721153}
!1023 = !{i64 5368721161}
!1024 = !{i64 5368721169}
!1025 = !{i64 5368721176}
!1026 = !{i64 5368721178}
!1027 = !{i64 5368721182}
!1028 = !{i64 5368721189}
!1029 = !{i64 5368721197}
!1030 = !{i64 5368721199}
!1031 = !{i64 5368721205}
!1032 = !{i64 5368721206}
!1033 = !{i64 5368721211}
!1034 = !{i64 5368721219}
!1035 = !{i64 5368721225}
!1036 = !{i64 5368721235}
!1037 = !{i64 5368721239}
!1038 = !{i64 5368721241}
!1039 = !{i64 5368721249}
!1040 = !{i64 5368721256}
!1041 = !{i64 5368721263}
!1042 = !{i64 5368721265}
!1043 = !{i64 5368721269}
!1044 = !{i64 5368721276}
!1045 = !{i64 5368721284}
!1046 = !{i64 5368721286}
!1047 = !{i64 5368721292}
!1048 = !{i64 5368721293}
!1049 = !{i64 5368721298}
!1050 = !{i64 5368721306}
!1051 = !{i64 5368721311}
!1052 = !{i64 5368721320}
!1053 = !{i64 5368721324}
!1054 = !{i64 5368721326}
!1055 = !{i64 5368721334}
!1056 = !{i64 5368721341}
!1057 = !{i64 5368721348}
!1058 = !{i64 5368721350}
!1059 = !{i64 5368721354}
!1060 = !{i64 5368721361}
!1061 = !{i64 5368721369}
!1062 = !{i64 5368721371}
!1063 = !{i64 5368721377}
!1064 = !{i64 5368721378}
!1065 = !{i64 5368721383}
!1066 = !{i64 5368721391}
!1067 = !{i64 5368721396}
!1068 = !{i64 5368721408}
!1069 = !{i64 5368721412}
!1070 = !{i64 5368721414}
!1071 = !{i64 5368721422}
!1072 = !{i64 5368721432}
!1073 = !{i64 5368721439}
!1074 = !{i64 5368721441}
!1075 = !{i64 5368721445}
!1076 = !{i64 5368721452}
!1077 = !{i64 5368721460}
!1078 = !{i64 5368721462}
!1079 = !{i64 5368721468}
!1080 = !{i64 5368721469}
!1081 = !{i64 5368721474}
!1082 = !{i64 5368721482}
!1083 = !{i64 5368721490}
!1084 = !{i64 5368721505}
!1085 = !{i64 5368721509}
!1086 = !{i64 5368721511}
!1087 = !{i64 5368721519}
!1088 = !{i64 5368721529}
!1089 = !{i64 5368721536}
!1090 = !{i64 5368721538}
!1091 = !{i64 5368721542}
!1092 = !{i64 5368721549}
!1093 = !{i64 5368721557}
!1094 = !{i64 5368721559}
!1095 = !{i64 5368721565}
!1096 = !{i64 5368721566}
!1097 = !{i64 5368721571}
!1098 = !{i64 5368721572}
!1099 = !{i64 5368721576}
!1100 = !{i64 5368721578}
!1101 = !{i64 5368721589}
!1102 = !{i64 5368721596}
!1103 = !{i64 5368721598}
!1104 = !{i64 5368721602}
!1105 = !{i64 5368721609}
!1106 = !{i64 5368721617}
!1107 = !{i64 5368721619}
!1108 = !{i64 5368721625}
!1109 = !{i64 5368721629}
!1110 = !{i64 5368721672}
!1111 = !{i64 5368721688}
!1112 = !{i64 5368721701}
!1113 = !{i64 5368721704}
!1114 = !{i64 5368721708}
!1115 = !{i64 5368721712}
!1116 = !{i64 5368721716}
!1117 = !{i64 5368721720}
!1118 = !{i64 5368721728}
!1119 = !{i64 5368721739}
!1120 = !{i64 5368721752}
!1121 = !{i64 5368721756}
!1122 = !{i64 5368721758}
!1123 = !{i64 5368721766}
!1124 = !{i64 5368721776}
!1125 = !{i64 5368721783}
!1126 = !{i64 5368721785}
!1127 = !{i64 5368721789}
!1128 = !{i64 5368721796}
!1129 = !{i64 5368721804}
!1130 = !{i64 5368721806}
!1131 = !{i64 5368721812}
!1132 = !{i64 5368721813}
!1133 = !{i64 5368721818}
!1134 = !{i64 5368721826}
!1135 = !{i64 5368721830}
!1136 = !{i64 5368721832}
!1137 = !{i64 5368721840}
!1138 = !{i64 5368721847}
!1139 = !{i64 5368721854}
!1140 = !{i64 5368721856}
!1141 = !{i64 5368721860}
!1142 = !{i64 5368721867}
!1143 = !{i64 5368721875}
!1144 = !{i64 5368721877}
!1145 = !{i64 5368721883}
!1146 = !{i64 5368721884}
!1147 = !{i64 5368721899}
!1148 = !{i64 5368721921}
!1149 = !{i64 5368721936}
!1150 = !{i64 5368721973}
!1151 = !{i64 5368721999}
!1152 = !{i64 5368722007}
!1153 = !{i64 5368722018}
!1154 = !{i64 5368722030}
!1155 = !{i64 5368722034}
!1156 = !{i64 5368722040}
!1157 = !{i64 5368722048}
!1158 = !{i64 5368722053}
!1159 = !{i64 5368722055}
!1160 = !{i64 5368722065}
!1161 = !{i64 5368722073}
!1162 = !{i64 5368722077}
!1163 = !{i64 5368722084}
!1164 = !{i64 5368722087}
!1165 = !{i64 5368722091}
!1166 = !{i64 5368722093}
!1167 = !{i64 5368722097}
!1168 = !{i64 5368722104}
!1169 = !{i64 5368722108}
!1170 = !{i64 5368722110}
!1171 = !{i64 5368722113}
!1172 = !{i64 5368722130}
!1173 = !{i64 5368722135}
!1174 = !{i64 5368722140}
!1175 = !{i64 5368722166}
!1176 = !{i64 5368722189}
!1177 = !{i64 5368722197}
!1178 = !{i64 5368722201}
!1179 = !{i64 5368722171}
!1180 = !{i64 5368722174}
!1181 = !{i64 5368722177}
!1182 = !{i64 5368722182}
!1183 = !{i64 5368722185}
!1184 = !{i64 5368722193}
!1185 = !{i64 5368722209}
!1186 = !{i64 5368722220}
!1187 = !{i64 5368722225}
!1188 = !{i64 5368722228}
!1189 = !{i64 5368722234}
!1190 = !{i64 5368722237}
!1191 = !{i64 5368722242}
!1192 = !{i64 5368722246}
!1193 = !{i64 5368722251}
!1194 = !{i64 5368722255}
!1195 = !{i64 5368722263}
!1196 = !{i64 5368722279}
!1197 = !{i64 5368722282}
!1198 = !{i64 5368722286}
!1199 = !{i64 5368722302}
!1200 = !{i64 5368722306}
!1201 = !{i64 5368722312}
!1202 = !{i64 5368722329}
!1203 = !{i64 5368722334}
!1204 = !{i64 5368722344}
!1205 = !{i64 5368722372}
!1206 = !{i64 5368722377}
!1207 = !{i64 5368722380}
!1208 = !{i64 5368722385}
!1209 = !{i64 5368722388}
!1210 = !{i64 5368722392}
!1211 = !{i64 5368722396}
!1212 = !{i64 5368722400}
!1213 = !{i64 5368722404}
!1214 = !{i64 5368722412}
!1215 = !{i64 5368722423}
!1216 = !{i64 5368722428}
!1217 = !{i64 5368722431}
!1218 = !{i64 5368722437}
!1219 = !{i64 5368722440}
!1220 = !{i64 5368722445}
!1221 = !{i64 5368722449}
!1222 = !{i64 5368722454}
!1223 = !{i64 5368722458}
!1224 = !{i64 5368722466}
!1225 = !{i64 5368722486}
!1226 = !{i64 5368722490}
!1227 = !{i64 5368722506}
!1228 = !{i64 5368722510}
!1229 = !{i64 5368722516}
!1230 = !{i64 5368722533}
!1231 = !{i64 5368722538}
!1232 = !{i64 5368722548}
!1233 = !{i64 5368722576}
!1234 = !{i64 5368722581}
!1235 = !{i64 5368722584}
!1236 = !{i64 5368722589}
!1237 = !{i64 5368722592}
!1238 = !{i64 5368722596}
!1239 = !{i64 5368722600}
!1240 = !{i64 5368722604}
!1241 = !{i64 5368722608}
!1242 = !{i64 5368722616}
!1243 = !{i64 5368722631}
!1244 = !{i64 5368722634}
!1245 = !{i64 5368722638}
!1246 = !{i64 5368722652}
!1247 = !{i64 5368722656}
!1248 = !{i64 5368722661}
!1249 = !{i64 5368722678}
!1250 = !{i64 5368722683}
!1251 = !{i64 5368722692}
!1252 = !{i64 5368722719}
!1253 = !{i64 5368722724}
!1254 = !{i64 5368722727}
!1255 = !{i64 5368722732}
!1256 = !{i64 5368722735}
!1257 = !{i64 5368722739}
!1258 = !{i64 5368722743}
!1259 = !{i64 5368722747}
!1260 = !{i64 5368722751}
!1261 = !{i64 5368722759}
!1262 = !{i64 5368722770}
!1263 = !{i64 5368722775}
!1264 = !{i64 5368722778}
!1265 = !{i64 5368722783}
!1266 = !{i64 5368722786}
!1267 = !{i64 5368722790}
!1268 = !{i64 5368722794}
!1269 = !{i64 5368722798}
!1270 = !{i64 5368722802}
!1271 = !{i64 5368722810}
!1272 = !{i64 5368722828}
!1273 = !{i64 5368722832}
!1274 = !{i64 5368722846}
!1275 = !{i64 5368722850}
!1276 = !{i64 5368722855}
!1277 = !{i64 5368722872}
!1278 = !{i64 5368722877}
!1279 = !{i64 5368722886}
!1280 = !{i64 5368722913}
!1281 = !{i64 5368722918}
!1282 = !{i64 5368722921}
!1283 = !{i64 5368722925}
!1284 = !{i64 5368722929}
!1285 = !{i64 5368722937}
!1286 = !{i64 5368722941}
!1287 = !{i64 5368722948}
!1288 = !{i64 5368722959}
!1289 = !{i64 5368722963}
!1290 = !{i64 5368722965}
!1291 = !{i64 5368722973}
!1292 = !{i64 5368722980}
!1293 = !{i64 5368722987}
!1294 = !{i64 5368722989}
!1295 = !{i64 5368722993}
!1296 = !{i64 5368723000}
!1297 = !{i64 5368723008}
!1298 = !{i64 5368723010}
!1299 = !{i64 5368723016}
!1300 = !{i64 5368723017}
!1301 = !{i64 5368723022}
!1302 = !{i64 5368723030}
!1303 = !{i64 5368723035}
!1304 = !{i64 5368723044}
!1305 = !{i64 5368723048}
!1306 = !{i64 5368723050}
!1307 = !{i64 5368723058}
!1308 = !{i64 5368723065}
!1309 = !{i64 5368723072}
!1310 = !{i64 5368723074}
!1311 = !{i64 5368723078}
!1312 = !{i64 5368723085}
!1313 = !{i64 5368723093}
!1314 = !{i64 5368723095}
!1315 = !{i64 5368723101}
!1316 = !{i64 5368723102}
!1317 = !{i64 5368723107}
!1318 = !{i64 5368723115}
!1319 = !{i64 5368723120}
!1320 = !{i64 5368723129}
!1321 = !{i64 5368723133}
!1322 = !{i64 5368723135}
!1323 = !{i64 5368723143}
!1324 = !{i64 5368723150}
!1325 = !{i64 5368723157}
!1326 = !{i64 5368723159}
!1327 = !{i64 5368723163}
!1328 = !{i64 5368723170}
!1329 = !{i64 5368723178}
!1330 = !{i64 5368723180}
!1331 = !{i64 5368723186}
!1332 = !{i64 5368723187}
!1333 = !{i64 5368723192}
!1334 = !{i64 5368723200}
!1335 = !{i64 5368723205}
!1336 = !{i64 5368723215}
!1337 = !{i64 5368723219}
!1338 = !{i64 5368723221}
!1339 = !{i64 5368723229}
!1340 = !{i64 5368723237}
!1341 = !{i64 5368723244}
!1342 = !{i64 5368723246}
!1343 = !{i64 5368723250}
!1344 = !{i64 5368723257}
!1345 = !{i64 5368723265}
!1346 = !{i64 5368723267}
!1347 = !{i64 5368723273}
!1348 = !{i64 5368723274}
!1349 = !{i64 5368723279}
!1350 = !{i64 5368723287}
!1351 = !{i64 5368723293}
!1352 = !{i64 5368723303}
!1353 = !{i64 5368723307}
!1354 = !{i64 5368723309}
!1355 = !{i64 5368723317}
!1356 = !{i64 5368723324}
!1357 = !{i64 5368723331}
!1358 = !{i64 5368723333}
!1359 = !{i64 5368723337}
!1360 = !{i64 5368723344}
!1361 = !{i64 5368723352}
!1362 = !{i64 5368723354}
!1363 = !{i64 5368723360}
!1364 = !{i64 5368723361}
!1365 = !{i64 5368723366}
!1366 = !{i64 5368723374}
!1367 = !{i64 5368723379}
!1368 = !{i64 5368723388}
!1369 = !{i64 5368723392}
!1370 = !{i64 5368723394}
!1371 = !{i64 5368723402}
!1372 = !{i64 5368723410}
!1373 = !{i64 5368723417}
!1374 = !{i64 5368723419}
!1375 = !{i64 5368723423}
!1376 = !{i64 5368723430}
!1377 = !{i64 5368723438}
!1378 = !{i64 5368723440}
!1379 = !{i64 5368723446}
!1380 = !{i64 5368723447}
!1381 = !{i64 5368723452}
!1382 = !{i64 5368723460}
!1383 = !{i64 5368723466}
!1384 = !{i64 5368723476}
!1385 = !{i64 5368723480}
!1386 = !{i64 5368723482}
!1387 = !{i64 5368723490}
!1388 = !{i64 5368723497}
!1389 = !{i64 5368723504}
!1390 = !{i64 5368723506}
!1391 = !{i64 5368723510}
!1392 = !{i64 5368723517}
!1393 = !{i64 5368723525}
!1394 = !{i64 5368723527}
!1395 = !{i64 5368723533}
!1396 = !{i64 5368723534}
!1397 = !{i64 5368723539}
!1398 = !{i64 5368723547}
!1399 = !{i64 5368723552}
!1400 = !{i64 5368723561}
!1401 = !{i64 5368723565}
!1402 = !{i64 5368723567}
!1403 = !{i64 5368723575}
!1404 = !{i64 5368723582}
!1405 = !{i64 5368723589}
!1406 = !{i64 5368723591}
!1407 = !{i64 5368723595}
!1408 = !{i64 5368723602}
!1409 = !{i64 5368723610}
!1410 = !{i64 5368723612}
!1411 = !{i64 5368723618}
!1412 = !{i64 5368723619}
!1413 = !{i64 5368723624}
!1414 = !{i64 5368723632}
!1415 = !{i64 5368723637}
!1416 = !{i64 5368723646}
!1417 = !{i64 5368723650}
!1418 = !{i64 5368723656}
!1419 = !{i64 5368723664}
!1420 = !{i64 5368723671}
!1421 = !{i64 5368723678}
!1422 = !{i64 5368723684}
!1423 = !{i64 5368723688}
!1424 = !{i64 5368723695}
!1425 = !{i64 5368723703}
!1426 = !{i64 5368723709}
!1427 = !{i64 5368723715}
!1428 = !{i64 5368723732}
!1429 = !{i64 5368723740}
!1430 = !{i64 5368723745}
!1431 = !{i64 5368723747}
!1432 = !{i64 5368723760}
!1433 = !{i64 5368723768}
!1434 = !{i64 5368723772}
!1435 = !{i64 5368723779}
!1436 = !{i64 5368723782}
!1437 = !{i64 5368723786}
!1438 = !{i64 5368723788}
!1439 = !{i64 5368723792}
!1440 = !{i64 5368723799}
!1441 = !{i64 5368723803}
!1442 = !{i64 5368723805}
!1443 = !{i64 5368723808}
!1444 = !{i64 5368723825}
!1445 = !{i64 5368723830}
!1446 = !{i64 5368723835}
!1447 = !{i64 5368723861}
!1448 = !{i64 5368723884}
!1449 = !{i64 5368723892}
!1450 = !{i64 5368723896}
!1451 = !{i64 5368723866}
!1452 = !{i64 5368723869}
!1453 = !{i64 5368723872}
!1454 = !{i64 5368723877}
!1455 = !{i64 5368723880}
!1456 = !{i64 5368723888}
!1457 = !{i64 5368723904}
!1458 = !{i64 5368723915}
!1459 = !{i64 5368723920}
!1460 = !{i64 5368723923}
!1461 = !{i64 5368723929}
!1462 = !{i64 5368723932}
!1463 = !{i64 5368723937}
!1464 = !{i64 5368723941}
!1465 = !{i64 5368723946}
!1466 = !{i64 5368723950}
!1467 = !{i64 5368723958}
!1468 = !{i64 5368723975}
!1469 = !{i64 5368723978}
!1470 = !{i64 5368723982}
!1471 = !{i64 5368723998}
!1472 = !{i64 5368724002}
!1473 = !{i64 5368724008}
!1474 = !{i64 5368724025}
!1475 = !{i64 5368724030}
!1476 = !{i64 5368724040}
!1477 = !{i64 5368724068}
!1478 = !{i64 5368724073}
!1479 = !{i64 5368724076}
!1480 = !{i64 5368724081}
!1481 = !{i64 5368724084}
!1482 = !{i64 5368724088}
!1483 = !{i64 5368724092}
!1484 = !{i64 5368724096}
!1485 = !{i64 5368724100}
!1486 = !{i64 5368724108}
!1487 = !{i64 5368724119}
!1488 = !{i64 5368724124}
!1489 = !{i64 5368724127}
!1490 = !{i64 5368724133}
!1491 = !{i64 5368724136}
!1492 = !{i64 5368724141}
!1493 = !{i64 5368724145}
!1494 = !{i64 5368724150}
!1495 = !{i64 5368724154}
!1496 = !{i64 5368724162}
!1497 = !{i64 5368724178}
!1498 = !{i64 5368724181}
!1499 = !{i64 5368724185}
!1500 = !{i64 5368724201}
!1501 = !{i64 5368724205}
!1502 = !{i64 5368724211}
!1503 = !{i64 5368724228}
!1504 = !{i64 5368724233}
!1505 = !{i64 5368724243}
!1506 = !{i64 5368724271}
!1507 = !{i64 5368722026}
!1508 = !{i64 5368724276}
!1509 = !{i64 5368724279}
!1510 = !{i64 5368724284}
!1511 = !{i64 5368724287}
!1512 = !{i64 5368724291}
!1513 = !{i64 5368724295}
!1514 = !{i64 5368724299}
!1515 = !{i64 5368724303}
!1516 = !{i64 5368724311}
!1517 = !{i64 5368724323}
!1518 = !{i64 5368724328}
!1519 = !{i64 5368724331}
!1520 = !{i64 5368724336}
!1521 = !{i64 5368724339}
!1522 = !{i64 5368724343}
!1523 = !{i64 5368724347}
!1524 = !{i64 5368724351}
!1525 = !{i64 5368724355}
!1526 = !{i64 5368724363}
!1527 = !{i64 5368724378}
!1528 = !{i64 5368724383}
!1529 = !{i64 5368724386}
!1530 = !{i64 5368724391}
!1531 = !{i64 5368724394}
!1532 = !{i64 5368724398}
!1533 = !{i64 5368724402}
!1534 = !{i64 5368724406}
!1535 = !{i64 5368724410}
!1536 = !{i64 5368724418}
!1537 = !{i64 5368724433}
!1538 = !{i64 5368724438}
!1539 = !{i64 5368724441}
!1540 = !{i64 5368724446}
!1541 = !{i64 5368724449}
!1542 = !{i64 5368724453}
!1543 = !{i64 5368724457}
!1544 = !{i64 5368724461}
!1545 = !{i64 5368724465}
!1546 = !{i64 5368724473}
!1547 = !{i64 5368724484}
!1548 = !{i64 5368724489}
!1549 = !{i64 5368724492}
!1550 = !{i64 5368724497}
!1551 = !{i64 5368724500}
!1552 = !{i64 5368724504}
!1553 = !{i64 5368724508}
!1554 = !{i64 5368724512}
!1555 = !{i64 5368724516}
!1556 = !{i64 5368724524}
!1557 = !{i64 5368724539}
!1558 = !{i64 5368724544}
!1559 = !{i64 5368724547}
!1560 = !{i64 5368724554}
!1561 = !{i64 5368724558}
!1562 = !{i64 5368724565}
!1563 = !{i64 5368724569}
!1564 = !{i64 5368724577}
!1565 = !{i64 5368724607}
!1566 = !{i64 5368724611}
!1567 = !{i64 5368724613}
!1568 = !{i64 5368724621}
!1569 = !{i64 5368724631}
!1570 = !{i64 5368724638}
!1571 = !{i64 5368724640}
!1572 = !{i64 5368724644}
!1573 = !{i64 5368724651}
!1574 = !{i64 5368724659}
!1575 = !{i64 5368724661}
!1576 = !{i64 5368724667}
!1577 = !{i64 5368724668}
!1578 = !{i64 5368724673}
!1579 = !{i64 5368724678}
!1580 = !{i64 5368724682}
!1581 = !{i64 5368724684}
!1582 = !{i64 5368724692}
!1583 = !{i64 5368724699}
!1584 = !{i64 5368724706}
!1585 = !{i64 5368724708}
!1586 = !{i64 5368724712}
!1587 = !{i64 5368724719}
!1588 = !{i64 5368724727}
!1589 = !{i64 5368724729}
!1590 = !{i64 5368724735}
!1591 = !{i64 5368724736}
!1592 = !{i64 5368724741}
!1593 = !{i64 5368724749}
!1594 = !{i64 5368724754}
!1595 = !{i64 5368724763}
!1596 = !{i64 5368724767}
!1597 = !{i64 5368724769}
!1598 = !{i64 5368724777}
!1599 = !{i64 5368724784}
!1600 = !{i64 5368724791}
!1601 = !{i64 5368724793}
!1602 = !{i64 5368724797}
!1603 = !{i64 5368724804}
!1604 = !{i64 5368724812}
!1605 = !{i64 5368724814}
!1606 = !{i64 5368724820}
!1607 = !{i64 5368724821}
!1608 = !{i64 5368724826}
!1609 = !{i64 5368724834}
!1610 = !{i64 5368724839}
!1611 = !{i64 5368724848}
!1612 = !{i64 5368724852}
!1613 = !{i64 5368724854}
!1614 = !{i64 5368724862}
!1615 = !{i64 5368724869}
!1616 = !{i64 5368724876}
!1617 = !{i64 5368724878}
!1618 = !{i64 5368724882}
!1619 = !{i64 5368724889}
!1620 = !{i64 5368724897}
!1621 = !{i64 5368724899}
!1622 = !{i64 5368724905}
!1623 = !{i64 5368724906}
!1624 = !{i64 5368724911}
!1625 = !{i64 5368724919}
!1626 = !{i64 5368724924}
!1627 = !{i64 5368724933}
!1628 = !{i64 5368724937}
!1629 = !{i64 5368724939}
!1630 = !{i64 5368724947}
!1631 = !{i64 5368724954}
!1632 = !{i64 5368724961}
!1633 = !{i64 5368724963}
!1634 = !{i64 5368724967}
!1635 = !{i64 5368724974}
!1636 = !{i64 5368724982}
!1637 = !{i64 5368724984}
!1638 = !{i64 5368724990}
!1639 = !{i64 5368724991}
!1640 = !{i64 5368724996}
!1641 = !{i64 5368725004}
!1642 = !{i64 5368725009}
!1643 = !{i64 5368725018}
!1644 = !{i64 5368725022}
!1645 = !{i64 5368725024}
!1646 = !{i64 5368725032}
!1647 = !{i64 5368725039}
!1648 = !{i64 5368725046}
!1649 = !{i64 5368725048}
!1650 = !{i64 5368725052}
!1651 = !{i64 5368725059}
!1652 = !{i64 5368725067}
!1653 = !{i64 5368725069}
!1654 = !{i64 5368725075}
!1655 = !{i64 5368725076}
!1656 = !{i64 5368725081}
!1657 = !{i64 5368725089}
!1658 = !{i64 5368725094}
!1659 = !{i64 5368725103}
!1660 = !{i64 5368725107}
!1661 = !{i64 5368725109}
!1662 = !{i64 5368725117}
!1663 = !{i64 5368725125}
!1664 = !{i64 5368725132}
!1665 = !{i64 5368725134}
!1666 = !{i64 5368725138}
!1667 = !{i64 5368725145}
!1668 = !{i64 5368725153}
!1669 = !{i64 5368725155}
!1670 = !{i64 5368725161}
!1671 = !{i64 5368725162}
!1672 = !{i64 5368725167}
!1673 = !{i64 5368725175}
!1674 = !{i64 5368725181}
!1675 = !{i64 5368725194}
!1676 = !{i64 5368725198}
!1677 = !{i64 5368725200}
!1678 = !{i64 5368725208}
!1679 = !{i64 5368725215}
!1680 = !{i64 5368725222}
!1681 = !{i64 5368725224}
!1682 = !{i64 5368725228}
!1683 = !{i64 5368725235}
!1684 = !{i64 5368725243}
!1685 = !{i64 5368725245}
!1686 = !{i64 5368725251}
!1687 = !{i64 5368725252}
!1688 = !{i64 5368725257}
!1689 = !{i64 5368725265}
!1690 = !{i64 5368725270}
!1691 = !{i64 5368725280}
!1692 = !{i64 5368725284}
!1693 = !{i64 5368725286}
!1694 = !{i64 5368725294}
!1695 = !{i64 5368725302}
!1696 = !{i64 5368725309}
!1697 = !{i64 5368725311}
!1698 = !{i64 5368725315}
!1699 = !{i64 5368725322}
!1700 = !{i64 5368725330}
!1701 = !{i64 5368725332}
!1702 = !{i64 5368725338}
!1703 = !{i64 5368725339}
!1704 = !{i64 5368725344}
!1705 = !{i64 5368725352}
!1706 = !{i64 5368725358}
!1707 = !{i64 5368725368}
!1708 = !{i64 5368725372}
!1709 = !{i64 5368725374}
!1710 = !{i64 5368725382}
!1711 = !{i64 5368725389}
!1712 = !{i64 5368725396}
!1713 = !{i64 5368725398}
!1714 = !{i64 5368725402}
!1715 = !{i64 5368725409}
!1716 = !{i64 5368725417}
!1717 = !{i64 5368725419}
!1718 = !{i64 5368725425}
!1719 = !{i64 5368725426}
!1720 = !{i64 5368725431}
!1721 = !{i64 5368725439}
!1722 = !{i64 5368725444}
!1723 = !{i64 5368725456}
!1724 = !{i64 5368725460}
!1725 = !{i64 5368725462}
!1726 = !{i64 5368725470}
!1727 = !{i64 5368725480}
!1728 = !{i64 5368725487}
!1729 = !{i64 5368725489}
!1730 = !{i64 5368725493}
!1731 = !{i64 5368725500}
!1732 = !{i64 5368725508}
!1733 = !{i64 5368725510}
!1734 = !{i64 5368725516}
!1735 = !{i64 5368725517}
!1736 = !{i64 5368725522}
!1737 = !{i64 5368725530}
!1738 = !{i64 5368725538}
!1739 = !{i64 5368725553}
!1740 = !{i64 5368725557}
!1741 = !{i64 5368725559}
!1742 = !{i64 5368725567}
!1743 = !{i64 5368725577}
!1744 = !{i64 5368725584}
!1745 = !{i64 5368725586}
!1746 = !{i64 5368725590}
!1747 = !{i64 5368725597}
!1748 = !{i64 5368725605}
!1749 = !{i64 5368725607}
!1750 = !{i64 5368725613}
!1751 = !{i64 5368725614}
!1752 = !{i64 5368725619}
!1753 = !{i64 5368725624}
!1754 = !{i64 5368725628}
!1755 = !{i64 5368725630}
!1756 = !{i64 5368725638}
!1757 = !{i64 5368725645}
!1758 = !{i64 5368725652}
!1759 = !{i64 5368725654}
!1760 = !{i64 5368725658}
!1761 = !{i64 5368725665}
!1762 = !{i64 5368725673}
!1763 = !{i64 5368725675}
!1764 = !{i64 5368725681}
!1765 = !{i64 5368725682}
!1766 = !{i64 5368725722}
!1767 = !{i64 5368725738}
!1768 = !{i64 5368725751}
!1769 = !{i64 5368725754}
!1770 = !{i64 5368725758}
!1771 = !{i64 5368725762}
!1772 = !{i64 5368725766}
!1773 = !{i64 5368725770}
!1774 = !{i64 5368725778}
!1775 = !{i64 5368725789}
!1776 = !{i64 5368725802}
!1777 = !{i64 5368725806}
!1778 = !{i64 5368725808}
!1779 = !{i64 5368725816}
!1780 = !{i64 5368725826}
!1781 = !{i64 5368725833}
!1782 = !{i64 5368725835}
!1783 = !{i64 5368725839}
!1784 = !{i64 5368725846}
!1785 = !{i64 5368725854}
!1786 = !{i64 5368725856}
!1787 = !{i64 5368725862}
!1788 = !{i64 5368725863}
!1789 = !{i64 5368725868}
!1790 = !{i64 5368725876}
!1791 = !{i64 5368725880}
!1792 = !{i64 5368725882}
!1793 = !{i64 5368725890}
!1794 = !{i64 5368725900}
!1795 = !{i64 5368725907}
!1796 = !{i64 5368725909}
!1797 = !{i64 5368725913}
!1798 = !{i64 5368725920}
!1799 = !{i64 5368725928}
!1800 = !{i64 5368725930}
!1801 = !{i64 5368725936}
!1802 = !{i64 5368725937}
!1803 = !{i64 5368725952}
!1804 = !{i64 5368725976}
!1805 = !{i64 5368725984}
!1806 = !{i64 5368726015}
!1807 = !{i64 5368726029}
!1808 = !{i64 5368726037}
!1809 = !{i64 5368726044}
!1810 = !{i64 5368726062}
!1811 = !{i64 5368726068}
!1812 = !{i64 5368726076}
!1813 = !{i64 5368726081}
!1814 = !{i64 5368726100}
!1815 = !{i64 5368726106}
!1816 = !{i64 5368726114}
!1817 = !{i64 5368726119}
!1818 = !{i64 5368726138}
!1819 = !{i64 5368726156}
!1820 = !{i64 5368726166}
!1821 = !{i64 5368726170}
!1822 = !{i64 5368726172}
!1823 = !{i64 5368726180}
!1824 = !{i64 5368726187}
!1825 = !{i64 5368726194}
!1826 = !{i64 5368726196}
!1827 = !{i64 5368726200}
!1828 = !{i64 5368726207}
!1829 = !{i64 5368726215}
!1830 = !{i64 5368726217}
!1831 = !{i64 5368726223}
!1832 = !{i64 5368726224}
!1833 = !{i64 5368726229}
!1834 = !{i64 5368726234}
!1835 = !{i64 5368726238}
!1836 = !{i64 5368726240}
!1837 = !{i64 5368726248}
!1838 = !{i64 5368726255}
!1839 = !{i64 5368726262}
!1840 = !{i64 5368726264}
!1841 = !{i64 5368726268}
!1842 = !{i64 5368726275}
!1843 = !{i64 5368726283}
!1844 = !{i64 5368726285}
!1845 = !{i64 5368726291}
!1846 = !{i64 5368726292}
!1847 = !{i64 5368726297}
!1848 = !{i64 5368726302}
!1849 = !{i64 5368726306}
!1850 = !{i64 5368726298}
!1851 = !{i64 5368726308}
!1852 = !{i64 5368726316}
!1853 = !{i64 5368726323}
!1854 = !{i64 5368726330}
!1855 = !{i64 5368726332}
!1856 = !{i64 5368726336}
!1857 = !{i64 5368726343}
!1858 = !{i64 5368726351}
!1859 = !{i64 5368726353}
!1860 = !{i64 5368726359}
!1861 = !{i64 5368726360}
!1862 = !{i64 5368726367}
!1863 = !{i64 5368726393}
!1864 = !{i64 5368726398}
!1865 = !{i64 5368726463}
!1866 = !{i64 5368726471}
!1867 = !{i64 5368726473}
!1868 = !{i64 5368726480}
!1869 = !{i64 5368726486}
!1870 = !{i64 5368726491}
!1871 = !{i64 5368726506}
!1872 = !{i64 5368726527}
!1873 = !{i64 5368726528}
!1874 = !{i64 5368726574}
!1875 = !{i64 5368726606}
!1876 = !{i64 5368726626}
!1877 = !{i64 5368726644}
!1878 = !{i64 5368726650}
!1879 = !{i64 5368726673}
!1880 = !{i64 5368726688}
!1881 = !{i64 5368726713}
!1882 = !{i64 5368726738}
!1883 = !{i64 5368726786}
!1884 = !{i64 5368726867}
!1885 = !{i64 5368726880}
!1886 = !{i64 5368726883}
!1887 = !{i64 5368726917}
!1888 = !{i64 5368726930}
!1889 = !{i64 5368726933}
!1890 = !{i64 5368726952}
!1891 = !{i64 5368726954}
!1892 = !{i64 5368726959}
!1893 = !{i64 5368726969}
!1894 = !{i64 5368726976}
!1895 = !{i64 5368726540}
!1896 = !{i64 5368726993}
!1897 = !{i64 5368727007}
!1898 = !{i64 5368727013}
!1899 = !{i64 5368727024}
!1900 = !{i64 5368727032}
!1901 = !{i64 5368727056}
!1902 = !{i64 5368727061}
!1903 = !{i64 5368727083}
!1904 = !{i64 5368727090}
!1905 = !{i64 5368727102}
!1906 = !{i64 5368727162}
!1907 = !{i64 5368727186}
!1908 = !{i64 5368727205}
!1909 = !{i64 5368727240}
!1910 = !{i64 5368727267}
!1911 = !{i64 5368727273}
!1912 = !{i64 5368727279}
!1913 = !{i64 5368727285}
!1914 = !{i64 5368727290}
!1915 = !{i64 5368727304}
!1916 = !{i64 5368727330}
!1917 = !{i64 5368727349}
!1918 = !{i64 5368727355}
!1919 = !{i64 5368727358}
!1920 = !{i64 5368727360}
!1921 = !{i64 5368727367}
!1922 = !{i64 5368727387}
!1923 = !{i64 5368727410}
!1924 = !{i64 5368727419}
!1925 = !{i64 5368727421}
!1926 = !{i64 5368727424}
!1927 = !{i64 5368727432}
!1928 = !{i64 5368727445}
!1929 = !{i64 5368727475}
!1930 = !{i64 5368727495}
!1931 = !{i64 5368727506}
!1932 = !{i64 5368727512}
!1933 = !{i64 5368727514}
!1934 = !{i64 5368727521}
!1935 = !{i64 5368727524}
!1936 = !{i64 5368727528}
!1937 = !{i64 5368727532}
!1938 = !{i64 5368727546}
!1939 = !{i64 5368727554}
!1940 = !{i64 5368727579}
!1941 = !{i64 5368727586}
!1942 = !{i64 5368727592}
!1943 = !{i64 5368727601}
!1944 = !{i64 5368727607}
!1945 = !{i64 5368727609}
!1946 = !{i64 5368727615}
!1947 = !{i64 5368727621}
!1948 = !{i64 5368727624}
!1949 = !{i64 5368727481}
!1950 = !{i64 5368727635}
!1951 = !{i64 5368727641}
!1952 = !{i64 5368727649}
!1953 = !{i64 5368727652}
!1954 = !{i64 5368727654}
!1955 = !{i64 5368727661}
!1956 = !{i64 5368727659}
!1957 = !{i64 5368727687}
!1958 = !{i64 5368727691}
!1959 = !{i64 5368727709}
!1960 = !{i64 5368727714}
!1961 = !{i64 5368727758}
!1962 = !{i64 5368727763}
!1963 = !{i64 5368727784}
!1964 = !{i64 5368727844}
!1965 = !{i64 5368727869}
!1966 = !{i64 5368727883}
!1967 = !{i64 5368727890}
!1968 = !{i64 5368727893}
!1969 = !{i64 5368727898}
!1970 = !{i64 5368727914}
!1971 = !{i64 5368727938}
!1972 = !{i64 5368727965}
!1973 = !{i64 5368727983}
!1974 = !{i64 5368728004}
!1975 = !{i64 5368728028}
!1976 = !{i64 5368728240}
!1977 = !{i64 5368728249}
!1978 = !{i64 5368728253}
!1979 = !{i64 5368728256}
!1980 = !{i64 5368728259}
!1981 = !{i64 5368728265}
!1982 = !{i64 5368728269}
!1983 = !{i64 5368728273}
!1984 = !{i64 5368728280}
!1985 = !{i64 5368728286}
!1986 = !{i64 5368728291}
!1987 = !{i64 5368728297}
!1988 = !{i64 5368728300}
!1989 = !{i64 5368728306}
!1990 = !{i64 5368728311}
!1991 = !{i64 5368728313}
!1992 = !{i64 5368728320}
!1993 = !{i64 5368728360}
!1994 = !{i64 5368728362}
!1995 = !{i64 5368728368}
!1996 = !{i64 5368728375}
!1997 = !{i64 5368728380}
!1998 = !{i64 5368728390}
!1999 = !{i64 5368728393}
!2000 = !{i64 5368728395}
!2001 = !{i64 5368728405}
!2002 = !{i64 5368728408}
!2003 = !{i64 5368728413}
!2004 = !{i64 5368728431}
!2005 = !{i64 5368728468}
!2006 = !{i64 5368728480}
!2007 = !{i64 5368728526}
!2008 = !{i64 5368728546}
!2009 = !{i64 5368728554}
!2010 = !{i64 5368728561}
!2011 = !{i64 5368728579}
!2012 = !{i64 5368728584}
!2013 = !{i64 5368728592}
!2014 = !{i64 5368728597}
!2015 = !{i64 5368728616}
!2016 = !{i64 5368728621}
!2017 = !{i64 5368728629}
!2018 = !{i64 5368728634}
!2019 = !{i64 5368728653}
!2020 = !{i64 5368728670}
!2021 = !{i64 5368728679}
!2022 = !{i64 5368728683}
!2023 = !{i64 5368728685}
!2024 = !{i64 5368728693}
!2025 = !{i64 5368728700}
!2026 = !{i64 5368728707}
!2027 = !{i64 5368728709}
!2028 = !{i64 5368728713}
!2029 = !{i64 5368728720}
!2030 = !{i64 5368728728}
!2031 = !{i64 5368728730}
!2032 = !{i64 5368728736}
!2033 = !{i64 5368728737}
!2034 = !{i64 5368728746}
!2035 = !{i64 5368728750}
!2036 = !{i64 5368728752}
!2037 = !{i64 5368728760}
!2038 = !{i64 5368728767}
!2039 = !{i64 5368728774}
!2040 = !{i64 5368728776}
!2041 = !{i64 5368728780}
!2042 = !{i64 5368728787}
!2043 = !{i64 5368728795}
!2044 = !{i64 5368728797}
!2045 = !{i64 5368728803}
!2046 = !{i64 5368728804}
!2047 = !{i64 5368728813}
!2048 = !{i64 5368728817}
!2049 = !{i64 5368728819}
!2050 = !{i64 5368728827}
!2051 = !{i64 5368728834}
!2052 = !{i64 5368728841}
!2053 = !{i64 5368728843}
!2054 = !{i64 5368728847}
!2055 = !{i64 5368728854}
!2056 = !{i64 5368728862}
!2057 = !{i64 5368728864}
!2058 = !{i64 5368728870}
!2059 = !{i64 5368728871}
!2060 = !{i64 5368728876}
!2061 = !{i64 5368728884}
!2062 = !{i64 5368728887}
!2063 = !{i64 5368728893}
!2064 = !{i64 5368728907}
!2065 = !{i64 5368728910}
!2066 = !{i64 5368728916}
!2067 = !{i64 5368728920}
!2068 = !{i64 5368728924}
!2069 = !{i64 5368728928}
!2070 = !{i64 5368728940}
!2071 = !{i64 5368728943}
!2072 = !{i64 5368728945}
!2073 = !{i64 5368728952}
!2074 = !{i64 5368728954}
!2075 = !{i64 5368728962}
!2076 = !{i64 5368728967}
!2077 = !{i64 5368728976}
!2078 = !{i64 5368728979}
!2079 = !{i64 5368728983}
!2080 = !{i64 5368728989}
!2081 = !{i64 5368729000}
!2082 = !{i64 5368729005}
!2083 = !{i64 5368729013}
!2084 = !{i64 5368729021}
!2085 = !{i64 5368729027}
!2086 = !{i64 5368729029}
!2087 = !{i64 5368729035}
!2088 = !{i64 5368729043}
!2089 = !{i64 5368729048}
!2090 = !{i64 5368729066}
!2091 = !{i64 5368729071}
!2092 = !{i64 5368729079}
!2093 = !{i64 5368729084}
!2094 = !{i64 5368729105}
!2095 = !{i64 5368729110}
!2096 = !{i64 5368729118}
!2097 = !{i64 5368729123}
!2098 = !{i64 5368729144}
!2099 = !{i64 5368729149}
!2100 = !{i64 5368729157}
!2101 = !{i64 5368729162}
!2102 = !{i64 5368729183}
!2103 = !{i64 5368729204}
!2104 = !{i64 5368729213}
!2105 = !{i64 5368729217}
!2106 = !{i64 5368729219}
!2107 = !{i64 5368729227}
!2108 = !{i64 5368729234}
!2109 = !{i64 5368729241}
!2110 = !{i64 5368729243}
!2111 = !{i64 5368729247}
!2112 = !{i64 5368729254}
!2113 = !{i64 5368729262}
!2114 = !{i64 5368729264}
!2115 = !{i64 5368729270}
!2116 = !{i64 5368729271}
!2117 = !{i64 5368729280}
!2118 = !{i64 5368729284}
!2119 = !{i64 5368729286}
!2120 = !{i64 5368729294}
!2121 = !{i64 5368729301}
!2122 = !{i64 5368729308}
!2123 = !{i64 5368729310}
!2124 = !{i64 5368729314}
!2125 = !{i64 5368729321}
!2126 = !{i64 5368729329}
!2127 = !{i64 5368729331}
!2128 = !{i64 5368729337}
!2129 = !{i64 5368729338}
!2130 = !{i64 5368729347}
!2131 = !{i64 5368729351}
!2132 = !{i64 5368729353}
!2133 = !{i64 5368729361}
!2134 = !{i64 5368729368}
!2135 = !{i64 5368729375}
!2136 = !{i64 5368729377}
!2137 = !{i64 5368729381}
!2138 = !{i64 5368729388}
!2139 = !{i64 5368729396}
!2140 = !{i64 5368729398}
!2141 = !{i64 5368729404}
!2142 = !{i64 5368729405}
!2143 = !{i64 5368729414}
!2144 = !{i64 5368729418}
!2145 = !{i64 5368729424}
!2146 = !{i64 5368729432}
!2147 = !{i64 5368729439}
!2148 = !{i64 5368729446}
!2149 = !{i64 5368729452}
!2150 = !{i64 5368729456}
!2151 = !{i64 5368729463}
!2152 = !{i64 5368729471}
!2153 = !{i64 5368729477}
!2154 = !{i64 5368729483}
!2155 = !{i64 5368729494}
!2156 = !{i64 5368729500}
!2157 = !{i64 5368729502}
!2158 = !{i64 5368729508}
!2159 = !{i64 5368729516}
!2160 = !{i64 5368729524}
!2161 = !{i64 5368729548}
!2162 = !{i64 5368729553}
!2163 = !{i64 5368729561}
!2164 = !{i64 5368729569}
!2165 = !{i64 5368729596}
!2166 = !{i64 5368729601}
!2167 = !{i64 5368729609}
!2168 = !{i64 5368729617}
!2169 = !{i64 5368729644}
!2170 = !{i64 5368729649}
!2171 = !{i64 5368729657}
!2172 = !{i64 5368729665}
!2173 = !{i64 5368729686}
!2174 = !{i64 5368729716}
!2175 = !{i64 5368729728}
!2176 = !{i64 5368729732}
!2177 = !{i64 5368729734}
!2178 = !{i64 5368729742}
!2179 = !{i64 5368729749}
!2180 = !{i64 5368729756}
!2181 = !{i64 5368729758}
!2182 = !{i64 5368729762}
!2183 = !{i64 5368729769}
!2184 = !{i64 5368729777}
!2185 = !{i64 5368729779}
!2186 = !{i64 5368729785}
!2187 = !{i64 5368729786}
!2188 = !{i64 5368729798}
!2189 = !{i64 5368729802}
!2190 = !{i64 5368729804}
!2191 = !{i64 5368729812}
!2192 = !{i64 5368729822}
!2193 = !{i64 5368729829}
!2194 = !{i64 5368729831}
!2195 = !{i64 5368729835}
!2196 = !{i64 5368729842}
!2197 = !{i64 5368729850}
!2198 = !{i64 5368729852}
!2199 = !{i64 5368729858}
!2200 = !{i64 5368729859}
!2201 = !{i64 5368729871}
!2202 = !{i64 5368729875}
!2203 = !{i64 5368729877}
!2204 = !{i64 5368729885}
!2205 = !{i64 5368729895}
!2206 = !{i64 5368729902}
!2207 = !{i64 5368729904}
!2208 = !{i64 5368729908}
!2209 = !{i64 5368729915}
!2210 = !{i64 5368729923}
!2211 = !{i64 5368729925}
!2212 = !{i64 5368729931}
!2213 = !{i64 5368729932}
!2214 = !{i64 5368729944}
!2215 = !{i64 5368729948}
!2216 = !{i64 5368729950}
!2217 = !{i64 5368729958}
!2218 = !{i64 5368729968}
!2219 = !{i64 5368729975}
!2220 = !{i64 5368729977}
!2221 = !{i64 5368729981}
!2222 = !{i64 5368729988}
!2223 = !{i64 5368729996}
!2224 = !{i64 5368729998}
!2225 = !{i64 5368730004}
!2226 = !{i64 5368730005}
!2227 = !{i64 5368730010}
!2228 = !{i64 5368730017}
!2229 = !{i64 5368730019}
!2230 = !{i64 5368730027}
!2231 = !{i64 5368730033}
!2232 = !{i64 5368730036}
!2233 = !{i64 5368730038}
!2234 = !{i64 5368730041}
!2235 = !{i64 5368730043}
!2236 = !{i64 5368730046}
!2237 = !{i64 5368730073}
!2238 = !{i64 5368730079}
!2239 = !{i64 5368730082}
!2240 = !{i64 5368730109}
!2241 = !{i64 5368730115}
!2242 = !{i64 5368730121}
!2243 = !{i64 5368730126}
!2244 = !{i64 5368730143}
!2245 = !{i64 5368730166}
!2246 = !{i64 5368730173}
!2247 = !{i64 5368730186}
!2248 = !{i64 5368730194}
!2249 = !{i64 5368730203}
!2250 = !{i64 5368730260}
!2251 = !{i64 5368730266}
!2252 = !{i64 5368730268}
!2253 = !{i64 5368730270}
!2254 = !{i64 5368730275}
!2255 = !{i64 5368730300}
!2256 = !{i64 5368730306}
!2257 = !{i64 5368730308}
!2258 = !{i64 5368730314}
!2259 = !{i64 5368730333}
!2260 = !{i64 5368730339}
!2261 = !{i64 5368730341}
!2262 = !{i64 5368730347}
!2263 = !{i64 5368730352}
!2264 = !{i64 5368730358}
!2265 = !{i64 5368730719}
!2266 = !{i64 5368730724}
!2267 = !{i64 5368730730}
!2268 = !{i64 5368730735}
!2269 = !{i64 5368730740}
!2270 = !{i64 5368730746}
!2271 = !{i64 5368730754}
!2272 = !{i64 5368730378}
!2273 = !{i64 5368730401}
!2274 = !{i64 5368730408}
!2275 = !{i64 5368730414}
!2276 = !{i64 5368730436}
!2277 = !{i64 5368730442}
!2278 = !{i64 5368730451}
!2279 = !{i64 5368730485}
!2280 = !{i64 5368730522}
!2281 = !{i64 5368730523}
!2282 = !{i64 5368730547}
!2283 = !{i64 5368730552}
!2284 = !{i64 5368730558}
!2285 = !{i64 5368730569}
!2286 = !{i64 5368730578}
!2287 = !{i64 5368730581}
!2288 = !{i64 5368730583}
!2289 = !{i64 5368730588}
!2290 = !{i64 5368730594}
!2291 = !{i64 5368730599}
!2292 = !{i64 5368730604}
!2293 = !{i64 5368730610}
!2294 = !{i64 5368730615}
!2295 = !{i64 5368730641}
!2296 = !{i64 5368730646}
!2297 = !{i64 5368730655}
!2298 = !{i64 5368730658}
!2299 = !{i64 5368730672}
!2300 = !{i64 5368730677}
!2301 = !{i64 5368730681}
!2302 = !{i64 5368730687}
!2303 = !{i64 5368730689}
!2304 = !{i64 5368730691}
!2305 = !{i64 5368730694}
!2306 = !{i64 5368730696}
!2307 = !{i64 5368730703}
!2308 = !{i64 5368730706}
!2309 = !{i64 5368730709}
!2310 = !{i64 5368730769}
!2311 = !{i64 5368730774}
!2312 = !{i64 5368730781}
!2313 = !{i64 5368730784}
!2314 = !{i64 5368730790}
!2315 = !{i64 5368730796}
!2316 = !{i64 5368730813}
!2317 = !{i64 5368730832}
!2318 = !{i64 5368730838}
!2319 = !{i64 5368730845}
!2320 = !{i64 5368730849}
!2321 = !{i64 5368730854}
!2322 = !{i64 5368730862}
!2323 = !{i64 5368730869}
!2324 = !{i64 5368730871}
!2325 = !{i64 5368730875}
!2326 = !{i64 5368730879}
!2327 = !{i64 5368730882}
!2328 = !{i64 5368730890}
!2329 = !{i64 5368730895}
!2330 = !{i64 5368730902}
!2331 = !{i64 5368730910}
!2332 = !{i64 5368730914}
!2333 = !{i64 5368730922}
!2334 = !{i64 5368730923}
!2335 = !{i64 5368730929}
!2336 = !{i64 5368730930}
!2337 = !{i64 5368730931}
!2338 = !{i64 5368730932}
!2339 = !{i64 5368730933}
!2340 = !{i64 5368730934}
!2341 = !{i64 5368730935}
!2342 = !{i64 5368730936}
!2343 = !{i64 5368730937}
!2344 = !{i64 5368730938}
!2345 = !{i64 5368730939}
!2346 = !{i64 5368730940}
!2347 = !{i64 5368730941}
!2348 = !{i64 5368730942}
!2349 = !{i64 5368730943}
!2350 = !{i64 5368730960}
!2351 = !{i64 5368730963}
!2352 = !{i64 5368730965}
!2353 = !{i64 5368730969}
!2354 = !{i64 5368730973}
!2355 = !{i64 5368730975}
!2356 = !{i64 5368730978}
!2357 = !{i64 5368730986}
!2358 = !{i64 5368730993}
!2359 = !{i64 5368730995}
!2360 = !{i64 5368730999}
!2361 = !{i64 5368731003}
!2362 = !{i64 5368731006}
!2363 = !{i64 5368731014}
!2364 = !{i64 5368731019}
!2365 = !{i64 5368731024}
!2366 = !{i64 5368731034}
!2367 = !{i64 5368731038}
!2368 = !{i64 5368731041}
!2369 = !{i64 5368731044}
!2370 = !{i64 5368731047}
!2371 = !{i64 5368731051}
!2372 = !{i64 5368731055}
!2373 = !{i64 5368731059}
!2374 = !{i64 5368731067}
!2375 = !{i64 5368731083}
!2376 = !{i64 5368731084}
!2377 = !{i64 5368731090}
!2378 = !{i64 5368731091}
!2379 = !{i64 5368731092}
!2380 = !{i64 5368731093}
!2381 = !{i64 5368731094}
!2382 = !{i64 5368731095}
!2383 = !{i64 5368731096}
!2384 = !{i64 5368731097}
!2385 = !{i64 5368731098}
!2386 = !{i64 5368731099}
!2387 = !{i64 5368731100}
!2388 = !{i64 5368731101}
!2389 = !{i64 5368731102}
!2390 = !{i64 5368731103}
!2391 = !{i64 5368731127}
!2392 = !{i64 5368731131}
!2393 = !{i64 5368731135}
!2394 = !{i64 5368731140}
!2395 = !{i64 5368731144}
!2396 = !{i64 5368731146}
!2397 = !{i64 5368731154}
!2398 = !{i64 5368731158}
!2399 = !{i64 5368731160}
!2400 = !{i64 5368731168}
!2401 = !{i64 5368731171}
!2402 = !{i64 5368731189}
!2403 = !{i64 5368731203}
!2404 = !{i64 5368731213}
!2405 = !{i64 5368731217}
!2406 = !{i64 5368731225}
!2407 = !{i64 5368731228}
!2408 = !{i64 5368731221}
!2409 = !{i64 5368731235}
!2410 = !{i64 5368731242}
!2411 = !{i64 5368731244}
!2412 = !{i64 5368731248}
!2413 = !{i64 5368731255}
!2414 = !{i64 5368731260}
!2415 = !{i64 5368731263}
!2416 = !{i64 5368731265}
!2417 = !{i64 5368731269}
!2418 = !{i64 5368731273}
!2419 = !{i64 5368731277}
!2420 = !{i64 5368731279}
!2421 = !{i64 5368731285}
!2422 = !{i64 5368731286}
!2423 = !{i64 5368731289}
!2424 = !{i64 5368731294}
!2425 = !{i64 5368731299}
!2426 = !{i64 5368731310}
!2427 = !{i64 5368731316}
!2428 = !{i64 5368731321}
!2429 = !{i64 5368731328}
!2430 = !{i64 5368731352}
!2431 = !{i64 5368731360}
!2432 = !{i64 5368731366}
!2433 = !{i64 5368731373}
!2434 = !{i64 5368731377}
!2435 = !{i64 5368731382}
!2436 = !{i64 5368731385}
!2437 = !{i64 5368731392}
!2438 = !{i64 5368731394}
!2439 = !{i64 5368731405}
!2440 = !{i64 5368731413}
!2441 = !{i64 5368731398}
!2442 = !{i64 5368731415}
!2443 = !{i64 5368731418}
!2444 = !{i64 5368731423}
!2445 = !{i64 5368731431}
!2446 = !{i64 5368731439}
!2447 = !{i64 5368731447}
!2448 = !{i64 5368731448}
!2449 = !{i64 5368731454}
!2450 = !{i64 5368731455}
!2451 = !{i64 5368731456}
!2452 = !{i64 5368731486}
!2453 = !{i64 5368731502}
!2454 = !{i64 5368731516}
!2455 = !{i64 5368731520}
!2456 = !{i64 5368731530}
!2457 = !{i64 5368731538}
!2458 = !{i64 5368731543}
!2459 = !{i64 5368731561}
!2460 = !{i64 5368731570}
!2461 = !{i64 5368731577}
!2462 = !{i64 5368731585}
!2463 = !{i64 5368731588}
!2464 = !{i64 5368731594}
!2465 = !{i64 5368731596}
!2466 = !{i64 5368731603}
!2467 = !{i64 5368731606}
!2468 = !{i64 5368731613}
!2469 = !{i64 5368731638}
!2470 = !{i64 5368731627}
!2471 = !{i64 5368731645}
!2472 = !{i64 5368731652}
!2473 = !{i64 5368731654}
!2474 = !{i64 5368731658}
!2475 = !{i64 5368731665}
!2476 = !{i64 5368731670}
!2477 = !{i64 5368731673}
!2478 = !{i64 5368731679}
!2479 = !{i64 5368731683}
!2480 = !{i64 5368731687}
!2481 = !{i64 5368731691}
!2482 = !{i64 5368731693}
!2483 = !{i64 5368731696}
!2484 = !{i64 5368731701}
!2485 = !{i64 5368731709}
!2486 = !{i64 5368731714}
!2487 = !{i64 5368731721}
!2488 = !{i64 5368731725}
!2489 = !{i64 5368731735}
!2490 = !{i64 5368731740}
!2491 = !{i64 5368731745}
!2492 = !{i64 5368731749}
!2493 = !{i64 5368731754}
!2494 = !{i64 5368731762}
!2495 = !{i64 5368731769}
!2496 = !{i64 5368731771}
!2497 = !{i64 5368731782}
!2498 = !{i64 5368731790}
!2499 = !{i64 5368731775}
!2500 = !{i64 5368731792}
!2501 = !{i64 5368731795}
!2502 = !{i64 5368731800}
!2503 = !{i64 5368731836}
!2504 = !{i64 5368731837}
!2505 = !{i64 5368731843}
!2506 = !{i64 5368731844}
!2507 = !{i64 5368731849}
!2508 = !{i64 5368731850}
!2509 = !{i64 5368731851}
!2510 = !{i64 5368731852}
!2511 = !{i64 5368731853}
!2512 = !{i64 5368731854}
!2513 = !{i64 5368731855}
!2514 = !{i64 5368731856}
!2515 = !{i64 5368731886}
!2516 = !{i64 5368731888}
!2517 = !{i64 5368731891}
!2518 = !{i64 5368731895}
!2519 = !{i64 5368731897}
!2520 = !{i64 5368731914}
!2521 = !{i64 5368731928}
!2522 = !{i64 5368731938}
!2523 = !{i64 5368731943}
!2524 = !{i64 5368731947}
!2525 = !{i64 5368731965}
!2526 = !{i64 5368731974}
!2527 = !{i64 5368731981}
!2528 = !{i64 5368731989}
!2529 = !{i64 5368731992}
!2530 = !{i64 5368731998}
!2531 = !{i64 5368732000}
!2532 = !{i64 5368732007}
!2533 = !{i64 5368732010}
!2534 = !{i64 5368732014}
!2535 = !{i64 5368732018}
!2536 = !{i64 5368732024}
!2537 = !{i64 5368732026}
!2538 = !{i64 5368732030}
!2539 = !{i64 5368732037}
!2540 = !{i64 5368732042}
!2541 = !{i64 5368732045}
!2542 = !{i64 5368732051}
!2543 = !{i64 5368732055}
!2544 = !{i64 5368732059}
!2545 = !{i64 5368732063}
!2546 = !{i64 5368732065}
!2547 = !{i64 5368732068}
!2548 = !{i64 5368732073}
!2549 = !{i64 5368732081}
!2550 = !{i64 5368732088}
!2551 = !{i64 5368732095}
!2552 = !{i64 5368732102}
!2553 = !{i64 5368732107}
!2554 = !{i64 5368732111}
!2555 = !{i64 5368732115}
!2556 = !{i64 5368732120}
!2557 = !{i64 5368732124}
!2558 = !{i64 5368732131}
!2559 = !{i64 5368732133}
!2560 = !{i64 5368732144}
!2561 = !{i64 5368732152}
!2562 = !{i64 5368732137}
!2563 = !{i64 5368732154}
!2564 = !{i64 5368732157}
!2565 = !{i64 5368732162}
!2566 = !{i64 5368732192}
!2567 = !{i64 5368732193}
!2568 = !{i64 5368732199}
!2569 = !{i64 5368732200}
!2570 = !{i64 5368732205}
!2571 = !{i64 5368732206}
!2572 = !{i64 5368732207}
!2573 = !{i64 5368732208}
!2574 = !{i64 5368732253}
!2575 = !{i64 5368732268}
!2576 = !{i64 5368732271}
!2577 = !{i64 5368732238}
!2578 = !{i64 5368732276}
!2579 = !{i64 5368732279}
!2580 = !{i64 5368732282}
!2581 = !{i64 5368732286}
!2582 = !{i64 5368732301}
!2583 = !{i64 5368732307}
!2584 = !{i64 5368732310}
!2585 = !{i64 5368732321}
!2586 = !{i64 5368732326}
!2587 = !{i64 5368732329}
!2588 = !{i64 5368732331}
!2589 = !{i64 5368732340}
!2590 = !{i64 5368732342}
!2591 = !{i64 5368732350}
!2592 = !{i64 5368732353}
!2593 = !{i64 5368732387}
!2594 = !{i64 5368732388}
!2595 = !{i64 5368732391}
!2596 = !{i64 5368732408}
!2597 = !{i64 5368732414}
!2598 = !{i64 5368732417}
!2599 = !{i64 5368732432}
!2600 = !{i64 5368732440}
!2601 = !{i64 5368732443}
!2602 = !{i64 5368732449}
!2603 = !{i64 5368732453}
!2604 = !{i64 5368732483}
!2605 = !{i64 5368732492}
!2606 = !{i64 5368732494}
!2607 = !{i64 5368732489}
!2608 = !{i64 5368732501}
!2609 = !{i64 5368732504}
!2610 = !{i64 5368732507}
!2611 = !{i64 5368732509}
!2612 = !{i64 5368732511}
!2613 = !{i64 5368732513}
!2614 = !{i64 5368732518}
!2615 = !{i64 5368732523}
!2616 = !{i64 5368732526}
!2617 = !{i64 5368732558}
!2618 = !{i64 5368732567}
!2619 = !{i64 5368732570}
!2620 = !{i64 5368732572}
!2621 = !{i64 5368732578}
!2622 = !{i64 5368732583}
!2623 = !{i64 5368732604}
!2624 = !{i64 5368732638}
!2625 = !{i64 5368732647}
!2626 = !{i64 5368732651}
!2627 = !{i64 5368732658}
!2628 = !{i64 5368732664}
!2629 = !{i64 5368732671}
!2630 = !{i64 5368732683}
!2631 = !{i64 5368732687}
!2632 = !{i64 5368732700}
!2633 = !{i64 5368732704}
!2634 = !{i64 5368732711}
!2635 = !{i64 5368732733}
!2636 = !{i64 5368732748}
!2637 = !{i64 5368732758}
!2638 = !{i64 5368732768}
!2639 = !{i64 5368732812}
!2640 = !{i64 5368732815}
!2641 = !{i64 5368732824}
!2642 = !{i64 5368732828}
!2643 = !{i64 5368732831}
!2644 = !{i64 5368732835}
!2645 = !{i64 5368732837}
!2646 = !{i64 5368732843}
!2647 = !{i64 5368732845}
!2648 = !{i64 5368732847}
!2649 = !{i64 5368732851}
!2650 = !{i64 5368732857}
!2651 = !{i64 5368732864}
!2652 = !{i64 5368732867}
!2653 = !{i64 5368732874}
!2654 = !{i64 5368732893}
!2655 = !{i64 5368732907}
!2656 = !{i64 5368732910}
!2657 = !{i64 5368732916}
!2658 = !{i64 5368732920}
!2659 = !{i64 5368732924}
!2660 = !{i64 5368732928}
!2661 = !{i64 5368732957}
!2662 = !{i64 5368732958}
!2663 = !{i64 5368732961}
!2664 = !{i64 5368732980}
!2665 = !{i64 5368732983}
!2666 = !{i64 5368732803}
!2667 = !{i64 5368732970}
!2668 = !{i64 5368732994}
!2669 = !{i64 5368732998}
!2670 = !{i64 5368733002}
!2671 = !{i64 5368733004}
!2672 = !{i64 5368733006}
!2673 = !{i64 5368733008}
!2674 = !{i64 5368733013}
!2675 = !{i64 5368733018}
!2676 = !{i64 5368732977}
!2677 = !{i64 5368733024}
!2678 = !{i64 5368733033}
!2679 = !{i64 5368733035}
!2680 = !{i64 5368733062}
!2681 = !{i64 5368733066}
!2682 = !{i64 5368733069}
!2683 = !{i64 5368733071}
!2684 = !{i64 5368733077}
!2685 = !{i64 5368733083}
!2686 = !{i64 5368733089}
!2687 = !{i64 5368733094}
!2688 = !{i64 5368733099}
!2689 = !{i64 5368733101}
!2690 = !{i64 5368733105}
!2691 = !{i64 5368733114}
!2692 = !{i64 5368733122}
!2693 = !{i64 5368733125}
!2694 = !{i64 5368733127}
!2695 = !{i64 5368733133}
!2696 = !{i64 5368733137}
!2697 = !{i64 5368733147}
!2698 = !{i64 5368733158}
!2699 = !{i64 5368733169}
!2700 = !{i64 5368733190}
!2701 = !{i64 5368733200}
!2702 = !{i64 5368733203}
!2703 = !{i64 5368733233}
!2704 = !{i64 5368733236}
!2705 = !{i64 5368733238}
!2706 = !{i64 5368733244}
!2707 = !{i64 5368733250}
!2708 = !{i64 5368733224}
!2709 = !{i64 5368733252}
!2710 = !{i64 5368733257}
!2711 = !{i64 5368733255}
!2712 = !{i64 5368733283}
!2713 = !{i64 5368733293}
!2714 = !{i64 5368733301}
!2715 = !{i64 5368733306}
!2716 = !{i64 5368733308}
!2717 = !{i64 5368733314}
!2718 = !{i64 5368733320}
!2719 = !{i64 5368733341}
!2720 = !{i64 5368733344}
!2721 = !{i64 5368733353}
!2722 = !{i64 5368733357}
!2723 = !{i64 5368733362}
!2724 = !{i64 5368733366}
!2725 = !{i64 5368733576}
!2726 = !{i64 5368733584}
!2727 = !{i64 5368733587}
!2728 = !{i64 5368733590}
!2729 = !{i64 5368733376}
!2730 = !{i64 5368733382}
!2731 = !{i64 5368733390}
!2732 = !{i64 5368733397}
!2733 = !{i64 5368733402}
!2734 = !{i64 5368733405}
!2735 = !{i64 5368733409}
!2736 = !{i64 5368733412}
!2737 = !{i64 5368733419}
!2738 = !{i64 5368733420}
!2739 = !{i64 5368733422}
!2740 = !{i64 5368733424}
!2741 = !{i64 5368733429}
!2742 = !{i64 5368733432}
!2743 = !{i64 5368733436}
!2744 = !{i64 5368733439}
!2745 = !{i64 5368733444}
!2746 = !{i64 5368733471}
!2747 = !{i64 5368733479}
!2748 = !{i64 5368733481}
!2749 = !{i64 5368733486}
!2750 = !{i64 5368733495}
!2751 = !{i64 5368733501}
!2752 = !{i64 5368733504}
!2753 = !{i64 5368733506}
!2754 = !{i64 5368733510}
!2755 = !{i64 5368733518}
!2756 = !{i64 5368733519}
!2757 = !{i64 5368733605}
!2758 = !{i64 5368733608}
!2759 = !{i64 5368733580}
!2760 = !{i64 5368733610}
!2761 = !{i64 5368733618}
!2762 = !{i64 5368733625}
!2763 = !{i64 5368733632}
!2764 = !{i64 5368733634}
!2765 = !{i64 5368733637}
!2766 = !{i64 5368733640}
!2767 = !{i64 5368733650}
!2768 = !{i64 5368733654}
!2769 = !{i64 5368733660}
!2770 = !{i64 5368733663}
!2771 = !{i64 5368733665}
!2772 = !{i64 5368733673}
!2773 = !{i64 5368733676}
!2774 = !{i64 5368733694}
!2775 = !{i64 5368733712}
!2776 = !{i64 5368733713}
!2777 = !{i64 5368733725}
!2778 = !{i64 5368733728}
!2779 = !{i64 5368733753}
!2780 = !{i64 5368733765}
!2781 = !{i64 5368733793}
!2782 = !{i64 5368733798}
!2783 = !{i64 5368733824}
!2784 = !{i64 5368733827}
!2785 = !{i64 5368733833}
!2786 = !{i64 5368733840}
!2787 = !{i64 5368733850}
!2788 = !{i64 5368733856}
!2789 = !{i64 5368733902}
!2790 = !{i64 5368733906}
!2791 = !{i64 5368733914}
!2792 = !{i64 5368733925}
!2793 = !{i64 5368733929}
!2794 = !{i64 5368733933}
!2795 = !{i64 5368733940}
!2796 = !{i64 5368733942}
!2797 = !{i64 5368733946}
!2798 = !{i64 5368733949}
!2799 = !{i64 5368733951}
!2800 = !{i64 5368733953}
!2801 = !{i64 5368733962}
!2802 = !{i64 5368733967}
!2803 = !{i64 5368733971}
!2804 = !{i64 5368733973}
!2805 = !{i64 5368733977}
!2806 = !{i64 5368733979}
!2807 = !{i64 5368734002}
!2808 = !{i64 5368734007}
!2809 = !{i64 5368734011}
!2810 = !{i64 5368734019}
!2811 = !{i64 5368734026}
!2812 = !{i64 5368734032}
!2813 = !{i64 5368734039}
!2814 = !{i64 5368734047}
!2815 = !{i64 5368734028}
!2816 = !{i64 5368734049}
!2817 = !{i64 5368734055}
!2818 = !{i64 5368734060}
!2819 = !{i64 5368734078}
!2820 = !{i64 5368734089}
!2821 = !{i64 5368734117}
!2822 = !{i64 5368734118}
!2823 = !{i64 5368734124}
!2824 = !{i64 5368734125}
!2825 = !{i64 5368734126}
!2826 = !{i64 5368734127}
!2827 = !{i64 5368734128}
!2828 = !{i64 5368734139}
!2829 = !{i64 5368734159}
!2830 = !{i64 5368734165}
!2831 = !{i64 5368734168}
!2832 = !{i64 5368734179}
!2833 = !{i64 5368734188}
!2834 = !{i64 5368734195}
!2835 = !{i64 5368734202}
!2836 = !{i64 5368734210}
!2837 = !{i64 5368734213}
!2838 = !{i64 5368734219}
!2839 = !{i64 5368734221}
!2840 = !{i64 5368734228}
!2841 = !{i64 5368734231}
!2842 = !{i64 5368734243}
!2843 = !{i64 5368734273}
!2844 = !{i64 5368734262}
!2845 = !{i64 5368734280}
!2846 = !{i64 5368734287}
!2847 = !{i64 5368734289}
!2848 = !{i64 5368734293}
!2849 = !{i64 5368734300}
!2850 = !{i64 5368734305}
!2851 = !{i64 5368734308}
!2852 = !{i64 5368734314}
!2853 = !{i64 5368734318}
!2854 = !{i64 5368734322}
!2855 = !{i64 5368734326}
!2856 = !{i64 5368734328}
!2857 = !{i64 5368734331}
!2858 = !{i64 5368734336}
!2859 = !{i64 5368734344}
!2860 = !{i64 5368734354}
!2861 = !{i64 5368734358}
!2862 = !{i64 5368734362}
!2863 = !{i64 5368734366}
!2864 = !{i64 5368734373}
!2865 = !{i64 5368734377}
!2866 = !{i64 5368734380}
!2867 = !{i64 5368734384}
!2868 = !{i64 5368734388}
!2869 = !{i64 5368734396}
!2870 = !{i64 5368734410}
!2871 = !{i64 5368734417}
!2872 = !{i64 5368734425}
!2873 = !{i64 5368734429}
!2874 = !{i64 5368734436}
!2875 = !{i64 5368734438}
!2876 = !{i64 5368734449}
!2877 = !{i64 5368734457}
!2878 = !{i64 5368734442}
!2879 = !{i64 5368734459}
!2880 = !{i64 5368734465}
!2881 = !{i64 5368734507}
!2882 = !{i64 5368734470}
!2883 = !{i64 5368734472}
!2884 = !{i64 5368734478}
!2885 = !{i64 5368734482}
!2886 = !{i64 5368734496}
!2887 = !{i64 5368734503}
!2888 = !{i64 5368734543}
!2889 = !{i64 5368734544}
!2890 = !{i64 5368734549}
!2891 = !{i64 5368734550}
!2892 = !{i64 5368734551}
!2893 = !{i64 5368734552}
!2894 = !{i64 5368734553}
!2895 = !{i64 5368734554}
!2896 = !{i64 5368734555}
!2897 = !{i64 5368734556}
!2898 = !{i64 5368734557}
!2899 = !{i64 5368734558}
!2900 = !{i64 5368734559}
!2901 = !{i64 5368734571}
!2902 = !{i64 5368734577}
!2903 = !{i64 5368734578}
!2904 = !{i64 5368734579}
!2905 = !{i64 5368734580}
!2906 = !{i64 5368734581}
!2907 = !{i64 5368734582}
!2908 = !{i64 5368734583}
!2909 = !{i64 5368734584}
!2910 = !{i64 5368734585}
!2911 = !{i64 5368734586}
!2912 = !{i64 5368734587}
!2913 = !{i64 5368734588}
!2914 = !{i64 5368734589}
!2915 = !{i64 5368734590}
!2916 = !{i64 5368734591}
!2917 = !{i64 5368734592}
!2918 = !{i64 5368734604}
!2919 = !{i64 5368734611}
!2920 = !{i64 5368734614}
!2921 = !{i64 5368734620}
!2922 = !{i64 5368734622}
!2923 = !{i64 5368734626}
!2924 = !{i64 5368734633}
!2925 = !{i64 5368734639}
!2926 = !{i64 5368734646}
!2927 = !{i64 5368734658}
!2928 = !{i64 5368734662}
!2929 = !{i64 5368734678}
!2930 = !{i64 5368734682}
!2931 = !{i64 5368734689}
!2932 = !{i64 5368734711}
!2933 = !{i64 5368734720}
!2934 = !{i64 5368734730}
!2935 = !{i64 5368734736}
!2936 = !{i64 5368734745}
!2937 = !{i64 5368734765}
!2938 = !{i64 5368734768}
!2939 = !{i64 5368734771}
!2940 = !{i64 5368734782}
!2941 = !{i64 5368734791}
!2942 = !{i64 5368734798}
!2943 = !{i64 5368734805}
!2944 = !{i64 5368734813}
!2945 = !{i64 5368734816}
!2946 = !{i64 5368734822}
!2947 = !{i64 5368734824}
!2948 = !{i64 5368734831}
!2949 = !{i64 5368734834}
!2950 = !{i64 5368734838}
!2951 = !{i64 5368734871}
!2952 = !{i64 5368734857}
!2953 = !{i64 5368734878}
!2954 = !{i64 5368734885}
!2955 = !{i64 5368734887}
!2956 = !{i64 5368734891}
!2957 = !{i64 5368734898}
!2958 = !{i64 5368734903}
!2959 = !{i64 5368734906}
!2960 = !{i64 5368734908}
!2961 = !{i64 5368734912}
!2962 = !{i64 5368734916}
!2963 = !{i64 5368734920}
!2964 = !{i64 5368734922}
!2965 = !{i64 5368734925}
!2966 = !{i64 5368734930}
!2967 = !{i64 5368734938}
!2968 = !{i64 5368734942}
!2969 = !{i64 5368734946}
!2970 = !{i64 5368734954}
!2971 = !{i64 5368734961}
!2972 = !{i64 5368734965}
!2973 = !{i64 5368734973}
!2974 = !{i64 5368734978}
!2975 = !{i64 5368734986}
!2976 = !{i64 5368734993}
!2977 = !{i64 5368734995}
!2978 = !{i64 5368735006}
!2979 = !{i64 5368735014}
!2980 = !{i64 5368734999}
!2981 = !{i64 5368735016}
!2982 = !{i64 5368735022}
!2983 = !{i64 5368735044}
!2984 = !{i64 5368735027}
!2985 = !{i64 5368735029}
!2986 = !{i64 5368735035}
!2987 = !{i64 5368735039}
!2988 = !{i64 5368735073}
!2989 = !{i64 5368735074}
!2990 = !{i64 5368735079}
!2991 = !{i64 5368735080}
!2992 = !{i64 5368735081}
!2993 = !{i64 5368735082}
!2994 = !{i64 5368735083}
!2995 = !{i64 5368735084}
!2996 = !{i64 5368735085}
!2997 = !{i64 5368735086}
!2998 = !{i64 5368735087}
!2999 = !{i64 5368735088}
!3000 = !{i64 5368735089}
!3001 = !{i64 5368735090}
!3002 = !{i64 5368735091}
!3003 = !{i64 5368735092}
!3004 = !{i64 5368735093}
!3005 = !{i64 5368735094}
!3006 = !{i64 5368735184}
!3007 = !{i64 5368735192}
!3008 = !{i64 5368735226}
!3009 = !{i64 5368735209}
!3010 = !{i64 5368735214}
!3011 = !{i64 5368735219}
!3012 = !{i64 5368735221}
!3013 = !{i64 5368735231}
!3014 = !{i64 5368735234}
!3015 = !{i64 5368735241}
!3016 = !{i64 5368735242}
!3017 = !{i64 5368735246}
!3018 = !{i64 5368735248}
!3019 = !{i64 5368735254}
!3020 = !{i64 5368735320}
!3021 = !{i64 5368735326}
!3022 = !{i64 5368735333}
!3023 = !{i64 5368735340}
!3024 = !{i64 5368735343}
!3025 = !{i64 5368735349}
!3026 = !{i64 5368735354}
!3027 = !{i64 5368735359}
!3028 = !{i64 5368735361}
!3029 = !{i64 5368735363}
!3030 = !{i64 5368735365}
!3031 = !{i64 5368735367}
!3032 = !{i64 5368735372}
!3033 = !{i64 5368735374}
!3034 = !{i64 5368735378}
!3035 = !{i64 5368735383}
!3036 = !{i64 5368735385}
!3037 = !{i64 5368735392}
!3038 = !{i64 5368735396}
!3039 = !{i64 5368735402}
!3040 = !{i64 5368735411}
!3041 = !{i64 5368735420}
!3042 = !{i64 5368735426}
!3043 = !{i64 5368735431}
!3044 = !{i64 5368735435}
!3045 = !{i64 5368735437}
!3046 = !{i64 5368735433}
!3047 = !{i64 5368735446}
!3048 = !{i64 5368735451}
!3049 = !{i64 5368735453}
!3050 = !{i64 5368735462}
!3051 = !{i64 5368735467}
!3052 = !{i64 5368735469}
!3053 = !{i64 5368735471}
!3054 = !{i64 5368735473}
!3055 = !{i64 5368735475}
!3056 = !{i64 5368735498}
!3057 = !{i64 5368735501}
!3058 = !{i64 5368735514}
!3059 = !{i64 5368735524}
!3060 = !{i64 5368735530}
!3061 = !{i64 5368735547}
!3062 = !{i64 5368735557}
!3063 = !{i64 5368735565}
!3064 = !{i64 5368735571}
!3065 = !{i64 5368735578}
!3066 = !{i64 5368735586}
!3067 = !{i64 5368735593}
!3068 = !{i64 5368735600}
!3069 = !{i64 5368735606}
!3070 = !{i64 5368735611}
!3071 = !{i64 5368735624}
!3072 = !{i64 5368735631}
!3073 = !{i64 5368735633}
!3074 = !{i64 5368735647}
!3075 = !{i64 5368735651}
!3076 = !{i64 5368735657}
!3077 = !{i64 5368735664}
!3078 = !{i64 5368735668}
!3079 = !{i64 5368735752}
!3080 = !{i64 5368735756}
!3081 = !{i64 5368735758}
!3082 = !{i64 5368735764}
!3083 = !{i64 5368735804}
!3084 = !{i64 5368735810}
!3085 = !{i64 5368735819}
!3086 = !{i64 5368735821}
!3087 = !{i64 5368735823}
!3088 = !{i64 5368735827}
!3089 = !{i64 5368735834}
!3090 = !{i64 5368735839}
!3091 = !{i64 5368735846}
!3092 = !{i64 5368735932}
!3093 = !{i64 5368735937}
!3094 = !{i64 5368735944}
!3095 = !{i64 5368735950}
!3096 = !{i64 5368735952}
!3097 = !{i64 5368735989}
!3098 = !{i64 5368736003}
!3099 = !{i64 5368736013}
!3100 = !{i64 5368736016}
!3101 = !{i64 5368736025}
!3102 = !{i64 5368736035}
!3103 = !{i64 5368736038}
!3104 = !{i64 5368736054}
!3105 = !{i64 5368736074}
!3106 = !{i64 5368736094}
!3107 = !{i64 5368736104}
!3108 = !{i64 5368736109}
!3109 = !{i64 5368736114}
!3110 = !{i64 5368736107}
!3111 = !{i64 5368736119}
!3112 = !{i64 5368736137}
!3113 = !{i64 5368736144}
!3114 = !{i64 5368736161}
!3115 = !{i64 5368736163}
!3116 = !{i64 5368736169}
!3117 = !{i64 5368736172}
!3118 = !{i64 5368736179}
!3119 = !{i64 5368736182}
!3120 = !{i64 5368736185}
!3121 = !{i64 5368736194}
!3122 = !{i64 5368736200}
!3123 = !{i64 5368736202}
!3124 = !{i64 5368736211}
!3125 = !{i64 5368736234}
!3126 = !{i64 5368736247}
!3127 = !{i64 5368736254}
!3128 = !{i64 5368736261}
!3129 = !{i64 5368736264}
!3130 = !{i64 5368736273}
!3131 = !{i64 5368736278}
!3132 = !{i64 5368736284}
!3133 = !{i64 5368736289}
!3134 = !{i64 5368736295}
!3135 = !{i64 5368736301}
!3136 = !{i64 5368736302}
!3137 = !{i64 5368736303}
!3138 = !{i64 5368736548}
!3139 = !{i64 5368736555}
!3140 = !{i64 5368736558}
!3141 = !{i64 5368736593}
!3142 = !{i64 5368736600}
!3143 = !{i64 5368736606}
!3144 = !{i64 5368736617}
!3145 = !{i64 5368736630}
!3146 = !{i64 5368736640}
!3147 = !{i64 5368736686}
!3148 = !{i64 5368736700}
!3149 = !{i64 5368736706}
!3150 = !{i64 5368736716}
!3151 = !{i64 5368736718}
!3152 = !{i64 5368736736}
!3153 = !{i64 5368736755}
!3154 = !{i64 5368736760}
!3155 = !{i64 5368736765}
!3156 = !{i64 5368736767}
!3157 = !{i64 5368736772}
!3158 = !{i64 5368736780}
!3159 = !{i64 5368736790}
!3160 = !{i64 5368736792}
!3161 = !{i64 5368736797}
!3162 = !{i64 5368736799}
!3163 = !{i64 5368736801}
!3164 = !{i64 5368736813}
!3165 = !{i64 5368736818}
!3166 = !{i64 5368736823}
!3167 = !{i64 5368736825}
!3168 = !{i64 5368736830}
!3169 = !{i64 5368736832}
!3170 = !{i64 5368736834}
!3171 = !{i64 5368736839}
!3172 = !{i64 5368736844}
!3173 = !{i64 5368736846}
!3174 = !{i64 5368736855}
!3175 = !{i64 5368736860}
!3176 = !{i64 5368736865}
!3177 = !{i64 5368736870}
!3178 = !{i64 5368736875}
!3179 = !{i64 5368736877}
!3180 = !{i64 5368736882}
!3181 = !{i64 5368736887}
!3182 = !{i64 5368736889}
!3183 = !{i64 5368736891}
!3184 = !{i64 5368736896}
!3185 = !{i64 5368736901}
!3186 = !{i64 5368736906}
!3187 = !{i64 5368736908}
!3188 = !{i64 5368736915}
!3189 = !{i64 5368736921}
!3190 = !{i64 5368736926}
!3191 = !{i64 5368736927}
!3192 = !{i64 5368736932}
!3193 = !{i64 5368736943}
!3194 = !{i64 5368736948}
!3195 = !{i64 5368736953}
!3196 = !{i64 5368736958}
!3197 = !{i64 5368736964}
!3198 = !{i64 5368736972}
!3199 = !{i64 5368736987}
!3200 = !{i64 5368736992}
!3201 = !{i64 5368736994}
!3202 = !{i64 5368737008}
!3203 = !{i64 5368737013}
!3204 = !{i64 5368737015}
!3205 = !{i64 5368737021}
!3206 = !{i64 5368737024}
!3207 = !{i64 5368737030}
!3208 = !{i64 5368737032}
!3209 = !{i64 5368737034}
!3210 = !{i64 5368737058}
!3211 = !{i64 5368737063}
!3212 = !{i64 5368737065}
!3213 = !{i64 5368737091}
!3214 = !{i64 5368737096}
!3215 = !{i64 5368737106}
!3216 = !{i64 5368737116}
!3217 = !{i64 5368737118}
!3218 = !{i64 5368737123}
!3219 = !{i64 5368737131}
!3220 = !{i64 5368737135}
!3221 = !{i64 5368737140}
!3222 = !{i64 5368737145}
!3223 = !{i64 5368737147}
!3224 = !{i64 5368737161}
!3225 = !{i64 5368737167}
!3226 = !{i64 5368737175}
!3227 = !{i64 5368737179}
!3228 = !{i64 5368737184}
!3229 = !{i64 5368737189}
!3230 = !{i64 5368737191}
!3231 = !{i64 5368737193}
!3232 = !{i64 5368737196}
!3233 = !{i64 5368737201}
!3234 = !{i64 5368737209}
!3235 = !{i64 5368737229}
!3236 = !{i64 5368737234}
!3237 = !{i64 5368737236}
!3238 = !{i64 5368737241}
!3239 = !{i64 5368737243}
!3240 = !{i64 5368737245}
!3241 = !{i64 5368737248}
!3242 = !{i64 5368737250}
!3243 = !{i64 5368737259}
!3244 = !{i64 5368737266}
!3245 = !{i64 5368737303}
!3246 = !{i64 5368737309}
!3247 = !{i64 5368737314}
!3248 = !{i64 5368737320}
!3249 = !{i64 5368737325}
!3250 = !{i64 5368737327}
!3251 = !{i64 5368737348}
!3252 = !{i64 5368737357}
!3253 = !{i64 5368737808}
!3254 = !{i64 5368737820}
!3255 = !{i64 5368737831}
!3256 = !{i64 5368737837}
!3257 = !{i64 5368737904}
!3258 = !{i64 5368737916}
!3259 = !{i64 5368737927}
!3260 = !{i64 5368737933}
!3261 = !{i64 5368738032}
!3262 = !{i64 5368738037}
!3263 = !{i64 5368738041}
!3264 = !{i64 5368738046}
!3265 = !{i64 5368738049}
!3266 = !{i64 5368738059}
!3267 = !{i64 5368738077}
!3268 = !{i64 5368738089}
!3269 = !{i64 5368738106}
!3270 = !{i64 5368738121}
!3271 = !{i64 5368738138}
!3272 = !{i64 5368738164}
!3273 = !{i64 5368738181}
!3274 = !{i64 5368738193}
!3275 = !{i64 5368738203}
!3276 = !{i64 5368738213}
!3277 = !{i64 5368738220}
!3278 = !{i64 5368738237}
!3279 = !{i64 5368738240}
!3280 = !{i64 5368738242}
!3281 = !{i64 5368738252}
!3282 = !{i64 5368738270}
!3283 = !{i64 5368738272}
!3284 = !{i64 5368738306}
!3285 = !{i64 5368738314}
!3286 = !{i64 5368738326}
!3287 = !{i64 5368738330}
!3288 = !{i64 5368738332}
!3289 = !{i64 5368738339}
!3290 = !{i64 5368738343}
!3291 = !{i64 5368738350}
!3292 = !{i64 5368738352}
!3293 = !{i64 5368738366}
!3294 = !{i64 5368738370}
!3295 = !{i64 5368738375}
!3296 = !{i64 5368738389}
!3297 = !{i64 5368738393}
!3298 = !{i64 5368738395}
!3299 = !{i64 5368738399}
!3300 = !{i64 5368738259}
!3301 = !{i64 5368738406}
!3302 = !{i64 5368738411}
!3303 = !{i64 5368738413}
!3304 = !{i64 5368738423}
!3305 = !{i64 5368738433}
!3306 = !{i64 5368738438}
!3307 = !{i64 5368738440}
!3308 = !{i64 5368738445}
!3309 = !{i64 5368738449}
!3310 = !{i64 5368738469}
!3311 = !{i64 5368738471}
!3312 = !{i64 5368738473}
!3313 = !{i64 5368738475}
!3314 = !{i64 5368738481}
!3315 = !{i64 5368738484}
!3316 = !{i64 5368738494}
!3317 = !{i64 5368738500}
!3318 = !{i64 5368738504}
!3319 = !{i64 5368738509}
!3320 = !{i64 5368738519}
!3321 = !{i64 5368738542}
!3322 = !{i64 5368738546}
!3323 = !{i64 5368738552}
!3324 = !{i64 5368738555}
!3325 = !{i64 5368738556}
!3326 = !{i64 5368738563}
!3327 = !{i64 5368738564}
!3328 = !{i64 5368738592}
!3329 = !{i64 5368738597}
!3330 = !{i64 5368738599}
!3331 = !{i64 5368738603}
!3332 = !{i64 5368738610}
!3333 = !{i64 5368738627}
!3334 = !{i64 5368738636}
!3335 = !{i64 5368738662}
!3336 = !{i64 5368738668}
!3337 = !{i64 5368738671}
!3338 = !{i64 5368738686}
!3339 = !{i64 5368738727}
!3340 = !{i64 5368738778}
!3341 = !{i64 5368738795}
!3342 = !{i64 5368738811}
!3343 = !{i64 5368738825}
!3344 = !{i64 5368738844}
!3345 = !{i64 5368738855}
!3346 = !{i64 5368738861}
!3347 = !{i64 5368738863}
!3348 = !{i64 5368738872}
!3349 = !{i64 5368738893}
!3350 = !{i64 5368738914}
!3351 = !{i64 5368738924}
!3352 = !{i64 5368738930}
!3353 = !{i64 5368738940}
!3354 = !{i64 5368738953}
!3355 = !{i64 5368738956}
!3356 = !{i64 5368738966}
!3357 = !{i64 5368738968}
!3358 = !{i64 5368738974}
!3359 = !{i64 5368738980}
!3360 = !{i64 5368738983}
!3361 = !{i64 5368738990}
!3362 = !{i64 5368738993}
!3363 = !{i64 5368738995}
!3364 = !{i64 5368738999}
!3365 = !{i64 5368739002}
!3366 = !{i64 5368739008}
!3367 = !{i64 5368739015}
!3368 = !{i64 5368739019}
!3369 = !{i64 5368739021}
!3370 = !{i64 5368739028}
!3371 = !{i64 5368739030}
!3372 = !{i64 5368739037}
!3373 = !{i64 5368739043}
!3374 = !{i64 5368739049}
!3375 = !{i64 5368739059}
!3376 = !{i64 5368739075}
!3377 = !{i64 5368739081}
!3378 = !{i64 5368739083}
!3379 = !{i64 5368739087}
!3380 = !{i64 5368739089}
!3381 = !{i64 5368739117}
!3382 = !{i64 5368739118}
!3383 = !{i64 5368739123}
!3384 = !{i64 5368739124}
!3385 = !{i64 5368739141}
!3386 = !{i64 5368739284}
!3387 = !{i64 5368739287}
!3388 = !{i64 5368739299}
!3389 = !{i64 5368739305}
!3390 = !{i64 5368739315}
!3391 = !{i64 5368739324}
!3392 = !{i64 5368739326}
!3393 = !{i64 5368739335}
!3394 = !{i64 5368739340}
!3395 = !{i64 5368739345}
!3396 = !{i64 5368739349}
!3397 = !{i64 5368739354}
!3398 = !{i64 5368739362}
!3399 = !{i64 5368739366}
!3400 = !{i64 5368739372}
!3401 = !{i64 5368739375}
!3402 = !{i64 5368739383}
!3403 = !{i64 5368739391}
!3404 = !{i64 5368739451}
!3405 = !{i64 5368739511}
!3406 = !{i64 5368739539}
!3407 = !{i64 5368739542}
!3408 = !{i64 5368739547}
!3409 = !{i64 5368739559}
!3410 = !{i64 5368739567}
!3411 = !{i64 5368739574}
!3412 = !{i64 5368739580}
!3413 = !{i64 5368739591}
!3414 = !{i64 5368739595}
!3415 = !{i64 5368739601}
!3416 = !{i64 5368739615}
!3417 = !{i64 5368739617}
!3418 = !{i64 5368739639}
!3419 = !{i64 5368739641}
!3420 = !{i64 5368739647}
!3421 = !{i64 5368739649}
!3422 = !{i64 5368739658}
!3423 = !{i64 5368739664}
!3424 = !{i64 5368739684}
!3425 = !{i64 5368739697}
!3426 = !{i64 5368739701}
!3427 = !{i64 5368739707}
!3428 = !{i64 5368739711}
!3429 = !{i64 5368739714}
!3430 = !{i64 5368739716}
!3431 = !{i64 5368739721}
!3432 = !{i64 5368739726}
!3433 = !{i64 5368739730}
!3434 = !{i64 5368739739}
!3435 = !{i64 5368739740}
!3436 = !{i64 5368739766}
!3437 = !{i64 5368739770}
!3438 = !{i64 5368739778}
!3439 = !{i64 5368739781}
!3440 = !{i64 5368739783}
!3441 = !{i64 5368739787}
!3442 = !{i64 5368739790}
!3443 = !{i64 5368739792}
!3444 = !{i64 5368739800}
!3445 = !{i64 5368739829}
!3446 = !{i64 5368739830}
!3447 = !{i64 5368739763}
!3448 = !{i64 5368739832}
!3449 = !{i64 5368739836}
!3450 = !{i64 5368739840}
!3451 = !{i64 5368739852}
!3452 = !{i64 5368739857}
!3453 = !{i64 5368739858}
!3454 = !{i64 5368739864}
!3455 = !{i64 5368739870}
!3456 = !{i64 5368739876}
!3457 = !{i64 5368739882}
!3458 = !{i64 5368739888}
!3459 = !{i64 5368739894}
!3460 = !{i64 5368739900}
!3461 = !{i64 5368739906}
!3462 = !{i64 5368739912}
!3463 = !{i64 5368739918}
!3464 = !{i64 5368739924}
!3465 = !{i64 5368739930}
!3466 = !{i64 5368739936}
!3467 = !{i64 5368739942}
!3468 = !{i64 5368739948}
!3469 = !{i64 5368739954}
!3470 = !{i64 5368739960}
!3471 = !{i64 5368739966}
!3472 = !{i64 5368739972}
!3473 = !{i64 5368739978}
!3474 = !{i64 5368739984}
!3475 = !{i64 5368739990}
!3476 = !{i64 5368739996}
!3477 = !{i64 5368740002}
!3478 = !{i64 5368740008}
!3479 = !{i64 5368740014}
!3480 = !{i64 5368740020}
!3481 = !{i64 5368740026}
!3482 = !{i64 5368740032}
!3483 = !{i64 5368740038}
!3484 = !{i64 5368740044}
!3485 = !{i64 5368740050}
!3486 = !{i64 5368740056}
!3487 = !{i64 5368740068}
!3488 = !{i64 5368740078}
!3489 = !{i64 5368740092}
!3490 = !{i64 5368740096}
!3491 = !{i64 5368740111}
!3492 = !{i64 5368740118}
!3493 = !{i64 5368740120}
!3494 = !{i64 5368740124}
!3495 = !{i64 5368740128}
!3496 = !{i64 5368740130}
!3497 = !{i64 5368740133}
!3498 = !{i64 5368740136}
!3499 = !{i64 5368740104}
!3500 = !{i64 5368740139}
!3501 = !{i64 5368740142}
!3502 = !{i64 5368740146}
!3503 = !{i64 5368740150}
!3504 = !{i64 5368740153}
!3505 = !{i64 5368740157}
!3506 = !{i64 5368740162}
!3507 = !{i64 5368740169}
!3508 = !{i64 5368740172}
!3509 = !{i64 5368740175}
!3510 = !{i64 5368740182}
!3511 = !{i64 5368740213}
!3512 = !{i64 5368740235}
!3513 = !{i64 5368740239}
!3514 = !{i64 5368740314}
!3515 = !{i64 5368740315}
!3516 = !{i64 5368740321}
!3517 = !{i64 5368740352}
!3518 = !{i64 5368740368}
!3519 = !{i64 5368740375}
!3520 = !{i64 5368740391}
!3521 = !{i64 5368740407}
!3522 = !{i64 5368740423}
!3523 = !{i64 5368740439}
!3524 = !{i64 5368740455}
!3525 = !{i64 5368740471}
!3526 = !{i64 5368740487}
!3527 = !{i64 5368740503}
!3528 = !{i64 5368740519}
!3529 = !{i64 5368740535}
!3530 = !{i64 5368740551}
!3531 = !{i64 5368740567}
!3532 = !{i64 5368740583}
!3533 = !{i64 5368740599}
!3534 = !{i64 5368740615}
!3535 = !{i64 5368740631}
!3536 = !{i64 5368740647}
!3537 = !{i64 5368740663}
!3538 = !{i64 5368740679}
!3539 = !{i64 5368740695}
!3540 = !{i64 5368740711}
!3541 = !{i64 5368740720}
!3542 = !{i64 5368740727}
!3543 = !{i64 5368740743}
!3544 = !{i64 5368740759}
!3545 = !{i64 5368740775}
!3546 = !{i64 5368740793}
!3547 = !{i64 5368740796}
!3548 = !{i64 5368740799}
!3549 = !{i64 5368740801}
!3550 = !{i64 5368740803}
!3551 = !{i64 5368740811}
!3552 = !{i64 5368740821}
!3553 = !{i64 5368740832}
!3554 = !{i64 5368740841}
!3555 = !{i64 5368740844}
!3556 = !{i64 5368740863}
!3557 = !{i64 5368740874}
!3558 = !{i64 5368740880}
!3559 = !{i64 5368740896}
!3560 = !{i64 5368740910}
!3561 = !{i64 5368740917}
!3562 = !{i64 5368740919}
!3563 = !{i64 5368740926}
!3564 = !{i64 5368740929}
!3565 = !{i64 5368740931}
!3566 = !{i64 5368740938}
!3567 = !{i64 5368740944}
!3568 = !{i64 5368740948}
!3569 = !{i64 5368740955}
!3570 = !{i64 5368740959}
!3571 = !{i64 5368740961}
!3572 = !{i64 5368740968}
!3573 = !{i64 5368740976}
!3574 = !{i64 5368740983}
!3575 = !{i64 5368740985}
!3576 = !{i64 5368740996}
!3577 = !{i64 5368741004}
!3578 = !{i64 5368740989}
!3579 = !{i64 5368741006}
!3580 = !{i64 5368741009}
!3581 = !{i64 5368741014}
!3582 = !{i64 5368741024}
!3583 = !{i64 5368741032}
!3584 = !{i64 5368741043}
!3585 = !{i64 5368741044}
!3586 = !{i64 5368741050}
!3587 = !{i64 5368741051}
!3588 = !{i64 5368741059}
