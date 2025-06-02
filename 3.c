
#include <stdio.h>

int competidores_quant, pontuacao[1000], pontuacao_min, classificados = 0;;



int main() {
  printf("Informe o número de participantes: ");
  scanf("%d", &competidores_quant);
  printf("\nInforme a pontuação mínima: ");
  scanf("%d", &pontuacao_min);
  for (int i=0;i<competidores_quant;i++){
      printf("\nInforme a pontuação do paticipante %d\n", i+1);
      scanf("%d", &pontuacao[i]);
      if (pontuacao[i] >= pontuacao_min){
          classificados += 1;
          printf("\n%d classificados \n", classificados);
      }
  }
  printf("\nNúmero de classificados: %d", classificados);
  
    return 0;
}