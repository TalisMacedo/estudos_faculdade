#include <stdio.h>

int validarOpcao(int min, int max) {
    int escolha;
    do {
        printf("Opção: ");
        scanf("%d", &escolha);
        printf("\n");

        if (escolha < min || escolha > max) {
            printf("Opção inválida! Escolha um valor entre %d e %d.\n", min, max);
        }

    } while (escolha < min || escolha > max);

    return escolha;
}

int escolhaPeca(){
  printf("Digite a peça que deseja movimentar\n");
  printf("1. -> Bispo\n");
  printf("2. -> Torre\n");
  printf("3. -> Rainha\n");
  return validarOpcao(1, 3);
}
//int movimentacao(){
  //printf("Qual direção deseja movimentar a peça?\n");
  //printf("1. -> Direita\n");
  //printf("2. -> Esquerda\n");
  //printf("3. -> Cima\n");
  //printf("4. -> Baixo\n");
  //return validarOpcao(1, 4);
//}

int direcaoBispo()
{
  printf("Qual direção deseja movimentar a peça?\n");
  printf("1. -> Cima, Direita\n");
  printf("2. -> Cima, Esquerda\n");
  printf("3. -> Baixo, Esquerda\n");
  printf("4. -> Baixo, Direita\n");
  return validarOpcao(1, 4);
}

int numeroCasas()
{
  int numero;
  printf("\n");
  printf(" -> Movimento do Bispo!\n");
  printf("\n");
  printf("Digite quantas casas deseja percorrer: ");
  scanf("%d", &numero);
  printf("\n");
  return numero;
}

int main()
{

  int nomePeca = escolhaPeca();

  switch (nomePeca)
  {
    case 1:
      int numeroMovimentos = numeroCasas();
      int direcao = direcaoBispo();

        int i;
        if (direcao == 1)
        {
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
