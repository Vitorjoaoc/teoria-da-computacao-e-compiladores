/*6) Receba uma temperatura em Celsius, calcule e mostre essa temperatura em Fahrenheit.
OBS: F = (C * 1,8) + 32.*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    float tempCeusius, tempFah = 0.0;

    printf("Conversão de Celsius para Fahrenheit. \n");
   
    printf("Digite a temperatura em Celsius: \n");
    scanf("%f", &tempCeusius);

    tempFah = (tempCeusius * 1.8) + 32;

     printf("A tempartura de %.2f°C em Fahrenheit é igual a: %.2f°F \n",tempCeusius, tempFah);

    return 0;
}