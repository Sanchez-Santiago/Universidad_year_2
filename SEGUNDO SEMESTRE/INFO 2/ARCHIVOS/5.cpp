/*Escribir un programa que solicite los datos de un producto 
(nombre del producto, marca, precio unitario, fecha de elaboracion, tamaño)
y crear una estructura producto. Luego la guarde en un archivo de texto 
con el nombre "Datos_Producto.txt".
*/
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char nombre[30]={0}, marca[30]={0};
    int fecha=0;
    float precio_uni=0, tamaño=0;

    printf("\nIngresa el nombre del produco: ");
    scanf(" %[^\n]", nombre);
    printf("\nIngresa el marca del produco: ");
    scanf(" %[^\n]", marca);
    printf("\nIngresa el precio del produco: ");
    scanf(" %f", &precio_uni);
    printf("\nIngresa la fecha de elavoracion del produco: ");
    scanf(" %d", &fecha);
    printf("\nIngresa el tamaño del produco: ");
    scanf(" %f", &tamaño);
    printf("\n\n");

    FILE *fp=fopen("Datos_Producto.txt", "a");

    if (fp==NULL)
    {
        printf("\n\nNose pudo abrir el  archivo\n\n");
        exit(1);
    }

    fprintf(fp,"%s\n%s\n%f\n%d\n%f", nombre, marca, precio_uni, fecha, tamaño);

    fclose(fp);
    fp=fopen("Datos_Producto.txt", "r");
    if (fp==NULL)
    {
        printf("\nERROR no se pudo abrir el archivo\n");
        exit(1);
    }
    char l[20]={0};
    while(!feof(fp))
    {
        fscanf(fp,"%s",l);
        printf("%s \n\n",l);
    }
    fclose(fp);
    return 0;
}

