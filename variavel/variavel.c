#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    1) char - 1 byte ou 8 bits
    2) int - 2 bytes ou 16 bits - 32768 + 32767
    3) float - 4 bytes ou 32 bits
    4) void - vazio
    5) double - 8 bytes ou 64 bits

    10 * char (1byte) = 10 bytes = 0,01kb
    1kb = 1000bytes
    1mb = 1000kb = 1000000bytes
    1gb = 1000mb = 1000000kb = 1000000000bytes = 8000000000bits
    4gb = 4000mb = 4000000kb = 4000000000bytes = 32000000000bits
    */

//    printf("%tipo_de_saida", valor_a_ser_impresso);

    int num = 38;
//    int outro_num = 12;
    float f = 2.2;

//    printf("%p\n", num);
//    printf("%p\n", outro_num);
    printf("%i - %f", num, f);

    return 0;
}
