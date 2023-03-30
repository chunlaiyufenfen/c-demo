/**
 * @file demo8-4.c
 * @author your name (you@domain.com)
 * @brief 指针变量作为函数参数：
 *          输入3个整数按大小顺序输出，要求使用指针正所谓函数参数来实现。
 * @version 0.1
 * @date 2023-03-30
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<stdio.h>

// 对函数的声明
void swap(int *p1, int *p2);
void exchange(int *p1, int *p2, int *p3);

int main()
{
    int *p1, *p2, *p3, a, b, c;
    printf("please enter three integer numbers:");
    scanf("%d %d %d", &a, &b, &c);
    p1 = &a;
    p2 = &b;
    p3 = &c;
    exchange(p1, p2, p3);

    printf("a = %d, b = %d, c = %d\n", a, b, c);
    printf("max = %d, middle = %d, min = %d\n", *p1, *p2, *p3);
    printf("*p1 = %d, *p2 = %d, *p3 = %d\n", *p1, *p2, *p3);

    return 0;
}

// swap函数的定义
void exchange(int *p1, int *p2, int *p3)
{
    int temp;
    if (*p1 < *p2) { swap(p1, p2); }
    if (*p1 < *p3) { swap(p1, p3); }
    if (*p2 < *p3) { swap(p2, p3); }
}

// swap函数的定义
void swap(int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}