#include <stdio.h>

int oli();

int main(){

    int oyear;
    printf("西暦を入力してください\n");
    oyear = oli();
    switch (oyear)
    {
    case 0:
        printf("夏開催");
        break;

    case 1:
        printf("冬開催");
        break;

    case 2:
        printf("開催しない");
        break;

    }

    return 0;
}

int oli(){
    int year;
    scanf("%d",&year);
    if(((year % 2) == 0)){
        if((year % 4) == 0){
                return 0; /*夏開催*/
        } else{
                return 1; /*冬開催*/
        }
        } else{
                return 2; /*開催しない*/
    }
}