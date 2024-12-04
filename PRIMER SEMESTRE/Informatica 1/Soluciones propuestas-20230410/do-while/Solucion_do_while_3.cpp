/*Un estudiante esta aprendiendo las tablas de multiplicar del 
1 al 10,  entonces realice un programa que obtenga dos numeros 
aleatorios entre el 1 y 10 y asi compone una multiplicacion. 
Luego el estudiante ingresa el resultado, y el programa debera 
evaluar si es correcto o no. En caso de que sea incorrecto 
brindar la solucion. Despues el programa preguntara si desea 
seguir practicando. Si el estudiante responde Si 'S' el programa 
genera otro calculo, en caso de que diga que No 'N' se dara por 
terminada la sesion de preguntas y mostrara la cantidad de 
preguntas en total y cuantas respuestas fueron correctas. */

#include <stdio.h>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[]) {
	
	int num1=0, num2=0, res=0, res_bien=0, cant=0, cant_bien=0;
	char rta='1';
	srand(time(NULL));
	printf("Tablas\n");
	do{
		num1 = rand() % 10 + 1;
		num2 = rand() % 10 + 1;
		printf("¿Cuanto es %d x %d? ",num1, num2);
		scanf("%d",&res);
		cant++;
		res_bien=num1*num2;
		if(res==res_bien){
			printf("Felicitaciones!");
			cant_bien++;
		} 
		else{
			printf("Lo siento. La solucion es: %d",res_bien);
		}
		printf("\n\n¿Desea seguir practicando? (s/n)\n");
		scanf(" %c", &rta);
	}while(rta=='s' || rta=='S');
	printf("\n\n---RESULTADOS---\nTotal: %d \nCorrectas: %d",cant, cant_bien); 
	return 0;
}

