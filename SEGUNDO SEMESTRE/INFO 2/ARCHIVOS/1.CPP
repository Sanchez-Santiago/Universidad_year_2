/*Escriba un programa que cree un archivo llamado "datos_personales.txt” 
que pregunte los siguientes datos personales: nombre, apellido, dni, edad, nacionalidad. 
Luego abrir el archivo y mostrarlo.
*/

#include <stdio.h>  
#include <stdlib.h>  

int main() 
{
    int i=0, edad=0;
    long dni=0;
    char nombre[30]={0}, apellido[20]={0}, nacion[10]={0};
    FILE *fp;
    fp=fopen("./datos_personales.txt", "w");

    if(fp==NULL)
    {
        printf("Imposible abrir el archivo");
        exit(1);
    }

    /*int can=0;
    printf("\n\ningresa la cantidad e personas que deseas ingresar: ");
    scanf("%d", can);
    printf("\n");*/

    //for ( i = 0; i < can; i++)
    //{
        printf("\n\nIngresa el apellido: ");
        scanf("%s", apellido);
        printf("\nIngresa el Nombre: ");
        scanf("%s", nombre);
        printf("\nIngresa el DNI: ");
        scanf("%ld", &dni);
        printf("\nIngresa el Edad: ");
        scanf("%d", &edad);
        printf("\nIngresa el Nacionalidaad: ");
        scanf("%s", nacion);
        fprintf(fp, "%s - %s - %d - %d - %s", apellido, nombre, dni, edad, nacion);
    //}
    fclose(fp);

    fp=fopen("./datos_personales.txt", "r");
    if (fp==NULL)
    {
        printf("EROR no se pudo abrir el archivo.");
        exit(1);
    }

    while(!feof(fp))
	{
		fscanf(fp,"%s\n%s\n%ld\n%d\n%s\n", &apellido, &nombre, &dni, &edad, &nacion);
		printf("\n%s\n%s\n%ld\n%d\n%s\n", apellido, nombre, dni, edad, nacion);
	}

	fclose(fp);

return(0);
}