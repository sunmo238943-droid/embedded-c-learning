#include <stdio.h>

// Function declaration
void show_size(float arr[]);

int main() {
    float data[5] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};

    printf("main:\n");
    printf("sizeof(data)    = %zu\n", sizeof(data));
    printf("sizeof(data[0]) = %zu\n", sizeof(data[0]));
    printf("array length    = %zu\n", sizeof(data) / sizeof(data[0]));

    printf("\n");
    show_size(data);

    return 0;
}

// Function definition
// Note: 'float arr[]' here is actually a pointer, not a real array
void show_size(float arr[]) {
    printf("function:\n");
    printf("sizeof(arr)     = %zu\n", sizeof(arr));
    printf("sizeof(arr[0])  = %zu\n", sizeof(arr[0]));
    printf("calculated len  = %zu\n", sizeof(arr) / sizeof(arr[0]));
}