//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Crea las estructuras que usaremos, para cargar los datos del archivo.
struct fecha 
{
	int ano;
	int mes;
	int dia;
	int hora;
	int minuto;
	int segundo;
};

struct dato 
{
	struct fecha time;
	float consumo;
	char dispositivo[30];
	float temperatura_ambiente;
	float potencia;
	float costo_energia;
};

//Creamos la estructura para la lista.
struct node
{
	float date1;
	float date2;
	int date3;
	char disp[30];
	struct node *next;
};

//prototipos de las funciones.
void leer(struct dato *);
void mostrar(struct dato *);
void check_null(FILE *);
void consumo(struct node *head);
void consumo_mes(struct node *head);
void ineficiente(struct node *head);
void calcular_costo_total_mes(struct node *head);
void menu (struct node* head,struct dato *data);

//Funcion principal.
int main(int argc, char *argv[]) 
{
	//Declaramos las variables.
	struct node* head=NULL; 
	struct dato datos[100000];
	struct dato *ptr_data;
	ptr_data = datos;
	leer(ptr_data);
	struct node *temp= NULL;
	struct node *new_node=NULL;
	int h=0;

	//Creamos la lista con los datos del arreglo.
	for(h=0;h<1000;h++)
	{
		//Creamos el primer nodo.
		new_node = (struct node *)malloc(sizeof(struct node));  
		if(new_node==NULL)
		{
			printf("No hay memoria disponible");
			exit(1);     
		}

		new_node->date1=(ptr_data+h)->consumo;
		strncpy(new_node->disp, (ptr_data + h)->dispositivo, sizeof(new_node->disp));
	    new_node->date3=(ptr_data+h)->time.mes;
		new_node->date2=(ptr_data+h)->costo_energia;
		new_node->next=NULL;

		if(head==NULL)
		{
			head=new_node;
		}
		else
		{
			temp=head;   
			while(temp->next!=NULL)
			{  
				temp=temp->next;		
			}
			temp->next=new_node;   
		}
	}
	menu(head, ptr_data);
	return 0;
}

//Creamos la funcion para chequear que el archivo se a abierto de manera correcta.
void check_null(FILE *fp) 
{
	if (fp == NULL) 
	{
		perror("Imposible abrir el archivo");
		exit(1);
	}
}

//Creamos la funcion para leer los datos del archivo y cargarlo en el arreglo de estructura.
void leer(struct dato *data) 
{
	FILE *fp = fopen("/home/santiago/Documentos/Universidad/2023/SEGUNDO SEMESTRE/INFO 2/INTEGRADORES/V2/dataset.txt", "r");
	check_null(fp);
	while (fscanf(fp, "%d-%d-%d %d:%d:%d,%f,%[^,],%f,%f,%f\n",
				  &(data->time.ano), &(data->time.mes), &(data->time.dia),
				  &(data->time.hora), &(data->time.minuto), &(data->time.segundo),
				  &(data->consumo), (data->dispositivo),
				  &(data->temperatura_ambiente), &(data->potencia), &(data->costo_energia)) != EOF) 
	{
		data++;
	}
	fclose(fp);
}

//Creamos la funcion para mostrar losdatos del archivo.
void mostrar(struct dato *data)
{
	int i=0;
	for ( i = 0; i < 1000; i++) 
	{
		printf("%d-%d-%d %d:%d:%d %f %s %f %f %f\n",
			   ((data+i)->time.ano), ((data+i)->time.mes), ((data+i)->time.dia),
			   ((data+i)->time.hora), ((data+i)->time.minuto), ((data+i)->time.segundo),
			   ((data+i)->consumo), ((data+i)->dispositivo),
			   ((data+i)->temperatura_ambiente),((data+i)->potencia), ((data+i)->costo_energia));
	}
}

//Creamos la funcion para ver el todos los consumos con los datos de la lista.(Tomas Calvo)
void consumo(struct node* head)
{
	float acum=0, promedio=0;
	int h=0;
	if(head==NULL)
	{ 
		printf("Lista vacia\n");
		exit(1);
	}
	else
	{
		node *temp=head; 
		printf("\nLos consumos son: ");
		while(temp!=NULL)
		{ 
			printf("%f kwh\n",temp->date1);
			acum+=temp->date1;
			temp=temp->next; 
			h++;
		}
	}
	promedio=float(acum/h);
	printf("\nEl promedio de los consumos son: %f kwh\n",promedio);
}


//Creamos la funcion para ver el consumo en un mes con los datos de la  lista.(Santiago Sanchez)
void consumo_mes(struct node* head)
{
	int m=0, i=0;
	float acum=0,promedio=0;
	printf("\nIngrese el mes: ");
	scanf("%d",&m);
	if(head==NULL)
	{ 
		printf("\nLista vacia\n");
		exit(1);
	}
	else
	{
		node *temp=head;  
		printf("\nLos consumos son: ");
		while(temp!=NULL)
		{ 
			if(temp->date3==m)
			{
				printf("%f kwh\n",temp->date1);
				acum=acum+temp->date1;
				i++;
			}
			temp=temp->next;
		}
	}
	promedio=float(acum/i);
	printf("\nEl promedio de los consumos son: %f kwh\n",promedio);
}

//Creamos la funcion para ver el el consumo maximo de los electrodomesticos de los datos.(Luciano Martinez)
void ineficiente(struct node* head)
{
	float max=0;
	char nomb[30];
	if(head==NULL)
	{ 
		printf("\nLista vacia\n");
		exit(1);
	}
	else
	{
		node*temp=head;  
		while(temp!=NULL)
		{ 
			if(temp->date1>max)
			{
				max=temp->date1;
				strncpy(nomb, temp->disp, sizeof(nomb));
			}
			temp=temp->next;
		}
	}
	printf("\nEl nombre del dispositivo mas ineficiente es: %s\n", nomb);
	printf("Su consumo es de es: %f kwh\n",max);
}

//Creamos la funcion para calcular el costo total en un mes.(Tomas Loza)
void calcular_costo_total_mes(struct node* head) 
{
	float acum=0;
	int  mes = 0;
	printf("Ingrese el mes a calcular: ");
	scanf("%d", &mes);
	if(head==NULL)
	{ 
		printf("Lista vacia\n");
		exit(1);
	}
	else
	{
		node *temp=head;  
		while(temp!=NULL)
		{ 
			if(temp->date3==mes)
			{
				acum=acum+temp->date2;
			}
			temp=temp->next;
		}
	}
	printf("El costo total del mes %d es: $%f \n", mes, acum);
}

//Creamos la funcion para generar un menu para llama las funciones a eleccion.
void menu (struct node *head,struct dato *data)
{
	int op=0, querer=0;
	do
	{
		printf("\n####### Munu #######\n");
		printf("\n(1) MOSTRAR EL ARREGLO\n(2) CONSUMO TOTAL ACUMULADO\n(3) CONSUMO DEL MES\n(4) PRODUCTO MAS INEFICIENTE\n(5) COSTO DEL MES\n");
		printf("\nIngrese la opcion: ");
		scanf("%d",&op);
		printf("\n");
		switch(op){
		case 1:
			mostrar(data);
			break;
		case 2:
			consumo(head);
			break;
		case 3:
			consumo_mes(head);
			break;
		case 4:
			ineficiente(head);
			break;
		case 5: 
			calcular_costo_total_mes(head);
			break;
		default:
			break;
		}
		printf("\nDesea continuar?(si=1/no=0): ");
		scanf("%d",&querer);
		printf("\n");
	} while(querer!=0);

}
	
