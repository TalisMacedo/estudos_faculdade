#include <stdio.h>
/*
  Desafio nível básico:
  ->Será feita a movimentação do Bispo, Torre e Rainha.
    Bispo: 5 casas para diagonal direita cima.
    Torre: 5 casas para direita.
    Rainha: 8 casas para esquerda.
*/

// Funções de menu
void escolhaPeca(){
  printf("Digite a peça que deseja movimentar\n");
  printf("1. -> Bispo\n");
  printf("2. -> Torre\n");
  printf("3. -> Rainha\n");
}
void movimentoTorre(){
  printf("Qual direção deseja movimentar a peça?\n");
  printf("1. -> Direita\n");
  printf("2. -> Esquerda\n");
  printf("3. -> Cima\n");
  printf("4. -> Baixo\n");
}
void movimentoBispo(){
  printf("Qual direção deseja movimentar a peça?\n");
  printf("1. -> Cima, Direita\n");
  printf("2. -> Cima, Esquerda\n");
  printf("3. -> Baixo, Esquerda\n");
  printf("4. -> Baixo, Direita\n");
}

int main()
{
 
  int nomePeca;
  int direcao;
  int numeroMovimentos;

  // Iniciado menu de escolha de peça
  escolhaPeca();
  printf("Opção: ");
  scanf("%d", &nomePeca);

  // Laço de repetição de acordo com a peça escolhida
  switch (nomePeca)
  {
    case 1:

      printf("\n");
      printf(" -> Movimento do Bispo!\n");

      printf("\n");
      printf("Digite quantas casas deseja percorrer: ");
      scanf("%d", &numeroMovimentos);

      printf("\n");
      // Iniciado menu de movimentação da peça Bispo
      movimentoBispo();

      // Laço de repetição caso a escolha seja diferente das opções fornecidas
      do
      {
      printf("Opção: ");
      scanf("%d", &direcao);
      printf("\n");
      // Laço de repetição para informar caso a opção seja inválida
      // Observação: colocar esse laço a cima do scanf de direcao
      // para ver se o printf sai depois do número escolhido*
      if (direcao <1 || direcao > 4)
        {
          printf("Movimento inválido! Escolha entre 1 e 4.\n");
        }

      } while (direcao < 1 || direcao > 4);

        int i;
      // Laço de repetição de acordo com a opção de movimentação do bispo
        if (direcao == 1)
        {
          // Laço de repetição que imprimi de acordo com as opções disponibilizadas
          for (i = 0; i < numeroMovimentos; i++)
          {
            printf("Cima, Direita\n");
          }
        }
        else if (direcao == 2)
        {
           for (i = 0; i < numeroMovimentos; i++)
          {
            printf("Cima, Esquerda\n");
          }
        }
        else if (direcao == 3)
        {
           for (i = 0; i < numeroMovimentos; i++)
          {
            printf("Baixo, Esquerda\n");
          }
        }
        else
        {
           for (i = 0; i < numeroMovimentos; i++)
          {
            printf("Baixo, Direita\n");
          }
        }







    break;

    case 2:


    break;

    case 3:



    break;

    default:
    printf("Peça inválida!\n");
  }

  return 0;
}
