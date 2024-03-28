#include <stdio.h>
//给定两个整数a和b(0<a,b<10000)，计算a除以b的整数商和余数。
//输入一行，包括两个整数a和b，依次为被除数和除数（不为零），中间用空格隔开。
//输出一行，包括两个整数，依次为整数商和余数，中间用空格隔开。
int div(int x, int y){
    return x / y;
}
int rem(int x, int y){
    return x % y;
}

int main(){
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    //int d = a / b;
    //int r = a % b;
    int d = div(a, b);
    int r = rem(a, b);
    //printf("%d %d\n", a/b, a%b);
    printf("%d %d\n", d, r);

    return 0;
}