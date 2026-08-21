#include <stdio.h>

int main(void)
{
    int data;

    for(int i = 0; i < 10; i++)
    {
        data = i * 5;

        if(data == 20)
        {
            continue;
        }

        if(data > 35)
        {
            break;
        }

        printf("Sensor data = %d\n", data);
    }

    return 0;
}