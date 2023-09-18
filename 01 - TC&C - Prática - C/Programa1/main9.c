/*9) Receba os valores dos dois catetos de um triângulo, calcule e apresente o valor da
hipotenusa. OBS - Teorema de Pitágoras: a
2 = b2 + c2
.*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float catetoOposto, catetoAdjacente, hipotenusa = 0.0;

    printf("Calculando a Hipotenusa! \n");

    printf("Qual o valor do Cateto Oposto? \n");
    scanf("%f", &catetoOposto);

    printf("Qual o valor do Cateto Adjacente? \n");
    scanf("%f", &catetoAdjacente);

    hipotenusa = sqrt(pow(catetoOposto, 2) + pow(catetoAdjacente, 2));

    printf("De acordo com os dados passados o valor da Hipotenusa é igual a: %.2f \n", hipotenusa);
   
    return 0;
}