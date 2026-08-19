#include <stdio.h>

int main(void)
{
    int age = 24;
    float height = 179.5f;
    double weight = 110.25;
    char grade = 'A';

    printf("age = %d\n", age);
    printf("height = %.1f\n", height);
    printf("weight = %.2f\n", weight);
    printf("grade = %c\n", grade);

    printf("\n");

    printf("sizeof(int) = %zu bytes\n", sizeof(int));
    printf("sizeof(float) = %zu bytes\n", sizeof(float));
    printf("sizeof(double) = %zu bytes\n", sizeof(double));
    printf("sizeof(char) = %zu bytes\n", sizeof(char));

    return 0;
}
