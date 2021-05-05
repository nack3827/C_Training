

// for文を使用して、掛け算九九の表を表示するプログラムを作成せよ。
// ヒント：%2d指定子を使うと表を揃えられる。
// ヒント：for文の中でfor文を使っても良い。

#include <stdio.h>

int main(){
    int no1,no2,no3,no4,no5,no6,no7,no8,no9,i;
    no1 = 1;
    no2 = 2;
    no3 = 3;
    no4 = 4;
    no5 = 5;
    no6 = 6;
    no7 = 7;
    no8 = 8;
    no9 = 9;

    for(i = 1; i <= 9; i++){
        printf("%2d", no1 * i);
    }
printf("\n");

    for(i = 1; i <= 9; i++){
        printf("%2d", no2 * i);
    }
printf("\n");

    for(i = 1; i <= 9; i++){
        printf("%2d", no3 * i);
    }
printf("\n");
    for(i = 1; i <= 9; i++){
        printf("%2d", no4 * i);
    }
printf("\n");
    for(i = 1; i <= 9; i++){
        printf("%2d", no5 * i);
    }
printf("\n");
    for(i = 1; i <= 9; i++){
        printf("%2d", no6 * i);
    }
printf("\n");
    for(i = 1; i <= 9; i++){
        printf("%2d", no7 * i);
    }
printf("\n");
    for(i = 1; i <= 9; i++){
        printf("%2d", no8 * i);
    }
printf("\n");
    for(i = 1; i <= 9; i++){
        printf("%2d", no9 * i);
    }
printf("\n");
    return 0;

}
