// 西暦年を入力するとオリンピックが開かれるか表示するプログラムを作成せよ。
// ただし、オリンピックの開催を計算する部分は別の関数として作成せよ。
// ※2000年に夏の大会が開かれ、その後は２年ごと 冬->夏->冬->夏 の順に開かれるとする。
// 　また、この予定は永遠に狂わないこととします。

#include <stdio.h>

int oli();

int main(){

    int oyear;
    printf("西暦を入力してください\n");
    oyear = oli();

    return 0;
}

int oli(){
    int year;
    scanf("%d",&year);
    if(((year % 4 || year % 2) == 0)){
            printf("オリンピックは開催されます\n");
}
        else{
            printf("オリンピックは開催されません\n");
}
    return 0;
}