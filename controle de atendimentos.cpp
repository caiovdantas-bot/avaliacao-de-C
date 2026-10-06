#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    
    int i, atendimento;
    int software, hardware, rede;

    for (i = 1; i <= 9; i++) {

        do {
            printf("Computador %d - Informe o status (1 - Software, 2 - Hardware, 3 - Rede): ", i);
            scanf("%d", &atendimento);

            if (atendimento != 1 && atendimento != 2 && atendimento != 3) {
                printf("Valor invalido! digite novamente\n");
            }

        } while (atendimento != 1 && atendimento != 2 && atendimento != 3);

       
        if (atendimento == 1) {
            software++;
        } else if (atendimento == 2) {
            hardware++;
        } else if (atendimento == 3) {
            rede++;
        }
    }

    printf("\n========= RESULTADO =========\n");
    printf("Software: %d\n", software);
    printf("Hardware: %d\n", hardware);
    printf("Rede: %d\n", rede);

    return 0;
}
