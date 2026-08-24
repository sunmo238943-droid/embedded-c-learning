#include <stdio.h>

int main(void)
{
    int i, j;
    int n = 5;

    for (i = 1; i <= n; i++) {
        /* 第一段：打印空格，把星推到中间 */
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        /* 第二段：打印星 */
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}