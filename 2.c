#include <stdio.h>

int main() {
    int A1, A2, A3;
    int tempo1, tempo2, tempo3;
    int menor_tempo, melhor_andar;

    scanf("%d", &A1);
    scanf("%d", &A2);
    scanf("%d", &A3);


     tempo1 = 0 * A1 + 2 * A2 + 4 * A3;
     tempo2 = 2 * A1 + 0 * A2 + 2 * A3;
     tempo3 = 4 * A1 + 2 * A2 + 0 * A3;

    menor_tempo = tempo1;
    melhor_andar = 1;

    if (tempo2 < menor_tempo) {
        menor_tempo = tempo2;
        melhor_andar = 2;
    }
    if (tempo3 < menor_tempo) {
        menor_tempo = tempo3;
        melhor_andar = 3;
    }

    printf("\nMelhor tempo: %d Melhor andar: %d ", menor_tempo, melhor_andar);

    return 0;
}