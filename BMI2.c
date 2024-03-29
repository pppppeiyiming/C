#include <stdio.h>

//输入一个人的体重（千克）和身高（米）,当BMI指数为18.5～23.9时属正常，否则表示身体存在健康风险。
//输出身体Normal(正常)或Abnormal(不正常)。

int main(){
    float wt, ht;
    scanf("%f %f", &wt, &ht);

    float BMI;
    BMI = wt / (ht * ht);
    if(BMI > 18.5 && BMI < 23.9){
        printf("Normal");
    }
    else
        printf("Abnormal");
    return 0;
}