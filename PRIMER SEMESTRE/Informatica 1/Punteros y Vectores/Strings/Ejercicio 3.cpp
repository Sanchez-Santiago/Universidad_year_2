#include <iostream>
#include <stdio.h>
#include <string.h>

#define M 20
#define N 30

void Muestra(char nombres[N][M], float promdio[N], int max, int min);

int main(int argc, char const *argv[])
{
    char nombres[N][M]={0};
    float promedio[N]={0};
    int muest=0;

    for (int i = 0; i < M; i++)
    {
        printf("\nIngresa el nombre de los 30 alumnos a continiacion: \n");
        scanf("%s",nombres[i]);
        printf("\nIngrese el promedi del alumno del \n");
        scanf("%s", &promedio);
    }
    
    printf("0<Promedios<4:\n");
    Muestra(nombres, promedio, 4, 0);
    printf("4=<Promedios<7:\n");
    Muestra(nombres, promedio, 7, 4);
    printf("7<=Promedios<=10:\n");
    Muestra(nombres, promedio, 10, 7);
    
    


    return 0;
}
    

void Muestra(char nombres[N][M], float promdio[N], int max, int min)
{
    //  Muestras (0,4) , [4,7) y [7,10].
    for (int ii = max; ii >= min; ii--){
        for(int jj=0; jj<N; jj++){
            if(promdio[jj]==ii){
                printf("nombre: %s, promedio: %f\n", nombres[jj], promdio[jj]);
            }
        }
    }
}