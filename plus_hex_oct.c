#include <stdio.h>

//输入一个十六进制数a，和一个八进制数b，输出a+b的十进制结果（范围-2^31~2^31-1）。

int main(){
    int a, b;
    scanf("%x %o", &a, &b);

    printf("%d\n", a+b);
    return 0;
}