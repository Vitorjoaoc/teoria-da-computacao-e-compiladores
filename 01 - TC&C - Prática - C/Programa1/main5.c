/*5) Calcule e apresente a área de um losango. As diagonais maior e menor do losango
devem ser informadas pelo usuário. OBS: AREA = (DIAGONAL MAIOR * DIAGONAL
MENOR) / 2.*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    float diagMaior, diagMenor, area = 0.0;

    printf("Vamos calcular a area de um losango! \n");
   
    printf("Digite o tamanho da Diagonal Maior: \n");
    scanf("%f", &diagMaior);

    printf("Digite o tamanho da Diagonal Menor: \n");
    scanf("%f", &diagMenor);

    area = (diagMaior * diagMenor) / 2;

     printf("A area total deste losango é igual a: %.2f \n", area);

    return 0;
}