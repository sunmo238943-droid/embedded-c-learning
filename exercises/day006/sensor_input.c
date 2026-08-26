#include <stdio.h>

int main(void)
{
    float temp[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter temperature %d: ", i + 1);

        scanf("%f", &temp[i]);
    }
for (int i = 0; i < 5; i++)
{
    printf("temp[%d] = %.1f\n", i, temp[i]);
}
    return 0;
}