/* Se desea cargar en un vector una cantidad de saldos de 
proveedores, 50 como maximo. La carga finaliza con un saldo 
menor o igual a cero. Ademas, se pide:
a. Cantidad de saldos cargados.
b. Promedio de saldos.
c. Cantidad de saldos menores al promedio.
d. Cantidad de saldos mayores al promedio.
e. Calcular cuanto fue lo recaudado en el mes.
*/
#include <stdio.h>
#include <ctime>
#include<stdlib.h>

int cargar_vector(float v[50]);
float sumar_vector(float v[50], int cant);
float promediar_vector(float v[50], int cant);
void contar_saldos_menores_prom(float v[50], int cant, float prom);
void contar_saldos_mayores_prom(float v[50], int cant, float prom);


using namespace std;

int main() {
	float v[50]={0}, prom=0;
	int cant=0;
	char op=' ';	
	cant=cargar_vector(v); //cant es la cantidad de elementos que se cargaron en el v.
	do{
		printf("\nMenu\na. Cant. Saldos\nb. Prom. Saldos\nc. Cant. Saldos Menores al Prom.\nd. Cant. Saldos Mayores al Prom.\ne. Recaudacion Mensual\n");
		scanf(" %c",&op);
		switch(op){
		case 'a':
			printf("Cantidad de saldos cargados: %d",cant);
			break;
		case 'b':
			prom=promediar_vector(v, cant);
			printf("\nPromedio de saldos: %0.2f",prom);
			break;
		case 'c':
			contar_saldos_menores_prom(v, cant, promediar_vector(v, cant));
			break;
		case 'd':
			contar_saldos_mayores_prom(v, cant, promediar_vector(v, cant));
			break;
		case 'e':
			printf("\nRecaudacion del mes: %0.2f",sumar_vector(v, cant));
			break;
		}
		
		printf("\n¿Desea volver al menu (S/N)? ");
		scanf(" %c",&op);
		
	}while(op=='s' || op=='S');  
	
	return 0;
}

int cargar_vector(float v[50]){
	int i=0;
	float saldo=1;
	printf("Ingrese saldos [Entre 0 y 50]: \n");
	while(saldo>0 && i<50){
		scanf("%f",&saldo);
		v[i]=saldo;
		i++;
	}
	return i-1;
}
	
float sumar_vector(float v[50], int cant){
	float suma=0;
	int i=0;
	for(i=0; i<cant;i++){
		suma+=v[i];
	}
	return suma;
}
	
float promediar_vector(float v[50], int cant){
	float prom=sumar_vector(v, cant)/(float)cant;
	return prom;
}
	
void contar_saldos_menores_prom(float v[50], int cant, float prom){
	int cant_menores=0, i=0;
	for(i=0;i<cant;i++){
		if(v[i]<prom)
			cant_menores++;
	}
	printf("\nCantidad de saldos menores al promedio: %d",cant_menores);
}
	
void contar_saldos_mayores_prom(float v[50], int cant, float prom){
	int cant_mayores=0, i=0;
	for(i=0;i<cant;i++){
		if(v[i]>prom)
			cant_mayores++;
	}
	printf("\nCantidad de saldos mayores al promedio: %d",cant_mayores);
}
