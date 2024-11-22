#include <stdio.h>
#include <stdlib.h>
typedef struct {
int dia;
int mes;
int ano;
}Data;

typedef struct {
int hora;
int minutos;
int segundos;
}Horario;

typedef struct {
    Data data;
    Horario horario;
    char compromisso[100];

}compromisso;

int main()
{
    compromisso com = {
     .data = {26,10,2005},
     .horario = {8,55,10},
     .compromisso =  "eu nasci!",
    };

    printf("data: %d/%d/%d", com.data.dia, com.data.mes, com.data.ano);







    }

    return 0;
}
