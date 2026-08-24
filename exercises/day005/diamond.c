#include <stdio.h>

int main(void)
{
    int i, j;
    int n = 5;

    /* ===== 上半部分：正金字塔（i 从 1 到 n） ===== */
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    /* ===== 下半部分：倒金字塔（i 从 n-1 倒到 1） ===== */
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}