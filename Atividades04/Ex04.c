/*
ALUNO: João Vitor Garcia Aguiar Mintz
RA: 10440421
*/


#include <stdio.h>

void yyy(int *hora, int *minutos, int soma_minutos);

int main() {

    int hora, min, somarMin;

    printf("Indique as hora:minuto: ");
    scanf("%d:%d", &hora, &min);

    printf("\nHoras colocadas: %d:%d", hora, min);


    printf("\n\nIndique quantos minutos devem ser adicionados: ");
    scanf("%d", &somarMin);

    yyy(&hora, &min, somarMin);

    printf("Horas atualizadas: %02d:%02d", hora, min);

    return 0;
}

void yyy(int *hora, int *minutos, int soma_minutos) { 
    *minutos += soma_minutos;
    *hora += *minutos / 60;
    *minutos = *minutos % 60;
}
