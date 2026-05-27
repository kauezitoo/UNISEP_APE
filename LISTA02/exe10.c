#include <stdio.h>

int main(void) {
    int a, b, i, start, end;

    printf("Digite o primeiro numero: ");
    if (scanf("%d", &a) != 1) return 1;

    printf("Digite o segundo numero: ");
    if (scanf("%d", &b) != 1) return 1;

    if (a <= b) { start = a; end = b; }
    else { start = b; end = a; }

    for (i = start; i <= end; ++i) {
        printf("%d\n", i);
    }

    return 0;
}
