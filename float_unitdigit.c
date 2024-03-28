#include <stdio.h>

//给定一个浮点数，要求得到该浮点数的个位数。

int main(){
    float i;
    scanf("%f", &i);
    int count = (int)i; //取整
    printf("%d\n", count%10);
    return 0;
}