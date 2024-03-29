#include <stdio.h>

//给定一个球体的半径，计算其体积。其中球体体积公式为 V = 4/3*πr3，其中 π = 3.1415926。

int main(){
    float n;
    scanf("%f", &n);

    float V;
    V = 4.000/3.000 * 3.1415926 * n * n * n;
    printf("%.3f\n", V);
    return 0;
}