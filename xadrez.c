#include <stdio.h>

// Constantes de movimentos
#define BISPO_MOVIMENTOS 5
#define TORRE_MOVIMENTOS 5
#define RAINHA_MOVIMENTOS 8
#define CAVALO_L1 1 // Movimento "Cima" ou "Baixo"
#define CAVALO_L2 2 // Movimento "Esquerda" ou "Direita"

int main() {
    // ------------------------
    // Movimentação do Bispo
    // ------------------------
    printf("Movimento do Bispo (diagonal superior direita):\n");
    for (int i = 0; i < BISPO_MOVIMENTOS; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // ------------------------
    // Movimentação da Torre
    // ------------------------
    printf("\nMovimento da Torre (para a direita):\n");
    int i = 0;
    while (i < TORRE_MOVIMENTOS) {
        printf("Direita\n");
        i++;
    }

    // ------------------------
    // Movimentação da Rainha
    // ------------------------
    printf("\nMovimento da Rainha (para a esquerda):\n");
    for (int j = 0; j < RAINHA_MOVIMENTOS; j++) {
        printf("Esquerda\n");
    }

    // ------------------------
    // Movimentação do Cavalo
    // ------------------------
    printf("\nMovimento do Cavalo (L para cima à direita):\n");

    // Primeiro movimento: 1 passo para cima
    for (int k = 0; k < CAVALO_L1; k++) {
        printf("Cima\n");
    }

    // Segundo movimento: 2 passos para a direita (usando while dentro do for -> loop aninhado)
    int l = 0;
    while (l < CAVALO_L2) {
        printf("Direita\n");
        l++;
    }

    return 0;
}
