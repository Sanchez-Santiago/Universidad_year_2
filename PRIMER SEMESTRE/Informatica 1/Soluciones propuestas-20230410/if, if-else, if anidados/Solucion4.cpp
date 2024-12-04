/* Para tributar un determinado impuesto se debe ser mayor de 25 años y 
tener unos ingresos iguales o superiores a $200.000 mensuales. Escribir 
un programa que pregunte al usuario su edad y sus ingresos mensuales y 
muestre por pantalla si el usuario tiene que tributar o no.*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int edad=0;
	float ingreso=0;
	printf("Ingrese edad: \n");
	scanf("%d",&edad);
	printf("Ingrese ingreso mensual: \n");
	scanf("%f",&ingreso);
	if(edad>25 && ingreso>=200000)
		printf("Debe tributar. \n");
	else
		printf("No debe tributar. \n");
	return 0;
}

