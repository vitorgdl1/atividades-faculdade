#include <stdio.h>

float valor_bem, taxa_dep = 0.985, valor_dep, dep, dep_acumulada;
int anos;

int main() {
   printf("\nInforme o valor do bem a ser depreciado: \n");
   scanf("%f", &valor_bem);
   printf("Informe o perido da depreciação em anos: \n");
   scanf("%d", &anos);
   printf("\nANO------------VALOR DO BEM------------DEPRECIAÇÃO------------VALOR DEPRECIADO------------\n");
   printf("\n============================================================================================\n");
   
   for (int i = 0; i < anos; i++){
       valor_dep = valor_bem * taxa_dep;
       dep = valor_bem - valor_dep;
       printf("\n%d             R$%.2f                R$%.2f                R$%.2f\n", i+1, valor_bem, dep, valor_dep);
       valor_bem = valor_dep;
       dep_acumulada+= dep;
       
   }
   printf("\n============================================================================================\n");
   printf("Depreciação acumulada: %.2f", dep_acumulada);
    
    return 0;
}