#include <stdio.h>

int main() {
    int numero, quantidade = 0;

    do {
        scanf("%d", &numero);
        quantidade++;
    } while (numero >= 0);

    printf("%d", quantidade - 1);

    return 0;
}
