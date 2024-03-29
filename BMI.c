#include <stdio.h>

//计算BMI指数（身体质量指数）。

int main(){
    int wt, ht;
    scanf("%d %d", &wt, &ht);

    double BMI = wt / ((ht * ht)/10000.0);
    printf("%.2f\n", BMI);
    return 0;
}

