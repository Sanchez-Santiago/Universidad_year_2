/*Crear un programa en la cual cargue una lista de 5 números aleatoriamente (entre 1 y 10), 
luego los muestre y muestre los valores múltiples de 5.*/

#include <stdlib.h>
#include <stdio.h>
#include <ctime>

typedef struct dato
{
    int valor;
    struct dato *next;
}Nodo;

void cargar(Nodo **);
void muestra(Nodo *);
void muestrax5(Nodo *);

int main(int argc, char const *argv[])
{
    Nodo *head=NULL;
    
    cargar(&head);
    muestra(head);
    muestrax5(head);

    return 0;
}

void cargar(Nodo **head)
{
    int car=0, i=0;
    srand(time(NULL));

    for ( i = 0; i < 5; i++)
    {
        Nodo *new_nodo=NULL, *aux=NULL;
        new_nodo=(Nodo *)malloc(sizeof(Nodo));
        if (new_nodo==NULL)
        {
            printf("\nERROR no se pudo gurdar memoria.");
            exit(1);
        }
        
        car=rand()%10+1;
        new_nodo->valor=car;
        
        if ((*head)==NULL)
        {
            (*head)=new_nodo;
        }
        else
        {
            aux=(*head);

            while (aux->next!=NULL)
            {
                aux=aux->next;
            }
            aux->next=new_nodo;
        }
    }
}

void muestra(Nodo *head)
{
    int n=0;
    Nodo *aux=NULL;
    aux=head;
    printf("\nLos numeros ingresados son: \n");
    while (aux!=NULL)
    {
        printf("\nLe valor %d es: %d", (n+1), aux->valor);
        n++;
        aux=aux->next;
    }
    printf("\n");
    
}
void muestrax5(Nodo *head)
{
    int n=0;
    Nodo *aux=NULL;
    aux=head;
    printf("\nLos numeros ingresados x5 son: \n");
    while (aux!=NULL)
    {
        printf("\nLe valor %d es: %d", (n+1), (aux->valor * 5));
        n++;
        aux=aux->next;
    }
    printf("\n");
    
}