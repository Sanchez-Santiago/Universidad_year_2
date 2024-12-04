/*Crear un programa con el siguiente menu de opciones: 
- Agregar un nodo a la cola. (se deben agregar 5 valores)
- Borrar el primer nodo de la cola.
- Imprimir cola.
- Suma de los valores de la cola.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int dato;
    struct node *link;
}bloque;

void agrgar(bloque **, bloque **);
void eliminar(bloque **, bloque **);


int main(int argc, char const *argv[])
{
    char op=' ';
    bloque *front=NULL;
    bloque *back=NULL;

    do
    {
        printf("\n\n####### MENU ########\nA.Agregar un nodo a la cola.\nB.Borrar el primer nodo de la cola.\nC.Imprimir cola.\nD.Suma de los valores de la cola.\n");
        printf("Eleccion: ");
        scanf(" %c", &op);
        printf("\n\ns");
        switch (op)
        {
        case 'a':
        case 'A':
            agrgar(&front, &back);
            break;
        case 'b':
        case 'B':
            eliminar(&front, &back);
            break;
        case 'c':
        case 'C':
            /* code */
            break;
        case 'D':
        case 'd':
            /* code */
            break;
        default:
            break;
        }

        printf("Desa continuar? n=no, s=si: ");
        scanf(" %c", &op);
        printf("\n");
    } while (op!='N' && op!='n');
    
    return 0;
}

void agrgar(bloque **front, bloque **back)
{
    int new_dato=0;
    bloque *new_node=NULL, *aux=NULL;
    new_node=(bloque *)malloc(sizeof(bloque));
    if (new_node==NULL)
    {
        printf("\nError no se pudo guardar memoria.\n");
        exit(1);
    }
    
    printf("\nIngres el dato que desea guardar: ");
    scanf("%d", &new_dato);
    printf("\n");
    new_node->dato=new_dato;
    new_node->link=NULL;

    if ((*front)==NULL)
    {
        (*front)=new_node;
    }
    else
    {
        (*back)->link=new_node;
    }
    *back=new_node;
}

void eliminar(bloque **front, bloque **back)
{
    bloque *aux=NULL;
       
}