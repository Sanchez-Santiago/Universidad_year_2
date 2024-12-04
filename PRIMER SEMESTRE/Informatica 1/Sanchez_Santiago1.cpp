#include <iostream>
#include <string.h>
#include <ctime>

int cargar(int vector[10][4]);
int verificar_cupo(int vector[10][4], int ii,int n[3]);
void muestra(int vector[10][4]);

int main(int argc, char const *argv[])
{
    int  vector[10][4]={0}, n[3]={0}, total=0;
    char op=' ';
    total=cargar(vector);
    muestra(vector);

    printf("\n\tElige la opciones\n");
    printf("\nA.inscriptos\nB.Cantidad de alumnos\nC.Recaudacion\n");
    scanf(" %c", &op);
    switch (op)
    {
    case 'a':
        
        
        break;
    case 'b':
        printf("\nNivel 1 hay: %d\n", n[0]);
        printf("\nNivel 2 hay: %d\n", n[1]);
        printf("\nNivel 3 hay: %d\n", n[2]);
        break;
    case 'c':
        printf("El total recaudado es de: %d\n", total);
        break;
    default:
        break;
    }

    return 0;
}


int cargar(int vector[10][4])
{
    int ii=0, cup=0, n[3], total=0 ;
    srand(time(NULL));

    for ( ii = 0; ii < 14; ii++)
    {
        vector[ii][0]=(ii+1);
        vector[ii][1]=rand()%3;
        if (vector[ii][0]=0 && n[0]<=5)
        {
            n[0]++;
        }
        if (vector[ii][0]=1 && n[1]<=5)
        {
            n[1]++;
        }
        if (vector[ii][0]=2 && n[2]<=5)
        {
            n[2]++;
        }
        vector[ii][2]=rand()%1;
        if (vector[ii][2]=0)
        {
            if (vector[ii][3]=1)
            {
                vector[ii][3]=3000;
            }
            if (vector[ii][3]=2)
            {
                vector[ii][3]=4000;
            }
            if (vector[ii][3]=3)
            {
                vector[ii][3]=5000;
            }
            
        }
        if (vector[ii][2]=1)
        {
            if (vector[ii][1]=1)
            {
                vector[ii][3]=3000-((3000*100)/10);
            }
            if (vector[ii][1]=2)
            {
                vector[ii][3]=4000-((4000*100)/10);
            }
            if (vector[ii][1]=3)
            {
                vector[ii][3]=5000-((5000*100)/10);
            }
            
        }
        total=total+vector[ii][3];

    }
    return total;
}

int verificar_cupo(int vector[10][4], int ii, int n[3])
{
    int jj=0, t=0;

        if (vector[ii][0]=1 && n[0]<=5)
        {
            n[0]++;
            t=1;
        }
        if (vector[ii][0]=2 && n[1]<=5)
        {
            n[1]++;
            t=1;
        }
        if (vector[ii][0]=3 && n[2]<=5)
        {
            n[2]++;
            t=1;
        }
        if (t=1)
        {
            jj=1;
        }
        else
        {
            jj=0;
        }
        
        

    return jj;
}
void muestra(int vector[10][4])
{
    int i=0, j=0;
    for ( i = 0; i < 10; i++)
    {
       printf("\n");
       printf("%d\t%d\t%d\t%d\t", vector[i][0],vector[i][1],vector[i][2],vector[i][3]);
        
    }
    
}