#include <stdio.h>

//从键盘任意输入一个字符，编程判断是否是字母（包括大小写）。

int main(){
    char le;
    scanf("%c", &le);

    //A-Z 65-90
    //a-z 97-122

    if(le >= 65 && le <= 90 || le >= 97 && le <= 122)
        printf("YES");
    else
        printf("NO");
    return 0;
}