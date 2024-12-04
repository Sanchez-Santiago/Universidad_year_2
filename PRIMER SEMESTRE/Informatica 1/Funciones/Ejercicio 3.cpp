/*
Crear un programa con un menú de opciones en la cual calculen 
las áreas y perímetros de las figuras geométricas. Para cada cálculo 
implementar una función. (cuadrado, rectángulo, círculo)
*/


#include <stdio.h>
#include <math.h>

using namespace std;

//Prototipado de las funciones
void cuadrado();
void rectangulo();
void circulo();

int main(int argc, char *argv[]) 
{
	char op=' ';
	bool bandera_valido=false;
	
	do{
		printf("\nCALCULO DE AREA Y PERIMETRO\na. Cuadrado\nb. Rectangulo\nc. Circulo\ns. Salir");
		printf("\nIngrese una opcion: ");
		do
        {
			scanf(" %c",&op);
			if(op=='a'||op=='b'||op=='c'||op=='s')
            {
				bandera_valido=true;
			}
            else
            {
				printf("\nDebe ingresar una opcion valida. \n");
				bandera_valido=false;
			}
			
		}while(bandera_valido==false);
		

		if(op!='s')
        {
			switch(op)
            {
			case 'a': 
				cuadrado();
				break;
			case 'b': 
				rectangulo();
				break;
			case 'c': 
				circulo();
				break;
			}
		}
	}while(op!='s');
	return 0;
}

//Desarrollo de las funciones
void cuadrado()
{
	float lado=0;
	printf("\nCUADRADO\nIngrese lado: \n");
	scanf("%f",&lado);
	printf("\nPerimetro: %0.2f \nArea: %0.2f\n\n",(lado*4),(pow(lado,2)));
}
void rectangulo()
{
	float base=0, altura=0;
	printf("\nRECTANGULO\nIngrese base y altura: \n");
	scanf("%f%f",&base, &altura);
	printf("\nPerimetro: %0.2f \nArea: %0.2f\n\n", (2*base+2*altura), (base*altura));
}
void circulo()
{
	float radio=0;
	printf("\nCirculo\nIngrese radio: \n");
	scanf("%f",&radio);
	printf("\nPerimetro (circunferencia): %0.2f \nArea: %0.2f\n\n", (2*M_PI*radio),(M_PI*pow(radio,2)));
}
