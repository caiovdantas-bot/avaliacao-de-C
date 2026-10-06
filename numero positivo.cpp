#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while (numero < 0) {
        printf("Valor invalido.\nDigite novamente: ");
        scanf("%d", &numero);
    }

    return 0;
}
