#include <stdio.h>

//求计算表达式“(-8+12)*a-10+c/2”，其中a=40，c=212.

int main(){
    int a = 40;
    int c = 212;
    int r = (-8+12)*a-10+c/2;
    printf("%d\n", r);
    return 0;
}