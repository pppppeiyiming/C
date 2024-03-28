#include <stdio.h>

//已知一个函数y=f(x)，当x<0时，y=1；当x=0时，y=0；当x>0时，y=-1。 一行输入一个整数（-10000<x<10000)。一行输出y的值。
/*
int y(int x){
    if(x < 0)
        return 1;
    else if(x == 0)
        return 0;
    else
        return -1;
}
int main(){
    int n1 = 0;
    scanf("%d", &n1);
    int r = y(n1);
    printf("y = %d\n", r);
    return 0;
}
*/

int main(){
    //输入
    int x = 0;
    int y = 0;
    scanf("%d", &x);

    //计算
    if(10000 > x && x > 0)
        y = -1;
    else if(x == 0)
        y = 0;
    else if(-10000 < x && x < 0)
        y = 1;
    else
        printf("False! -10000 < x < 10000");

    //输出
    printf("%d\n", y);
    return 0;
}