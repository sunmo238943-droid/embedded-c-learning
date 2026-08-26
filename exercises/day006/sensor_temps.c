#include <stdio.h>

int main(void)
{
    float temp[5] = {23.534, 24.012, 22.832, 25.211, 23.319};

    for (int i = 0; i < 5; i++) {
        printf("temp[%d] = %.3f\n", i, temp[i]);
    }
    return 0;
}