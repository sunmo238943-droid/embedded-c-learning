#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float temp[] = {25.1, 26.3, 24.8, 27.0, 25.6};
    int n = sizeof(temp) / sizeof(temp[0]);

    printf("逆序前：");
    for (int i = 0; i < n; i++) printf("%.1f ", temp[i]);
    printf("\n");

    // 逆序：只换一半
    for (int i = 0; i < n / 2; i++) {
        float t = temp[i];
        temp[i] = temp[n - 1 - i];
        temp[n - 1 - i] = t;
    }

    printf("逆序后：");
    for (int i = 0; i < n; i++) printf("%.1f ", temp[i]);
    printf("\n");

    return 0;
}