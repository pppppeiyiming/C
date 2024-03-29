#include <stdio.h>

//从键盘输入5个学生的成绩（整数），求他们的平均成绩（浮点数，保留一位小数）。

int main(){
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    float av;
    av = (float)(a + b + c + d + e) / 5;
    printf("%.1f\n", av);
    return 0;
}