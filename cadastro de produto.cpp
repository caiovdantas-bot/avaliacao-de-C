#include <stdio.h>
#include <locale.h>

int main() {
    int quantidade;
    int codigo;
    float preco;

    
    printf("Digite a quantidade de produtos que serao cadastrados: ");
    scanf("%d", &quantidade);

   
    for (int i = 1; i <= quantidade; i++) {
       

        printf("\n=== Produto %d ===\n", i);
        
        printf("Digite o codigo do produto: ");
        scanf("%d", &codigo);

        printf("Digite o preco do produto: ");
        scanf("%f", &preco);

    
        printf("Produtos cadastrados: %d -> Codigo: %d | Preco: R$ %.2f\n",quantidade, codigo, preco);
    }

    return 0;
}
