#include <iostream>

int main(int argc, char const *argv[])
{
    int destino;
    float peso=0, res=0;
    printf("Cual es el peso en gramo del paquete? \n");
    scanf("%f", &peso);
    printf("Elija el destino: \n1 América del Norte y Central \n2 América del Sur \n3 Europa \n4 Asia y Oceanía \n");
    scanf("%d", &destino);
    switch (destino)
    {
        case 1: 
            res= peso*30;
        case 2: 
            res= peso*20;
        case 3: 
            res= peso*70;
        case 4: 
            res= peso*100;
    }
    printf("\nPrecio a Pagar es de: $%f \n", res);
    return 0;
}
