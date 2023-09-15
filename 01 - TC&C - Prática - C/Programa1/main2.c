/*
2) Receba o ano de nascimento de uma pessoa, o ano atual e imprima:

a. A idade da pessoa no ano atual.
b. A idade que a pessoa terá em 2050.
*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int anoN, anoA, idade;
   
    printf("Digite o Ano em que você nasceu: \n");
    scanf("%d", &anoN);

    printf("Digite o ano em que estamos: \n");
    scanf("%d", &anoA);

    idade = anoA - anoN;

    printf("Vooce tem %d anos.\n", idade);
    
    return 0;
}
