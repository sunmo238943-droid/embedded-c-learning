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
float sum = 0.0f;
    for (int i = 0; i < 5; i++)
{
    sum = sum + temp[i];
}
    float average = sum / 5;
    printf("sum = %.1f\n", sum);
    printf("average = %.2f\n", average); 
  
    float max_temp = temp[0];

    for (int i = 1; i < 5; i++)   
{
    if (temp[i] > max_temp)     
    {
        max_temp = temp[i];     
    }
}
    printf(" max_temp = %.1f\n",  max_temp);

    return 0;
}