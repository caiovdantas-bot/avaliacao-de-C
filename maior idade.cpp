#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int idade;

  
    do {
        printf("Digite sua idade: ");
        scanf("%d", &idade);

        if (idade < 0) {
            printf("Idade invalida! Digite um valor maior ou igual a zero.\n\n");
        }
    } while (idade < 0);

   
    if (idade >= 18) {
        printf("Maior idade.\n");
    } else {
        printf("Menor idade.\n");
    }

    printf("Fim do programa\n");

    return 0;
}
