// ある小学生が、親に頼みました。
// 「今月は1円、来月は2円、再来月は4円と、
// 先月の倍額のおこずかいをちょうだい」
// さて、親が払う金額が100万円を超えるのは何ヶ月目でしょうか？

// #include <stdio.h>

// int main(){

//     int money = 1;
//     int month = 1;

//     while(money < 1000000){
//         printf("%2d月目" "%7d円\n", month , money);
//             money *= 2;
//             month++;
//     }

//     printf("%2d月目に %7d円を超える", month, money);

//     return 0;
// }

// テストの点数を入力するプログラムを作りたい。
// ただし、テストの点数は0～100までしかないので、
// それ以外が入力された場合には再入力させるようにすること

#include <stdio.h>

int main(){
    int score = 0;

    do
    {
        if (score != 0) printf("点数は 0～100の範囲で入力して下さい。\n");
        printf("テストの点数を入力してください\n");
        scanf("%d",&score);
    } while ( score < 0 || score > 100 );

    printf("入力された点数は%d点です\n", score);
    return 0;


}