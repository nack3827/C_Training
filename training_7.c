// #include <stdio.h>
//     int main(){
//         int num;
//         scanf("%d", &num);

//         if(num >= 10 && num <= 12) printf("入力値は10〜12です！");
//         if(!( num >= 10 && num <= 12 )) printf("入力値は10〜12ではありません");

//         return 0;


//     }

    /*ここから練習問題
西暦年を入力すると、その年にオリンピックが開かれるか、表示するプログラムを作成せよ。
可能なら、夏季と冬季の区別も表示できればなお良い。
ヒント:シドニー五輪(夏)は2000年開催であった。
※条件がややこしくなるので、
以前夏季と冬季が同じ年だった時期のことは無視する。*/

#include <stdio.h>

int main(){
    int year, N;
    printf("西暦を入力してください\n");
    scanf("%d", &year);
    int rest = year % 4;
    rest == 0 ? printf("オリンピック開催する年です") : printf("オリンピック開催する年ではありません");

    // for( N = 1 ; N<= 1000 ; ++N);
    // for (N = 1; N <= 100; N++);
    // for( ; year <= 3000 ; N++);
    // year == (4 * N) ?  printf("オリンピック開催する年です") : printf("オリンピック開催する年ではありません");

    return 0;


}

