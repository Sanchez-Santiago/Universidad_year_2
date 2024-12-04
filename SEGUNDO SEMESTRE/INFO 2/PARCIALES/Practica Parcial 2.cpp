/*Desarrolle un programa que permita gestionar los datos de estudiantes de una escuela. 
Para ello debes definir una estructura llamada Estudiante que almacene la 
siguiente informacion: numero de identificacion (entero), nombre (cadena de caracteres), 
notas (arreglo de decimales) y promedio (flotante). Implemente las siguientes funciones: 

-Que permita al usuario ingresar datos de un estudiante y calcular su promedio. 
La funcion debe tomar como parametros un puntero a una estructura Estudiante y solicitar al 
usuario el nombre, el id y las notas. Luego, debe calcular y almacenar el promedio en la estructura.

- Que tome como entrada un arreglo de estructuras Estudiante y su tamanio, y 
que guarde estos datos en un archivo de texto llamado "estudiantes.txt". Cada linea del archivo debe 
contener la informacion de un estudiante en el siguiente formato: "ID, Nombre, Nota 1, Nota 2, Nota 3, Promedio".

- Que permita buscar y mostrar los datos de un estudiante en particular segun su id. 
La funcion debe tomar como parametros el id a buscar y el arreglo de estructuras de estudiantes. 
Si se encuentra el estudiante, muestra sus datos.

Implementa una funcion principal (main) que permita al usuario realizar las siguientes operaciones con un menu de opciones.

a. Registrar un nuevo estudiante y guardar sus datos en el archivo "estudiantes.txt".

b. Buscar y mostrar los datos de un estudiante por id.

c. Salir.*/

#include <stdio.h>
#include <stdlib.h>

struct datos
{
    int dni;
    char nombre[30];
    char apellido[30];
} data;

void crear ();
void cargar ();

int main(int argc, char const *argv[])
{
    crear;
    cargar;

    
    return 0;
}

void crear ()
{
    FILE *archivo=NULL;
    archivo=fopen("data.txt", "w");
    if (archivo==NULL)
    {
        printf("El archivo no se puedo abrir correctamente");
        exit(1);
    }
    
}


void cargar ()
{
    FILE *archivo=NULL;
    archivo=fopen("data.txt", "r");
    if (archivo==NULL)
    {
        printf("El archivo no se puedo abrir correctamente");
        exit(1);
    }
    fscanf(archivo, "%s %s %d", personas[i].nombre, personas[i].apellido, &personas[i].edad);
    fwrite (producto, sizeof (producto), 1, archivo);
    fclose (archivo)

}
