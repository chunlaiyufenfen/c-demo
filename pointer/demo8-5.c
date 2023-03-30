/**
 * @file demo8-5.c
 * @author your name (you@domain.com)
 * @brief 通过指针引用数组元素：
 *          （1）下标法，如a[i]形式；
 *          （2）指针法，如*(a+i)或*(p+i)形式，其中a是数组名，p是数组元素指针变量，初始值p=a;
 *              其实程序编译时，对a[i]或p[i]等下标处理成*(a+i)或*(p+i)形式
 * @version 0.1
 * @date 2023-03-30
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<stdio.h>

int main()
{
    int a[10] = {0,1,2,3,4,5,6,7,8,9};

    printf("********* 下标法a[i] ***********\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    
    printf("\n********* 指针法*(a+i) ***********\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(a+i));
    }

    printf("\n********* 指针法*(p+i) ***********\n");
    //for (int i=0,*p=a; i < 10; i++,p++)
    for (int *p = a; p < (a + 10); p++)
    {
        printf("%d ", *p);
    }

    return 0;
}