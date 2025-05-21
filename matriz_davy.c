#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define L 5
#define C 5

 int main(){

    int matriz[L][C];
    int i, j;

    srand(time(NULL));

    for(i=0; i<L ; i++){
        for(j=0; j<C; j++)
            matriz[i][j] = rand() % 10;
    }

    for(i=0; i<L ; i++){
        for(j=0; j<C; j++){
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    for(i=0; i<C ; i++){
        for(j=0; j<L; j++){
            printf("%2d ", matriz[j][i]);
        }
        printf("\n");
    }

 return 0;
}
