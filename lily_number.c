#include <stdio.h>

//变种水仙花数 - Lily Number：把任意的数字，从中间拆分成两个数字，比如1461 可以拆分成（1和461）,（14和61）,（146和1),如果所有拆分后的乘积之和等于自身，则是一个Lily Number。
//输出5位数中的所有 Lily Number，每两个数之间间隔一个空格。

int main(){
    int i = 10000;
    int a, b, c, d;
    while(i <= 99999){
        a = (i / 10000) * (i % 10000);
        b = (i / 1000) * (i % 1000);
        c = (i / 100) * (i % 100);
        d = (i / 10) * (i % 10);
        if(i == a + b + c + d){
            printf("%d ", i);
        }
        i++;
    }
    return 0;
}

/* 简单版
int main(){
    int i, j;
    for(i = 10000; i < 99999; i++){
        int sum = 0;
        for(j = 0; j < 10000; j = 10 * j){
            sum += (i / j) * (i % j);
        }
        if(sum == i)
            printf("%d ", i);
    }
    return 0;
}

*/