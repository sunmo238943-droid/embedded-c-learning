#include <stdio.h>
#include <windows.h>

void add_one_wrong(int n)
{
    n = n + 1;
    printf("    [函数内] n=%d   &n=%p\n", n, (void *)&n);
}

void add_one_right(int *pn)
{
    *pn = *pn + 1;
    printf("    [函数内] *pn=%d\n", *pn);
}

int main(void)
{
    SetConsoleOutputCP(65001);
    int num = 5;

    printf("============ 练习 1：错误版 add_one_wrong(num) ============\n");
    printf("  [调用前] num=%d   &num=%p\n", num, (void *)&num);
    add_one_wrong(num);
    printf("  [调用后] num=%d   ← 变了吗？（预期：不变）\n\n", num);

    printf("============ 练习 2：正确版 add_one_right(&num) ============\n");
    printf("  [调用前] num=%d\n", num);
    add_one_right(&num);
    printf("  [调用后] num=%d   ← 变了吗？（预期：6）\n\n", num);

    printf("============ 练习 3：思考题（口头回答）============\n");
    printf("  Q1: 练习 1 里函数内的 &n 和 main 里的 &num，是一样的吗？为什么？\n");
    printf("  Q2: 练习 2 的调用为什么要写 &num，而不是 num？\n");
    printf("  Q3: 回忆 Day 011 的数组实验——为什么数组传进函数，改了 main 里会变？\n");
    printf("      （提示：数组名传过去的是什么？和普通变量一样吗？）\n");

    return 0;
}