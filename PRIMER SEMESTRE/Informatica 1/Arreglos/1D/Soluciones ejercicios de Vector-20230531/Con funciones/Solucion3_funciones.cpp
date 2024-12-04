/*Realice un programa que permita cargar el abecedario en 
un vector. Luego muestre el abecedario ingresado.
*/

#include <stdio.h>
#define N 26

void crearAbecedario(char v[N]);
void mostrarAbecedario(char v[N]);

int main() {
	char v[N] = {' '};
	
	crearAbecedario(v);
	mostrarAbecedario(v);
	
	return 0;
}

void crearAbecedario(char v[N]) {
	for(int i = 0; i < N; i++) {
		v[i] = i + 65; //De acuerdo al codigo ASCII A=65
	}
}

void mostrarAbecedario(char v[N]) {
	printf("Abecedario \n");
	for(int i = 0; i < N; i++) {
		printf("%c ", v[i]);
	}
}
