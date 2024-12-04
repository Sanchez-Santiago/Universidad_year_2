#include <iostream>
#include <ctime>

#define LES 5

//Declaramos los prototopos de las funciones.
void mostrar(int v[LES][LES]);
int sumaPrimer(int v[LES][LES]);
void arregloPares(int v[LES][LES]);
int fun_D(int v[LES][LES]);


int main(int argc, char const *argv[])
{
    //declaramos las variables
    int vector[LES][LES]={0}, i=0, j=0, b=0, D=0, aux=0;
    char op=' ';

    //Generamos los numero aleatorio 
    srand(time(NULL));
    for ( i = 0; i < LES; i++)
    {
        for ( j = 0; j < LES; j++)
        {
            vector[i][j]=(rand() % 100 + 1 )* 3;
        }
        //3, 6, 9, 12, 15, 18, 21, 24, 27, 30, 33, 36, 39, 42, 45, 48, 51
    }
    //Creamos el menu de opciones 
    do
    {
        printf("\n\n######Que desea hacer?######\n \na.Mostrar los valores\nb.Sumar los valores de la primer fila\nc.Mostra el arreglo con los valores pares.\nd.sumar todos los valores menores a 5\nF=fin\n");
        scanf(" %c", &op);
        switch (op)
        {
        case 'a':
        case 'A':
            mostrar(vector);
            break;
        case 'b':
        case 'B':
            b=sumaPrimer(vector);
            printf("\n\nLa suma de los valores de la primer fila es: %d", b);
            break;
        case 'c':
        case 'C':
            arregloPares(vector);
            break;
        case 'd':
        case 'D':
            D=fun_D(vector);
            printf("La suma de los valores menores a 5 es: %d", D);
            break;
        
        default:
            break;
        }
    } while (op!='f' || op!='F');
    
    

    return 0;
}

//Creamos las funciones 
void mostrar(int v[LES][LES])
{
    printf("\n");
    int ii=0, jj=0;
    for ( ii = 0; ii < LES; ii++)
    {
        for ( jj = 0; jj < LES; jj++)
        {
            printf("%d\t", v[ii][jj]);
        }
        printf("\n");
    }
    printf("\n");
}

int sumaPrimer(int v[LES][LES])
{
    int ii=0, sum=0;
    for ( ii = 0; ii < LES; ii++)
    {
        sum=sum+v[0][ii];
    }
    return sum;
}

void arregloPares(int v[LES][LES])
{
    int ii=0, jj=0, suma_num=0, vec[25]={0},can=0, kk=0;
    for (ii = 0; ii < LES; ii++)
    {
        for ( jj = 0; jj < LES; jj++)
        {
            if (v[ii][jj]%2==0)
            {
                can++;
                for ( kk = 0; kk < can; kk++)
                {
                    vec[can]=v[ii][jj];
                }
            }
        }
    }
    if (can==0)
    {
        printf("\n\nNo se encontraron valores pares\n");
    }
    else
    {
        for ( kk = 0; kk < can; kk++)
        {
            printf("%d\t", vec[can]);
        }
    }
    
}

int fun_D(int v[LES][LES])
{
    int ii=0, jj=0, suma_num=0;
    for (ii = 0; ii < LES; ii++)
    {
        for ( jj = 0; jj < LES; jj++)
        {
            if (v[ii][jj]<5)
            {
                suma_num=suma_num+v[ii][jj];
            }
        }
    }
    return suma_num;
}