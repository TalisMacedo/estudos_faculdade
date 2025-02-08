#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHA 10
#define COLUNA 10

int main()
{
  int matriz[LINHA][COLUNA];
  int navioA, navioB;
  int tabuleiro = 1;
  int coordenadaX, coordenadaY;

  // Inicializa o gerador de números aleatórios
  srand(time(NULL));

  // Gera posições aleatórias para os navios
  navioA = rand() % 100 + 1;
  do {
      navioB = rand() % 100 + 1;
  } while (navioB == navioA); // Garante que navios não estejam na mesma posição


  // Inicializa o tabuleiro
  for(int i = 0; i < LINHA; i++) {
    for(int j = 0; j < COLUNA; j++) {
      matriz[i][j] = tabuleiro;
      tabuleiro++;
    }
  }

  while (1) {
  
    printf("\n");
    printf(" -> Esse é o campo de batalha: \n");
    printf("\n");
    for(int i = 0; i < LINHA; i++) {
      for(int j = 0; j < COLUNA; j++) {
        printf("[%2d] ", matriz[i][j]);
      }
      printf("\n");
    }
    printf("\n");

    printf(" -> Digite a Coordenada X: ");
    scanf("%d", &coordenadaX);
    printf(" -> Digite a Coordenada Y: ");
    scanf("%d", &coordenadaY);

    // Verifica se as coordenadas são válidas
    if (coordenadaX < 0 || coordenadaX >= LINHA + 1 || coordenadaY < 0 || coordenadaY >= COLUNA + 1) {
      printf("Coordenada inválida! Digite valores entre 1 e 10.\n");
      continue;
    }

    coordenadaX -= 1;
    coordenadaY -= 1;

    if (matriz[coordenadaX][coordenadaY] == navioA) {
      matriz[coordenadaX][coordenadaY] = 3;
      printf("\033[0;32m -> Parabéns!! Você afundou o navioA nas COORDENADAS [%d , %d]\033[0m\n", coordenadaX + 1, coordenadaY + 1);
      printf("\n");
      break;
    } else if (matriz[coordenadaX][coordenadaY] == navioB) {
      matriz[coordenadaX][coordenadaY] = 3;
      printf("\033[0;32m -> Parabéns!! Você afundou o navioB nas COORDENADAS [%d , %d]\033[0m\n", coordenadaX + 1, coordenadaY + 1);
      printf("\n");
      break;
    } else {
      matriz[coordenadaX][coordenadaY] = 0;
      printf(" \033[0;31m-> ERROU! Tente novamente.\033[0m\n");
      printf("\n");
    }
  }

   printf("\nTabuleiro final:\n");
   for(int i = 0; i < LINHA; i++) {
     for(int j = 0; j < COLUNA; j++) {
       printf("[%2d] ", matriz[i][j]);
     }
     printf("\n");
   }

  return 0;
}
