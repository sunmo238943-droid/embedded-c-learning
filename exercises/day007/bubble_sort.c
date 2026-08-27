#include <stdio.h>

int main(void)
{
    float temp[5] = {25.1f, 26.3f, 24.8f, 27.0f, 25.6f};
    int n = 5;

     printf("排序前：");
      for (int i = 0; i < n; i++) {
        printf("%.1f ", temp[i]);
    }

    printf("\n");
    for (int i = 0; i < n - 1; i++) {          // 外层：一共要比 n-1 轮
        for (int j = 0; j < n - 1 - i; j++) {  // 内层：每轮范围少一格（为什么？想清楚）
            if (temp[j] > temp[j + 1]) {                       // 什么时候需要交换？
                float t = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = t;
            }
        }
    }

    // 排序后打印
 printf("排序后：");
    for (int i = 0; i < n; i++) {
        printf("%.1f ", temp[i]);
    }
    printf("\n");
    return 0;
}