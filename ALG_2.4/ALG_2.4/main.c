//
//  main.c
//  ALG_2.4
//
//  Created by yangyicheng on 2018/6/25.
//  Copyright © 2018年 yangyicheng. All rights reserved.
//  阶乘之和
//  输入n，计算s = 1！+2！+3！...的和的末6位，n<= 10^6

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int n,S = 0;
    scanf("%d",&n);
    if (n>25) {
        n = 25;
    }
    for (int i=1; i<=n; i++) {//循环累加
        int factorial = 1;  //  为什么要在这里定义？
        for (int j=1; j<=i; j++) {//循环阶乘
            factorial *= j;
        }
        S += factorial;
    }
    printf("%d\n",S%1000000);
    return 0;
}
