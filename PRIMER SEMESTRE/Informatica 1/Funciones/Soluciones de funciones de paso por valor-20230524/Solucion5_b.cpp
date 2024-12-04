/*Escribir una funcion que muestre el abecedario en mayuscula y otra funcion que 
muestre el abecedario en minuscula. Nota: En el codigo ASCII las letras de la A-Z 
es de 65-90, y las a-z de 97-122.
*/

#include <stdio.h>

//Prototipado
void printAlphabetUpper();
void printAlphabetLower();

int main() {
	printAlphabetUpper();
	printAlphabetLower();
	return 0;
}

//Desarrollo de funciones

void printAlphabetUpper() {
	int i=0;
	printf("Alphabet in uppercase:\n");
	for(i = 65; i <= 90; i++) {
		printf("%c ", i);
	}
	printf("\n\n");
}

void printAlphabetLower() {
	int i=0;
	printf("Alphabet in lowercase:\n");
	for(i = 97; i <= 122; i++) {
		printf("%c ", i);
	}
	printf("\n\n");
}
