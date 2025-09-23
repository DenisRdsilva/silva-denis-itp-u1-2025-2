#include <stdio.h>

int main()
{
    char temFebre;
    char temDorCabeca;
    char temDorCorpo;
    char temTosse;

    printf("Tem febre? (S/N) ");
    scanf(" %c", &temFebre);

    printf("Tem dor de cabeça? (S/N) ");
    scanf(" %c", &temDorCabeca);

    printf("Tem dor no corpo? (S/N) ");
    scanf(" %c", &temDorCorpo);

    printf("Tem tosse? (S/N) ");
    scanf(" %c", &temTosse);

    if (temFebre == 'S' && temDorCabeca == 'S' && temDorCorpo == 'S' && temTosse == 'N') {
       printf("Possível gripe");
    } else if (temFebre == 'S' && temDorCabeca == 'N' && temDorCorpo == 'N' && temTosse == 'S') {
        printf("Possível resfriado");
    } else if (temFebre == 'N' && temDorCabeca == 'S' && temDorCorpo == 'N' && temTosse == 'N') {
        printf("Possível enxaqueca");
    } else if (temFebre == 'N' && temDorCabeca == 'N' && temDorCorpo == 'N' && temTosse == 'N') {
        printf("Você parece estar bem");
    } else {
        printf("Consulte um médico para avaliação");
    }
    return 0;
}