#include <stdio.h>

/* Day 011 练习：把计算器拆成函数
 *
 * 编译运行：
 *   Git Bash    : gcc -Wall Day011_计算器拆函数.c -o t && ./t
 *   PowerShell  : gcc -Wall Day011_计算器拆函数.c -o t ; .\t
 *
 * 任务：完成 4 个 TODO。前三个各 1 行，第四个 3 行。
 * 核心体会：return 是「算出来交给程序」；printf 是「打印给人看」。
 */

/* ---- TODO 1：加法，返回 a + b ---- */
int add(int a, int b)
{
    return a + b;   // 修改：返回两数之和
}

/* ---- TODO 2：减法，返回 a - b ---- */
int sub(int a, int b)
{
    return a - b;   // 修改：返回两数之差
}

/* ---- TODO 3：乘法，返回 a * b ---- */
int mul(int a, int b)
{
    return a * b;   // 修改：返回两数之积
}

/* ---- 示例：除法（带除零保护）。照这个风格写上面三个 ---- */
double divide(double a, double b)
{
    if (b == 0) {
        printf("  [divide] 除数不能为 0\n");
        return 0;
    }
    return a / b;
}

/* ---- TODO 4：把数组每个元素翻倍 ----
 * 提示：for 循环，arr[i] = arr[i] * 2
 * 为什么不用 return？因为传进来的是地址，
 * 你改的就是 main 里的那个数组本身。
 */
void double_all(int arr[], int n)
{
    // 修改：循环遍历，每个元素乘以 2
    for (int i = 0; i < n; i++) {
        arr[i] = arr[i] * 2;
    }
}

int main(void)
{
    int x = 28, y = 4;
    int nums[4] = {1, 2, 3, 4};

    printf("===== 第一部分：返回值 =====\n");
    int sum = add(x, y);
    printf("  add(%d, %d) 返回 %d\n", x, y, sum);
    printf("  返回值还能继续参与运算：sum * 2 = %d\n\n", sum * 2);

    printf("===== 第二部分：全部运算 =====\n");
    printf("  %d + %d = %d\n", x, y, add(x, y));
    printf("  %d - %d = %d\n", x, y, sub(x, y));
    printf("  %d * %d = %d\n", x, y, mul(x, y));
    printf("  %d / %d = %.2f\n", x, y, divide(x, y));

    printf("\n===== 第三部分：数组作参数 =====\n");
    printf("  调用前 nums[0] = %d\n", nums[0]);
    double_all(nums, 4);
    printf("  调用后 nums[0] = %d    <-- 翻倍了吗？\n", nums[0]);
    printf("  全部元素：");
    for (int i = 0; i < 4; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}