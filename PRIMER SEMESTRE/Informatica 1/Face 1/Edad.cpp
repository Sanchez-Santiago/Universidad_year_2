#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string nombre=" ";
    int anio = 0, edad=0;
    printf("Ingresa tu Nombre y tu fecha de naciminto \n");
    scanf("%s%d", &nombre, &anio);
    edad=2023-anio;
    printf("nombre: %s\t", nombre);
    printf("Edaad: %d", edad);
    return 0;
}