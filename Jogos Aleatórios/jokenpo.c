#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menuPrincipal(){
  printf(" ##### - Jogo de Jokenpô - #####\n");
  printf(" -> Escolha uma das opções: \n");
  printf(" -> 1. Pedra\n");
  printf(" -> 2. Papel\n");
  printf(" -> 3. Tesoura\n");
  printf("Escolha: ");
}

int main(){
  int escolhaJogador, escolhaComputador;
  srand(time(0));

  menuPrincipal();
  scanf("%d", &escolhaJogador);

  escolhaComputador = rand() % 3 + 1;

  switch (escolhaJogador) {
    case 1:
      printf("Jogador: Pedra\n");
    break;
    case 2:
      printf("Jogador: Papel\n");
    break;
    case 3:
      printf("Jogador: Tesoura\n");
    break;
    default:
      printf("Opção inválida!\n");
    break;
  }

  switch (escolhaComputador) {
    case 1:
      printf("Computador: Pedra\n");
    break;
    case 2:
      printf("Computador: Papel\n");
    break;
    case 3:
      printf("Computador: Tesoura\n");
    break;
  }

  if (escolhaJogador == escolhaComputador) {
      printf(" -> ##### Empate <- #####\n");
  }
  else if ((escolhaJogador == 1) && (escolhaComputador == 3) ||
           (escolhaJogador == 2) && (escolhaComputador == 1) ||
           (escolhaJogador == 3) && (escolhaComputador == 2)){
    printf(" -> ##### Parabéns! Você ganhou! ##### <- \n");
  }
  else {
    printf(" -> ##### Você perdeu! Tente outra vez! ##### <- \n");
  }

  return 0;
}
