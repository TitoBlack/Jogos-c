#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10
#define NAVIO 3

int main() {
    int i, j, k;
    int tabuleiro[LINHAS][COLUNAS] = {0}; // começa tudo com 0

    // onde vão ficar os barcos
    int COLUNA_VERTICAL = 6;   
    int LINHA_HORIZONTAL = 7;  

    printf(" - JOGO BATALHA NAVAL - \n");

    // barco na vertical
    for (i = 1; i <= 3; i++) {
        tabuleiro[i][COLUNA_VERTICAL] = NAVIO;
    }

    // barco na horizontal
    for (j = 4; j <= 6; j++) {
        tabuleiro[LINHA_HORIZONTAL][j] = NAVIO;
    }

    // barco na diagonal baixo direita
    for (k = 0; k < 3; k++) {
        tabuleiro[2 + k][2 + k] = NAVIO;
    }

    // barco na diagonal cima direita
    for (k = 0; k < 3; k++) {
        tabuleiro[8 - k][1 + k] = NAVIO;
    }

    // cabeçalho
    printf("     ");
    for (j = 0; j < COLUNAS; j++) {
        printf("%c ", 'A' + j);
    }
    printf("\n");

    // mostra o tabuleiro
    for (i = 0; i < LINHAS; i++) {
        printf("%2d   ", i + 1);
        for (j = 0; j < COLUNAS; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
