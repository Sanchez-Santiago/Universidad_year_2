#include <stdio.h>
#include <string.h>

#define CANT_JUG 40
#define LEN 30

int cargar_jugadores(char nombre[CANT_JUG][LEN], const int n);
void imprimir_jugadores(char nombre[CANT_JUG][LEN], int * puntos, const int n);
void ordenar_jugadores_nombres(char nombre[CANT_JUG][LEN], const int n);
void ordenar_jugadores_puntos(char nombre[CANT_JUG][LEN], int * puntos, const int n);
void inicializar_puntos(int * puntos, const int n);

int main (void)
{
    char nombre[CANT_JUG][LEN];
    int puntos[CANT_JUG];
    int cant,cant_ronda;
    int i;
    int ganador;

    inicializar_puntos(puntos,CANT_JUG);

    cant=cargar_jugadores(nombre,CANT_JUG);
    ordenar_jugadores_nombres(nombre,cant);
    
    //Primera iteración

    cant_ronda=cant;

    do{
        for(i=0;i<cant_ronda;i=i+2)
        {
            printf("\nEl partido es entre (0)%s y (1)%s, defina el ganador: ",nombre[i],nombre[i+1]);
            scanf("%d",&ganador);
            puntos[ganador+i]++;
        }

        ordenar_jugadores_puntos(nombre,puntos,cant);
        printf("\nPUNTUACION PARCIAL\n");
        imprimir_jugadores(nombre,puntos,cant);
        cant_ronda=cant_ronda/2;

    }while(cant_ronda>1);

    printf("\nPUNTUACION FINAL\n");

    imprimir_jugadores(nombre,puntos,cant);


    return 0;
}

int cargar_jugadores(char nombre[CANT_JUG][LEN], const int n)
{
    int cant_jug=0;
    char nombre_cargar[LEN];

    printf("\nIngrese el nombre de un jugador: ");
    gets(nombre_cargar);
    while(strcmp(nombre_cargar,"fin")!=0)
    {
        strcpy(nombre[cant_jug],nombre_cargar);
        cant_jug++;
        printf("\nIngrese el nombre de un jugador: ");
        gets(nombre_cargar);
    }
    
    return cant_jug;
}

void imprimir_jugadores(char nombre[CANT_JUG][LEN], int * puntos, const int n)
{
    int i;

    printf("\n\n|%30s|%10s|\n","Nombre","Puntos");

    for(i=0;i<n;i++)
        printf("|%30s|%10d|\n",nombre[i],puntos[i]);
}

void ordenar_jugadores_nombres(char nombre[CANT_JUG][LEN], const int n)
{
    int i,j;
    char aux[LEN];

    for(i=0;i<n;i++)
        for(j=0;j<n-1-i;j++)
        {
            if(strcmp(nombre[j],nombre[j+1])>0)
            {
                strcpy(aux,nombre[j]);
                strcpy(nombre[j],nombre[j+1]);
                strcpy(nombre[j+1],aux);
            }
        }
}

void ordenar_jugadores_puntos(char nombre[CANT_JUG][LEN], int * puntos, const int n)
{
    int i,j,aux_puntos;
    char aux_nombre[LEN];

    for(i=0;i<n;i++)
        for(j=0;j<n-1-i;j++)
        {
            if(puntos[j]<puntos[j+1])
            {
                aux_puntos=puntos[j];
                puntos[j]=puntos[j+1];
                puntos[j+1]=aux_puntos;

                strcpy(aux_nombre,nombre[j]);
                strcpy(nombre[j],nombre[j+1]);
                strcpy(nombre[j+1],aux_nombre);
            }
        }
}

void inicializar_puntos(int * puntos, const int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        puntos[i]=0;
    }
}