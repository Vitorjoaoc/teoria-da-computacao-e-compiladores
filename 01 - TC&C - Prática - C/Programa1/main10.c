/*10) Receba o raio, calcule e apresente:

a. O comprimento de uma esfera: C = 2 * π * R.
b. A área de uma esfera: A = π * R2
c. O volume de uma esfera: V = 3⁄4 * π * R3
.*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float raio, resposta =  0.0;
    printf("Vamos calcular! \n");

    printf("Digite o valor do Raio: \n");
    scanf("%f", &raio);

    //O comprimento de uma esfera:
    resposta = 2 * 3.14 * raio;
    printf("O comprimento de uma esfera que tem o raio com esse valor é igual a: %.2f \n\n", resposta);

    //A área de uma esfera:
    resposta =  3.14 * pow(raio, 2);
    printf("A area de uma esfera que tem o raio com esse valor é igual a: %.2f \n\n", resposta);

    //O volume de uma esfera:
    resposta = (4* 3.14 * pow(raio, 3)) / 3;
    printf("O volume de uma esfera que tem o raio com esse valor é igual a: %.2f \n\n", resposta);
    
  
    return 0;
}