/**
 * @file demo8-1.c
 * @author your name (you@domain.com)
 * @brief 简单使指针变量的例子：
 *          通过指针本来访问整型变量。
 * @version 0.1
 * @date 2023-03-30
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<stdio.h>

int main()
{
    int a=100, b=10;
    int *p1, *p2;
    p1 = &a;
    p2 = &b;
    printf("a = %d, b = %d\n", a, b);
    printf("*p1 = %d, *p2 = %d\n", *p1, *p2);
    printf("p1 = %d, p2 = %d\n", p1, p2);
    printf("p1 + 1 = %d, p2 + 1= %d\n", p1 + 1, p2 + 1);

    return 0;
}