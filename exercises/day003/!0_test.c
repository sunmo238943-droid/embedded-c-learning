#include <stdio.h>

int main(void)
{
    int power_on = 0;
    int error = 0;

    if (power_on && !error)
    {
        printf("Device running\n");
    }
    else
    {
        printf("Device stopped\n");
    }

    return 0;
}