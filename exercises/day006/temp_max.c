#include<stdio.h>
int main(void)
{
    float temp[5] = {25.1f, 26.3f, 24.8f, 27.0f, 25.6f};

    for (int i = 0; i < 5; i++) {
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
