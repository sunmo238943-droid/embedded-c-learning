#include <stdio.h>

/* Day 011 实验：函数传参，传的到底是「复印册」还是「房间钥匙」？
 *
 * 编译：gcc -Wall Day011_参数传递实验.c -o t && ./t
 *
 * 核心观察点：对比 [main] 和 [函数内] 打印出来的**地址**
 *   地址一样   → 同一个房间  → 改了会变
 *   地址不一样 → 复印册      → 改了不变
 */

/* ① 传普通变量：拿到的是复印册，还是钥匙？ */
void change_int(int x)
{
    printf("  [函数内] x 的地址 = %p , x = %d\n", (void *)&x, x);
    x = 999;
    printf("  [函数内] 改完之后 x = %d\n", x);
}

/* ② 传数组：拿到的是复印册，还是钥匙？ */
void change_arr(int arr[], int n)
{
    printf("  [函数内] arr 的地址 = %p , n = %d\n", (void *)arr, n);
    arr[0] = 888;
    printf("  [函数内] 改完之后 arr[0] = %d\n", arr[0]);
}

int main(void)
{
    int a = 5;
    int nums[3] = {1, 2, 3};

    printf("===== 实验①：传普通变量 =====\n");
    printf("  [main] a 的地址 = %p , a = %d\n", (void *)&a, a);
    change_int(a);
    printf("  [main] 调用之后 a = %d     <-- 变了吗？\n\n", a);

    printf("===== 实验②：传数组 =====\n");
    printf("  [main] nums 的地址 = %p , nums[0] = %d\n", (void *)nums, nums[0]);
    change_arr(nums, 3);
    printf("  [main] 调用之后 nums[0] = %d     <-- 变了吗？\n\n", nums[0]);

    printf("===== 怎么读这个结果 =====\n");
    printf("  把 [main] 的地址 和 [函数内] 的地址 摆一起比：\n");
    printf("    一样   = 站在同一个房间里改 = 原值会变\n");
    printf("    不一样 = 拿到一份复印件      = 原值不变\n");

    return 0;
}
