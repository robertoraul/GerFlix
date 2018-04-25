#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Serie.h"
#include "Usuario.h"


void inicializarSeriesEstado(eSerie series[], int cant){

    for(int i = 0; i < cant; i++){
        series[i].estado = 0;
    }
}

void inicializarSeriesHardCode(eSerie series[]){
    int id[5] = {100,101,102,103,104};
    char nombre[][50] = {"TBBT","TWD","GOT","BB","LCDP"};
    char genero[][50] = {"Comedia","Terror","Suspenso","Policial","Policial"};
    int cantidad[5] = {10,9,7,5,2};

    for(int i = 0; i < 5; i++){
        series[i].idSerie=id[i];
        series[i].cantidadTemporadas=cantidad[i];
        series[i].estado = 1;
        strcpy(series[i].nombre, nombre[i]);
        strcpy(series[i].genero, genero[i]);
    }
}


void mostrarListaSeries(eSerie series[], int cant){
    for(int i = 0; i < cant; i++){
        if(series[i].estado == 1){
            printf("ID: %3d, Nombre: %7s, Genero: %10s, Temporadas: %10d\n",
                    series[i].idSerie, series[i].nombre, series[i].genero, series[i].cantidadTemporadas);
        }
    }
}

void mostrarListaSeriesConUsuario(eSerie series[], int cantS, eUsuario usuarios[], int cantU){
    for(int i = 0; i < cantS; i++){
        for(int j = 0; j < cantU; j++){
            if(series[i].idSerie == usuarios[j].idSerie){

            printf("id:%d6, nombre:%s10, userNom: %s\n", series[i].idSerie, series[i].nombre, usuarios[j].nombre);
            }
        }

    }

}
