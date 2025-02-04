#include <stdio.h>

// Função para validar a entrada do usuário dentro de um intervalo específico
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

// Função para escolher a peça a ser movimentada
int escolhaPeca(){
  printf("Digite a peça que deseja movimentar\n");
  printf("1. -> Bispo\n");
  printf("2. -> Torre\n");
  printf("3. -> Rainha\n");
  printf("4. -> Cavalo\n");
  return validarOpcao(1, 4);
}

// Função para determinar a direção de movimento de peças que se movem em linha reta
int qualDirecao(){
  printf("Qual direção deseja movimentar a peça?\n");
  printf("1. -> Direita\n");
  printf("2. -> Esquerda\n");
  printf("3. -> Cima\n");
  printf("4. -> Baixo\n");
  return validarOpcao(1, 4);
}

// Função específica para determinar a direção de movimento do Bispo
int direcaoBispo()
{
  printf("Qual direção deseja movimentar a peça?\n");
  printf("1. -> Cima, Direita\n");
  printf("2. -> Cima, Esquerda\n");
  printf("3. -> Baixo, Esquerda\n");
  printf("4. -> Baixo, Direita\n");
  return validarOpcao(1, 4);
}

// Função específica para determinar a direção de movimento do Cavalo
int direcaoCavalo()
{
  printf("Qual direção deseja movimentar a peça?\n");
  printf("1. -> Cima, Cima, Direita\n");
  printf("2. -> Cima, Cima, Esquerda\n");
  printf("3. -> Baixo, Baixo, Esquerda\n");
  printf("4. -> Baixo, Baixo, Direita\n");
  printf("5. -> Direita, Direita, Cima\n");
  printf("6. -> Direita, Direita, Baixo\n");
  printf("7. -> Esquerda, Esquerda, Cima\n");
  printf("8. -> Esquerda, Esquerda, Baixo\n");
  return validarOpcao(1, 8);
}

// Função para obter o número de casas a serem percorridas pela peça
int numeroCasas()
{
  int numero;
  printf("Digite quantas casas deseja percorrer: ");
  scanf("%d", &numero);
  printf("\n");
  return numero;
}

int main()
{

  int nomePeca = escolhaPeca(); // Identifica qual peça será movimentada
  int numeroMovimentos;
  int direcao, i, j;
  char *mensagem;

  switch (nomePeca)
  {
    case 1: // Movimento do Bispo

      printf("\n");
      printf(" -> Movimento do Bispo!\n");
      printf("\n");
      numeroMovimentos = numeroCasas();
      direcao = direcaoBispo();

      switch (direcao)
        {
          case 1: mensagem = "Cima, Direita"; break;
          case 2: mensagem = "Cima, Esquerda"; break;
          case 3: mensagem = "Baixo, Esquerda"; break;
          default: mensagem = "Baixo, Direita"; break;
        }
        for (int i = 0; i < numeroMovimentos; i++) printf("%s\n", mensagem);
    break;

    case 2: // Movimento da Torre
      printf("\n");
      printf(" -> Movimento da Torre!\n");
      printf("\n");
      numeroMovimentos = numeroCasas();
      direcao = qualDirecao();

      switch (direcao)
        {
          case 1: mensagem = "Direita"; break;
          case 2: mensagem = "Esquerda"; break;
          case 3: mensagem = "Cima"; break;
          default: mensagem = "Baixo"; break;
        }
        for (int i = 0; i < numeroMovimentos; i++) printf("%s\n", mensagem);
    break;

    case 3: // Movimento da Rainha
      printf("\n");
      printf(" -> Movimento da Rainha!\n");
      printf("\n");
      numeroMovimentos = numeroCasas();
      direcao = qualDirecao();

      switch (direcao)
        {
          case 1: mensagem = "Direita"; break;
          case 2: mensagem = "Esquerda"; break;
          case 3: mensagem = "Cima"; break;
          default: mensagem = "Baixo"; break;
        }
        for (int i = 0; i < numeroMovimentos; i++) printf("%s\n", mensagem);
    break;

    case 4: // Movimento do Cavalo
      printf("\n");
      printf(" -> Movimento do Cavalo!\n");
      printf("\n");
      direcao = direcaoCavalo();
      switch (direcao)
      {
        case 1:
            for (i = 0; i < 2; i++) printf("Cima\n");
            for (int j = 0; j < 1; j++) printf("Direita\n");
            break;
        case 2:
            for (i = 0; i < 2; i++) printf("Cima\n");
            for (int j = 0; j < 1; j++) printf("Esquerda\n");
            break;
        case 3:
            for (i = 0; i < 2; i++) printf("Baixo\n");
            for(int j = 0; j < 1; j++) printf("Esquerda\n");
            break;
        case 4:
            for (i = 0; i < 2; i++) printf("Baixo\n");
            for (int j = 0; j < 1; j++) printf("Direita\n");
            break;
        case 5:
            for (i = 0; i < 2; i++) printf("Direita\n");
            for(int j = 0; j < 1; j++) printf("Cima\n");
            break;
        case 6:
            for (i = 0; i < 2; i++) printf("Direita\n");
            for(int j = 0; j < 1; j++) printf("Baixo\n");
            break;
        case 7:
            for (i = 0; i < 2; i++) printf("Esquerda\n");
            for(int j = 0; j < 1; j++) printf("Cima\n");
            break;
        case 8:
            for (i = 0; i < 2; i++) printf("Esquerda\n");
            for(int j = 0; j < 1; j++) printf("Baixo\n");
            break;
      }
    break;
  }

  return 0;
}
/*

1. Loops na movimentação do Bispo, Torre e Rainha
  Esse loop for imprime a direção escolhida da peça repetidamente, de acordo com o número de casas que o usuário informou.
  Ele é usado para Bispo, Torre e Rainha, pois essas peças podem se mover múltiplas casas na mesma direção.
2. Loops aninhados na movimentação do Cavalo
  O cavalo tem um movimento em "L", o que significa que ele anda duas casas em uma direção e depois uma casa em outra direção.
  O primeiro for move a peça duas casas para cima.
  O segundo for move a peça uma casa para a direita.
  Esse padrão é repetido para cada uma das 8 direções possíveis do cavalo.
  Resumo:
    O primeiro for sempre executa duas repetições, movendo a peça na primeira direção.
    O segundo for sempre executa uma repetição, movendo a peça na segunda direção.
    Isso garante que o cavalo siga corretamente seu padrão de movimento em "L".

*/
