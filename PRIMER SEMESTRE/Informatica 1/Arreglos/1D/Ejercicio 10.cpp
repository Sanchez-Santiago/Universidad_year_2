/*
Crear un programa que permita cargar un vector con las notas de los alumnos hasta que se ingrese -1, 
como máximo se pueden cargar 20 notas. En caso de que el alumno esté ausente se colocará como nota 
igual a cero. Luego, crear un menú de opciones y mostrar lo siguiente:
Nota mayor y nota menor.
Cantidad de notas ingresadas
Cantidad de aprobados, cantidad de desaprobados y cantidad de ausentes.
*/
#include <iostream>
#include <stdio.h>
#include <string.h>

#define LES 20

int main(int argc, char const *argv[])
{
    int i=0, nota[LES]={0}, notaAux=0, apro=0, desapro=0, mayor=0,menor=0, can=0, ausent=0;
    char menu=' ';
    
    printf("\nIngresas las notas a continuacion (-1=fin): \n");



    do {
		printf("Nota %d: ", can+1);
		scanf("%d", &notaAux);
		
		if (notaAux != -1 && notaAux >=0 && notaAux<=10) 
        {
			
			nota[can] = notaAux;
			can++;
			
			if (notaAux == 0) {
				ausent++;
			}else{ 
				if (notaAux >= 4) {
					apro++;
				} else {
					desapro++;
				}
			}
		}else
        {
			if(notaAux==-1)
            {
				printf("\n------------Fin de la carga.------------\n");
			}
            else
            {
				printf("Nota invalida. Ingrese otra.\n");
			}
            
		}
	}while(notaAux!=-1);

    for ( i = 0; i < LES; i++)
    {
        if (i==0)
            {
                mayor=nota[i];
                menor=nota[i];
            }
            else
            {
                if (nota[i]>mayor && nota[i]!=0) 
                {
                    mayor=nota[i];
                }
                if (nota[i]<menor && nota[i]!=0)
                {
                    menor=nota[i];
                }
            }
    }
    

    do
    {
        printf("Elija lo que desea ver: \na.La nota mayo y menor\nb.cantidad de notas\nc.cantidad de aprobados, desaprobados y ausentes\nd.fin\n");
        scanf(" %c", &menu);
        switch (menu)
        {
        case 'a':
            printf("\nLa mayor nota es %d y la menor es %d \n", mayor, menor);
            break;
        case 'b':
        printf("\nLa cantidad de notas son %d\n", can);
        break;
        case 'c':
            printf("\nLos aprobados son %d, los desaprobados %d y los ausentes son %d \n", apro, desapro, ausent);
            break;
        case 'd':
            break;
        default:
            printf("Invalido");
        }
    } while (menu != 'd');
    
    
    return 0;
}
