#include <stdio.h>

//一年约有 3.156×10^7 s，要求输入您的年龄，显示该年龄合多少秒。

int main(){
    int i = 0;
    scanf("%d", &i);
    int age = 3.156 * 1e7 * i;
    printf("%d\n", age);
    return 0;
}