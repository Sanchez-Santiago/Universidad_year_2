#include <stdio.h>

void QS(int[], int, int);
void imprimir(int vec[], int can);
int main(int argc, char *argv[]) {

  int vec[11] = {87, 23, 45, 61, 12, 98, 34, 50, 76, 19, 55};
  int can = sizeof(vec) / sizeof(vec[0]);
  imprimir(vec, can);
  QS(vec, 0, can - 1);
  imprimir(vec, can);
  return 0;
}

void QS(int vector[], int inicio, int final) {
  int izq = inicio;
  int der = final;
  int pivote = vector[inicio];
  int aux = 0;

  do {
    while (vector[izq] < pivote) {
      izq++;
    }
    while (vector[der] > pivote) {
      der--;
    }
    if (izq <= der) {
      aux = vector[izq];
      vector[izq] = vector[der];
      vector[der] = aux;
      izq++;
      der--;
    }
  } while (izq <= der);

  if (inicio < der) {
    QS(vector, inicio, der);
  }
  if (izq < final) {
    QS(vector, izq, final);
  }
}

void imprimir(int vec[], int can) {
  printf("\n");
  for (int i = 0; i < can; i++) {
    printf("%d ", vec[i]);
  }
}
