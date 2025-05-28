#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5


void preencheBingo(int m[][N], int nl, int nc);
void imprimeMatriz(int m[][N], int nl, int nc);

int main() {
    int cartela[N][N];

    srand(time(NULL));

    preencheBingo(cartela, N, N);

    printf("\nCartela de Bingo:\n");
    imprimeMatriz(cartela, N, N);

    return 0;
}


void preencheBingo(int m[][N], int nl, int nc) {

    int numeros_usados[100] = {0};
    int numero_gerado;
    int i, j;

    for (i = 0; i < nl; i++) {
        for (j = 0; j < nc; j++) {
            do {
                numero_gerado = rand() % 100;
            } while (numeros_usados[numero_gerado] == 1);

            m[i][j] = numero_gerado;
            numeros_usados[numero_gerado] = 1;
        }
    }
}


void imprimeMatriz(int m[][N], int nl, int nc) {
    int i, j;

    for (i = 0; i < nl; i++) {
        for (j = 0; j < nc; j++) {
            printf("%02d ", m[i][j]);
        }
        printf("\n");
    }
}
