#include <iostream>
int main(int argc, char const *argv[])
{
    char op=' ';
    float nota=1, promedio=0, sum=0, max=0, min=0;
    int apro=0, desapro=0, cantida=0;
    while (nota!=0)
    {
        printf("Escribe las notas de los alumnos, 0=fin\n");
        scanf("%f", &nota);

        if (nota!=0)
        {
            sum=sum+nota;
            if (nota>=4)
            {
                apro++;
            }
            else
            {
                desapro++;
            }
            
            if (cantida==0)
            {
                max=nota;
                min=nota;
            }
            else
            {
                if (nota>max)
                {
                  max=nota;
                }
                if (nota<min)
                {
                    min=nota;
                }
            }
            cantida++;
            
        }
    }

    while(op!='s')
	{
		printf("\nSeleccione una opcion (Salir = 's'): \n");
		printf("a. Nota mayor y menor.\nb. Cant. Aprobadas y Desaprobados.\nc. Promedio General.\n");
		scanf(" %c",&op);

		switch(op){
			case 'a': 
				printf("Nota mayor: %0.f \nNota menor: %0.f\n", max, min);
				break;
			case 'b': 
				printf("Cant. Aprobados: %d \nCant.Desaprobados: %d\n", apro,desapro);
				break;
			case 'c': 
				promedio=sum/cantida;
				printf("Promedio general: %0.f\n",promedio);
				break;
			case 's':
				printf("Fin.\n");
				break;
		}
	}


    return 0;
}
