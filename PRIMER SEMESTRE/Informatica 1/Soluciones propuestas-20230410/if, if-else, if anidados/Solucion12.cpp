/*Los tramos impositivos para la declaración de la renta en un determinado 
país son los siguientes expresado en dólares USD:
Renta	             Tipo impositivo
Menos de 20000	     5%
de 20000 a 30000	 10%
de 30000 a 40000	 15%
mas de 40000	     20%
Escribir un programa que pregunte al usuario su renta anual y muestre por 
pantalla el tipo impositivo que le corresponde. */

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float renta=0;
	printf("Ingrese renta anual:\n");
	scanf("%f",&renta);
	if(renta<20000){
		printf("Tipo impositivo 5%%\n");
	}
	else{
		if(renta>=20000 && renta <30000){
			printf("Tipo impositivo 10%%\n");
		}else{
			if(renta>=30000 && renta <40000){
				printf("Tipo impositivo 15%%\n");
			}else{
				printf("Tipo impositivo 20%%\n");
			}
		}
	}
	return 0;
}

