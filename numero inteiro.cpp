#include <stdio.h>
#include <locale.h>

int main() {
    int i, numero;
    setlocale(LC_ALL,"");

   
    for (int i = 1; i <= 10; i++) {
        printf("Digite %d º numero inteiro: ", i);
        scanf("%d", &numero);

     
        if (numero > 0) {
            printf("POSITIVO\n");
        } else if (numero < 0) {
            printf("NEGATIVO\n");
        } else {
            printf("ZERO\n");
        }
    }

    return 0;
}
