//判断一个数字是否为奇数

#include <stdio.h>

int main(){
    int n = 0;
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("even number\n");
    else
        printf("odd number\n");
    return 0;
}