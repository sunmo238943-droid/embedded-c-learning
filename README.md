# Embedded C Learning

记录我的 Embedded C 与嵌入式基础学习过程。

当前路线以 **C 语言为主线**，在学习 C 编程的同时逐步加入电子基础、计算机底层知识以及后续 MCU 开发所需知识。

目标不是只学习 C 语法，而是最终能够将：

```text
C 语言
+
电子基础
+
计算机基础
+
MCU / 嵌入式开发
```

连接起来。

---

## 🎯 学习目标

* 扎实掌握 C 语言基础
* 理解数据类型、内存、位宽等底层概念
* 掌握条件、循环、数组、函数、指针等核心内容
* 熟悉 Embedded C 常见写法
* 理解 `uint8_t / uint16_t / uint32_t` 等定长整数
* 逐步学习电压、电流、电阻等电子基础
* 后续学习二进制、位运算、寄存器等知识
* 最终进入 MCU 与实际嵌入式开发

---

## 🛠️ 当前开发环境

* 操作系统：Windows
* 编辑器：Visual Studio Code
* 编译器：GCC
* 开发环境：MSYS2 UCRT64
* 调试工具：GDB
* 版本管理：Git
* 代码托管：GitHub

---

## 📚 当前学习进度

| Day     | 学习内容                                       | 状态 |
| ------- | ------------------------------------------ | -- |
| Day 001 | 环境搭建、`printf`、`scanf`、基础输入输出与运算            | ✅  |
| Day 002 | 数据类型、`sizeof`、整数/浮点运算、类型转换、ASCII、整数范围与定长整数 | ✅  |

---

# Day 001

## 开发环境

完成 Embedded C 基础开发环境搭建。

主要工具：

```text
VS Code
+
MSYS2 UCRT64
+
GCC
+
GDB
+
Git
```

已经能够：

```text
编写 .c 文件
↓
使用 gcc 编译
↓
生成可执行文件
↓
运行程序
↓
使用 Git 提交代码
```

---

## 基础程序

学习：

```c
#include <stdio.h>

int main(void)
{
    printf("Hello, C!\n");

    return 0;
}
```

理解最基本的 C 程序结构：

```text
头文件
↓
main()
↓
程序语句
↓
return 0
```

---

## 输入与输出

输出：

```c
printf()
```

输入：

```c
scanf()
```

例如：

```c
int number;

scanf("%d", &number);
```

开始理解：

```c
%d
```

等格式控制符的作用。

---

## 基础运算

完成整数的：

```text
+
-
*
/
```

等基础运算练习。

---

# Day 002

Day 002 重点开始理解：

> **C 中变量不仅有值，还有明确的数据类型。**

---

## 基本数据类型

已经学习：

```c
int
float
double
char
```

例如：

```c
int age = 24;
float height = 179.5f;
double value = 110.25;
char grade = 'A';
```

---

## `sizeof`

学习使用：

```c
sizeof()
```

查看数据类型占用空间。

当前环境测试结果：

```text
sizeof(char)   = 1 byte
sizeof(int)    = 4 bytes
sizeof(float)  = 4 bytes
sizeof(double) = 8 bytes
```

并建立：

```text
1 byte = 8 bits
```

这一基础概念。

---

# 整数运算与浮点运算

重点理解：

```c
5 / 2
```

和：

```c
5.0f / 2.0f
```

不是同一种运算。

### 整数除法

```c
5 / 2
```

结果：

```text
2
```

### 浮点除法

```c
5.0f / 2.0f
```

结果：

```text
2.5
```

已经理解：

> 结果变量是 `float`，并不意味着右侧表达式一定使用浮点运算。

例如：

```c
float result = 5 / 2;
```

右侧仍然先执行整数除法。

---

# 强制类型转换

学习：

```c
(float)a
```

例如：

```c
float result = (float)a / b;
```

通过类型转换避免整数除法丢失小数。

---

# `%` 取余运算

学习：

```c
n % 2
```

并完成奇偶判断：

```c
if (n % 2 == 0)
{
    printf("偶数\n");
}
else
{
    printf("奇数\n");
}
```

同时进一步练习：

```text
if / else
```

以及：

```text
=
```

和：

```text
==
```

之间的区别。

---

# `char` 与 ASCII

学习：

```c
char ch = 'A';
```

字符底层对应数值编码。

例如：

```text
'A' → 65
'B' → 66
'a' → 97
```

可以分别通过：

```c
printf("%c\n", ch);
```

和：

```c
printf("%d\n", ch);
```

观察字符和数值之间的关系。

并完成字符大小写转换练习。

---

# Signed 与 Unsigned

开始理解：

```c
signed
unsigned
```

区别。

例如：

```c
unsigned int number;
```

用于表示不需要负数的数据。

---

# 数据范围与溢出

学习：

```c
#include <limits.h>
```

查看整数范围。

开始理解：

> 一个变量能够保存的数据范围由其类型与位宽决定。

同时学习整数溢出的基本概念。

例如 8 位无符号整数：

```text
0 ～ 255
```

超过表示范围会发生溢出。

---

# 定长整数

学习：

```c
#include <stdint.h>
```

以及：

```c
uint8_t
uint16_t
uint32_t
```

---

## 位宽关系

```text
uint8_t
= 8 bit
= 1 byte

uint16_t
= 16 bit
= 2 bytes

uint32_t
= 32 bit
= 4 bytes
```

典型范围：

| 类型         |     位宽 |           范围 |
| ---------- | -----: | -----------: |
| `uint8_t`  |  8 bit |        0～255 |
| `uint16_t` | 16 bit |      0～65535 |
| `uint32_t` | 32 bit | 0～4294967295 |

开始理解为什么嵌入式开发中经常使用：

```c
uint8_t sensor_value;
```

而不是所有整数都直接使用：

```c
int sensor_value;
```

---

# ⚡ 硬件基础 001

从 Day 002 开始，在 C 学习之外少量加入电子基础。

当前已经学习：

```text
U → 电压
I → 电流
R → 电阻
```

单位：

```text
电压：V
电流：A
电阻：Ω
```

---

## 欧姆定律

理解电压、电流、电阻之间的基本关系。

已经完成简单计算，例如：

```text
U = 5 V
R = 1000 Ω
```

可求得：

```text
I = 0.005 A
```

也就是：

```text
5 mA
```

---

## 单位换算

已经学习：

```text
1 A = 1000 mA
1 kΩ = 1000 Ω
```

---

## C 与硬件计算结合

已经能够使用：

```c
float voltage;
float resistance;
float current;
```

完成简单物理量计算。

开始建立：

```text
C 数据类型
↓
数学运算
↓
真实电路参数
```

之间的联系。

---

## 📂 当前目录结构

```text
embedded-c-learning/
│
├── exercises/
│   ├── day001/
│   └── day002/
│
├── notes/
├── projects/
├── .vscode/
├── .gitignore
└── README.md
```

Day 002 中已经包含数据类型、类型转换、奇偶判断、ASCII、整数范围与定长整数等练习。

---

# 🚀 下一阶段

## Embedded C Day 003

下一阶段继续以 C 为主，逐步进入：

* 条件判断强化
* 循环强化
* 综合逻辑练习
* 数组
* 字符数组
* 函数

之后继续进入：

```text
指针
↓
结构体
↓
位运算
↓
内存
↓
寄存器
↓
MCU
```

---

# ⚡ 硬件基础后续路线

硬件知识采用少量穿插方式，不单独一次学习大量理论。

后续逐步加入：

```text
U / I / R
↓
欧姆定律
↓
功率
↓
串联 / 并联
↓
LED 与限流电阻
↓
数字电平
↓
GPIO
↓
ADC
↓
传感器
```

再逐渐与 Embedded C 程序结合。

---

# 🐍 Python 辅助路线

当前整体学习策略：

```text
Embedded C 为主
        ↓
Python 为辅
        ↓
电子基础逐步加入
```

Python 保持持续学习，但不与 C 抢占主线学习时间。

---

## 🔄 Git 学习记录

每个学习日完成后：

```bash
git status
git add .
git commit -m "Complete Embedded C Day XXX"
git push
```

所有练习持续保存到 GitHub。

---

## ✅ 当前状态

```text
Embedded C Day 001 ✅
Embedded C Day 002 ✅

硬件基础
U / I / R          ✅ 入门
欧姆定律           ✅ 入门
```

下一步：

```text
Embedded C Day 003
```

持续更新中。
