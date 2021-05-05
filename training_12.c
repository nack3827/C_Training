// #include <stdio.h>

// int main(){
//     int num[] = {10,11,12,13,14,15};
//     int i;

//     for(i = 0 ; i < 5 ; i++){
//     printf("num[%d] = %d\n",i ,num[i]);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
// int array[] = {42,79,13,75,19};
// 	int i;

// 	for (i = 0;i < sizeof(array) / sizeof(array[0]);i++) { /*なんでsizeof(array[0]で割るのかがわからない*/
// 		printf("array[%d] = %d\n",i,array[i]);
// 	}

// 	return 0;
// }

// 入力された10個の数値を最後から表示するプログラムを作成せよ。

/*ミスったやつ*/
// #include <stdio.h>

// int main(){
//     int array[] = {1,2,3,4,5,6,7,8,9,10};
//     int i;

//     for(i = sizeof(array) / sizeof(array[0]) ; i < 0 ; i--){
//         printf("num[%d]は%dです。/n " , i, array[i]);
//     }
//         return 0;

//     }

#include <stdio.h>

int main(){
    int data[10];
    int i;

    for(i = 0; i < 10 ; i++){
        printf("%d個目の数値を入力してください\n",i);
        scanf("%d",&data[i]);
    }

    for(i = 9; i >= 0; i--){
        printf("%d\n", data[i]);
    }
return 0;

}