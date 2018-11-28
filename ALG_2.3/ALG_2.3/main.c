//
//  main.c
//  ALG_2.3
//
//  Created by yangyicheng on 2018/6/25.
//  Copyright © 2018年 yangyicheng. All rights reserved.
//  近似计算
//  计算π/4 = 1-1/3+1/5-1/7...精确到10^-6

#include <stdio.h>

int main(int argc, const char * argv[]) {
    double sum = 0;
    for ( int i=0; ; i++) {
        double term= 1.0/(i*2+1);
        if (term<1/1000000) {break;}
        else if (i%2 == 0) {sum += term;}
        else{sum -= term;}
    }
    printf("%.6f\n",sum);
    return 0;
}
