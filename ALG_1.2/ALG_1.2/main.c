//
//  main.c
//  ALG_1.2
//
//  Created by yangyicheng on 2018/6/14.
//  Copyright © 2018年 yangyicheng. All rights reserved.
//  鸡兔同笼问题
//  已知鸡和兔的数量为n，总腿数为m，输入m和n，依次输出鸡和兔的数量，如果无解，则输出no answer

//  解：设有a只鸡，b只兔，则有a+b = n | 2a+4b = m 同时成立

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, m, a, b;
    scanf("%d,%d",&n,&m);
    a = (4*n-m)/2;
    b = (m-2*n)/2;
    if (a<0||b<0|| m % 2 == 1) {
        printf("no answer \n");
    }
    else{
        printf("%d,%d \n",a,b);
    }

}
