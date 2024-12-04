/*Realice un algoritmo que solicite una letra, y luego diga si la misma 
es vocal o consonante.
*/

#include <stdio.h>
using namespace std;
int main(int argc, char *argv[]) {
	char letra=' '; //aqui hay un espacio entre medio de ''
	printf("Ingrese letra: ");
	scanf("%c", &letra);
	switch (letra){ 
	case 'a': //los char se escriben con '
		printf("Vocal. "); //los string se escriben con "
		break;
	case 'e':
		printf("Vocal. ");
		break;
	case 'i': 
		printf("Vocal. ");
		break;
	case 'o': 
		printf("Vocal. ");
		break;
	case 'u':
		printf("Vocal. ");
		break;
	default: 
		printf("No es vocal. ");
		break;
	}
	return 0;
}
