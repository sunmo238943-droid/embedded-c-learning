#include <stdio.h>

int main(void) {
    char c = 'A';
    int i = 42;
    float f = 3.14f;
    double d = 3.141592653589793;

    printf("char   占 %zu 字节，示例：%c\n", sizeof(c), c);
    printf("int    占 %zu 字节，示例：%d\n", sizeof(i), i);
    printf("float  占 %zu 字节，示例：%f\n", sizeof(f), f);
    printf("double 占 %zu 字节，示例：%lf\n", sizeof(d), d);
    return 0;
}
