/*Escribir un programa que permita realizar descuentos en un 
comercio, en funcion del total de arti�culos que lleva el cliente. 
Para realizar dichos descuentos, se deben leer los importes de 
cada articulo hasta que un importe sea igual a cero; 
posteriormente se escribira el importe total a pagar teniendo 
en cuenta que se pueden efectuar los siguientes descuentos:

- Si el importe total de la compra esta entre $50 y $120, 
el descuento es del 15%.
- Si el importe total de la compra es mayor de $120 el descuento 
es del 20%.
- La lectura de clientes finaliza tras responder al mensaje 
�Mas clientes (S/N)?, mostrando al final la suma total de todos 
los importes cobrados por el negocio.*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	float importe=-1, total_compra=0, recaudacion=0;
	char rta='s';
	
	while(rta=='s'){
		while(importe!=0){
			printf("Ingrese el importe de un articulo $ ");
			scanf("%f",&importe);
			if(importe!=0)
			{
				total_compra=total_compra+importe;
			}
		}//cierre del while importe!=0
		//calculos del importe total a pagar del cliente.
		if(total_compra<50)
		{
			printf("Ud. debe abonar $%0.f \n",total_compra);
		}
		else
		{
			if(total_compra<=120)
			{
				total_compra=total_compra-(total_compra*0.15); //descuento 15
				printf("Su compra tiene un descuento del 15%%, Ud. debe abonar $%0.f\n", total_compra);
			}
			else
			{
				total_compra=total_compra-(total_compra*0.20); //descuento 20
				printf("Su compra tiene un descuento del 20%%, Ud. debe abonar $%0.f\n",total_compra);
			}
		}
		//Sumatoria de la recaudacion del negocio.
		recaudacion=recaudacion+total_compra;
	
		//inicializar variables para el proximo cliente.
		total_compra=0;
		importe=-1;
	
		printf("\n�Mas clientes (s/n)? ");
		scanf(" %c",&rta);
	}//cierre del while rta=='s'
	
	printf("\nLa recaudacion del negocio es $%0.f\n",recaudacion);
	
	return 0;
}

