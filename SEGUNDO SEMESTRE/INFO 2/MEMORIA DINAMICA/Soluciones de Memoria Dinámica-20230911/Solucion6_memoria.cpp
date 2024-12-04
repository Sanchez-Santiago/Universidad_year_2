/*Crear un programa que pregunte al usuario cuantos caracteres desea introducir, 
reserve espacio para dicho numero de caracteres, le permita al usuario 
introducirlos desde teclado. Por ultimo se los muestre todos seguidos y en el 
orden inverso al que fueron introducidos. 
Crear funciones para cargar, mostrar en orden y mostrar en orden inverso. 
Utilizar funciones.*/

#include <iostream>

using namespace std;

void cargar(char *, int);
void mostrar_orden(char *, int);
void mostrar_orden_inverso(char *, int);

int main(int argc, char *argv[]) {
	
	char *ptr;
	int cant=0;
	
	cout<<"Ingrese la cantidad de memoria ha reservar: "<<endl;
	cin>>cant;    
	
	ptr=(char*)malloc(sizeof(char)*cant); //reserva memoria 1 byte = 1 char

	if(ptr==NULL){
		cout<<"\nNo se ha podido reservar la memoria solicitada. "<<endl;
	}else{
		cout<<"\nSe ha reservado "<<cant*sizeof(char)<<" espacios de memoria."<<endl;   
	}
	
	cargar(ptr, cant);
	mostrar_orden(ptr, cant);
	mostrar_orden_inverso(ptr, cant);
	
	free(ptr);//libera memoria  
	
	return 0;
}

void cargar(char *ptr, int cant){
	cout<<"\nIngrese una cadena de caracteres:"<<endl;
	for(int i=0;i<cant;i++){
		cin>>*(ptr+i);		
	}  
}
	
void mostrar_orden(char *ptr, int cant){
	cout<<"\n---------------------------------------------------------------"<<endl;
	cout<<"Los caracteres ingresados en orden son:"<<endl;     
	for(int i=0;i<cant;i++){
		cout<<*(ptr+i);
	}
}

void mostrar_orden_inverso(char *ptr, int cant){	
	cout<<"\n---------------------------------------------------------------"<<endl;
	cout<<"Los caracteres ingresados en orden inverso son:"<<endl;
	for(int i=cant-1;i>=0;i--){
		cout<<*(ptr+i);
	}
}
