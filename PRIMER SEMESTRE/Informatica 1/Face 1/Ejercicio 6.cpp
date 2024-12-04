/*
Crear un programa que permita cargar un vector de 5 números enteros. 
Luego, mostrar el número menor y el número mayor de los valores ingresados.
*/
#include <iostream>
#include <stdio.h>
#include <string.h>

#define LES 5

//void maYor(int *vec, int lim);

int main(int argc, char const *argv[])
{

    int vector[LES]={0}, i=0, mayor=0, menor=0;

    for (i = 0; i < LES; i++)
    {
        printf("\nIngreas el numero del lugar %d: ", i+1);
        scanf(" %d", &vector[i]);
    }
    mayor = vector[0];
	menor = vector[0];
	for (i = 1; i < 5; i++) 
	{
		if (vector[i] > mayor) 
		{
			mayor = vector[i];
		}
		if (vector[i] < menor) 
		{
			menor = vector[i];
		}
	}
	

   /*for (ii = 0; ii < LES; ii++)
    {
        if (i==0)
       {
        mayor=vector[ii];
        menor=vector[ii];
       }
       else
       {
        if (vector[ii]>mayor)
        {
            mayor=vector[ii];
        }
        if (vector[ii]<menor && vector[ii]!=0)
        {
            menor=vector[ii];
        }
       }
    }
    */

    //maYor(vector, LES);
    /*
    for  (int ii = 0; ii < LES; ii++)
    {
        printf("%s\n", &vector[ii]);
    }
    */
    
    printf("Mayor: %d\nMenor: %d\n", mayor, menor);
    
    return 0;
}


void maYor(int *vec, int lim)
{
    int i=0, j=0, aux=0;
    for(i=0;i<lim-1;i++)
    {
        for(j=0;j<lim-1-i;j++)
        {
            if(vec[j]>vec[j+1])
            {
                aux=vec[j];
                vec[j]=vec[j+1];
                vec[j+1]=aux;
            }
        }   
       
    }
   
}       