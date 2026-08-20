#include <stdio.h>

int main(void)
{
    float voltage;

    printf("Enter voltage");
    scanf("%f",&voltage);

    if(voltage >= 3.0f&&voltage<=5.0f)
    {
        printf("Voltage normal\n");
    }
    else
    {
        printf("Voltage abnormal\n");

    }
    return 0;
}