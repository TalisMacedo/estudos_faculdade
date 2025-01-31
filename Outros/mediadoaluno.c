#include <stdio.h>

// Função para somar e depois calcular a média
  float calcularMedia(float nota1, float nota2, float nota3, float nota4){
    float soma = nota1 + nota2 + nota3 + nota4;

    float media = soma / 4.0f;
    return media;
  }

// Função para entrar com as notas usando ponteiro, permitindo alterar o valor das notas
  void notas(float *nota1, float *nota2, float *nota3, float *nota4){
    printf("Digite as notas: ");
    scanf("%f %f %f %f", nota1, nota2, nota3, nota4);
}

int main(){

  char nomedoaluno[20];
  float nota1, nota2, nota3, nota4;
  printf("Digite o nome do aluno: ");
  scanf("%[^\n]", nomedoaluno);
  notas(&nota1, &nota2, &nota3, &nota4);

  float media = calcularMedia(nota1, nota2, nota3, nota4);

  printf("******* BOLETIM *******\n");
  printf(" -> Aluno: %s\n", nomedoaluno);
  printf(" -> A média é: %.2f\n", media);

  return 0;
}
