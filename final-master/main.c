#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funciones.h"
#define RAND_MAX 10

int main()
{

    ArrayList* letras = al_newArrayList();
    ArrayList* letrasCoincidentes = al_newArrayList();

    int opcion;
    int salir = 0;
    char cadena[100];



    do
    {
        opcion = generic_menu();

        switch(opcion)
        {
            case 1:
                parseCargaDeDatos(letras,"datos.csv");
                main_mostrarLista(letras);
                finFuncion();
                break;

                case 2:
                setVocalOConsonante(letras);
                main_mostrarLista(letras);
                finFuncion();
                break;

            case 3:
                printf("\nIngrese una cadena:\n");
                fflush(stdin);
                gets(cadena);
                funcionLoca(letras, cadena);
                main_mostrarLista(letrasCoincidentes);
                //parseGuardarDatos(alumnosMayores,"out.csv");
                finFuncion();
                break;

            /*case 4:
                al_map(alumnos,cargarNota);
                main_mostrarNota(alumnos);
                finFuncion();
                break;

            case 5:
                parseGuardarNotas(alumnos,"Notas.csv");
                finFuncion();
                break;*/

            case 0:
                printf("-END-\n");
                salir = 1;
                break;

            default:
                printf("\nOpcion invalida. Intente otra vez.\n");
                system("pause");
                system("cls");
                break;
        }
    }
    while(salir == 0);

    return 0;
}
