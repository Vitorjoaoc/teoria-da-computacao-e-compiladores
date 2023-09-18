/*8) Receba o peso de uma pessoa, calcule e apresente o novo peso:

a. Se a pessoa engordar 15%.
b. Se a pessoa emagrecer 20%.*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    float peso, newPeso = 0.0;

    
    printf("Qual o seu peso atual? \n");
    scanf("%f", &peso);

    newPeso = peso + (peso * 15 / 100);
    printf("Se você engorda 15%% seu novo peso sera de: %.2f \n", newPeso);
    newPeso = 0.0;

    newPeso = peso + (peso * 20 / 100);
    printf("Se você engorda 20%% seu novo peso sera de: %.2f \n", newPeso);
    

    return 0;
}