#include <stdio.h>

//期中考试开始了，大家都想取得好成绩，争夺前五名。从键盘输入 n 个学生成绩，输出每组排在前五高的成绩。
//输入两行，第一行输入一个整数，表示n个学生（>=5），第二行输入n个学生成绩（整数表示，范围0~100），用空格分隔。
//输出成绩最高的前五个，用空格分隔。

int main(){
    int n;
    scanf("%d", &n); //输入学生人数

    int sco[n]; //定义数组存储学生成绩
    
    for(int i = 0; i < n; i++){
        scanf("%d", &sco[i]); //输入学生成绩
    }

    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(sco[i] < sco[j]){
                int temp = sco[i];
                sco[i] = sco[j];
                sco[j] = temp;
            }
        }
    }
    for(int i = 0; i < 5; i++){
        printf("%d ", sco[i]);
    }
    printf("\n");
    return 0;
}