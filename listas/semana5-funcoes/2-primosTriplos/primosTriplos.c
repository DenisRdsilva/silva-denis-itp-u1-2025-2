#include <stdio.h>
#include <math.h>

int main()
{
    for (int i = 2; i <= 50000; i++) {
        int checarPrimo(int n) { //retorna 1 se n não houverem divisores para n no intervalo entre 2 e a raiz quadrada de n
            for (int d = 2; d <= (int)sqrt(n); d++) {
                if (n % d == 0) return 0;
            }
            return 1;
        }

        if (checarPrimo(i) && checarPrimo(i + 2) && checarPrimo(i + 6)) {
            printf("(%d, %d, %d)\n", i, i + 2, i + 6);
        }
    }

    return 0;
}
