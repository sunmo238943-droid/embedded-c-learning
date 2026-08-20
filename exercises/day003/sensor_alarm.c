#include<stdio.h>
int main(void)
{
    float voltage;
    float temperature;

    printf("Enter voltage:");
    scanf("%f,&voltage");

    printf("Enter temperayure");
    scanf("%f,&tempertaure:");

    if(voltage<3.0f||voltage>5.0f||
        temperature<0.0f||temperature>60.0f)
    {
        printf("Warning!\n");
    }
    else
    {
        printf("System normal\n");
    }
    return 0;
}