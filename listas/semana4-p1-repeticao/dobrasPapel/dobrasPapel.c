#include <stdio.h>

int main()
{
    float ladoMaior, ladoMenor, tamanhoBolso;
    int contadorDobras = 0;

    printf("Qual o comprimento do lado maior? ");
    scanf("%f", &ladoMaior);

    printf("Qual o comprimento do lado menor? ");
    scanf("%f", &ladoMenor);

    printf("Qual o comprimento do bolso? ");
    scanf("%f", &tamanhoBolso);

    while (ladoMaior > tamanhoBolso || ladoMenor > tamanhoBolso) {
        ladoMaior = ladoMaior / 2; //dobra o lado maior
        contadorDobras = contadorDobras + 1;
        if (ladoMaior < tamanhoBolso) { //para se o lado maior já cabe no bolso
            break;
        }

        ladoMenor = ladoMenor / 2; //dobra o lado menor
        contadorDobras = contadorDobras + 1;
        if (ladoMenor < tamanhoBolso) { //para se o lado menor já cabe no bolso
            break;
        }
    }

    printf("%d dobras", contadorDobras);

    return 0;
}