#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int menu;
    
    do {
        printf("\n=== MENU ===\n");
        printf("1- Cadastrar\n");
        printf("2- Consultar\n");
        printf("3- Relatorio\n");
        printf("0- Sair\n");
        printf("===========\n");
        printf("Escolha uma opção: ");
        scanf("%d", &menu);
        
        switch (menu) {
            case 1:
                printf("\nRealizando Cadastro...\n");
                break;
            case 2:
                printf("\nIniciando Consulta...\n");
                break;
            case 3:
                printf("\nRealizando Relatorio...\n");
                break;
            case 0:
                printf("\nSaindo do programa...\n");
                break;
            default:
                printf("\nOpção inválida! Tente novamente.\n");
                break;
        }
    } while (menu != 0);
    
    return 0;
}
