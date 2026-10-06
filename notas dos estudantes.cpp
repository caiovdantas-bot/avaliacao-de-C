#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	char nome;
	int i, estudantes;
	float nota;
	
	printf("Digite a quantidade de estudantes: ");
	scanf("%d", &estudantes);
	
	for (int i = 1; i <= estudantes; i++){
		printf("Digite a nota do estudante: ");
		scanf("%f", &nota);
		
		if (nota >= 7) {
            printf("APROVADO\n");
        } else 
            printf("REPROVADO\n");
	
		
	}
	
	return 0;
}
