/*Escribir un programa que simule una calculadora, en donde muestre un menu de 
opciones con las operaciones permitidas como a. Suma, b. Resta, c. Multiplicacion 
y d. Division. Luego el programa solicita que se ingrese dos numeros (tipo float) 
y llame a la funcion correspondiente para hacer el calculo. Luego mostrar el 
resultado y preguntar si desea realizar otra operacion o terminar el programa. 

Usar punteros para la resolucion de este ejercicio. 
Nota: Diseñar dos funciones con paso por referencia con devolucion del valor y 
dos funciones con paso por referencia sin devolucion del valor.
*/

#include <stdio.h>

// Prototipos de las funciones
void imprimir_menu();
float realizar_operacion(int opcion, float *a, float *b);
void suma(float *a, float *b, float *resultado);
void resta(float *a, float *b, float *resultado);
void multiplicacion(float *a, float *b, float *resultado);
int division(float *a, float *b, float *resultado);

int main() {
	float num1=0, num2=0, resultado=0;
	char opcion=0;
	
	do {
		// Imprimir el menu de opciones
		imprimir_menu();
		
		// Pedir al usuario que ingrese la opcion deseada
		printf("Ingrese la opcion deseada: ");
		scanf(" %c", &opcion);
		
		// Pedir al usuario que ingrese los dos numeros
		printf("Ingrese el primer numero: ");
		scanf("%f", &num1);
		printf("Ingrese el segundo numero: ");
		scanf("%f", &num2);
		
		// Llamar a la funcion correspondiente segun la opcion elegida
		resultado=realizar_operacion(opcion, &num1, &num2);
		
		// Mostrar el resultado de la operacion
		printf("El resultado es: %.2f\n", resultado);
		
		// Preguntar si desea realizar otra operacion
		printf("Desea realizar otra operacion? (S/N):");
		scanf(" %c", &opcion);
		
	} while (opcion == 'S' || opcion == 's');
	
	return 0;
}

void imprimir_menu() {
	printf("CALCULADORA\n");
	printf("a. Suma\n");
	printf("b. Resta\n");
	printf("c. Multiplicacion\n");
	printf("d. Division\n");
}

float realizar_operacion(int opcion, float *a, float *b) {
	float resultado=0;
	switch (opcion) {
	case 'a':
	case 'A':
		suma(a, b, &resultado);
		break;
	case 'b':
	case 'B':
		resta(a, b, &resultado);
		break;
	case 'c':
	case 'C':
		multiplicacion(a, b, &resultado);
		break;
	case 'd':
	case 'D':
		if (division(a, b, &resultado)) {
			printf("La division se realizo correctamente\n");
		} else {
			printf("No se puede dividir por cero\n");
		}
		break;
	default:
		printf("Opcion invalida\n");
	}
	return resultado;
}

void suma(float *a, float *b, float *resultado) {
	*resultado = *a + *b;
}

void resta(float *a, float *b, float *resultado) {
	*resultado = *a - *b;
}

void multiplicacion(float *a, float *b, float *resultado) {
	*resultado = *a * *b;
}

int division(float *a, float *b, float *resultado) {
	// Verificar que el segundo numero sea distinto de cero
	if (*b != 0) {
		*resultado = *a / *b;
		return 1; // Retornar 1 si la operacion se realiza correctamente
	} else {
		return 0; // Retornar 0 si el segundo numero es cero
	}
}

