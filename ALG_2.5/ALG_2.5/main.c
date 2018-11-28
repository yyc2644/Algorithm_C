//
//  main.c
//  ALG_2.5
//
//  Created by yangyicheng on 2018/6/25.
//  Copyright © 2018年 yangyicheng. All rights reserved.
//  数据统计
//  输入一串整数，求出他们的最小值，最大值,平均数，输入的值小于1000
//  难点在于输入的个数不确定

#define LOCAL
#include <stdio.h>

#define INF 1000000000
int main(int argc, const char * argv[]) {
#ifdef LOCAL
    freopen(<#const char *restrict#>, <#const char *restrict#>, <#FILE *restrict#>);
    freopen(<#const char *restrict#>, <#const char *restrict#>, <#FILE *restrict#>);
#endif
    int max = 0,min = 1000000,n,m=0,S = 0;
    while (scanf("%d\n",&n) == 1) {
        S += n;
        if (min>n) {min = n;}//最小值判断
        if (max<n) {max = n;}//最大值判断
/*
        printf("min = %d,max = %d,n = %d,m = %d",min,max,n,m);
 */
        m++;
    }
    printf("max=%d,min=%d,s=%d\n",max,min,S/m);
    //输出要键盘command+z，再回车
    return 0;
}
