/**
 * @file demo8-3.c
 * @author your name (you@domain.com)
 * @brief 指针变量作为函数参数：
 *          输入两个整数按大小顺序输出，要求使用指针正所谓函数参数来实现。
 * @version 0.1
 * @date 2023-03-30
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<stdio.h>

// 对swap函数的声明
void swap(int *p1, int *p2);

int main()
{
    int *p1, *p2, a, b;
    printf("please enter two integer numbers:");
    scanf("%d %d", &a, &b);
    p1 = &a;
    p2 = &b;
    if (a < b)
    {
        swap(p1, p2);
    }
    
    printf("a = %d, b = %d\n", a, b);
    printf("max = %d, min = %d\n", *p1, *p2);
    printf("*p1 = %d, *p2 = %d\n", *p1, *p2);
    printf("p1 = %d, p2 = %d\n", p1, p2);
    printf("p1 + 1 = %d, p2 + 1= %d\n", p1 + 1, p2 + 1);

    return 0;
}

// swap函数的定义
void swap(int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}