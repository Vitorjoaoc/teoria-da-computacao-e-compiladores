/*7) Receba o valor do salário mínimo e o valor do salário de um funcionário. O algoritmo
deve calcular e apresentar a quantidade de salários mínimos que esse funcionário
recebe.*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    float sMinimo, salario, quantidade = 0.0;

    
    printf("Qual o valor atual do Salário mínimo? \n");
    scanf("%f", &sMinimo);

    printf("Qual o valor atual do seu Salário? \n");
    scanf("%f", &salario);

    quantidade =  salario / sMinimo;

     printf("O seu salario de R$%.2f equivale a %.0f salarios míminos. Sendo mais exato equivale a %.2f \n", salario, quantidade, (salario/sMinimo));

    return 0;
}