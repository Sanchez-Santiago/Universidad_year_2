/*Los alumnos de un curso de ingles se han dividido en dos grupos A y B 
de acuerdo a la inicial del apellido y a la nota obtenida en el examen de 
nivelación. Los grupos se conforman de la siguiente manera:
- Grupo A: Inical de A-M inclusive. Notas igual o mayor a 7.
- Grupo B: Inical de N-Z inclusive. Notas igual o mayor a 7.
- Grupo C: Inical de A-M inclusive. Notas igual o menor a 7.
- Grupo D: Inical de N-Z inclusive. Notas igual o menor a 7.
Escribir un programa que pregunte al usuario la inicial de su apellido 
y la nota obtenida en el examen, finalmente muestre por pantalla cual es el 
grupo que le corresponde.*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	char letra=' ';
	int nota=0;
	printf("Ingrese letra inicial de su apellido: \n");
	scanf(" %c",&letra);
	printf("Ingrese nota obtenida en el examen de nivelacion: \n");
	scanf("%d",&nota);
	if(letra>='A' && letra<='M'){
		if(nota>=7){
			printf("Grupo A\n");
		}else{
			printf("Grupo C\n");
		}
	}else{
		if(nota>=7){
			printf("Grupo B\n");
		}else{
			printf("Grupo D\n");
		}
	}
	return 0;
}

