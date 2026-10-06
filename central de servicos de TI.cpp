#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    int opcao, codigo, tipo, prioridade;

    int total = 0;
    int software = 0;
    int hardware = 0;
    int rede = 0;
    int urgentes = 0;

    while (opcao != 0) {
        printf("\n================================\n");
        printf("     SISTEMA DE SUPORTE\n");
        printf("================================\n");
        printf("1 - Registrar chamado\n");
        printf("2 - Relatorio\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("\nDigite o codigo: ");
            scanf("%d", &codigo);

            printf("\nTipos:\n");
            printf("1 - Software\n");
            printf("2 - Hardware\n");
            printf("3 - Rede\n");
            printf("Escolha o tipo: ");
            scanf("%d", &tipo);

            printf("\nPrioridades:\n");
            printf("1 - Urgente\n");
            printf("2 - Prioritario\n");
            printf("3 - Normal\n");
            printf("Escolha a prioridade: ");
            scanf("%d", &prioridade);

            total++;

            if (tipo == 1) {
                software++;
            } else if (tipo == 2) {
                hardware++;
            } else if (tipo == 3) {
                rede++;
            }

            if (prioridade == 1) {
                urgentes++;
            }
        } else if (opcao == 2) {
            printf("\nTotal de chamados registrados: %d\n", total);
            printf("Chamados de Software: %d\n", software);
            printf("Chamados de Hardware: %d\n", hardware);
            printf("Chamados de Rede: %d\n", rede);
            printf("Chamados Urgentes: %d\n", urgentes);
        }
    }

    return 0;
}
