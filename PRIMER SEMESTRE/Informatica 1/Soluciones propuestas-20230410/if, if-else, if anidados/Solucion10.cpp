/*Escribir un programa para una empresa que tiene salas de juegos para todas 
las edades y quiere calcular de forma autom�tica el precio que debe cobrar a 
sus clientes por entrar. El programa debe preguntar al usuario la edad del 
cliente y mostrar el precio de la entrada. Si el cliente es menor de 4 a�os 
puede entrar gratis, si tiene entre 4 y 18 a�os debe pagar $100 y si es mayor 
de 18 a�os, $200.*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int edad=0;
	printf("Ingrese edad:\n");
	scanf("%d",&edad);
	if(edad<4){
		printf("Entrada gratuita.\n");
	}else{
		if(edad>=4 && edad<=18){
			printf("Entrada $100.\n");
		}else{
			printf("Entrada $200.\n");
		}
	}
	return 0;
}

