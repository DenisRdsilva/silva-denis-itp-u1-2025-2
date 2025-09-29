#include <stdio.h>

int main() {
    float p, q;
    int melhorX = 0, melhorY = 0;
    float melhorRazao = 0.0;

    printf("Digite o preco de venda p: ");
    scanf("%f", &p);

    printf("Digite o preco de producao q: ");
    scanf("%f", &q);

    for (int x = 2; x <= 10; x++) {
        for (int y = 1; y < x; y++) {
            float receita = y * p;
            float custo = x * q;

            if (receita >= custo) { 
                float razao = x / y;
                if (razao > melhorRazao) {
                    melhorRazao = razao;
                    melhorX = x;
                    melhorY = y;
                }
            }
        }
    }

    if (melhorX > 0) {
        printf("A melhor promocao eh: leve %d pague %d", melhorX, melhorY);
    } else {
        printf("Nao tem como montar promocao sem prejuizo.\n");
    }

    return 0;
}
