#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2;
    num1 = 15;
    num2 = 20;

    int soma = num1 + num2;
    int sub = num1 - num2;
    int mul = num1 * num2;
    int div = num1 / 3;

    printf("%s %i\n", "O resultado da soma é: ", soma);
    printf("%s %i\n", "O resultado da subtração é: ", sub);
    printf("%s %i\n", "O resultado da multiplicação é: ", mul);
    printf("%s %i\n", "O resultado da divisão é: ", div);

    return 0;
}
