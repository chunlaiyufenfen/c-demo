/**
 * @file demo8-2.c
 * @author your name (you@domain.com)
 * @brief 引用指针变量：
 *          输入a,b两个整数，按先大后小的顺序输出a和b（通过指针实现）。
 * @version 0.1
 * @date 2023-03-30
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<stdio.h>

int main()
{
    int *p1, *p2, *p, a, b;
    printf("please enter two integer numbers:");
    scanf("%d %d", &a, &b);
    p1 = &a;
    p2 = &b;
    if (a < b)
    {
        p = p1;
        p1 = p2;
        p2 = p;
    }
    
    printf("a = %d, b = %d\n", a, b);
    printf("max = %d, min = %d\n", *p1, *p2);
    printf("*p1 = %d, *p2 = %d\n", *p1, *p2);
    printf("p1 = %d, p2 = %d\n", p1, p2);
    printf("p1 + 1 = %d, p2 + 1= %d\n", p1 + 1, p2 + 1);

    return 0;
}