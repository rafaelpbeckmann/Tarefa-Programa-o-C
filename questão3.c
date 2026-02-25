#include <stdio.h>
#include <math.h>

int main() {
    float sensorA;
    float sensorB;
    float indicadorC;
    float indicadorD;

    printf("Digite a leitura do sensor A: ");
    scanf("%f", &sensorA);

    printf("Digite a leitura do sensor B: ");
    scanf("%f", &sensorB);

    // Calculo dos indicadores
    indicadorC = pow((sensorA - sensorB), 2);
    indicadorD = pow(sensorA, 2) - pow(sensorB, 2);

    printf("\n--- Relatorio de Divergencia ---\n");
    printf("Valor do indicador C: %.2f\n", indicadorC);
    printf("Valor do indicador D: %.2f\n", indicadorD);

    return 0;
}