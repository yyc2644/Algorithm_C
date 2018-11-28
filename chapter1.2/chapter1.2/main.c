//
//  main.c
//  chapter1.2
//
//  Created by yangyicheng on 2018/6/26.
//  Copyright © 2018年 yangyicheng. All rights reserved.
//  水仙花数
//  输出100-999中的所有水仙花数，若3位数满足abc =a^3+ b^3+ c^3,则称其为z

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a=0,b=0,c=0;
    for (int i = 100; i<999; i++) {
        a = (i/100)%10;
        b = (i/10)%10;
        c = i%10;
        if (i == a*a*a+ b*b*b+ c*c*c) {
            printf("%d\n",i);
        }
    }
}
