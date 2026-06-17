    #include <stdio.h>

int main() {
    int vetor[8];
    int i, soma = 0;

    // Leitura dos 8 números
    for(i = 0; i < 8; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &vetor[i]);

        soma += vetor[i];
    }

    // Exibe a soma
    printf("\nA soma dos elementos do vetor e: %d\n", soma);

    return 0;
}