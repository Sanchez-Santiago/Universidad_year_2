/*Dise�ar y codificar un programa que permita el ingreso de las notas obtenidas 
de las asignaturas que ha cursado este cuatrimestre en un arreglo 5x7 de dos 
dimensiones. Por ejemplo:
Asig.	Parcial 1	Parcial 2	Recup. 1 	Recup. 2 	Resultado de la cursada 	 Final
1	
2			 	 	 	 
3			 	 	 	 
4			 	 	 	 
5	 	 	 	 	 	 
El programa tendr�a que controlar lo siguiente: 
- Las notas posibles son de 1 a 10. 
- Si la nota de parcial 1 es mayor o igual a 4, la columna recuperatorio 1 
el valor es cero. �dem para el caso de parcial 2.
- La columna resultado de la cursada puede asumir los siguientes valores: 
1-Regular 2-Libre
- En el caso de que la asignatura quede libre (2) no podr� rendir final, por lo 
tanto la columna Final es cero.
Luego crear un men� de opciones que muestre los siguientes datos por medio de funciones:
- Mostrar la cantidad de asignaturas regularizadas. (Funci�n retorna valor)
- Mostrar un listado de las asignaturas que deber� recursar. (Funci�n void)
- Mostrar el promedio de las notas finales (no contabilizar aquellas asignaturas 
que no se han rendido). (Retorna valor)
- Mostrar un listado completo de las asignaturas (Funci�n void)
Nota: las notas pueden ser cargadas utilizando numeros aleatorios o carga manual.
*/
#include <iostream>

using namespace std;

void mostrar_notas (int [5][7]);
int contar_regular (int [5][7]);
float calcular_promedio (int [5][7]);
void mostrar_libre (int [5][7]);


int main(int argc, char *argv[]) 
{
	int notas[5][7]={0}, i=0;
	char opcion=' ';
	srand(time(NULL));
	for (i=0;i<5;i++)
	{
		notas[i][0]=i+1;
		notas[i][1]=rand()%10+1;
		if (notas[i][1]<4)
		{
			notas[i][3]=rand()%10+1;
		}
		notas[i][2]=rand()%10+1;
		if (notas[i][2]<4)
		{
			notas[i][4]=rand()%10+1;
		}
		if((notas[i][1]>=4 && notas[i][2]>=4) || 
			(notas[i][3]>=4 && notas[i][4]>=4) || 
			(notas[i][1]>=4 && notas[i][4]>=4)|| 
			(notas[i][2]>=4 && notas[i][3]>=4))
		{
			notas[i][5]=1;
			notas[i][6]=rand()%10+1;
		}
		else
		{
			notas[i][5]=2;
		}
	}
	do 
	{
		printf ("Menu de opciones \n");
		printf ("a.Mostrar la cantidad de asignaturas regularizadas \n");
		printf ("b.Mostrar la cantidad de asignaturas a recursar \n");
		printf ("c.Promedio de las notas finales \n");
		printf ("d.Mostrar el listado completo de las asignaturas \n");
		scanf (" %c", &opcion);
		switch (opcion)
		{
		 case 'a':
			 printf ("Materias regularizadas: %d \n", contar_regular(notas));
			 break;
		 case 'b':
			 mostrar_libre(notas);
			 break;
		 case 'c':
			 printf ("Promedio de los finales: %0.2f \n", calcular_promedio);
			 break;
		 case 'd':
			 mostrar_notas(notas);
			 break;
		}
		printf("\n�Desea salir? s/n ");
		scanf(" %c",&opcion);
	} while(opcion=='n');
	return 0;
}

void mostrar_notas (int notas[5][7])
{
	int i=0, j=0;
	printf ("\nAsignatura.\nParcial 1.\nParcial 2.\nRecuperatorio 1.\nRecuperatorio 2.\nResultado.\nFinal\n");
	for (i=0;i<5;i++)
	{
		for (j=0;j<7;j++)
		{
			printf ("%d \n", notas[i][j]);
		}
		printf ("\n");
	}
}

int contar_regular (int notas[5][7])
{
	int contar=0, i=0;
	for (i=0;i<5;i++)
	{
		if (notas[i][5]==1)
		{
			contar++;
		}
	}
	return contar;
}

void mostrar_libre (int notas[5][7])
{
	int i=0;
	printf ("Asignaturas a recursar libre \n");
	for (i=0;i<5;i++)
	{
		if (notas[i][5]==2)
		{
			printf ("Asignatura numero: %d \n", notas[i][0]);
		}
	}
}

float calcular_promedio (int notas[5][7])
{
	int i=0;
	float promedio=0, suma=0, cantidad_asignaturas=0;
	for (i=0;i<5;i++)
	{
		if (notas[i][6]!=0)
		{
			suma+=notas[i][6];
			cantidad_asignaturas++;
		}
	}
	promedio=suma/cantidad_asignaturas;
	return promedio;
}
