#include <stdio.h>

void QuickSort(int vector[], int inicio, int final);
int particion(int vector[], int inicio, int final);
void imprimir(int vector[]);
int main() {
  int a[10] = {90, 74, 71, 54, 47, 79, 88, 33, 58, 57};
  imprimir(a);
  printf("\n");
  int tam = sizeof(a) / sizeof(a[0]);
  QuickSort(a, 0, tam);
  imprimir(a);
}

void QuickSort(int vector[], int inicio, int final) {
  int i = inicio;
  int j = final;
  int pivote = vector[(inicio + final) / 2]; // Seleccionamos el pivote central
  int aux;

  do {
    while (vector[i] < pivote) {
      i++;
    } // el pivote es menor que el vect[i]
    while (vector[j] > pivote) {
      j--;
    } // en esta posi el pivote es mayor que le vec[j]
    if (i <= j) {
      aux = vector[i];
      vector[i] = vector[j];
      vector[j] = aux;
      i++;
      j--;
    }
  } while (i <= j);

  if (inicio < j) {
    QuickSort(vector, inicio, j);
  }
  if (i < final) {
    QuickSort(vector, i, final);
  }
}

void imprimir(int vector[]) {
  printf("\n");
  for (int i = 0; i < 10; i++) {
    printf("%d ", vector[i]);
  }
  printf("\n");
}