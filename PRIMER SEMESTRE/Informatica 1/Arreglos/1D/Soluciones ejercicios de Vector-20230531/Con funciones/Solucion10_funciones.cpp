/* Crear un programa que permita cargar un vector con las notas de los alumnos 
hasta que se ingrese -1, como maximo se pueden cargar 20 notas. En caso de que 
el alumno este ausente se colocara como nota igual a cero. Luego, crear un menu 
de opciones y mostrar lo siguiente:
a. Nota mayor y nota menor.
b. Cantidad de notas ingresadas
c. Cantidad de aprobados, cantidad de desaprobados y cantidad de ausentes.
*/

#include <stdio.h>

#define MAX_NOTAS 20

int cargar_notas(int [MAX_NOTAS]);
void buscar_nota_mayor_menor(int [MAX_NOTAS], int);
void contar_resultado(int [MAX_NOTAS], int);

int main() {
	int lista_nota[MAX_NOTAS]={0}, cant_notas = 0;
	char opcion=' ';
	cant_notas=cargar_notas(lista_nota);
	do {
		printf("\nMENU DE OPCIONES\n");
		printf("a. Nota mayor y nota menor\n");
		printf("b. Cantidad de notas ingresadas\n");
		printf("c. Cantidad de aprobados, desaprobados y ausentes\n");
		printf("d. Salir\n");
		printf("Ingrese una opcion: ");
		scanf(" %c", &opcion);
		switch (opcion) {
		case 'A':
		case 'a':
			buscar_nota_mayor_menor(lista_nota,cant_notas);
			break;
		case 'B':
		case 'b':
			printf("\nCantidad de notas ingresadas: %d\n", cant_notas);
			break;
		case 'C':
		case 'c':
			contar_resultado(lista_nota, cant_notas);
			break;
		case 'D':
		case 'd':
			break;
		default:
			printf("\nOpcion invalida\n");
		}
		
	} while (opcion != 'd' && opcion != 'D');
	
	return 0;
}


int cargar_notas(int lista_nota[MAX_NOTAS]){
	int cant_notas=0, nota=0;
	printf("Ingrese las notas de los alumnos (hasta -1, maximo %d notas):\n", MAX_NOTAS);
	do {
		printf("Nota %d: ", cant_notas+1);
		scanf("%d", &nota);
		if (nota != -1 && nota >=0 && nota<=10) {
			
			lista_nota[cant_notas] = nota;
			cant_notas++;			
		}else{
			if(nota==-1){
				printf("\n------------Fin de la carga.------------\n");
			}else{
				printf("Nota invalida. Ingrese otra.\n");
			}
		}
	}while(nota!=-1);
	return cant_notas;
}

// Encontrar la nota mayor y menor
void buscar_nota_mayor_menor(int lista_nota[MAX_NOTAS], int cant_notas){
	int nota_mayor = 0, nota_menor = 0, i=0;
	nota_mayor=lista_nota[0];
	nota_menor=lista_nota[0];
	for (i = 1; i < cant_notas; i++) {
		if (lista_nota[i] > nota_mayor) {
			nota_mayor = lista_nota[i];
		}
		if (lista_nota[i] < nota_menor && lista_nota[i]!=0) {
			nota_menor = lista_nota[i];
		}
	}
	printf("\nNota mayor: %d\n", nota_mayor);
	printf("Nota menor: %d\n", nota_menor);
}
	
void contar_resultado(int lista_nota[MAX_NOTAS], int cant_notas){
	int cant_aprobados = 0, cant_desaprobados = 0, cant_ausentes = 0;
	for (int i = 0; i < cant_notas; i++) {
		if (lista_nota[i] == 0) {
			cant_ausentes++;
		}else{ 
			if (lista_nota[i] >= 4) {
				cant_aprobados++;
			} else {
				cant_desaprobados++;
			}
		}
	}
	printf("\nCantidad de aprobados: %d\n", cant_aprobados);
	printf("Cantidad de desaprobados: %d\n", cant_desaprobados);
	printf("Cantidad de ausentes: %d\n", cant_ausentes);
}