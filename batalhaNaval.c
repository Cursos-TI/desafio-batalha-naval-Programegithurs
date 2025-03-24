#include <stdio.h>

// Defina o tamanho do tabuleiro
#define TAM_TABULEIRO 10

int main() {
    // Nível Novato - Posicionamento dos Navios
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO] = {0};

    // Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente
    // Navio 1: linha 2, coluna 4 (horizontal)
    for (int i = 0; i < 3; i++) {
        tabuleiro[2][4 + i] = 3;
        printf("Navio 1: (%d, %d)\n", 2, 4 + i);
    }

    // Navio 2: linha 6, coluna 2 (vertical)
    for (int i = 0; i < 3; i++) {
        tabuleiro[6 + i][2] = 3;
        printf("Navio 2: (%d, %d)\n", 6 + i, 2);
    }

    // Exiba o tabuleiro completo no console
    printf("\nTabuleiro completo:\n");
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}


