#include <iostream>

int main(int argc, char const *argv[])
{
    int n1=1, n2=0, n3=0;
    printf("ingresa 3 numeros\n");
    scanf("%d%d%d", &n1, &n2, &n3);

    if (n1==n2 || n1==n3 )
    {
        if (n3==n1 && n2==n3)
        {
            printf("Los tres numeros son igules =)\n");
        }
        else
        {
            printf("hay dos numeros iguales =)");
        }
        
    }
    else
    {
        if (n3==n2)
        {
            printf("hay dos numeros iguales =)");
        }
        else
        {
            printf("Ninguno delos tres numeros es igual =(\n");
        }
        
        
    }
    

    return 0;
}
