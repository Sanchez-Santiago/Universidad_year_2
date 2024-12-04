/*
Se pide hacer un programa que permita computar los resultados de la 
prueba olímpica de gimnasia en anillas. Cada uno de los atletas 
realiza su ejercicio y luego es puntuado por un jurado de cinco 
miembros. El operador ingresa el nombre del atleta, el país al que 
representa y la nota de los cinco jueces. Para obtener la nota final 
se descarta el valor más alto y el más bajo del jurado y se promedian 
los restantes tres. 

Al finalizar la competencia (se ingresa un atleta llamado “eof”), se imprimen 
los resultados de los participantes que van al podio, indicando quien ganó 
la medalla de oro, de plata o de bronce. No se conoce la cantidad de atletas 
a priori.
*/

#include <iostream>
#include <stdio.h>
#include <string.h>

#define LES 20


int cargar_jugadores(char nombre[LEN],int n);

int main(int argc, char const *argv[])
{
    int cantidad=0, canti=0 ;
    char  Nombre[LES];

    canti=cargar_jugadores(Nombre, cantidad);
    printf("\n%D\n%s", canti, Nombre);


    return 0;
}


int cargar_jugadores(char nombre[LEN], int n)
{
    int cant_jug=0;
    char nombre_cargar[LEN];

    printf("\nIngrese el nombre de un jugador: ");
    scanf("%s", &nombre_cargar);
    while(strcmp(nombre_cargar,"fin")!=0)
    {
        strcpy(nombre[cant_jug],nombre_cargar);
        cant_jug++;
        printf("\nIngrese el nombre de un jugador: ");
        gets(nombre_cargar);
    }
    
    return cant_jug;
}