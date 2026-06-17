#include <stdio.h>

int main() {
    int n, fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        fatorial *= i;
    }

    printf("%d! = %d\n", n, fatorial);
    return 0;
}
