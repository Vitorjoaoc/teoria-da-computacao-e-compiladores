/*Calcule e mostre a tabuada de multiplicação de um número informado pelo usuário no
teclado.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero;
    printf("Vamos calcular! \n");

    printf("Digite um número e vamos calcular a sua tabuada: \n");
    scanf("%d", &numero);

    for (int i = 0; i <= 10; i++){
        printf("%d X %d = %d \n",numero, i, numero * i );
    }
    
    return 0;
}