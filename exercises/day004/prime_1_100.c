#include <stdio.h>

int main(void)
{
    for (int n = 2; n <= 100; n++) {      // 外层：每个待审判的数

        int is_prime = 1;                  // 先假设它是素数（为什么这行必须在这？）

        for (int i = 2; i < n; i++) {    // 内层：逐个试除的"陪审团"
            if (n % i == 0) {              // 能整除 → 抓到了
                is_prime = 0;
                break;                     // 为什么抓到一个就能收工？
            }
        }

        if (is_prime == 1) {               // 内层跑完没被推翻 → 是真素数
            printf("%d\n", n);
        }
    }
    return 0;
}