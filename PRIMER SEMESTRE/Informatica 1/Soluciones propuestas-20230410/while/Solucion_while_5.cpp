/*Elaborar un algoritmo para obtener el resultado del escrutinio 
en las elecciones de un pueblo. Se han presentado 3 candidatos, 
considerar la posibilidad del voto en blanco e impugnado. 
El programa debe mostrar: 

- El orden de los ganadores 1, 2 y 3 lugar. (por mayoria simple)
- Las cantidades de votos que sacaron cada uno, como tambien 
la cantidad de votos en blanco e impugnados.*/


#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int voto=0, can1=0, can2=0, can3=0, blanco=0, imp=0;
	int puesto1_v=0, puesto2_v=0, puesto3_v=0;
	char rta='s', puesto1=' ', puesto2=' ', puesto3=' ';
	
	printf("ELECCIONES\n\n");
	while(rta=='s' || rta=='S'){
		printf("Ingrese su voto: \n");
		printf("1. Candidato A\n2. Candidato B\n3. Candidato C\n4. Blanco\n5. Impugnado\n");
		scanf("%d",&voto);
		switch(voto){
			case 1: 
				can1++;
				break;
			case 2:
				can2++;
				break;
			case 3:
				can3++;
				break;
			case 4:
				blanco++;
				break;
			default:
				imp++;
		}
		printf("\n¿Mas votantes (s/n)? ");
		scanf(" %c",&rta);
	}
	//Escrutinio Orden
	if(can1>can2 && can1>can3){
		puesto1='A';
		puesto1_v=can1;
		if(can2>can3){
			puesto2='B';
			puesto2_v=can2;
			puesto3='C';
			puesto3_v=can3;
		}else{
			puesto2='C';
			puesto2_v=can3;
			puesto3='B';
			puesto3_v=can2;
		}
	}else{
		if(can2>can1 && can2>can3){
			puesto1='B';
			puesto1_v=can2;
			if(can1>can3){
				puesto2='A';
				puesto2_v=can1;
				puesto3='C';
				puesto3_v=can3;
			}else{
				puesto2='C';
				puesto2_v=can3;
				puesto3='A';
				puesto3_v=can1;
			}
		}else{
			puesto1='C';
			puesto1_v=can3;
			if(can1>can2){
				puesto2='A';
				puesto2_v=can1;
				puesto3='B';
				puesto3_v=can2;
			}else{
				puesto2='B';
				puesto2_v=can2;
				puesto3='A';
				puesto3_v=can1;
			}
		}
	}
	
	//Resultados
	printf("\nResultados del escrutinio\n");
	printf("1 Puesto: Candidato %c con %d votos.\n", puesto1, puesto1_v);
	printf("2 Puesto: Candidato %c con %d votos.\n", puesto2, puesto2_v);
	printf("3 Puesto: Candidato %c con %d votos.\n", puesto3, puesto3_v);
	printf("Votos en blanco: %d\n", blanco);
	printf("Votos impugnados: %d\n",imp);

	return 0;
}

