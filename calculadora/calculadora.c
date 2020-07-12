#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Define os dois números e a operação
    int n1, n2;
    char o;

    // Escreve umas coisas
    printf("=================\n");
    printf("|  CALCULADORA  |\n");
    printf("=================\n");

    while(1 == 1){
        printf("| OPERAÇÕES:\n");
        printf("| a - adição\n");
        printf("| s - subtração\n");
        printf("| m - multiplicação\n");
        printf("| d - divisão\n");
        printf("| e - sair\n");

        // Pega input
        printf("> ");
        scanf("%s", &o);

        if(o == 'a'){
            printf("Adição\nNúmeros: ");
            scanf("%i%i", &n1, &n2);
            int r = n1 + n2;
            printf("Resultado: %i\n", r);
        }

        else if(o == 's'){
            printf("Subtração\nNúmeros: ");
            scanf("%i%i", &n1, &n2);
            int r = n1 - n2;
            printf("Resultado: %i\n", r);
        }

        else if(o == 'm'){
            printf("Multiplicação\nNúmeros: ");
            scanf("%i%i", &n1, &n2);
            int r = n1 * n2;
            printf("Resultado: %i\n", r);
        }

        else if(o == 'd'){
            printf("Divisão\nNúmeros: ");
            scanf("%i%i", &n1, &n2);
            int r = n1 / n2;
            printf("Resultado: %i\n", r);
        }

        else if(o == 'e'){
            printf("Saindo...");
            break;
        }

        else{
            printf("Não entendi");
        };

    };
    return 0;
}
