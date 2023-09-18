/*4) Faça um programa que receba o salário de um funcionário, calcule e mostre o novo
salário, sabendo-se que ele teve um aumento de 25%.*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    float salario, novoSalario = 0.0;
   
    printf("Qual o seu salário atual? \n");
    scanf("%f", &salario);

    novoSalario = salario + (salario * 25/100);

     printf("Você recebeu um aumento de 25%% seu salario passa a ser R$%.2f \n", novoSalario);

    return 0;
}