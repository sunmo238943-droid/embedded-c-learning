#include <stdio.h>

void check_size(float arr[])
{
    printf("inside function: %zu\n", sizeof(arr));
}

int main(void)
{
    float temp[5] = {1, 2, 3, 4, 5};

    printf("inside main: %zu\n", sizeof(temp));

    check_size(temp);

    return 0;
}