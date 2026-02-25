#include <stdio.h>
#include <math.h>

int main() {
    float raio;
    float area;
    float comprimento;
    float pi = 3.1415;

    printf("Digite o valor do raio do adesivo: ");
    scanf("%f", &raio);

    area = pi * pow(raio, 2);
    comprimento = 2 * pi * raio;

    printf("\n--- Resultados ---\n");
    printf("Material para area: %.2f\n", area);
    printf("Material para comprimento: %.2f\n", comprimento);

    return 0;
}