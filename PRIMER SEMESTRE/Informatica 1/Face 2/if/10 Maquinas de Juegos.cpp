#include <iostream>

int main(int argc, char const *argv[])
{
    int edad=0;
    printf("Escribe tu edad:\n");
    scanf("%d", &edad);
    if (edad<4)
    {
        printf("Puede entrar gratis\n");
    }
    else
    {
        if (edad>=4 && edad<=18)
        {
            printf("Debe pagar $100\n");
        }
        else
        {
            printf("Debe pagar $200\n");
        }
        
        
    }
    
    
    return 0;
}
