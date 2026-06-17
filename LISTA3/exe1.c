#include <stdio.h>

int main() {
    int vetor[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }


    printf("\nValores armazenados no vetor:\n");

    for(i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    return 0;
}
