/*Crear un programa en la cual cargue una lista de 5 numeros aleatoriamente 
(entre 1 y 10), luego los muestre y muestre los valores multiples de 5.*/

#include <iostream>
#include <ctime>
using namespace std;

struct node{
	int data;
	struct node *next;
};

int main(int argc, char *argv[]) {
	
	/*puntero al comienzo de la lista*/
	struct node* head=NULL;
	struct node* temp= NULL;
	struct node *new_node=NULL;
	/*Asignacion del dato al nuevo nodo */
	int dato=0, i=0;
	srand(time(NULL));
	do{
		dato=rand()%50+1;
		new_node = (struct node*)malloc(sizeof(struct node));
		new_node = (struct node *) new_node;
		if(new_node==NULL){
			printf("No hay memoria disponible");
			exit(1);
		}
		new_node->data=dato;/*como va al final de la lista este nodo apunta a NULL*/
		new_node->next=NULL;/*Si la lista esta vacia, el nodo ingresado es el primero de la lista*/
		if(head==NULL){
			head=new_node;
		}else{/*Buscamos cual es el ultimo*/
			temp=head;
			while(temp->next!=NULL){
				temp=temp->next;
			}/*Hacemos que el que era ultimo apunte al nuevo nodo*/
			temp->next=new_node;
		}
		i++;
	}while(i!=5);
	
	//IMPRESION DE LA LISTA 
	if(head==NULL){
		printf("Lista vacia\n");
		exit(1);
	}else{
		node*temp=head;
		printf("Lista\n");
		while(temp!=NULL){
			printf("%d\n", temp->data);   //LA LINEA PARA IMPRIMIR ..
			temp=temp->next;
		}
		
	}
	
	//IMPRESION DE LOS MULTIPLOS 
	//NO HACIA FALTA PONER DE NUEVO ESTO , DIRECTAMENTE PODRIA HACERLO DENTRO DEL else ANTERIOR..
	if(head==NULL){
		printf("Lista vacia\n");
		exit(1);
	}else{
		node*temp=head;
		printf("Multiplos de 5\n");
		while(temp!=NULL){
			if(temp->data%5==0){             //LINEA 67 Y 68 IMPORTANTES PARA LO QUE QUREMOS HACER..
				printf("%d\n", temp->data);
			}
			temp=temp->next;
		}
		
	}
	
	return 0;
}
