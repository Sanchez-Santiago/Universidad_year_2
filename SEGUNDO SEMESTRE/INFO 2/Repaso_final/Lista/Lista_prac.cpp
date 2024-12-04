#include <cstddef>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node *next;
} libro;

void append(libro **, int);
void push(libro **, int);
void imprimir_lista(libro *head);
int main() {
  libro *head = NULL;
  int op = 0, dato = 0;
  do {
    printf("\n1.Agregamos un nodo al final\n");
    printf("2.Agregamos un nodo al comienzo\n");
    printf("3.Impreciom de la lista\n");
    printf("4.Salir\n");
    printf("op: ");
    scanf("%d", &op);
    printf("\n");

    switch (op) {
    case 1:
      printf("\nIngresa un dato entero: ");
      scanf("%d", &dato);
      printf("\n");
      append(&head, dato);
      break;
    case 2:
      printf("\nIngresa un dato entero: ");
      scanf("%d", &dato);
      printf("\n");
      push(&head, dato);
      break;
    case 3:
      imprimir_lista(head);
      break;
    default:
      break;
    }
  } while (op != 4);
  return (0);
}

void append(libro **head, int dato) {
  libro *new_node = NULL, *aux = NULL;
  new_node = (struct node *)malloc(sizeof(libro));
  if (new_node == NULL) {
    printf("\n No se pudo reservar memoria ERROR!!!!!\n\n");
    exit(1);
  }
  new_node->data = dato;
  if ((*head) == NULL) {
    (*head) = new_node;
    return;
  } else {
    aux = (*head);
    while (aux->next != NULL) {
      aux = aux->next;
    }
    aux->next = new_node;
  }
}

void push(libro **head, int data) {
  libro *new_node = NULL;
  new_node = (libro *)malloc(sizeof(libro));
  if (new_node == NULL) {
    printf("\n No se pudo reservar memoria ERROR!!!!!\n\n");
    exit(1);
  }
  new_node->data = data;
  new_node->next = NULL;
  if ((*head) == NULL) {
    *head = new_node;
  } else {
    new_node->next = *head;
    *head = new_node;
  }
}

void imprimir_lista(libro *head) {
  libro *aux = NULL;
  aux = head;
  while (aux != NULL) {
    printf("%d\n", aux->data);
    aux = aux->next;
  }
}