//
//  main.c
//  ALG_3.2
//
//  Created by yangyicheng on 2018/7/3.
//  Copyright © 2018年 yangyicheng. All rights reserved.
//
//  开灯问题，有n盏灯，编号为1～n，第一个人把所有灯打开，第二个人把2的倍数的灯关闭，第三个人打开3的倍数的灯，直到第k个人，问最后有哪些灯开着，输出开着的灯的编号， k<n<1000
#include <stdio.h>
#include <string.h>
#define maxn 1010
int a[maxn];

int main(int argc, const char * argv[]) {
    int n, k, first = 1;
    memset(a, 0, sizeof(a));
    scanf("%d %d", &n, &k);
    for (int i=1; i<=k; i++) {
        for (int j = 1; j<=n; j++) {
            if (j % i == 0) {
                a[j] = !a[j];
            }
        }
    }
    for (int i = 0; i<=n; i++) {
        if (a[i]) {if (first) first = 0;else printf("");printf("%d",i);}
    }
    printf("\n");

}
