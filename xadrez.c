#include <stdio.h>

// Definição de constantes para o número de movimentos de cada peça
#define TORRE_MOVIMENTOS 5
#define BISPO_MOVIMENTOS 5
#define RAINHA_MOVIMENTOS 8

int main() {
    // ====================================
    // Movimentação da TORRE (usando while)
    // ====================================
    // A torre se move 5 casas para a direita
    printf("Movimentação da TORRE:\n");
    
    int i = 0;
    while (i < TORRE_MOVIMENTOS) {
        printf("Direita\n");
        i++;
    }

    printf("-----------------------------\n");

    // ==========================================
    // Movimentação do BISPO (usando estrutura for)
    // ==========================================
    // O bispo se move na diagonal: Cima + Direita
    printf("Movimentação do BISPO:\n");

    for (int j = 0; j < BISPO_MOVIMENTOS; j++) {
        printf("Cima Direita\n");
    }

    printf("-----------------------------\n");

    // =============================================
    // Movimentação da RAINHA (usando do-while loop)
    // =============================================
    // A rainha se move 8 casas para a esquerda
    printf("Movimentação da RAINHA:\n");

    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < RAINHA_MOVIMENTOS);

    return 0;
}
