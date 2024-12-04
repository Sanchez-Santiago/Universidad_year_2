/*Entrega 1: Crear un documento en el cual se cree una funcion la cual lea la informacion almacenada en
el archivo, colocando los datos en un arreglo de estructuras con los datos anteriormente
mencionados. (utilizar aritmetica de punteros). Luego implemente otra funcion para mostrar
los datos en formato de tabla. */
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Creamos las estructuras
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
    int temperatura_ambiente;
    int potencia;
    float costo_energia;
};

//hacemos el llamado a los prototipos de las funciones.
void leer(struct dato *);
void mostrar(struct dato *);
void check_null(FILE *);


int main(int argc, char *argv[]) 
{
	//Creamos un arreglo de estructuras para almacenar los datos del archivo.
	struct dato datos[20];
    struct dato *ptr_data;
    ptr_data = datos;
    //Llamamos a las funcion para leer el archivo y mostrar en pantalla.
    leer(ptr_data);
    mostrar(ptr_data);
    //Liberamos la memoria reservada.
    
   
    return 0;
}

//cramos la funcion para controlar que el archivo se pudo abrir correctamente.
void check_null(FILE *fp) 
{
    if (fp == NULL) 
    {
        perror("Imposible abrir el archivo");
        exit(1);
    }
}

//creamos la funcion para leer el  archivo usando fscanf
void leer(struct dato *data) 
{

    //Abrimos el archivo en forma de lectura.
    FILE *fp = fopen("datos_consumo.txt", "r");
    //Controlamaos que se abra correctamente.
    check_null(fp);
    //Cargamos los datos del archivo en el arreglo de estructura.
    while (fscanf(fp, "%d-%d-%d %d:%d:%d,%f,%[^,],%d,%d,%f\n",
                  &(data->time.ano), &(data->time.mes), &(data->time.dia),
                  &(data->time.hora), &(data->time.minuto), &(data->time.segundo),
                  &(data->consumo), (data->dispositivo),
                  &(data->temperatura_ambiente), &(data->potencia), &(data->costo_energia)) != EOF) 
                  {

        data++;
    }
    //Cerramos el archivo
    fclose(fp);
}

//Creamos la funcion para mostrar los datos cargados en el arreglo de estructuras.
void mostrar(struct dato *data)
{
    int i=0;
    for ( i = 0; i < 20; i++) 
    {
        printf("%d-%d-%d %d:%d:%d %f %s %d %d %f\n",
			   ((data+i)->time.ano), ((data+i)->time.mes), ((data+i)->time.dia),
			   ((data+i)->time.hora), ((data+i)->time.minuto), ((data+i)->time.segundo),
			   ((data+i)->consumo), ((data+i)->dispositivo),
			   ((data+i)->temperatura_ambiente),((data+i)->potencia), ((data+i)->costo_energia));
    }
}
