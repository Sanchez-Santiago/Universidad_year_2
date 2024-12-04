/*Cree un programa que permita reservar memoria para n caracteres (char). 
Luego cargar los n caracteres, imprimirlos y liberar la memoria.

*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	char *ptr;
	int cant=0;
	
	cout<<"Ingrese la cantidad de memoria ha reservar: "<<endl;
	cin>>cant;    
	ptr=(char*)malloc(sizeof(char)*cant); //reserva memoria
	//La funcion sizeof, devuelve el tamaño en bytes que ocupa una variable o algun tipo de dato.
	// 1 char - ocupa 1 byte
	
	cout<<"\nIngrese una cadena de caracteres: ";
	for(int i=0;i<cant;i++){ //carga los valores char al puntero
		cin>>*(ptr+i);		
	}  
	
	cout<<"\nLa cadena de caracteres es: ";     
	for(int i=0;i<cant;i++){ //muestra los valores char ingresados a traves del puntero
		cout<<*(ptr+i);
	}
	
	free(ptr);//libera memoria  
	
	return 0;
}

