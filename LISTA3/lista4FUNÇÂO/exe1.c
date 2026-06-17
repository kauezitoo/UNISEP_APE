#include <stdio.h>
//função para somar dois numeros

int soma(int a, int b){

return a + b;
}
char retorna_uma_letra(){
    return 'G';
}

void boa_noite(){
   printf("\n Boa noite!");
}

 
    int main()
    {
        printf("A soma de 5 e 10 e: %d\n", soma(5, 10));
        printf("A soma de 20 e 30 e: %d\n", soma(20, 30));
        printf("\nA funcao retorna_uma_letra: %c", retorna_uma_letra());
        return 0;
    }




