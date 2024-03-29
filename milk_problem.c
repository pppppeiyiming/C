#include <stdio.h>
#include <math.h>

//BoBo买了一箱酸奶，里面有n盒未打开的酸奶，KiKi喜欢喝酸奶，第一时间发现了酸奶。KiKi每h分钟能喝光一盒酸奶，并且KiKi在喝光一盒酸奶之前不会喝另一个，那么经过m分钟后还有多少盒未打开的酸奶？

int main(){
    float n, h, m;
    scanf("%f %f %f", &n, &h, &m);

    float r;
    r = n - ceil(m / h);
    printf("%.0f\n", r);
    return 0;
}