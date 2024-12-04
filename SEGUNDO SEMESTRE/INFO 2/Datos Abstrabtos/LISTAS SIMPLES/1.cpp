/*Crear un programa en el cual se solicite al usuario el ingreso de 5 valores
 * numéricos y luego muestre la lista.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int valor;
  struct Node *next;

} libro;

void append(libro **, int);
void push(libro **, int);
void mostrar(libro *);

int main(int argc, char const *argv[]) {
  int dato = 0, op = 0;
  /* Puntero al comienso de la lista*/
  libro *head = NULL;

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
      printf("\nQue valor tendra dato?: ");
      scanf("%d", &dato);
      push(&head, dato);
      break;
    case 3:
      mostrar(head);
      break;

    default:
      break;
    }
  } while (op != 4);

  return 0;
}

void append(libro **head, int dato) {
  libro *new_node = NULL, *aux = NULL;
  new_node = (libro *)malloc(sizeof(libro));
  if (new_node == NULL) {
    printf("\n No se pudo reservar memoria ERROR!!!!!\n\n");
    exit(1);
  }
  new_node->valor = dato;
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

void push(libro **head, int dato) {
  libro *new_node = NULL, *aux;
  new_node = (struct Node *)malloc(sizeof(libro));
  if (new_node == NULL) {
    printf("\n No se pudo reservar memoria ERROR!!!!!\n\n");
    exit(1);
  }
  new_node->valor = dato;
  new_node->next = NULL;
  if (head == NULL) {
    (*head) == new_node;
  } else {
    new_node->next = (*head);
    (*head) = new_node;
  }
}

void mostrar(libro *head) {
  int n = 1;
  libro *aux = NULL;
  aux = head;
  while (aux != NULL) {
    printf("\nEl elemento de la lista %d es: %d", n, aux->valor);
    aux = aux->next;
    n++;
  }
}