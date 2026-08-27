#include <stdio.h>

float calculate_average(float a, float b) {
    return (a + b) / 2.0f;
}

int main() {
    float result = calculate_average(25.0f, 35.0f);
    printf("%.2f\n", result);  // 输出: 30.00
    return 0;
}