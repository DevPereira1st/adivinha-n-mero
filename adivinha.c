#include <time.h>

int main() {
  int opcao;
  int numeroSecreto, palpite;

  printf("Menu Principal\n");
  printf("1. Iniciar Jogo:\n");
  printf("2. Ver Regras\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: ");
  scanf("%d", &opcao);

switch (opcao) {
  case 1:
    srand(time(0) );
    numeroSecreto = rand() % 10;

    printf("Digite um numero de 0 a 9: ");

    scanf("%d", &palpite);

    printf("Número secreto %d\n", numeroSecreto);

    if (numeroSecreto == palpite) {

        printf("Parabéns, Você ganhou!!\n");
        
    } else if (numeroSecreto != palpite) {

        printf("Que pena, Você perdeu!\n");
        
    }

    break;

  case 2:
    printf("Digite as regras aqui...");
    break;
  case 3:
    printf("Saiu do jogo");
    break;
  
  default:
    printf("Opção invalida");
  }

  return 0;
}
