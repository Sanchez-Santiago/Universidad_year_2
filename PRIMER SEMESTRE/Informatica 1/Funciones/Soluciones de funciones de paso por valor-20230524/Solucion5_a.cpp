/*Escribir una funcion que muestre el abecedario en mayuscula y otra funcion que 
muestre el abecedario en minuscula. Nota: En el codigo ASCII las letras de la A-Z 
es de 65-90, y las a-z de 97-122.
*/

#include <stdio.h>

//Prototipado de las funciones
void printAlphabetUpper();
void printAlphabetLower();

//Funcion principal
int main() {
	printAlphabetUpper();
	printAlphabetLower();
	return 0;
}

//Desarrollo de las funciones

void printAlphabetUpper() {
	char letter = 'A';
	printf("Alphabet in uppercase:\n");
	while (letter <= 'Z') {
		printf("%c ", letter);
		letter++;
	}
	printf("\n\n");
}

void printAlphabetLower() {
	char letter = 'a';
	printf("Alphabet in lowercase:\n");
	while (letter <= 'z') {
		printf("%c ", letter);
		letter++;
	}
	printf("\n\n");
}
