//1) Receba três notas, calcule e apresente a média aritmética delas.
#include <stdio.h>

int main(int argc, char const *argv[])
{

    float n1, n2, n3, media = 0.0;
    

    printf("Digite a 1ª: \n");
    scanf("%f", &n1);

    printf("Digite a 2ª: \n");
    scanf("%f", &n2);

    printf("Digite a 3ª: \n");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3.0;

    printf("A media entre as 3 notas, %.2f, %.2f e %.2f é = %.2f", n1, n2, n3, media);

   
    return 0;
}

