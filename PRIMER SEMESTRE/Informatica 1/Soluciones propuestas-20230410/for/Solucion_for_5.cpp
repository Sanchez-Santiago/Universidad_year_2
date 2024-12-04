/*Una estacion meteorologica en Los Molinos toma la temperatura 
cada una hora. Luego muestra por dia el promedio de la temperatura, 
la temperatura minina y la temperatura maxima. */

#include <stdio.h>
#include <ctime>
#include<stdlib.h>
using namespace std;
int main(int argc, char *argv[]) {
	int num=0, i=0, max=0, min=0, sumador=0, prom=0;
	srand(time(NULL)); 
	printf("Temperaturas: \n\n");
	for(i=0;i<24;i++){
		num = rand() % 51;//hasta+1 = 0 a 50 
		printf("%d - ",num);
		sumador=sumador+num;
		if(i==0){
			max=num;
			min=num;
		}else{
			if(num>max){
				max=num;
			}
			if(num<min){
				min=num;
			}
		}
	}
	prom=sumador/24;
	printf("\n\nMax: %d Min: %d Promedio: %d ",max, min, prom);
	return 0;
}
