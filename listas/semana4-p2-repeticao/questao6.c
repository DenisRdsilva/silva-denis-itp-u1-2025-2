#include <stdio.h>

int main()
{
    for (int a = 1; a < 1000; a++) {
        for (int b = 1; b <= a; b++) {
            for (int c = 1; c <= b; c++) {
                if (a*a + b*b == c*c) {
                    printf("a: %d ", a);
                    printf("b: %d ", b);
                    printf("c: %d ", c);
                }
            }
        }
        printf("\n");
    }

    return 0;
}