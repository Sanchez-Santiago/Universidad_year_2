/*Realizar un programa que simule una calculadora. El mismo debe contener un menu 
de opciones con las distintas operaciones que puede realizar. Las operaciones 
deben ser programadas utilizando funciones. (del tipo void)
a. Sumar dos numeros.
b. Restar dos numeros.
c. Multiplicar dos numeros.
d. Dividir dos numeros. 
*/

#include <stdio.h>
using namespace std;

//prototipado de las funciones
void sumar(int, int);
void restar(int, int);
void multiplicar(int, int);
void dividir(int, int);

int main(int argc, char *argv[]) {
	
	char op=' ';
	int num1=0, num2=0;
	bool bandera_valido=false;
	do{
	printf("\n*****************************************************************");
	printf("\nCALCULADORA\na. Sumar\nb. Restar\nc. Multiplicar\nd. Dividir\ns. Salir");
	printf("\n*****************************************************************");
	printf("\n\nIngrese una opcion: ");
		do{
				scanf(" %c",&op);
				if(op=='a'||op=='b'||op=='c'||op=='d'||op=='s'){
					bandera_valido=true;
				}else{
					printf("\nDebe ingresar una opcion valida. \n");
					bandera_valido=false;
				}
		}while(bandera_valido==false);
	
		if(op!='s'){
			printf("\nIngrese dos numeros: \n");
			scanf("%d%d",&num1,&num2);
			switch(op){
				case 'a': 
					sumar(num1, num2);
					break;
				case 'b': 
					restar(num1, num2);
					break;
				case 'c': 
					multiplicar(num1, num2);
					break;
				case 'd': 
					dividir(num1, num2);
					break;
			}
		}
	}while(op!='s');
	return 0;
}

//Desarrollo de las funciones
void sumar(int numero1, int numero2){
	printf("\n%d + %d = %d\n", numero1, numero2, (numero1+numero2));
}
void restar(int numero1, int numero2){
	printf("\n%d - %d = %d\n", numero1, numero2, (numero1-numero2));
}
	
void multiplicar(int numero1, int numero2){
	printf("\n%d * %d = %d\n", numero1, numero2, (numero1*numero2));
}
void dividir(int numero1, int numero2){
	printf("\n%d / %d = %d\n", numero1, numero2, (numero1/numero2));
}
