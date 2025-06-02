#include <stdio.h>
#include <math.h>

int main() {
    char repetir;
    do {
        int quantidade;
        double valor_unitario;
        double total_compra = 0.0;
        int total_itens = 0;

        while (1) {
            printf("Informe a quantidade de um produto: ");
            scanf("%d", &quantidade);
            if (quantidade <= 0) {
                break;
            }
            do {
                printf("Informe o valor unitario do produto: ");
                scanf("%lf", &valor_unitario);
            } while (valor_unitario <= 0.0);

            total_compra += quantidade * valor_unitario;
            total_itens += quantidade;
        }

        double valor_medio = (total_itens > 0) ? (total_compra / total_itens) : 0.0;
        int reais = (int) total_compra;
        int centavos = (int) round((total_compra - reais) * 100);

        printf("\nVALOR TOTAL DA COMPRA: R$ %.2f\n", total_compra);
        printf("VALOR MEDIO DA COMPRA: R$ %.2f\n", valor_medio);
        printf("O valor total da compra eh %d reais e %02d centavos.\n", reais, centavos);

        printf("%d reais equivale a:\n", reais);
        int restante = reais;
        int notas100 = restante / 100; restante %= 100;
        int notas50  = restante / 50;  restante %= 50;
        int notas20  = restante / 20;  restante %= 20;
        int notas10  = restante / 10;  restante %= 10;
        int notas5   = restante / 5;   restante %= 5;
        int notas2   = restante / 2;   restante %= 2;
        int moedas1  = restante;

        if (notas100 > 0) printf("%d nota(s) de 100\n", notas100);
        if (notas50  > 0) printf("%d nota(s) de 50\n",  notas50);
        if (notas20  > 0) printf("%d nota(s) de 20\n",  notas20);
        if (notas10  > 0) printf("%d nota(s) de 10\n",  notas10);
        if (notas5   > 0) printf("%d nota(s) de 5\n",   notas5);
        if (notas2   > 0) printf("%d nota(s) de 2\n",   notas2);
        if (moedas1  > 0) printf("%d moeda(s) de 1\n",   moedas1);

        printf("Deseja repetir o programa (S ou N)? ");
        scanf(" %c", &repetir);
        printf("\n");
    } while (repetir == 'S' || repetir == 's');

    return 0;
}