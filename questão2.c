#include <stdio.h>
#include <math.h>

int main() {
    float lado;
    float perimetro;
    float area;
    float diagonal;

    printf("Digite a medida do lado da placa: ");
    scanf("%f", &lado);

    perimetro = 4 * lado;
    area = lado * lado;
    diagonal = lado * sqrt(2);

    printf("\n--- Resultados ---\n");
    printf("Tamanho das bordas: %.2f\n", perimetro);
    printf("Area para verniz: %.2f\n", area);
    printf("Comprimento da diagonal: %.2f\n", diagonal);

    return 0;
}