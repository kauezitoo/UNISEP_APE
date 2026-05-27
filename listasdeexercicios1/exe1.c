#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char operador;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador); // O espaço antes de %c ignora espaços em branco

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("Erro: divisao por zero!\n");
                return 1;
            }
            resultado = num1 / num2;
            break;
        default:
            printf("Operador invalido!\n");
            return 1;
    }

    printf("Resultado: %.2f\n", resultado);
    return 0;
}   