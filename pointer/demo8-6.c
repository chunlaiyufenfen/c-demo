/**
 * @file demo8-6.c
 * @author your name (you@domain.com)
 * @brief 用数组名做函数参数
 *          将数组中的n个整数倒序存放；
 *          形参为数组名形式和指针变量名形式均相同，都会当做指针变量来运行；
 * @version 0.1
 * @date 2023-03-30
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<stdio.h>

// 对函数的声明
void swap(int *p1, int *p2);
void inv1(int x[], int n);
void inv2(int x[], int n);
void printfarr(int x[], int n);

int main()
{
    int a[11] = {0,1,2,3,4,5,6,7,8,9,10};

    printf("********* 数组初始值 ***********\n");
    printfarr(a, 11);
    //inv1(a, 11);
    inv2(a, 11);
    printf("\n********* 数组第一次倒序后 ***********\n");
    printfarr(a, 11);

    int *p = a;
    //inv1(p, 11);
    inv2(p, 11);
    printf("\n********* 数组第二次倒序后 ***********\n");
    printfarr(a, 11);

    return 0;
}

// inv1函数的定义(形参为数组名形式)
void inv1(int x[], int n)
{
    int middle = (n - 1) / 2;
    for (int i = 0; i <= middle; i++)
    {
        swap(x+i, x + (n-i-1));
    }
    
}

// inv2函数的定义(形参为指针变量名形式)
void inv2(int *x, int n)
{
    int middle = (n - 1) / 2;
    for (int i = 0; i <= middle; i++)
    {
        swap(x+i, x + (n-i-1));
    }
    
}

// swap函数的定义
void swap(int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

// swap函数的定义
void printfarr(int x[], int n)
{
    for (int *p = x; p < (x+n); p++)
    {
        printf("%d ", *p);
    }
}