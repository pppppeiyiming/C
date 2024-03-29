#include <stdio.h>

//给定秒数 seconds ，把秒转化成小时、分钟和秒。

int main(){
    int secs;
    scanf("%d", &secs);

    int hr = secs / 3600;
    int min = (secs % 3600) / 60;
    int sec = secs % 60;
    printf("%d %d %d\n", hr, min, sec);
    return 0;
}