#include <stdio.h>

typedef struct { //Tipagem para o horário no modo 0
    int hora;
    int minuto;
} Horario;

typedef struct { //Tipagem para o horário no modo 1 com AM/PM
    int hora;
    int minuto;
    int AMouPM;
} Horario1;

int main()
{
    int tipoDeRonda, hora, minuto;
    Horario inicio;

    int primeiraRonda = 60;  //horários das rondas em minutos a partir do início
    int segundaRonda = 130;
    int terceiraRonda = 280;
    int quartaRonda = 725;

    printf("Qual o horário do início da ronda? e o tipo de ronda (0 ou 1)? ");
    scanf("%d %d %d", &inicio.hora, &inicio.minuto, &tipoDeRonda);

    Horario aumentoModo0(int hora, int minuto) {
        while (minuto > 60) {
            minuto = minuto - 60;
            hora++;
        }

        while (hora >= 24) {
            hora = hora - 24;
        }

        Horario horario = {hora, minuto};
        return horario;
    }

    Horario1 aumentoModo1(int hora, int minuto) {
        int AMouPM = (hora >= 12); // 0 = AM, 1 = PM

        while (minuto >= 60) {
            minuto = minuto - 60;
            hora++;
        }

        while (hora >= 12) {
            hora = hora - 12;
            AMouPM = !AMouPM;
        }

        Horario1 horario = {hora, minuto, AMouPM};
        return horario;
    }

    if (tipoDeRonda == 0) {
        Horario h;
        h = aumentoModo0(inicio.hora, inicio.minuto);
        printf("%02d:%02d\n", h.hora, h.minuto);
        h = aumentoModo0(inicio.hora, inicio.minuto + primeiraRonda);
        printf("%02d:%02d\n", h.hora, h.minuto);
        h = aumentoModo0(inicio.hora, inicio.minuto + segundaRonda);
        printf("%02d:%02d\n", h.hora, h.minuto);
        h = aumentoModo0(inicio.hora, inicio.minuto + terceiraRonda);
        printf("%02d:%02d\n", h.hora, h.minuto);
        h = aumentoModo0(inicio.hora, inicio.minuto + quartaRonda);
        printf("%02d:%02d\n", h.hora, h.minuto);
    } else if (tipoDeRonda == 1) {
        Horario1 h;
        h = aumentoModo1(inicio.hora, inicio.minuto);
        printf("%02d:%02d %s\n", h.hora, h.minuto, h.AMouPM ? "PM" : "AM");
        h = aumentoModo1(inicio.hora, inicio.minuto + primeiraRonda);
        printf("%02d:%02d %s\n", h.hora, h.minuto, h.AMouPM ? "PM" : "AM");
        h = aumentoModo1(inicio.hora, inicio.minuto + segundaRonda);
        printf("%02d:%02d %s\n", h.hora, h.minuto, h.AMouPM ? "PM" : "AM");
        h = aumentoModo1(inicio.hora, inicio.minuto + terceiraRonda);
        printf("%02d:%02d %s\n", h.hora, h.minuto, h.AMouPM ? "PM" : "AM");
        h = aumentoModo1(inicio.hora, inicio.minuto + quartaRonda);
        printf("%02d:%02d %s\n", h.hora, h.minuto, h.AMouPM ? "PM" : "AM");
    }

    return 0;
}
