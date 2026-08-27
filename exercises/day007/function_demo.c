#include <stdio.h>

int add(int a, int b);
float calculate_average(float a, float b);
void show_warning(void);

int main(void) {
    int sum = add(10, 20);
    float avg = calculate_average(25.0f, 35.0f);
    
    printf("sum = %d\n", sum);
    printf("average = %.2f\n", avg);
    
    show_warning();
    
    return 0;
}

int add(int a, int b) {
    return a + b;
}

float calculate_average(float a, float b) {
    return (a + b) / 2.0f;
}

void show_warning(void) {
    printf("Warning!\n");
}