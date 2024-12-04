/*
Las computadoras están jugando un papel creciente en la educación. 
Escriba un programa que ayudará a un alumno a aprender a multiplicar. 
Utilice la función srand para generar dos números enteros positivos de un dígito. 
A continuación deberá escribir una pregunta en pantalla, por ejemplo:

¿Cuanto es 6 veces 7?, luego escribe la respuesta el alumno. 
Las operaciones y resultados son almacenados en una matriz de 4 columnas y 5 filas.

Al finalizar las 5 preguntas, se verifican y se muestran en pantalla 
los resultados obtenidos. En caso de que el alumno cometió un error, 
mostrar el resultado correcto. Por último, calcular cuántas preguntas 
respondió correctamente el alumno, dependiendo la cantidad de respuestas 
correcta escribir el siguiente mensaje:
5 respuestas correctas. ¡Felicitaciones!
Entre 3 y 4. ¡Bien!, Vas por buen camino.
2 o menos respuestas correctas. Hay que practicar más.
*/

#include <iostream>
#include <stdio.h>
#include <ctime>

#define LES 4
#define FILA 5
#define DOS 2

void geneNum(int numeros[FILA][LES], int lim);
void multiplicacion(int numer[FILA][LES], int lim);
void  prgunta(int nums[FILA][LES],int multi);

int main(int argc, char const *argv[])
{
    int num[FILA][LES]={0}, mul=0;

    geneNum(num, LES);
    multiplicacion(num, LES);
    prgunta(num, mul);

    return 0;
}

void geneNum(int numeros[FILA][LES], int lim)
{
    int i=0, j=0;
    srand(time(NULL));
    for ( i = 0; i < FILA; i++)
    {
        //for (j = 0; j < DOS; j++)
        //{
            numeros[i][0]=rand()%11+1;
            numeros[i][1]=rand()%11+1;
        //}
    }
}

void multiplicacion(int numer[FILA][LES], int lim)
{
    int ii=0, jj=0, mul=0;
    for ( ii = 0; ii < FILA; ii++)
    {
        //for ( jj = 0; jj < DOS; jj++)
        //{
            numer[ii][3]=numer[ii][0]*numer[ii][1];
        //}
        
    }
    printf("Matriz de 5x5 de numeros pares\n\n");
    
    for ( jj = 0; jj < FILA; jj++)
    {
        for ( ii = 0; ii < LES; ii++)
        {
            printf("%d\t", numer[jj][ii]);
        }
        printf("\n");
    }
    printf("\n");
}

void  prgunta(int nums[FILA][LES],int multi)
{
    int jj=0, ii=0;
    printf("\n\n");
    for ( jj = 0; jj < FILA; jj++)
    {
        
        printf("\nIngresa el resultado de la sigiente multiplicasion entre %d x %d:", nums[jj][0], nums[jj][1]);
        scanf("%d", &nums[jj][2]);
        
    }

    for ( jj = 0; jj < 5; jj++)
    {
        for ( ii = 0; ii < 4; ii++)
        {
            printf("%d\t", nums[jj][ii]);
        }
        printf("\n");
    }

}

