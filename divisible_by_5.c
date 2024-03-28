#include <stdio.h>

//输入包括一个整数M（1≤M≤100,000）。
//输出包括一行，如果M可以被5整除就输出YES，否则输出NO（结果大小写敏感）。

int main(){
    int a = 0;
    scanf("%d", &a);
    if(a % 5 == 0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}