/*
Crear un arreglo de números enteros aleatorios de 5x5. Luego crear un menú de opciones con las siguientes funciones:
a.Mostrar todos los valores.

b.Promedio de todos los valores del arreglo.

c.Buscar cuanto se repite un valor ingresado por el usuario.

d.Imprimir los valores pares

e.Sumar los valores impares.

f.Crear un arreglo de 25x2 e inicializar a cero (0), para guardar
la frecuencia con que aparece un número en el arreglo 5x5. Luego
mostrar la lista de frecuencia de los números.
*/
#include <iostream>
#include <iostream>
#include <ctime>

#define LES 5

void buscar(int vec[LES][LES],int lim);
void sumImpar(int vec[LES][LES],int lim);

int main(int argc, char const *argv[])
{
  int v[LES][LES]={0, 0}, i=0, j=0, promedio=0, cantidad=0;
  srand(time(NULL));
  for ( i = 0; i < LES; i++)
  {
    for ( j = 0; j < LES; j++)
    {
      v[i][j]=rand()%100;
      cantidad++;
    }
  }
  printf("\n");
  for ( i = 0; i < LES; i++)
  {
    for ( j = 0; j < LES; j++)
    {
      printf("%d\t", v[i][j]);
    }
  }
  printf("\nLa cantidad de num es: %d\n", cantidad);

  for ( i = 0; i < LES; i++)
  {
    for ( j = 0; j < LES; j++)
    {
      promedio=promedio+v[i][j];
    }
  }

  printf("El pomedio de todos los numeros es %d\n", promedio/cantidad);

  buscar(v, LES);
  sumImpar(v, LES);


  return 0;
}

void buscar(int vec[LES][LES],int lim)
{
  int i=0, j=0, aux=0, con=0, comparar=0;
  char op=' ';
  printf("\nIngresa el valor que deseas buscar: ");
  scanf("%d", &comparar);
  do
  {
    printf("\nIngresa el valor que deseas buscar: ");
    scanf("%d", &comparar);

    for ( i = 0; i < lim; i++)
    {
      for ( j = 0; j < lim; j++)
      {
        aux=vec[i][j];
        if (aux==comparar)
        {
          con++;
        }
      }
    }
    if (con==0)
    {
      printf("\nNo se en el numeros que buscas\n");
    }
    else
    {
      printf("\nEl numero se repite %d\n\n", con);
    }

    printf("Desea ver otro? S=si N=0\n");
    scanf(" %c", &op);
  } while(op=='S' || op=='s');
}

void sumImpar(int vec[LES][LES],int lim)
{
  int i=0, j=0, aux=0, con=0, comparar=0;
  for ( i = 0; i < lim; i++)
  {
    for ( j = 0; j < lim; j++)
    {
      aux=vec[i][j];
      if (vec[i][j]%2!=0)
      {
        aux=aux+vec[i][j];
      }
    }
  }
  printf("\nLa suma de los num imapares es: %d\n", aux);
}


