#include <stdio.h>
#include <stddef.h>

// 函数声明
float calculate_average(float arr[], size_t count);
float find_max(float arr[], size_t count);

int main() {
    float temp[5] = {23.5, 26.8, 19.2, 31.5, 22.0};
    size_t count = sizeof(temp) / sizeof(temp[0]);

    float avg = calculate_average(temp, count);
    float max = find_max(temp, count);

    printf("Average: %.1f\n", avg);
    printf("Max: %.1f\n", max);

    return 0;
}

// 计算平均值
float calculate_average(float arr[], size_t count) {
    float sum = 0.0f;

    for (size_t i = 0; i < count; i++) {
        sum += arr[i];
    }

    return sum / count;
}

// 找最大值
float find_max(float arr[], size_t count) {
    float max = arr[0];

    for (size_t i = 1; i < count; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}