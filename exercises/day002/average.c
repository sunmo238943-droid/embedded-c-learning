#include <stdio.h>

int main(void)
{
    int a = 80;
    int b = 85;
    int c = 91;

    float result1;

    result1 = (float)(a+b+c)/3;
    printf("result1 = %.2f\n", result1);

    printf("average = %d\n", (a+b+c)/3);

    return 0;
}