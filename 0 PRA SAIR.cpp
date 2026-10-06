#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

   
    while (numero != 0) {
        printf("Digite um numero: ");
        scanf("%d", &numero);
    }

   
    printf("Programa encerrado.\n");

    return 0;
}
