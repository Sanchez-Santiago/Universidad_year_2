#include <cstddef>
#include <stdio.h>

typedef struct node {
  int data;
  struct node *next;
} BLoque;

void push(BLoque **, BLoque **);
void pop(BLoque **, BLoque **);
void print(BLoque *);

int main() {
  BLoque *front = NULL;
  BLoque *back = NULL;
  int op = 0;

  do {
    printf("\n#### MENU ####"
           "\n1-Ingresa un node a la cola"
           "\n2-Eliminar el primer node de la cola"
           "\n3-Mostrar la cola"
           "\n4-Salir\n"
           "\nIngresa el la op: ");
    scanf("%d", &op);
    switch (op) {
    case 1:
      push(&front, &back);
      break;
    case 2:
      pop(&front, &back);
      break;
    case 3:
      print(front);
      break;
    default:
      break;
    }
  } while (op != 4);

  return 0;
}

void push(BLoque **front, BLoque **back) {
  int valor = 0;
  printf("\nIngresa un valor: ");
  scanf("%d", &valor);
  BLoque *new_node = new BLoque;

  try {
    new_node->data = valor;
    new_node->next = NULL;
  } catch (...) {
    printf("\nNo se pudo crear el nodo");
    return;
  }
  if (*back == NULL) {
    *back = new_node;
    *front = *back;
  } else {
    (*back)->next = new_node;
    *back = new_node;
  }
}

void pop(BLoque **front, BLoque **back) {
  if (*front == NULL) {
    printf("\nLa cola esta vacia");
    return;
  }
  BLoque *aux = *front;
  *front = (*front)->next;
  delete aux;
  if (*front == NULL) {
    *back = NULL;
  }
}

void print(BLoque *front) {
  printf("\n");
  BLoque *aux = front;
  while (aux != NULL) {
    printf("%d ", aux->data);
    aux = aux->next;
  }
  printf("\n");
}