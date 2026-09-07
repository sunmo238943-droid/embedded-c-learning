/* day010（总 Day 012）· 例题 —— 为什么 swap 交换不了？
 *
 * 【本文件是例题】全部代码已写好，逐行中文注释。
 *   你的任务：读注释 → 编译运行 → 对照输出理解"值传递"
 *
 * 运行：gcc -Wall swap_lesson.c -o lesson && ./lesson
 */

#include <stdio.h>
#include <windows.h>   /* Windows: SetConsoleOutputCP */

/* ============================================================
 * 例题 1：错误版 —— 交换的是"复印件"
 * ============================================================ */
void swap_wrong(int a, int b)
{
    int temp;   /* 第三个杯子，用来暂存 */

    printf("    [刚进函数] 拿到手：a=%d  b=%d\n", a, b);

    /* --- 三板斧交换（Day 010 冒泡里已经用熟的动作）--- */
    temp = a;   /* 第1斧：把 a 倒进空杯 temp（此时 temp=10）        */
    a = b;      /* 第2斧：把 b 倒进 a（a=20；a 原来的 10 已存在 temp） */
    b = temp;   /* 第3斧：把 temp 倒进 b（b=10）                      */

    printf("    [交换完成] 函数里：a=%d  b=%d   ← 函数内确实成功了！\n", a, b);
    printf("    [我的地址] &a=%p  &b=%p\n", (void *)&a, (void *)&b);
}

/* ============================================================
 * 例题 2：正确版 —— 顺着地址去改"原件"（指针，Day 013 正式学）
 * ============================================================ */
void swap_right(int *pa, int *pb)
{
    int temp;

    /* pa、pb 里装的是"地址"，不是值 */
    printf("    [我收到的地址] pa=%p  pb=%p\n", (void *)pa, (void *)pb);
    printf("    [顺地址取值]   *pa=%d  *pb=%d\n", *pa, *pb);

    /* *pa 的意思是：顺着 pa 里存的地址，找到那个抽屉，取出里面的值 */
    temp = *pa;   /* 把 *pa 的值倒进 temp */
    *pa = *pb;    /* 把 *pb 的值，写进 pa 指向的那个抽屉 */
    *pb = temp;   /* 把 temp 写进 pb 指向的那个抽屉 */

    printf("    [改完了]       *pa=%d  *pb=%d\n", *pa, *pb);
}

int main(void)
{
    SetConsoleOutputCP(65001);   /* 终端按 UTF-8 解码 C 字符串，根治 Windows 终端中文乱码 */

    int x = 10;
    int y = 20;

    /* ================= 例题 1：错误版 ================= */
    printf("================ 例题 1：错误版 swap_wrong(x, y) ================\n");
    printf("  [调用前] x=%d  y=%d\n", x, y);
    printf("  [main 的地址] &x=%p  &y=%p\n\n", (void *)&x, (void *)&y);

    swap_wrong(x, y);   /* 把 x、y 的"值"抄给 a、b —— 注意是抄，不是搬 */

    printf("\n  [调用后] x=%d  y=%d   ← 没变！\n", x, y);
    printf("  为什么？对比上面两组地址：\n");
    printf("    main 的 x 住在 %p\n", (void *)&x);
    printf("    函数的 a 住在另一个地方（看上面 [我的地址] 那行）\n");
    printf("    两个不同的抽屉 → 改 a 当然影响不到 x\n\n");

    /* ================= 例题 2：正确版 ================= */
    printf("================ 例题 2：正确版 swap_right(&x, &y) ================\n");
    printf("  [调用前] x=%d  y=%d\n", x, y);

    swap_right(&x, &y);   /* 注意这个 & ：这次传的是"地址"，不是值 */

    printf("  [调用后] x=%d  y=%d   ← 变了！\n", x, y);
    printf("  为什么？这次给的是地址，函数顺着地址找到 x、y 本人，直接改写\n\n");

    /* ================= 结论 ================= */
    printf("================ 结论 ================\n");
    printf("  swap_wrong(x, y)   → 传值   → 改复印件 → main 不变\n");
    printf("  swap_right(&x, &y) → 传地址 → 改原件   → main 变了\n");
    printf("\n  口诀：想让函数改 main 里的变量，必须给地址（&），不能只给值\n");

    return 0;
}
