#include <stdio.h>

//实现字母的大小写转换。多组输入输出。

int main(){
    int ch = 0;
    while((ch = getchar()) != EOF){ //EOF意为-1.本语句即只要输入项是字符即可打印。
        //因为回车也是一个字符，放置在输入第一个字符换行后，getchar会读取换行的回车键
        //换行的回车被读取，若防止回车被读取，可在其前面多读取一次消耗回车
        getchar();
        putchar(ch + 32);
        printf("\n");
    }
    return 0;
}