/*Entrega 1: Crear un documento con el nombre gx_consumo_energetico.c (x es el número de
grupo asignado), en donde se cree una función en la cual lea la información almacenada en
el archivo, colocando los datos en un arreglo de estructuras con los datos anteriormente
mencionados. (utilizar aritmética de punteros). Luego implemente otra función para mostrar
los datos en formato de tabla. Responsabilidad grupal.*/
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
    //Reservamos memoria dinamica.
    struct dato *data =(struct dato*) malloc(sizeof(struct dato) * 20); // Asignación de memoria dinámica
    struct dato *ptr_data;
    ptr_data = data;
    //Llamamos a las funcion para leer el archivo y mostrar en pantalla.
    leer(ptr_data);
    mostrar(ptr_data);
    //Liberamos la memoria reservada.
    free(ptr_data);
   
    return 0;
}

//cramos la funcion para controlar que elarchivo se pudo abrir correcctamente.
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
    int i = 0;
    //Abrimos el archivo en forma de lectura.
    FILE *fp = fopen("datos_consumo.txt", "r");
    //Controlamaos que se abra correctamente.
    check_null(fp);
    //Cargamos los datos del archivo en el arreglo de estructura.
    while (fscanf(fp, "%d-%d-%d %d:%d:%d,%f,%[^,],%d,%d,%f\n",
                  &(data->time.ano), &(data->time.mes), &(data->time.dia),
                  &(data->time.hora), &(data->time.minuto), &(data->time.segundo),
                  &(data->consumo), data->dispositivo,
                  &(data->temperatura_ambiente), &(data->potencia), &(data->costo_energia)) != EOF) 
                  {

        data++;
    }
    //Cerramos el archivo
    fclose(fp);
}

//Creamos la funcion para mostrar los datos cargado en el arreglo de estructura.
void mostrar(struct dato *data)
{
    int i=0;
    for (int i = 0; i < 20; i++) 
    {
        printf("%d-%d-%d %d:%d:%d %f %s %d %d %f\n",
               data[i].time.ano, data[i].time.mes, data[i].time.dia,
               data[i].time.hora, data[i].time.minuto, data[i].time.segundo,
               data[i].consumo, data[i].dispositivo,
               data[i].temperatura_ambiente, data[i].potencia, data[i].costo_energia);
    }
}