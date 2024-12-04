/*Crear un programa que pregunte al usuario cuantos caracteres desea introducir, 
reserve espacio para dicho numero de caracteres, le permita al usuario 
introducirlos desde teclado y luego mostrar por pantalla los valores. Luego, el 
programa pregunta cuantos caracteres desea agregar a la lista de elementos ya 
introducida, agrega espacio de memoria y solicita el ingreso de los nuevos 
valores. Por ultimo, mostrar la lista resultante. */

#include <iostream>
using namespace std;

void cargar(char *, int);
void cargar_nuevos(char *, int, int);
void mostrar_orden(char *, int);

int main(int argc, char *argv[]) 
{
	
	char *ptr, *ptr_aux;
	int cant=0,cant_plus=0;		
	
	cout<<"Cuantos caracteres desea introducir:"<<endl; 	
	cin>>cant; 	
	
	ptr = new char(cant); //reserva memoria

	if(ptr==NULL)
	{
		cout<<"\nNo se ha podido reservar la memoria solicitada. "<<endl;
	}else{
		cout<<"\nSe ha reservado "<<cant*sizeof(char)<<" espacios de memoria."<<endl;   
	}
	cargar(ptr, cant);
	mostrar_orden(ptr, cant);
	
	//Redimencionamiento de la memoria din�mica
	cout<<"\n\nIngrese la cantidad de caracteres que va agregar: "<<endl; 
	cin>>cant_plus; 
	
	//tengo que pasar lo anterior a un puntero auxiliar
	ptr_aux=ptr;
	ptr = new char(cant_plus); 
	ptr=ptr_aux;
	
	if(ptr==NULL)
	{
		cout<<"\nNo se ha podido reservar la memoria solicitada. "<<endl;
	}else{
		cout<<"\nSe ha redimencionado la memoria a "<<(cant_plus+cant)*sizeof(char)<<" espacios."<<endl;   
	}
	
	cargar_nuevos(ptr, cant, cant_plus);
	mostrar_orden(ptr, (cant_plus+cant));
	
	delete ptr; //liberacion de memoria
	
	return 0;
}

void cargar(char *ptr, int cant){
	cout<<"\nIngrese una cadena de caracteres:"<<endl;
	for(int i=0;i<cant;i++){
		cin>>*(ptr+i);		
	}  
}

void cargar_nuevos(char *ptr, int cant, int cant_plus){
	cout<<"\nIngrese los "<<cant_plus<<" caracteres nuevos: "<<endl;
	for(int i=0;i<cant_plus;i++){
		cin>>*(ptr+cant+i);	
	}
}
		
void mostrar_orden(char *ptr, int cant){
	cout<<"\n---------------------------------------------------------------"<<endl;
	cout<<"Los caracteres ingresados en orden son:"<<endl;     
	for(int i=0;i<cant;i++){
		cout<<*(ptr+i);
	}
}
