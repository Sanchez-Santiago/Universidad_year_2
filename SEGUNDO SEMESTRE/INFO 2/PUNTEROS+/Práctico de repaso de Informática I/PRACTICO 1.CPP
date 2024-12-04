/*
Desarrolle un programa para una academia de música que permita gestionar la
inscripción de alumnos a los cursos de guitarra de los diferentes niveles.
Algunas consideraciones:

La academía ofrece 3 niveles: principiantes (1), intermedios (2) y avanzados
(3). Cupo máximo de 5 alumnos por curso. Los costos de matriculación y mensuales
de cada curso es de $3000 para principiantes, $4000 para intermedios y $5000
para avanzados. La academia lanzó una promoción en donde si dos amigos se
inscriben tienen un descuento del 10% cada uno en su matrícula. Declare e
inicialice a cero un arreglo 10x4. Luego crear una función para “generar las
inscripciones”, teniendo en cuenta lo siguiente:

La columna “número de inscripción” debe completarse automáticamente con números
consecutivos empezando por 1. La columna “nivel del curso” debe obtenerse
mediante números aleatorios entre 1 y 3. Luego debe revisar que haya cupo
suficiente para ese nivel, en caso de que no haya cupo deberá descartarse esta
inscripción. Para ello diseñe una función llamada “verificar cupo”. La columna
“promoción” debe obtenerse con números aleatorios entre el 0 y 1. El cero es que
no tiene promoción y 1 es que si tiene promoción. La columna “monto total”
deberá calcular el monto de la inscripción según el nivel y si tiene promoción.

N° de Inscripción

Nivel del curso

Promoción

Monto total


Luego crear un menú de opciones que se repita hasta que el usuario indique “s”
de salir con las siguientes funciones:

Mostrar todas las inscripciones por nivel.
Mostrar la cantidad de alumnos por cada nivel.
Calcular la recaudación de la academia de música.
*/

#include <ctime>
#include <string.h>

int cargar(int[10][4], int[]);
int verificar_cupo(int[10][4], int[], int);
void muestra(int[10][4]);

int main(int argc, char const *argv[]) {
  int vector[10][4] = {0}, niv[3] = {0}, i = 0;
  char op = ' ';

  srand(time(NULL));
  cargar(vector, niv);
  muestra(vector);

  for (i = 0; i < 3; i++) {
    printf("\n%d\n", niv[i]);
  }

  printf("\n\tElige la opciones\n");
  printf("\nA.inscriptos\nB.Cantidad de alumnos\nC.Recaudacion\n");
  scanf(" %c", &op);
  switch (op) {
  case 'a':
    for (i = 0; i < 10; i++) {
      printf("\t%d\t%d\t%d\t%d", v[i][0], v[i][1] + 1, v[i][2], v[i][3]);
      printf("\n");
    }

    break;
  case 'b':
    printf("\nNivel 1 hay: %d\n", niv[1]);
    printf("\nNivel 2 hay: %d\n", niv[2]);
    printf("\nNivel 3 hay: %d\n", niv[3]);
    break;
  case 'c':

    break;
  default:
    break;
  }

  return 0;
}

int cargar(int v[10][4], int n[3]) {
  int ii = 0, pun = 1, sum = 0;
  // srand(time(NULL));

  for (ii = 0; ii < 10; ii++) {

    sum++;
    v[ii][1] = rand() % 3;
    pun = verificar_cupo(v, n, ii);
    if (pun == 0) {
      do {
        v[ii][0] = sum + 1;
        v[ii][1] = rand() % 3;
        pun = verificar_cupo(v, n, ii);
      } while (pun != 1);
    }

    v[ii][2] = rand() % 2;

    if (v[ii][2] == 0) {
      if (v[ii][1] == 0) {
        v[ii][3] = 3000;
      }
      if (v[ii][1] == 1) {
        v[ii][3] = 4000;
      }
      if (v[ii][1] == 2) {
        v[ii][3] = 5000;
      }
    } else {
      if (v[ii][2] == 1) {
        if (v[ii][1] == 0) {
          v[ii][3] = 3000 - (3000 * 0.1);
        }
        if (v[ii][1] == 1) {
          v[ii][3] = 4000 - (4000 * 0.1);
        }
        if (v[ii][1] == 2) {
          v[ii][3] = 5000 - (5000 * 0.1);
        }
      }
    }
  }
}

int verificar_cupo(int v[10][4], int n[], int c) {
  int ii = 0, pun = 0;

  if (v[c][1] == 0) {
    if (n[0] < 5) {
      n[0] = n[0] + 1;
      v[c][0] = n[c] + 1;
    }

  } else {
    if (v[c][1] == 1) {
      if (n[1] < 5) {
        n[1] = n[1] + 1;
        v[c][0] = n[c] + 1;
      }

    } else {
      if (v[c][1] == 2) {
        if (n[2] < 5) {
          n[2] = n[2] + 1;
          v[c][0] = n[c] + 1;
        }
      }
    }
  }

  if (n[0] != 0) {
    pun = 1;
  }
  if (n[0] != 0) {
    pun = 1;
  }
  if (n[1] != 0) {
    pun = 1;
  }
  if (n[2] != 0) {
    pun = 1;
  }

  return pun;
}

void muestra(int v[10][4]) {
  int jj = 0;
  printf("\tN°\tNivel\tPromo\tTotal\n");
  for (jj = 0; jj < 10; jj++) {
    printf("\t%d\t%d\t%d\t%d", v[jj][0], v[jj][1] + 1, v[jj][2], v[jj][3]);
    printf("\n");
  }
}