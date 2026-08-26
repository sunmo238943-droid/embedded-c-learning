#include <stdio.h>
#include <windows.h>

int main()
 {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

   float values[] = {12.5f, 18.2f, 9.8f, 21.4f, 16.0f};
    
    // 用 sizeof 自动计算 count
    size_t count = sizeof(values) / sizeof(values[0]);
    
    // 用 for 打印所有元素
    printf("数组元素：\n");
    for (size_t i = 0; i < count; i++) {
        printf("values[%zu] = %.1f\n", i, values[i]);
    }
    
    // 打印 count
    printf("count = %zu\n", count);
    
    return 0;
}