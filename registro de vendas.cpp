#include <stdio.h>
#include <locale.h>

int main() {
    float total, valor;
    int i;

    for (i = 1; i <= 5; i++) {
        printf("Informe o valor da venda %d: ", i);
        scanf("%f", &valor);
        total += valor;
    }

    float media = total / 5.0;

    printf("\nTotal vendido: R$ %.2f\n", total);
    printf("\nMedia das vendas: R$ %.2f\n", media);

    return 0;
}
