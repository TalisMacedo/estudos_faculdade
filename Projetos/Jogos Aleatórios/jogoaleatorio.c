#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menuPrincipal(){
  printf("##### - MENU PRINCIPAL - #####\n");
  printf(" -> 1. Iniciar Jogo\n");
  printf(" -> 2. Ver Regras\n");
  printf(" -> 3. Sair\n");
  printf(" -> Escolha uma opção: ");
}

int main(){

  int opcao;
  int numeroSecreto;
  int palpite;

  menuPrincipal();
  scanf("%d", &opcao);

  switch (opcao) {

    case 1:
      printf("Bem-Vindo ao Jogo\n");
      srand(time(0)); // Número aleatório de acordo com o horário
      numeroSecreto = rand() % 10; // Gera um número aleatório dividido por 10, que vai de 0 a 9
      printf("Digite um número de 0 a 9: ");
      scanf("%d", &palpite);

      if (palpite == numeroSecreto){
        printf("Parabéns! Você acertou o número secreto!\n");
        printf("O numero secreto: %d\n", numeroSecreto);
      }
      else {
        printf("Você errou! Tente de novo!\n");
        printf("O numero secreto: %d\n", numeroSecreto);
      }

    break;

    case 2:
      printf("Regras!\n");
    break;

    case 3:
      printf("Saindo do Jogo!\n");
    break;

    default:
      printf("Opção inválida!\n");
    break;
  }

  return 0;
}
