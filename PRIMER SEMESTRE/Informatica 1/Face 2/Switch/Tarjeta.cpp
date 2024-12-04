#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float monto=0, res=0;
    int tarjeta=0;
    printf("Cual es el monto de tu tarjeta? \n");
    scanf("%f", &monto);
    printf("Cual es tu tipo de tarjeta 1-2-3 u otros \n");
    scanf("%d", &tarjeta);
    switch (tarjeta)
    {
        case 1: 
            res= (monto*0.25+monto);
        case 2: 
            res= (monto*0.35)+monto; 
        case 3: 
            res= (monto*0.40)+monto; 
        default: 
            res= (monto*0.50)+monto;
    }
    printf("\nPrecio a Pagar es de: $%f \n", res);
    return 0;
}
