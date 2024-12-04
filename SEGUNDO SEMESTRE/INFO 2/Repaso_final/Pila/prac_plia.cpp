#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node *next;
} pila;

void push(pila **head, int valor);
void print(pila *head);
void pop(pila **head);

int main() {
  pila *head = NULL;
  int op = 0;
  int valor = 0;

  do {
    printf("\n###### Menu ######\n");
    printf("1-Ingresar dato\n");
    printf("2-Eliminar el último elemento\n");
    printf("3-Mostrar la Pila\n");
    printf("4-Salir\n");
    printf("Elección: ");
    scanf("%d", &op);

    switch (op) {
    case 1:
      printf("\nIngrese el dato: ");
      scanf("%d", &valor);
      push(&head, valor);
      break;
    case 2:
      pop(&head);
      break;
    case 3:
      print(head);
      break;
    default:
      break;
    }
  } while (op != 4);

  return 0;
}

void push(pila **head, int valor) {
  pila *new_node = (pila *)malloc(sizeof(pila));
  if (new_node == NULL) {
    printf("Error: No se pudo asignar memoria para el nuevo nodo.\n");
    return;
  }
  if ((*head) == NULL) {
    *head = new_node;
  } else {
    new_node->data = valor;
    new_node->next = *head;
    *head = new_node;
  }
}

void pop(pila **head) {
  if (*head == NULL) {
    printf("La pila está vacía, no se puede hacer pop.\n");
    return;
  }

  pila *aux = *head;
  *head = (*head)->next;
  free(aux);
}

void print(pila *head) {
  printf("\nPila:\n");
  pila *aux = head;
  while (aux != NULL) {
    printf("%d\n", aux->data);
    aux = aux->next;
  }
}
