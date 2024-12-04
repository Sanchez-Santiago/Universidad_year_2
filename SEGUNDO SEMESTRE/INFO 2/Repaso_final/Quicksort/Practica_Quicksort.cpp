#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <ctime>

void Ingreso_datos(int[]);
void Ingresar_datos_Aleatorios(int vector[]);
void Quicksort(int[], int, int);
void Menu(int eleccion, int vector[]);
void MostrarVector(int vector[]);

int main() {
  int eleccion = 0;
  int Vector[10] = {};
  do {
    printf("\n### Menú ###\n");
    printf("Ingresa la opción que desea realizar: \n"
           "\n1 - Ingresar los números manualmente."
           "\n2 - Ingresar los números aleatorios "
           "\n3 - Ordenar con QuickSort"
           "\n4 - Salir"
           "\nElección: ");
    scanf("%d", &eleccion);
    printf("\n");
    Menu(eleccion, Vector);
  } while (eleccion != 4);

  return 0;
}

void Ingreso_datos(int a[]) {
  int aux = 0;
  for (int i = 0; i < 10; i++) {
    int unico = 0;
    while (unico != 1) {
      unico = 1;
      printf("\nIngresa un número a continuación %d: ", i + 1);
      scanf("%d", &aux);
      for (int ii = 0; ii < 10; ii++) {
        if (aux == a[ii]) {
          printf("\nEl dato ya existe\n");
          unico = 0;
          break;
        }
      }
    }
    a[i] = aux;
  }

  printf("\nLos números sin ordenar: \n");
  MostrarVector(a);
}

void Quicksort(int vector[], int inicio, int fin) {
  if (inicio >= fin)
    return;

  int pivote = vector[inicio];
  int i = inicio + 1;
  int j = fin;

  while (i <= j) {
    while (i <= fin && vector[i] <= pivote)
      i++;
    while (j > inicio && vector[j] >= pivote)
      j--;
    if (i < j) {
      int aux = vector[i];
      vector[i] = vector[j];
      vector[j] = aux;
    }
  }

  vector[inicio] = vector[j];
  vector[j] = pivote;

  Quicksort(vector, inicio, j - 1);
  Quicksort(vector, j + 1, fin);
}


void Menu(int eleccion, int vector[]) {
  switch (eleccion) {
  case 1:
    Ingreso_datos(vector);
    break;
  case 2:
    Ingresar_datos_Aleatorios(vector);
    break;
  case 3:
    Quicksort(vector, 0, 9);
    printf("\nLos números ordenados: \n");
    MostrarVector(vector);
    break;
  case 4:
    printf("Saliendo del programa.\n");
    break;
  default:
    printf("Opción inválida.\n");
    break;
  }
}

void Ingresar_datos_Aleatorios(int vector[]) {
  int aux = 0;
  srand(time(NULL));
  for (int i = 0; i < 10; i++) {
    int unico = 0;
    while (unico != 1) {
      unico = 1;
      aux = rand() % 100 + 1;
      for (int ii = 0; ii < i; ii++) {
        if (aux == vector[ii]) {
          unico = 0;
          break;
        }
      }
    }
    vector[i] = aux;
  }
  printf("\nLos números sin ordenar: \n");
  MostrarVector(vector);
}

void MostrarVector(int vector[]) {
  for (int j = 0; j < 10; j++) {
    printf("El dato %d es %d\n", j + 1, vector[j]);
  }
}
