/**
 * @file demo8-7.c
 * @author your name (you@domain.com)
 * @brief 用数组名做函数参数
 *          将数组中的n个整数按有大到下进行冒泡排序；
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
void sort(int x[], int n);
void printfarr(int x[], int n);

int main()
{
    int a[10] = {6,0,9,1,4,3,8,5,7,2};

    printf("********* 数组初始值 ***********\n");
    printfarr(a, 10);

    sort(a, 10);

    printf("\n********* 数组排序后 ***********\n");
    printfarr(a, 10);

    return 0;
}

// inv1函数的定义(形参为数组名形式)
void sort(int x[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(x + i) < *(x + j))
            {
                swap(x+i, x + j);
            }
        }
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
    for (int *p = x; p < (x + n); p++)
    {
        printf("%d ", *p);
    }
}