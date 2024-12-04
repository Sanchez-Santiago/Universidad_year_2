/*Desarrolle un programa para una academia de musica que permita gestionar la inscripcion 
de alumnos a los cursos de guitarra de los diferentes niveles. Algunas consideraciones:
- La academia ofrece 3 niveles: principiantes (1), intermedios (2) y avanzados (3).  
- Cupo maximo de 5 alumnos por curso.
- Los costos de matriculacion y mensuales de cada curso es de $3000 para principiantes, 
$4000 para intermedios y $5000 para avanzados. 
- La academia lanza una promocion en donde si dos amigos se inscriben tienen un descuento 
del 10% cada uno en su matricula.

Declare e inicialice a cero un arreglo 10x4. Luego crear una funcion para "generar las 
inscripciones" (10 pts), teniendo en cuenta lo siguiente: 
- La columna "numero de inscripcion" debe completarse automaticamente con numeros consecutivos 
empezando por 1.
- La columna "nivel del curso" debe obtenerse mediante numeros aleatorios entre 1 y 3. Luego debe 
revisar que haya cupo suficiente para ese nivel, en caso de que no haya cupo debera descartarse 
esta inscripcion. Para ello diseñe una funcion llamada "verificar cupo".
- La columna "promocion" debe obtenerse con numeros aleatorios entre el 0 y 1. El cero es que 
no tiene promocion y 1 es que si tiene promocion.
- La columna "monto total" debera calcular el monto de la inscripcion segen el nivel y si tiene 
promocion.  

Num de Inscripcion   Nivel del curso   Promocion  Monto total

Luego crear un menu de opciones que se repita hasta que el usuario indique "s" de salir con 
las siguientes funciones: 
- Mostrar todas las inscripciones por nivel.
- Mostrar la cantidad de alumnos por cada nivel.
- Calcular la recaudacion de la academia de musica.

*/

#include <stdio.h>
#include <stdlib.h>
#include <ctime>

using namespace std;

void generar_inscripcion(int [10][4]);
void mostrar(int[10][4]);
bool verificar_cupo(int, int[10][4]);
int calcular_monto_total(int, int);
void calcular_cant_alu_nivel(int[10][4]);
int calcular_recaudacion(int[10][4]);

int main(int argc, char *argv[]) {
	
	int v[10][4]={0};
	char opcion = ' ';
	srand(time(NULL));
	generar_inscripcion(v);
	
	do{
		printf("\nMenu de opciones\nA. Lista de inscripciones por nivel.\nB. Cantidad de alumnos por nivel.\nC. Recaudacion total.\nS. Salir.\nIngrese opcion: ");
		scanf(" %c", &opcion);
		switch(opcion){
		case 'A':
		case 'a':
			mostrar(v);
			break;
		case 'B':
		case 'b':
			calcular_cant_alu_nivel(v);
			break;
		case 'C':
		case 'c':
			printf("\nRecaudacion: $%d\n", calcular_recaudacion(v));
			break;
		case 'S':
		case 's':
			printf("Adios");
		}
	}while(opcion != 'S' && opcion != 's');
	return 0;
}

//Desarrollo de las funciones

void generar_inscripcion(int v[10][4]){
	int i=0, nivel=0;
	bool esta_inscripto=false;
	
	for(i=0;i<10;i++){
		//columna 1
		v[i][0] = i+1;
		
		//columna 2
		esta_inscripto=false;
		do{
			nivel=(rand()%3+1);
			if(verificar_cupo(nivel, v)){
				v[i][1] = nivel;
				esta_inscripto=true;
			}
		}while(esta_inscripto==false);
		
		//columna 3
		v[i][2] = rand()%2;
		
		//Columna 4
		v[i][3] = calcular_monto_total(v[i][1], v[i][2]);
	}
}

bool verificar_cupo(int nivel, int v[10][4]){
	bool hay_cupo=true;
	int i=0, cant_alu_nivel=0;
	for(i=0; i<10;i++){
		if(v[i][1]==nivel){
			cant_alu_nivel++;
		}
	}
	if(cant_alu_nivel>=5){
		hay_cupo=false;
	}
	return hay_cupo; 
}

int calcular_monto_total(int nivel, int promo){
	int monto = 0;
	
	if(nivel == 1){
		monto = 3000;
	}else{
		if(nivel == 2){
			monto = 4000;
		}else{
			monto = 5000;
		}
	}
	if(promo == 1){
		monto = (monto*0.90);
	}
	return monto;
}
	
void mostrar(int v[10][4]){
	int i=0, j=0, n=0;
	printf("\nNum.\tNivel\tProm\tMonto\n");
	for(n=1; n<=3;n++) {
		printf("Nivel %d: \n", n);
		for(i = 0; i < 10; i++) {
			if(v[i][1] == n) {
				for(j=0;j<4;j++){
					printf("%d\t",v[i][j]);
				}
				printf("\n");
			}
		}
	}
	printf("\n");
}

void calcular_cant_alu_nivel(int v[10][4]){
	int cant_nivel1=0, cant_nivel2=0, cant_nivel3=0, i=0;

	for(i=0;i<10;i++){
		if(v[i][1]==1){
			cant_nivel1++;
		}else{
			if(v[i][1]==2){
				cant_nivel2++;
			}else{
				cant_nivel3++;
			}
		}
	}
	printf("\nCantidad de alumnos por nivel: \n1 = %d\n2 = %d\n3 = %d\n", cant_nivel1, cant_nivel2, cant_nivel3);
}

int calcular_recaudacion(int v[10][4]){
	int recaudacion = 0, i=0;
	for(i=0;i<10;i++){
		recaudacion=+v[i][3];
	}
	return recaudacion;
}
