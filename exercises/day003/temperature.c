#include <stdio.h>

int main(void)
{
    int temperature;

    printf("Please enter temperature: ");
    scanf("%d", &temperature);

    if (temperature >= 30)
    {
        printf("Hot\n");
    }
    else if (temperature >= 20)
    {
        printf("Comfortable\n");
    }
    else
    {
        printf("Cold\n");
    }

    return 0;
}