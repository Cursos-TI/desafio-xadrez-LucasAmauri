#include <stdio.h>

// Constantes para número de movimentos
#define BISPO_MOVIMENTOS 5
#define TORRE_MOVIMENTOS 5
#define RAINHA_MOVIMENTOS 8

int main() {
    // ========================
    // Movimentação do BISPO
    // ========================
    // Bispo move 5 vezes na diagonal superior direita (Cima + Direita)
    // Usando estrutura de repetição: for

    printf("Movimentação do BISPO (Diagonal Superior Direita):\n");
    for (int i = 0; i < BISPO_MOVIMENTOS; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("------------------------------\n");

    // ========================
    // Movimentação da TORRE
    // ========================
    // Torre move 5 casas para a direita
    // Usando estrutura de repetição: while

    printf("Movimentação da TORRE (Direita):\n");
    int t = 0;
    while (t < TORRE_MOVIMENTOS) {
        printf("Direita\n");
        t++;
    }
    printf("------------------------------\n");

    // ========================
    // Movimentação da RAINHA
    // ========================
    // Rainha move 8 casas para a esquerda
    // Usando estrutura de repetição: do...while

    printf("Movimentação da RAINHA (Esquerda):\n");
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while (r < RAINHA_MOVIMENTOS);
    printf("------------------------------\n");

    return 0;
}
