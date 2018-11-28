//
//  case 3.c
//  chapter 1_2
//
//  Created by yangyicheng on 2018/6/27.
//  Copyright © 2018年 yangyicheng. All rights reserved.
//

//  倒三角形
//  输入正整数n<=20,输出一个20层的倒三角形
//1.3,完成版
//#include <stdio.h>
//int main(int argc, const char * argv[]) {
//    int n,i,j,k;
//    scanf("%d",&n);
//    for (i=n; i>0; i--) {
//        for (j=i; j<n; j++) {printf(" ");}//用来输出空格符号，对称
//        for (k=0; k<2*i-1;k++) {printf("#");}//用来输出“#”符号
//        printf("\n");//换行
//    }
//}
//1.2输出格式如下，还是有问题
//5
//####
//###
//##
//#
//int main(int argc, const char * argv[]) {
//    int n,i,j,k;
//    scanf("%d",&n);
//    for (i=1; i<n; i++) {
//        for (j=0; j<i;j++) {printf(" ");}
//        for (k =n; k>i; k--) {printf("#");}
//        printf("\n");
//    }


//1.1有bug
//int main(int argc, const char * argv[]) {
//    int n;
//    scanf("%d",&n);
//    int m = 2*n -1;
//    for (int i=n; i>0; i--) {
//        for (int j =i; j>0; j--) {
//            if (j == 1) {printf("#\n");}
//            else {printf("#");}
//        }
//    }
//
//}
