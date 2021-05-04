#include <stdio.h>

int main(){
    int drink, milk, money,change;
    double tax; /*実数の時はダブルで宣言することを忘れない*/

    drink = 198;
    milk = 138;
    money = 1000;
    tax = 1.05;

    change = money - (int)((drink + (2 * milk))* tax);
    printf("%d円\n",change);

    return 0;
}

