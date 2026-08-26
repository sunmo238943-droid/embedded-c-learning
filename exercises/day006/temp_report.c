#include <stdio.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

  
    float temp[5] = {25.1f, 26.3f, 24.8f, 27.0f, 25.6f};
    
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

  int above_count = 0;

    for (int i = 0; i < 5; i++) 
{
    if (temp[i] > average) {
        above_count++;
    }
}
printf("高于平均值的数有：%d 个\n", above_count);
for (int i = 0; i < 5; i++) {
    if (temp[i] > average) {
        printf("temp[%d] = %.1f\n", i, temp[i]);
    }
}
    return 0;

}