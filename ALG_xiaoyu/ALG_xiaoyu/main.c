//
//  main.c
//  ALG_xiaoyu
//
//  Created by yangyicheng on 2018/7/18.
//  Copyright © 2018年 yangyicheng. All rights reserved.
//
//报价的确定：投标文件中的报价，单位以万元为单位。
//基准价的确定：当家数＜5家时，将所有报价做算术平均，将该平均值作为基准价；
//当家数≥5家时，去掉一个最高报价及一个最低报价后，将剩余的报价做算术平均，将该平均值作为基准价
//得分计算公式示例：
//（1）当报价﹥基准价，则得分=F－(报价－基准价)／基准价×100×E1；
//（2）当报价≤基准价，则得分= F＋(报价－基准价)／基准价×100×E2。
//其中F=10分； E1为报价每高于基准价一个百分点的扣分值； E2为报价每低于基准价一个百分点的扣分值。暂设定E1=1.0分， E2=0.1分。
//最低得分为0分。


#include <stdio.h>

int main(int argc, const char * argv[]) {
    printf("请输入");
}
