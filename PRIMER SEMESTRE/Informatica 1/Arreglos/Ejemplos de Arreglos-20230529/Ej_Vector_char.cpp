#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <string.h>

using namespace std;

int main() {
	char palabra[20]={' '};
	int total_letra=0;
	printf("Ingrese una palabra: ");
	scanf(" %s",palabra);
	total_letra=strlen(palabra); //da la cantidad de letras en total
	printf("La palabra \"%s\" tiene %d letras. ", palabra, total_letra);
	return 0;

}
