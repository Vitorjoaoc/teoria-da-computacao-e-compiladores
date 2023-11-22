#include <stdio.h>

void NumerosRecursivamente(int n, int limite) {
    if (n > limite) {
        return;
    }
    int resultado;
    if (n % 2 == 1) {
        resultado = n / 2 + 1;
    } else {
        resultado = -n / 2;
    }
    printf("[%d, %d], ", n, resultado);
    NumerosRecursivamente(n + 1, limite);
}

int main() {
    int limite;
    printf("Informe o limite: ");
    scanf("%d", &limite);

    NumerosRecursivamente(1, limite);

    return 0;
}