/*Escriba un programa en C que lea un archivo de texto con datos de personas. 
Cada linea del archivo contiene los siguientes datos: Nombre, Apellido, Edad. 

El programa debe utilizar una estructura para almacenar los datos de cada persona. 
La estructura debe tener los siguientes campos: nombre: char[25], apellido: char[25], edad: int

El programa debe utilizar punteros con funciones para realizar las siguientes tareas:

-Leer el archivo de texto y almacenar los datos en una estructura.

-Imprimir los datos de cada persona.

- Liberar la memoria reservada para las estructuras.*/

#include <stdio.h>
#include <stdlib.h>

struct Person {
    char name[25];
    char lastName[25];
    int age;
};

void readData(struct Person** people, int* numPeople) {
    FILE* file = fopen("data.txt", "w");
    if (file == NULL) 
    {
        printf("Failed to open the file.\n");
        return;
    }

    scanf("%d", numPeople);
    *people = (struct Person*)malloc(*numPeople * sizeof(struct Person));

    for (int i = 0; i < *numPeople; i++) 
    {
        fprintf(file, "%s %s %d", (*people)[i].name, (*people)[i].lastName, &(*people)[i].age);
    }

    fclose(file);
}

void printData(struct Person* people, int numPeople) {
    for (int i = 0; i < numPeople; i++) {
        printf("Name: %s\n", people[i].name);
        printf("Last Name: %s\n", people[i].lastName);
        printf("Age: %d\n", people[i].age);
        printf("\n");
    }
}

void freeMemory(struct Person* people) {
    free(people);
}

int main() {
    struct Person* people = NULL;
    int numPeople = 0;

    readData(&people, &numPeople);
    printData(people, numPeople);
    freeMemory(people);

    return 0;
}

/*#include <stdio.h>
struct personal_data
{
    char nombre[30];
    char apellido[30];
    int  dni;
    char direccion[40];
    char ciudad[20];
    int  cp;
};

int main()
{   struct personal_data daniel[4];//={"Daniel","Rosso",36053357,"Pelegrini 193", "Alta Gracia",5186};

    int i=0;
    for ( i = 0; i < 4; i++)
    {
        printf("\nNombre: ");
        scanf("%s", &daniel[i].nombre);
        printf("\nApellido: ");
        scanf("%s", &daniel[i].apellido);
        printf("\nDNI: ");
        scanf("%d", &daniel[i].dni);
        printf("\nDireccion: ");
        scanf("%s", &daniel[i].direccion);
        printf("\nCiudad: ");
        scanf("%s", &daniel[i].ciudad);
        printf("\nCP: ");
        scanf("%d", &daniel[i].cp);
        printf("\n");
    }
    
    for ( i = 0; i < 4; i++)
    {
        printf("Nombre:\t %s\n",daniel[i].nombre);
        printf("Apellido:\t %s\n",daniel[i].apellido);
        printf("DNI:\t %d\n",daniel[i].dni);
        printf("Direccion:\t %s\n",daniel[i].direccion);
        printf("Ciudad:\t %s\n",daniel[i].ciudad);
        printf("CP:\t %d\n",daniel[i].cp);
    }
    
    

    

    return(0);
}*/
