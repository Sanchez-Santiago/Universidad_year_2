/* Cree un programa que permita reservar memoria para n caracteres (char). 
Luego cargar los n caracteres e imprimirlos por pantalla.

El usuario desea agregar mas caracteres, por lo que ingresa la n cantidad de 
caracteres a agregar. Luego cargar los n caracteres, imprimirlos y finalmente 
liberar la memoria.

*/

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	char *ptr;
	int cant=0, cant_plus=0;
	
	cout<<"Ingrese la cantidad de memoria ha reservar: "<<endl;
	cin>>cant;    
	ptr=(char*)malloc(sizeof(char)*cant); //reserva memoria
	
	cout<<"\nIngrese una cadena de caracteres: \n";
	for(int i=0;i<cant;i++){ //carga los valores char al puntero
		cin>>*(ptr+i);		
	}
	
	cout<<"\n---------------------------------------------------------------"<<endl;
	cout<<"Los caracteres ingresados en orden son:"<<endl;     
	for(int i=0;i<cant;i++){
		cout<<*(ptr+i);
	}
	cout<<"\n---------------------------------------------------------------"<<endl;
	

	cout<<"\nIngrese la cantidad de caracteres que va agregar: "<<endl; 
	cin>>cant_plus; 
	ptr=(char*)realloc(ptr,(cant_plus+cant)*sizeof(char)); //agregamos mas reserva de memoria
	
	cout<<"\nIngrese los "<<cant_plus<<" caracteres nuevos: "<<endl;
	for(int i=0;i<cant_plus;i++){
		cin>>*(ptr+cant+i);	
	}
	
	cout<<"\n---------------------------------------------------------------"<<endl;
	cout<<"Los caracteres ingresados en orden son:"<<endl;     
	for(int i=0;i<(cant_plus+cant);i++){
		cout<<*(ptr+i);
	}
	cout<<"\n---------------------------------------------------------------"<<endl;
	
	free(ptr);//libera memoria  
	return 0;
}

