#include <stdio.h>
#include <math.h>

//根据给出的三角形3条边a, b, c，计算三角形的周长和面积。

int main(){
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    float p;
    p = (a + b + c) / 2; //计算半周长
    float area;
    area = sqrt(p * (p - a)*(p - b)*(p - c)); //计算面积
    printf("circumference = %.2f area = %.2f\n", p * 2, area);

    return 0;
}