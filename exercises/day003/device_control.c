#include<stdio.h>
int main(void)
{
    float voltage;
    float temperature;
    int mode;

    printf("Enter voltage:");
    scanf("%f,&voltage");

    printf("Enter temperature: ");
    scanf("%f, &temperature");
    
    if(voltage<3.0f||voltage>5.0f||
       temperature<0.0f||temperature>60.0f)
    {
        printf("Warning: sensor value abnormal!\n");
    }
        else
    {
        printf("System normal\n");
    }

        printf("Select mode(1-3):");
        scanf("%d,&mode");

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