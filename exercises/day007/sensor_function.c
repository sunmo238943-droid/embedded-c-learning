#include <stdio.h>
#include <stddef.h>  // 提供 size_t 类型定义

/* 函数原型声明 */
float calculate_average(float arr[], size_t count);

int main(void) {
    // 测试数据：一个浮点数数组
    float numbers[] = {10.0f, 20.0f, 30.0f, 40.0f, 50.0f};
    
    // 计算数组元素个数：总字节数 ÷ 单个元素字节数
    size_t count = sizeof(numbers) / sizeof(numbers[0]);
    
    // 调用函数计算平均值
    float avg = calculate_average(numbers, count);
    
    // 打印结果，保留两位小数
    printf("Average = %.2f\n", avg);
    
    return 0;
}

/**
 * 计算浮点数数组的平均值
 * 
 * @param arr   指向浮点数数组的指针（会退化为指针）
 * @param count 数组中元素的个数
 * @return      所有元素的算术平均值；如果 count 为 0，返回 0.0
 */
float calculate_average(float arr[], size_t count) {
    // 边界检查：防止除以零错误
    if (count == 0) {
        return 0.0f;  // 空数组没有平均值，返回 0 作为安全值
    }
    
    // 初始化累加器
    float sum = 0.0f;
    
    // 遍历数组，累加每个元素
    // size_t 是无符号类型，适合用作数组索引
    for (size_t i = 0; i < count; i++) {
        sum += arr[i];  // 将第 i 个元素加到总和上
    }
    
    // 计算平均值：总和 ÷ 元素个数
    // 将 count 强制转换为 float，确保浮点数除法
    return sum / (float)count;
}