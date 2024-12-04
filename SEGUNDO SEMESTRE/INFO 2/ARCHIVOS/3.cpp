/*Escriba un programa que cree un menú de opciones que permita a) abrir un archivo, b) escribir un archivo, c) leer un archivo.*/

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char op=' ', texto[100]={0};
    int i=0;
    FILE *fp=NULL;

    fp=fopen("Archivos.txt", "w");
    if (fp==NULL)
    {
        printf("\nERROR no se pudo abrir el archivo\n");
        exit(1);
    }
    fclose(fp);
    
    do
    {
        printf("\nEliga la opcion que desea realizar: \nA.Abrir un archivo.\nB.Escribir un archivo.\nC.Leer un archivo\nS.salir\n");
        scanf(" %c", &op);
        
        switch (op)
        {
        case 'a':
        case 'A':
            fp=fopen("archivo.txt","a");
                if (fp==NULL)
            {
                printf("\nERROR no se pudo abrir el archivo\n");
                exit(1);
            }
                printf("--------------APERTURA DEL ARCHIVO--------------\n");
                fclose(fp);
            break;
        case 'b':
        case 'B':
           
            fp=fopen("archivo.txt","a");
            if (fp==NULL)
            {
                printf("\nERROR no se pudo abrir el archivo\n");
                exit(1);/* condition */
            }
            printf("\nEscribe el texto: ");
            scanf(" %[^\n]", texto);
            fprintf(fp,"%s",texto);
            fclose(fp);
            break;
        case 'c':
        case 'C':
                printf("--------------Leer un archivo--------------\n");
                fp=fopen("archivo.txt", "r");
                if (fp==NULL)
                {
                    printf("\nERROR no se pudo abrir el archivo\n");
                    exit(1);
                }
                while(!feof(fp))
                {
                    fscanf(fp,"%s",texto);
                    printf("%s ",texto);
                }
                fclose(fp);
            break;
        
        default:
            break;
        }
        printf("\nDesea continuar? s=si\n");
        scanf(" %c", &op);
    } while (op=='s' || op=='S');
    
    return 0;
}
