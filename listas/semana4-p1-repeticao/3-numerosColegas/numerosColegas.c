#include <stdio.h>

int main() {
    int primeiroNumero, segundoNumero;

    printf("Qual o primeiro número? ");
    scanf("%d", &primeiroNumero);

    printf("Qual o segundo número? ");
    scanf("%d", &segundoNumero);

    int somaDivisores(int n) {
        int soma = 0;
        for (int i = 1; i <= n/2; i++) { 
            if (n % i == 0) {
                soma += i;
            }
        }
        return soma;
    }

    int diferenca(int a, int b) {
        return (a > b) ? (a - b) : (b - a);
    }

    int DA = somaDivisores(primeiroNumero);
    int DB = somaDivisores(segundoNumero);

    if (diferenca(DA, segundoNumero) <= 2 && diferenca(DB, primeiroNumero) <= 2) {
        printf("S");
    } else {
        printf("N");
    }

    return 0;
}
