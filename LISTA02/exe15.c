#include <stdio.h>

int main(void) {
    int numero, soma = 0;

    do {
        printf("Digite um numero (0 para sair): ");
        scanf("%d", &numero);

        if (numero != 0) {
            soma += numero;
        }
    } while (numero != 0);

    printf("Soma total dos numeros digitados: %d\n", soma);

    return 0;
}
