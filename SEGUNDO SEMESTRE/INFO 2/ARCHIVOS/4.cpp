/*Escriba un programa que busque dentro del archivo el_quijote.txt la cantidad de veces que aparecen 
las palabras “Quijote”, “Rocinante” y “Sancho”. Recuerden descargar el archivo en el mismo lugar 
donde corren el programa.*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    int quijote_con=0, rocinanta_con=0, sancho_con=0;
    char palabra[20]={0};
    FILE *fp=fopen("el_quijote.txt", "r");

    if (fp==NULL)
    {
        printf("\nEl archivo no se pudo abrir");
        exit(1);
    }
    

    while (fscanf(fp, "%s", &palabra)!=EOF)
    {
        if (strcasecmp("Quijote", palabra)==0)
        {
            quijote_con++;
        }
        if (strcasecmp(palabra, "Rocinante")==0)
        {
            rocinanta_con++;
        }
        if (strcasecmp(palabra, "Sancho")==0)
        {
            sancho_con++;
        }        
    }

    fclose(fp);
    
    printf("\nLacantidad de veces que aparese Quijote es: %d", quijote_con);
    printf("\nLacantidad de veces que aparese Rocinante es: %d", rocinanta_con);
    printf("\nLacantidad de veces que aparese Sancho es: %d\n", sancho_con);



    return 0;
}
