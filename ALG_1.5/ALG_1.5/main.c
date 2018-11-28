//
//  main.c
//  ALG_1.5
//
//  Created by yangyicheng on 2018/6/14.
//  Copyright © 2018年 yangyicheng. All rights reserved.
//  整数排序
//  输入三个整数，从大到小依次输出

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a, b, c, t;
    scanf("%d,%d,%d",&a, &b, &c);
    if (a<b) {t = a; a = b; b = t;}//对比a和b
    if (a<c) {t = a; a = c; c = t;}//对比a和c
    if (b<c) {t = b; b = c; c = t;}//对比b和c
    printf("%d,%d,%d \n",a,b,c);

}
