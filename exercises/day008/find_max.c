#include <stdio.h>
#include <stddef.h>    // for size_t

// 函数声明
float find_max(float arr[], size_t count);

int main() {
    float temp[5] = {23.5, 26.8, 19.2, 31.5, 22.0};
    size_t count = sizeof(temp) / sizeof(temp[0]);

    float max_val = find_max(temp, count);

    printf("Max: %.1f\n", max_val);  // 改用英文避免乱码

    return 0;
}

// 函数定义
float find_max(float arr[], size_t count) {
    float max = arr[0];

    for (size_t i = 1; i < count; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}