# day009 — 210天计划 Day 011（C 语言）

## 主题
**函数**：定义、参数传递、返回值

## 关键概念（从今日证据里建立）
- **值传递 vs 地址传递**（`param_pass_demo.c`）
  - 普通变量：拿到复印件，改了不变
  - 数组：传首地址，改了 = 改原件
- **return 给程序用** vs **printf 给人看**（`calc_functions.c`）
  - 函数「算出来交给程序」，main 决定怎么用
- **数组名作参数 = 传首地址**（`calc_functions.c` 的 `double_all`）
  - 改的就是 main 里的数组本身，故无需 return

## 文件
- `param_pass_demo.c` — 对比实验，打印 [main] 与 [函数内] 的地址
- `calc_functions.c` — 4 个 TODO（add / sub / mul / double_all）

## 命名约定（重要 · 踩过的坑）
**C 文件名一律用英文小写 + 下划线**，与 day001–day008 保持一致。

原因：中文文件名在 VSCode task（走 `cmd /c`，系统 ANSI 编码）与
gcc（MSYS2，UTF-8）之间会产生编码冲突——编译能成功，但生成的 `.exe`
文件名会变成乱码，导致无法运行。

本次 `Day011_计算器拆函数.c` 就踩了这个坑，已重命名为 `calc_functions.c`。

## 编译运行
```
gcc -Wall calc_functions.c -o calc_functions && ./calc_functions
```

## 验收（与 210天计划 Day 011 任务单对齐）
- [x] 兑现睡前思考题：地址传递 → main 数组会变
- [x] 兑现「return 给程序用」
- [x] 全部 4 个 TODO 跑通，`-Wall` 零警告
- [x] 实测输出：`add=16` / `sub=8` / `mul=48`，nums 翻倍为 `2 4 6 8`
