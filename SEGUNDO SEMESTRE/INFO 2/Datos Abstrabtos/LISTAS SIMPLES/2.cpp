/*Crear un programa en el cual se solicite al usuario el ingreso de 5 valores numéricos. 
Luego muestre la lista y calcule el promedio de ellos.*/

#include <stdlib.h>
#include <stdio.h>


typedef struct dato
{
    int data;
    struct dato *siguiente;

}bloques;

void agregar(bloques **);
void mostrar(bloques *);
void check(bloques *);

int main(int argc, char const *argv[])
{
    bloques *head=NULL;

    agregar(&head);
    mostrar(head);


    return 0;
}

void agregar(bloques **head)
{
    int cargar=0, i=0;
    for ( i = 0; i < 5; i++)
    {
        bloques *new_node=NULL, *aux=NULL;
        new_node=(bloques *)malloc(sizeof(bloques));

        check(new_node);

        printf("\nIngresa el dato que deses guardar n° %d: ", i+1);
        scanf("%d", &cargar);

        new_node->data=cargar;
        if ((*head)==NULL)
        {
            (*head)=new_node;
        }
        else
        {
            aux=(*head);
            while (aux->siguiente!=NULL)
            {
                aux=aux->siguiente;
            }
            aux->siguiente=new_node;              
        }   
    }
}

void mostrar(bloques *head)
{
    int i=0;
    bloques *aux=NULL;
    aux=head;
    printf("\nLos datos ingresados son: \n");
    while (aux!=NULL)
    {
        printf("\ndato %d: %d", (i+1), aux->data);
        aux=aux->siguiente;
    }
    printf("\n");
}

void check(bloques *p)
{
    if (p==NULL)
    {
        printf("\nNo se pudo generar memoria ERROR.");
        exit(1);
    }
    
}