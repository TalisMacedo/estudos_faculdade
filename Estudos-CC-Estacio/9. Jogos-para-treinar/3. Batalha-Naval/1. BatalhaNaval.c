#include <stdio.h>

#define TAMANHO 10  // Tamanho do tabuleiro

void imprimirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

void aplicarHabilidadeCone(int tabuleiro[TAMANHO][TAMANHO], int x, int y) {
    if (x >= 1) tabuleiro[x - 1][y] = 1;
    if (x >= 1 && y >= 1) tabuleiro[x - 1][y - 1] = 1;
    if (x >= 1 && y < TAMANHO - 1) tabuleiro[x - 1][y + 1] = 1;
    tabuleiro[x][y] = 1;
}

void aplicarHabilidadeCruz(int tabuleiro[TAMANHO][TAMANHO], int x, int y) {
    for (int i = 0; i < TAMANHO; i++) {
        tabuleiro[x][i] = 1;
        tabuleiro[i][y] = 1;
    }
}

void aplicarHabilidadeOctaedro(int tabuleiro[TAMANHO][TAMANHO], int x, int y) {
    if (x >= 1) tabuleiro[x - 1][y] = 1;
    if (x < TAMANHO - 1) tabuleiro[x + 1][y] = 1;
    if (y >= 1) tabuleiro[x][y - 1] = 1;
    if (y < TAMANHO - 1) tabuleiro[x][y + 1] = 1;
    tabuleiro[x][y] = 1;
}

int main() {
    int tabuleiro[TAMANHO][TAMANHO] = {0}; // Inicializa a matriz com zeros
    
    // Posicionando um navio verticalmente
    for (int i = 2; i < 5; i++) {
        tabuleiro[i][9] = 3;
    }
    
    // Posicionando um navio horizontalmente
    for (int j = 4; j < 7; j++) {
        tabuleiro[2][j] = 3;
    }
    
    // Posicionando um navio diagonalmente (crescente)
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][i] = 3;
    }
    
    // Posicionando um navio diagonalmente (decrescente)
    for (int i = 0; i < 2; i++) {
        tabuleiro[i][TAMANHO - 1 - i] = 3;
    }
    
    // Aplicação de habilidades especiais
    aplicarHabilidadeCone(tabuleiro, 5, 5);
    aplicarHabilidadeCruz(tabuleiro, 7, 3);
    aplicarHabilidadeOctaedro(tabuleiro, 5, 1);
    
    // Exibição das coordenadas dos navios
    printf("Coordenadas dos navios:\n");
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            if (tabuleiro[i][j] == 1) {
                printf("Navio em (%d, %d)\n", i, j);
            }
        }
    }
    
    // Exibição do tabuleiro
    printf("\nTabuleiro:\n");
    imprimirTabuleiro(tabuleiro);
    
    return 0;
}

