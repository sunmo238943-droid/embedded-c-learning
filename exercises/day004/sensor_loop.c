#include <stdio.h>

int main(void)
{
    int temperature = 25;

    while(1)
    {
        printf("Temperature = %d\n", temperature);

        temperature++;

        if(temperature > 30)
        {
            printf("Temperature warning!\n");
            break;
        }
    }

    return 0;
}