#include <stdio.h>

//依次输入一个学生的3科成绩，在屏幕上输出该学生的总成绩以及平均成绩。

int main(){
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double G = a + b + c;
    double av = G / 3;
    printf("%.2f %.2f\n", G, av);
    return 0;
}