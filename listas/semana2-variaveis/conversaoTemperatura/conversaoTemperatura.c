#include <stdio.h>
int main() {
    float celsius;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    float fahrenheit = (celsius*(9/5))+32; 
    float kelvin = celsius + 273.15;

    printf("Temperatura em Fahrenheit: %.1f\n", fahrenheit);
    printf("Temperatura em Kelvin: %.1f", kelvin);
    return 0;
}