#include <stdio.h>
int main()
{
    float nota1;
    float nota2;
    float nota3;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    float media = (nota1 + nota2 + nota3)/3;

    if (media >= 7) {
        printf("Aluno está aprovado");
    } else if (media >= 4 && media < 7) {
         printf("Aluno está em recuperação\n");
         float mediaRecuperacao = 2*5 - media;
         printf("Precisa tirar na prova final: %.1f\n", mediaRecuperacao);
    }
    else if (media < 4) {
         printf("Aluno está reprovado");
    }
    return 0;
}