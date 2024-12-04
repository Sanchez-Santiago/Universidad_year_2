/*Escribir un programa que pida ingresar coordenadas (x,y) que representan 
puntos en el plano. Informar cuantos puntos se han ingresado en el primer, 
segundo, tercer y cuarto cuadrante. Al comenzar el programa se pide que se 
ingrese la cantidad de puntos a procesar.*/

#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
	int i=0, cantidad=0, x=0, y=0, cant1=0, cant2=0, cant3=0, cant4=0;
	printf("Ingrese la cantidad de puntos: ");
	scanf("%d",&cantidad);
	for(i=0; i<cantidad;i++){
		printf("\nIngrese (x, y): \n");
		scanf("%d %d",&x,&y);
		if(x>0 && y>0){
			printf("El punto (%d,%d) esta en el 1er plano.\n",x,y);
			cant1++;
		}else{
			if(x>0 && y<0){
				printf("El punto (%d,%d) esta en el 2do plano.\n",x,y);
				cant2++;
			}else{
				if(x<0 && y<0){
					printf("El punto (%d,%d) esta en el 3er plano.\n",x,y);
					cant3++;
				}else{
					printf("El punto (%d,%d) esta en el 4to plano.\n",x,y);
					cant4++;
				}
			}
		}
	}
	printf("La cantidad de puntos en el plano: \n1: %d \n2: %d \n3: %d \n4: %d", cant1, cant2, cant3, cant4);
	return 0;
}
