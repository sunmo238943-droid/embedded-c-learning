#include <stdio.h>
#include <windows.h>

int main()
 {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float temp[6];
    float sum = 0;
    float average;
    float max_temp;
    
    // 用 sizeof 算数组长度，以后改数组大小只改这一处
    size_t count = sizeof(temp) / sizeof(temp[0]);
    
    // 输入 5 个温度
    printf("请输入 %zu 个温度值：\n", count);
    for (size_t i = 0; i < count; i++) {
        scanf("%f", &temp[i]);
    }
    
    // 求和 & 找最大值（一次循环搞定）
    sum = temp[0];
    max_temp = temp[0];
    for (size_t i = 1; i < count; i++) {
        sum += temp[i];
        if (temp[i] > max_temp) {
            max_temp = temp[i];
        }
    }
    
    average = sum / count;
    
    // 输出结果
    printf("count = %zu\n", count);
    printf("sum = %.1f\n", sum);
    printf("average = %.2f\n", average);
    printf("max_temp = %.1f\n", max_temp);
    
    return 0;
}