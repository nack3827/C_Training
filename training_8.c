// 例えば、ある動物園の入場料と年齢の関係が次の通りだったとします。
// 区分	年齢	入場料
// 幼児	3歳以下	無料
// 子供	4～12歳	250円
// 大人	13歳以上	400円
// 年齢を入力すると、必要な入場料を表示するプログラムを考えてみます。
// 次のプログラムは、if文を使って正直に作成した例です。

// #include <stdio.h>

// int main(){
//     int age;
//     printf("年齢を入力してください\n");
//     scanf("%d", &age);

//      if(age <= 3){
//             printf("料金は無料です\n");}
//      else if(age <= 12){
//             printf("料金は250円です\n");}
//         else{
//             printf("料金は400円です\n");}
// return 0;
// }

// 月を入力すると、対応する陰暦の月を表示するプログラムを作成せよ。
// なお、存在しない月を入力した時にも何かのメッセージを表示せよ。
// ヒント:陰暦は1月から順番に、
// 睦月,如月,弥生,卯月,皐月,水無月,文月,葉月,長月,神無月,霜月,師走

#include <stdio.h>

int main(){
    int month;
    printf("月を入力してください\n");
    scanf("%d\n", &month);

    switch(month){
        case 1:
        printf("睦月\n");
        break;

        case 2:
        printf("如月\n");
        break;

        case 3:
        printf("弥生\n");
        break;

        case 4:
        printf("卯月\n");
        break;

        case 5:
        printf("皐月\n");
        break;

        case 6:
        printf("水無月\n");
        break;

        case 7:
        printf("文月\n");
        break;

        case 8:
        printf("葉月\n");
        break;

        case 9:
        printf("長月\n");
        break;

        case 10:
        printf("神無月\n");
        break;

        case 11:
        printf("霜月\n");
        break;

        case 12:
        printf("師走\n");
        break;

        default :
        printf("その月は存在していません\n");
    }
        return 0;
    }
