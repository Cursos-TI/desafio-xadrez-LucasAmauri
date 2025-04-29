#include <stdio.h>

int main() {
    // Movimento da Torre (5 casas para a direita)
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimento do Bispo (5 casas na diagonal para cima e à direita)
    printf("Movimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }
    printf("\n");

    // Movimento da Rainha (8 casas para a esquerda)
    printf("Movimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);
    printf("\n");

    // Movimento do Cavalo (duas casas para baixo e uma para a esquerda)
    printf("Movimento do Cavalo:\n");
    for (int i = 1; i <= 2; i++) {
        printf("Baixo\n");
    }
    int j1 = 1;
    while (j1 <= 1) {
        printf("Esquerda\n");
        j1++;
    }
    printf("\n");

    return 0;
}
