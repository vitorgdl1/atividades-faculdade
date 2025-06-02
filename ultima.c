#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    printf("Informe o número de Estrelas (sítios): ");
    scanf("%d", &N);
    if (N <= 0) {
        printf("Quantidade de Estrelas inválida.\n");
        return 1;
    }

    int *X = malloc(N * sizeof(int));
    if (!X) {
        printf("Falha na alocação de memória.\n");
        return 1;
    }

  
    for (int i = 0; i < N; i++) {
        printf("Informe o número inicial de carneiros em Estrela %d: ", i + 1);
        scanf("%d", &X[i]);
        if (X[i] < 0) {
            printf("Número de carneiros inválido. Usando 0.\n");
            X[i] = 0;
        }
    }

    int visitas = 0;
    int pos = 0;  


    while (1) {
        int atual = X[pos];
        visitas++;

    
        printf("Visita %d: Estrela %d tinha %d carneiro(s). ", visitas, pos + 1, atual);

        if (atual > 0) {
            X[pos]--;
            printf("Roubou 1. Restam %d\n", X[pos]);
        } else {
            printf("Não havia carneiros para roubar.\n");
        }


        int proxima;
        if (atual % 2 != 0) {
            proxima = pos + 1;
            printf("Como %d era ímpar, vai para Estrela %d\n\n", atual, proxima + 1);
        } else {
            proxima = pos - 1;
            printf("Como %d era par, vai para Estrela %d\n\n", atual, proxima + 1);
        }

        if (proxima < 0 || proxima >= N) {
            printf("Não existe Estrela %d. Jornada encerrada.\n\n", proxima + 1);
            break;
        }
        pos = proxima;
    }


    long long soma_restante = 0;
    for (int i = 0; i < N; i++) {
        soma_restante += X[i];
    }

    printf("Total de Estrelas atacadas: %d\n", visitas);
    printf("Total de carneiros NÃO roubados: %lld\n", soma_restante);

    free(X);
    return 0;
}