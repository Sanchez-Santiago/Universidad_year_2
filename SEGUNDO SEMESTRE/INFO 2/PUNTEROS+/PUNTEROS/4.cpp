/*
Escribir un programa que intercambie los valores enteros de a y b utilizando
punteros.
*/

#include <iostream>

int main(int argc, char const *argv[]) {
  int a = 4, b = 5, *puntero = &a, *punt1 = &b;

  printf("\nEl valoer A es : %d\ny el valor B es: %d", a, b);
  printf("\n");

  b = *puntero;
  a = b;

  printf("\nEl valoer A es : %d\ny el valor B es: %d", a, b);
  printf("\n\n");
  return 0;
}
