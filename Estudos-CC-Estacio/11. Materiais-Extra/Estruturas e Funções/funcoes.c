#include <stdio.h>
// ##include <stdbool.h> adiciona a biblioteca de booleano (true ou false)
#include <stdbool.h>

// Função com parâmetro e sem retorno
void multiplicacao(int x){ printf("O resultado da multiplicação é: %d\n", x * x);}

// Função com parâmetro e sem retorno
void boasVindas(char n[30]){ printf("Bem-vindo(a) %s\n", n);}

// Função com parâmetro e com retorno
int somar(int n1, int n2){ int s = n1 + n2; return s; }

// Função com retorno de booleano
bool maior(int x, int y)
{
  // Condição só com um argumento, não necessario colocar colchetes
  if(x > y)
    return true;
  else
    return false;
}

// Função float
float media(float n1, float n2)
{
  // retorno a soma dos valores divido por 2
  return (n1 + n2) / 2;
}
int main(){
//Declaração de variavel
  int valor;
  char nome[30];
  float valor1, valor2;

  printf("Digite o seu nome: ");
  // O %[^\n] evita interferir no scanf seguinte
  scanf("%[^\n]", nome);

  // Chamando a função e repassando a variavel
  boasVindas(nome);

  printf("Digite um valor para ser multiplicado: ");
  // Entrada e armazenamento da variavel
  scanf("%d", &valor);

  // Chamando a função e repassando a variavel
  multiplicacao(valor);

  int x, y;
  printf("Digite o valor de X: ");
  scanf("%d", &x);
  printf("Digite o valor de Y: ");
  scanf("%d", &y);

  printf("A soma dos valores X e Y: %d\n", somar(x,y));

  // Chamando a função maior() dentro da Condição ifelse
  if (maior(x,y))
    printf(" -> %d é maior que %d\n", x, y);
  else if (maior(y,x))
    printf(" -> %d é menor que %d\n", x, y);
  else
    printf(" -> %d e %d são iguais\n", x, y);

  printf("Digite a nota: ");
  scanf("%f", &valor1);
  printf("Digite a segundo nota: ");
  scanf("%f", &valor2);

  float resultadoMedia = media(valor1, valor2);

  printf("Média: %.2f\n", resultadoMedia);


  return 0;
}
