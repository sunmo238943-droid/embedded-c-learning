#include <stdio.h>

int main(void)
{
    int a = 5;
    int b = 2;

    float result1;
    float result2;
    float result3;

    result1 = a / b;
    result2 = (float)a / b;
    result3 = a / 2.0f;

    printf("a / b = %d\n", a / b);

    printf("result1 = %.2f\n", result1);
    printf("result2 = %.2f\n", result2);
    printf("result3 = %.2f\n", result3);

    return 0;
}