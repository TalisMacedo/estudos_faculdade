#include <stdio.h>

#define LINHA 3
#define COLUNA 3

int main()
{
  int matriz[LINHA][COLUNA];
  int navio1 = 3;
  int navio2 = 4;
  int navio3 = 5;
  int posicao = 1;
  int linha, coluna;


  for(int i = 0; i < LINHA; i++)
  {
    for(int j = 0; j < COLUNA; j++)
    {
      matriz[i][j] = posicao;
      posicao++;
    }
    printf("\n");
  }

  printf("Esse é o campo de batlha: \n");
  for(int i = 0; i < LINHA; i++)
  {
    for(int j = 0; j < COLUNA; j++)
    {
      printf("[%d] ", matriz[i][j]);
    }
    printf("\n");
  }

  printf("Qual linha: ");
  scanf("%d", &linha);
  printf("Qual coluna: ");
  scanf("%d", &coluna);
  linha -= 1;
  coluna -= 1;

  for(int i = 0; i < LINHA; i++)
  {
    for(int j = 0; j < COLUNA; j++)
    {
      if(linha != navio1 && coluna != navio1)
      {
        matriz[linha][coluna] = 0;
      }
      printf("[%d] ", matriz[i][j]);
    }
    printf("\n");
  }



  return 0;
}
