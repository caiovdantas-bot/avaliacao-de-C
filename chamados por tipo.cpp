#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
    int codigo;
    int opcao;
    int Prioridade;

    printf("Digite o codigo: ");
    scanf("%d", &codigo);

    printf("\nTipo:\n");
    printf("1 - Software\n");
    printf("2 - Hardware\n");
    printf("3 - Rede\n");
    printf("Escolha o tipo: ");
    scanf("%d", &opcao);

    printf("\nPrioridade:\n");
    printf("1 - Urgente\n");
    printf("2 - Prioritaria\n");
    printf("3 - Normal\n");
    printf("Escolha a prioridade: ");
    scanf("%d", &Prioridade);

    printf("\n=========================\n");
    printf("CHAMADO CADASTRADO\n");
    printf("=========================\n");
    printf("Codigo: %d\n", codigo);

    printf("Tipo: ");
    switch (opcao) {
        case 1:
            printf("Software\n");
            break;
        case 2:
            printf("Hardware\n");
            break;
        case 3:
            printf("Rede\n");
            break;
        default:
            printf("Invalido\n");
            break;
    }

    printf("Prioridade: ");
    switch (Prioridade) {
        case 1:
            printf("Urgente\n");
            break;
        case 2:
            printf("Prioritaria\n");
            break;
        case 3:
            printf("Normal\n");
            break;
        default:
            printf("Invalida\n");
            break;
    }

    return 0;
}
