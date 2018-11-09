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