/*Ingrese la cantidad de unidades que tiene una materia y la cantidad de 
unidades estudiadas por el alumno y determine si el alumno estudio toda la 
materia o cuantas unidades le faltan estudiar. */

#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	int unidad_total=0, unidad_alu=0, unidad_falta;	
	printf("Ingrese la cantidad total de unidades de la materia y la cantidad de unidades estudiadas: \n");
	scanf("%d%d",&unidad_total, &unidad_alu);
	if(unidad_total==unidad_alu){
		printf("Felicitaciones!!! Has estudiado todo.");
	}else{
		unidad_falta=unidad_total-unidad_alu;
		printf("Te faltan %d unidades por estudiar.",unidad_falta);
	}
	return 0;
}
