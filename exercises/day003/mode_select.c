#include <stdio.h>

int main(void)
{
    int mode;

    printf("Select mode (1-3): ");
    scanf("%d", &mode);

    switch (mode)
    {
        case 1:
            printf("Manual mode\n");
            break;

        case 2:
            printf("Automatic mode\n");
            break;

        case 3:
            printf("Diagnostic mode\n");
            break;

        default:
            printf("Invalid mode\n");
    }

    return 0;
}