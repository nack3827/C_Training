
// scanfの使い方を学ぶ

// #include <stdio.h>

// int main(){
//     int data;
//     scanf("%d",&data); 　
//     printf("%d\n",data);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     double data;
//     scanf("%lf",&data);
//     printf("%f/n",data);
//     return 0;
// }


// Scanfを使って、シグマを作成してみた
// #include <stdio.h>

// int main(){
//     int min, max, sum;
//     printf("最小値と最大値を , で区切って表示してくだいさい");
//     scanf("%d, %d", &min, &max); /*シグマの入力箇所*/

//     sum = (min + max)*(max - min + 1)/2;

//     printf("%d ~ %dの合計は%d です",min ,max, sum);

//     return 0;
// }

// プログラム書き取り
// 定価を入力すると、1割引、3割引、5割引、8割引の値段を、
// 一覧表示するプログラムを作成せよ。
// なお、結果の金額は整数値での表示が望ましいが、実数でもかまわない。


/*2021年5月4日　練習問題失敗*/
// #include <stdio.h>

// int main(){
//     int price;

//     printf("定価を入力してください\n");
//     int p = scanf("%d",&price);

//     double d10, d30, d50, d80;
//     d10 = (p * 0.9);
//     d30 = (p * 0.7);
//     d50 = (p * 0.5);
//     d80 = (p * 0.2);

//     printf("%f円\n, %f円\n, %f円\n, %f円\n", d10, d30, d50, d80);

//     return 0;

// }

#include <stdio.h>
int main(){
    int price;
    printf("定価を入力してください\n");
    scanf("%d",&price); /*Scanfで＆のつけ忘れに注意*/

    printf("1割引の金額は%d円です\n",(int)(price * 0.9));
    printf("3割引の金額は%d円です\n",(int)(price * 0.7));
    printf("5割引の金額は%d円です\n",(int)(price * 0.5));
    printf("8割引の金額は%d円です\n",(int)(price * 0.2));

    return 0;

}