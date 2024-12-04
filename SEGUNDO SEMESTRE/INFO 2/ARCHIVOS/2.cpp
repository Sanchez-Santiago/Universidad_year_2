/*Escriba un programa que cree un archivo llamado "pares.txt” que contenga 
los valores pares del 1 al 100. Luego abrir el archivo y mostrarlo.*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>


int main(int argc, char const *argv[])
{
    /*int n[LES]={0}, i=0, j=0;
    FILE *fp=NULL;
    fp=fopen("pares.txt","w");

    if (fp==NULL)
    {
        printf("ERROR, el archivo no se pudo abrir.");
        exit(1);
    }
    
    for ( i = 0; i <= LES; i++)
    {

        if(n[i]%2==0)
		{
			n[i]=i;
			j++;
		}
    }

    for ( i = 0; i < LES; i++)
    {
        fprintf(fp, "%d ", n[i]);
    }
    

    fclose(fp);

    fp=fopen("./pares.txt", "r");

    while (!feof(fp))
    {
        for ( i = 0; i < LES; i++)
        {
            fscanf(fp, "%d", n[i]);
            printf("%d", n[i]);
        }
        
    }

    fclose(fp);*/
    FILE *fp=NULL;
	int i=0, j=0, pares[50]={0};
	
	fp=fopen("pares.txt","w");
	 if (fp==NULL)
    {
        printf("ERROR, el archivo no se pudo abrir.");
        exit(1);
    }
	
	//cargamos el arreglo de pares con los pares
	for(i=1;i<=100;i++)
	{
		if(i%2==0)
		{
			pares[j]=i;
			j++;
		}
	}
	
	//copiamos los valores pares en el archivo
	for(i=0;i<j;i++) 
	{
		fprintf(fp,"%d\n", pares[i]);
	}
	fclose(fp);
	
	//abrir y leer el archivo
	fp=fopen("pares.txt","r");
	 if (fp==NULL)
    {
        printf("ERROR, el archivo no se pudo abrir.");
        exit(1);
    }
	i=0;
	while(!feof(fp))
	{
		fscanf(fp,"%d\n",&pares[i]);
		printf("%d\n",pares[i]);
		i++;
	}
	fclose(fp);

    return 0;
}
