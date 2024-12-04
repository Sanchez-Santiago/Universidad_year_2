/*Ingrese dos numeros y el codigo de operacion, luego si codigo es:
1. Sumar, 2. Restar, 3. Multiplicar y 4. Division.  
*/

#include <stdio.h>
using namespace std;
int main(int argc, char *argv[]) {
	int op=0;
	float num1=0, num2=0, res=0;
	printf("Ingrese dos números: \n");
	scanf("%f %f",&num1,&num2);
	printf("Seleccione: \n1.Suma\n2.Resta\n3.Multiplicación\n4.División\n");
	scanf("%d",&op);
	switch (op){
	case 1:
		res=num1 + num2;
		break;
	case 2:
		res=num1 - num2;
		break;
	case 3:
		res=num1 * num2;
		break;
	case 4:
		res=num1 / num2;
		break;
	}
	printf("\nResultado: %f",res);
	return 0;
}

