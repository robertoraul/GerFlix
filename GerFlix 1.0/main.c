#include <stdio.h>
#include <stdlib.h>
#include "Serie.h"
#include "Usuario.h"
#define TAMSERIE 20
#define TAMUSUARIO 100


int main()
{
    eSerie listaDeSeries[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];

    inicializarSeriesEstado(listaDeSeries, TAMSERIE);
    inicializarSeriesHardCode(listaDeSeries);

    inicializarUsuariosEstado(listaDeUsuarios,TAMUSUARIO);
    inicializarUsuariosHardCode(listaDeUsuarios);


    mostrarListaSeries(listaDeSeries,TAMSERIE);
    mostrarUsuarioConSuSerie(listaDeUsuarios, TAMUSUARIO, listaDeSeries, TAMSERIE);



    /*

    1. Mostrar el listado de series
    2. Mostrar el listado de usuarios
    3. Mostrar el listado de Usuarios con el nombre de la serie que ve
    4. Mostrar por cada serie, el nombre de los usuarios que la ven.

agregar para el viernes altas bajas series y usuario,
al dar de alta un usuario muestro las opciones de las series q ve.



    */

    return 0;
}
