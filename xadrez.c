#include <stdio.h>

// Função recursiva para o movimento da Torre
void movimentoTorre(int casas, int cont) {
    if (cont == casas) return;  // Condição de parada
    printf("Direita\n");  // Imprime movimento da Torre
    movimentoTorre(casas, cont + 1);  // Chama a função recursivamente
}

// Função recursiva para o movimento do Bispo
void movimentoBispo(int casas, int cont) {
    if (cont == casas) return;  // Condição de parada
    printf("Cima Direita\n");  // Imprime movimento do Bispo
    movimentoBispo(casas, cont + 1);  // Chama a função recursivamente
}

// Função recursiva para o movimento da Rainha
void movimentoRainha(int casas, int cont) {
    if (cont == casas) return;  // Condição de parada
    printf("Esquerda\n");  // Imprime movimento da Rainha
    movimentoRainha(casas, cont + 1);  // Chama a função recursivamente
}

// Função que aprimora o movimento do Cavalo com loops complexos
void movimentoCavalo() {
    // Loop para simular o movimento do Cavalo em "L" (duas casas para cima e uma para a direita)
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");  // Movimento para cima
    }

    // Loop interno para simular o movimento à direita
    for (int j = 0; j < 1; j++) {
        printf("Direita\n");  // Movimento para a direita
    }
}

int main() {
    // Movimentos das peças usando funções recursivas e loops complexos

    // Movimento da Torre (5 casas para a direita)
    printf("Movimento da Torre:\n");
    movimentoTorre(5, 0);  // Passando número de casas e contador
    printf("\n");

    // Movimento do Bispo (5 casas na diagonal para cima e à direita)
    printf("Movimento do Bispo:\n");
    movimentoBispo(5, 0);  // Passando número de casas e contador
    printf("\n");

    // Movimento da Rainha (8 casas para a esquerda)
    printf("Movimento da Rainha:\n");
    movimentoRainha(8, 0);  // Passando número de casas e contador
    printf("\n");

    // Movimento do Cavalo (duas casas para cima e uma para a direita)
    printf("Movimento do Cavalo:\n");
    movimentoCavalo();  // Chamando função com loops complexos
    printf("\n");

    return 0;
}
