#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int i, status, comdefeito, funcionando;

    for (i = 1; i <= 9; i++) {

        do {
            printf("Computador %d - Informe o status (1 - Funcionando, 0 - Com defeito): ", i);
            scanf("%d", &status);

            if (status != 0 && status != 1) {
                printf("Valor invalido! digite novamente\n");
            }

        } while (status != 0 && status != 1);

        if (status == 1) {
            funcionando++;
        } else {
            comdefeito++;
        }
    }

    printf("\n========= RESULTADO =========\n");
    printf("Computadores funcionando: %d\n", funcionando);
    printf("Computadores com defeito: %d\n", comdefeito);

    return 0;
}
