#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int i, codigo, prioridade;
    float chamados;
    
    printf("Quantos chamados deseja cadastrar?:\n ");
    scanf("%f", &chamados);

	 for (i = 0; i < chamados; i++){
    do {	
    	printf("Digite o codigo do chamado:\n ");
    	scanf("%f", &codigo);
    	
        printf("\n=== CHAMADOS ===\n");
        printf("1- Urgente\n");
        printf("2- Prioritario\n");
        printf("3- Normal\n");
        printf("0- Sair\n");
        printf("===================\n");
        printf("Escolha uma opção: ");
        scanf("%d", &prioridade);
        
        switch (prioridade) {
            case 1:
                printf("\nIniciando chamado urgente...\n");
                break;
            case 2:
                printf("\nIniciando chamado prioritario...\n");
                break;
            case 3:
                printf("\nIniciando chamado normal...\n");
                break;
            case 0:
                printf("\nSaindo do programa...\n");
                break;
            default:
                printf("\nOpção inválida! Tente novamente.\n");
                break;
        }
    } while (prioridade < 1 || prioridade > 3);
    
	}
    
    return 0;
}
