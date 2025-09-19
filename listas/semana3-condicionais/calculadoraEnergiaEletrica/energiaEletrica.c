#include <stdio.h>
#include <string.h>

int main()
{
    float consumo;
    char tipoConsumidor;

    printf("Digite o consumo de energia em kWh: ");
    scanf("%d", &consumo);

    printf("Digite o tipo de consumidor: ");
    scanf("%c", &tipoConsumidor);

    if (tipoConsumidor == "R") {
        float taxaResidencial = 15 + 0.6*consumo;
        printf("Total: %.2f", taxaResidencial);
    } else if (tipoConsumidor == "C") {
        float taxaComercial = 15 + 0.48*consumo;
        printf("Total: %.2f", taxaComercial);
    } else if (tipoConsumidor == "I") {
        float taxaIndustrial = 15 + 1.29*consumo;
        printf("Total: %.2f", taxaIndustrial);
    }

    return 0;
}