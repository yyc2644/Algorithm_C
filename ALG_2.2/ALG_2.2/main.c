//
//  main.c
//  ALG_2.2
//
//  Created by yangyicheng on 2018/6/22.
//  Copyright © 2018年 yangyicheng. All rights reserved.
//  对于任意大于1的自然数n n<10^9，如果n为奇数，则将n变成3n+1，否则n变一半，经过若干次判断，一定会是使n=1，输入n输出判断次数

#include <stdio.h>
//for循环
//int main(int argc, const char * argv[]) {
//    int n2;
//    scanf("%d",&n2);
//    long long n = n2;//如果输入987654321，n = 3n+1时，n的值就会溢出，所以要变成long long 格式
//    for (int i=0; ; i++) {
//        if (n == 1) {
//            printf("%d\n",i);
//            break;
//        }
//        else if (n % 2 == 1) {
//            n = 3*n +1;
//        }
//        else{
//            n = n/2;
//        }
//    }
//}

//while循环
int main(int argc, const char * argv[]) {
    int n2,count = 0;
    scanf("%d",&n2);
    long long n = n2;//如果输入987654321，n = 3n+1时，n的值就会溢出，所以要变成long long 格式
    while (n>1) {
        if (n%2 == 1) {n = 3*n +1;}
        else{n = n/2;}
        count ++;
    }
    printf("%d\n",count);
}

