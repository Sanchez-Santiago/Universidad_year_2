/*Crear un programa en la cual contenga un menu de opciones con distintas 
operaciones: 
a. Reserva de memoria e introducci�n de datos enteros
b. Agregar reserva de memoria e introducci�n de nuevos datos enteros
c. Mostrar los datos en el orden y orden invertido al que fueron introducidos
*/
#include <iostream>
using namespace std;

void cargar(int *, int);
void cargar_nuevos(int *, int, int);
void mostrar_orden(int *, int);
void mostrar_orden_inverso(int *, int);

int main(int argc, char *argv[]) 
{
	
	int *ptr, *ptr_aux;
	int cant=0,cant_plus=0;		
	
	char op=' ';
	do{
		cout<<"MENU DE OPCIONES"<<endl;
		cout<<"a. Reserva de memoria e introducci�n de datos enteros"<<endl;
		cout<<"b. Agregar reserva de memoria e introducci�n de nuevos datos enteros"<<endl;
		cout<<"c. Mostrar los datos en el orden y orden invertido al que fueron introducidos"<<endl;
		
		cin>>op;
		switch(op)
		{
		case 'a': 
			cout<<"Cuantos caracteres desea introducir"<<endl; 	
			cin>>cant; 	
			
			ptr = new int(cant); //reserva memoria
	
			if(ptr==NULL)
			{
				cout<<"\nNo se ha podido reservar la memoria solicitada. "<<endl;
			}else
			{
				cout<<"\nSe ha reservado "<<cant<<" espacios de memoria."<<endl;  
				//si cant*(sizeof(int)) recordar que 1 int - ocupa 4 bytes
			}

			cargar(ptr, cant);
			mostrar_orden(ptr, cant);

			break;
		case 'b':
			//Redimencionamiento de la memoria din�mica
			cout<<"\n\nIngrese la cantidad de caracteres que va agregar: "<<endl; 
			cin>>cant_plus; 
			
			//tengo que pasar lo anterior a un puntero auxiliar
			ptr_aux=ptr;
			ptr = new int(cant_plus); 
			ptr=ptr_aux;
				
			if(ptr==NULL){
				cout<<"\nNo se ha podido reservar la memoria solicitada. "<<endl;
			}else{
				cout<<"\nSe ha redimencionado la memoria a "<<(cant_plus+cant)<<" espacios."<<endl;   
			}
			cargar_nuevos(ptr, cant, cant_plus);
			
			break;
		case 'c':
			mostrar_orden(ptr, (cant_plus+cant));
			mostrar_orden_inverso(ptr, (cant_plus+cant));
			break;
		}
		cout<<"\n�Desea seguir (S/N)? ";
		cin>>op;
		
	}while(op=='s' || op=='S');
	
	delete ptr; //liberacion de memoria
	
	return 0;
}


void cargar(int *ptr, int cant){
	cout<<"\nIngrese una cadena de caracteres:"<<endl;
	for(int i=0;i<cant;i++)
	{
		cin>>*(ptr+i);		
	}  
}
	
void cargar_nuevos(int *ptr, int cant, int cant_plus)
{
	cout<<"\nIngrese los "<<cant_plus<<" caracteres nuevos: "<<endl;
	for(int i=0;i<cant_plus;i++)
	{
		cin>>*(ptr+cant+i);	
	}
}
		
void mostrar_orden(int *ptr, int cant){
	cout<<"\n---------------------------------------------------------------"<<endl;
	cout<<"Los caracteres ingresados en orden son:"<<endl;     
	for(int i=0;i<cant;i++){
		cout<<*(ptr+i);
	}
}
			
void mostrar_orden_inverso(int *ptr, int cant){	
	cout<<"\n---------------------------------------------------------------"<<endl;
	cout<<"Los caracteres ingresados en orden inverso son:"<<endl;
	for(int i=cant-1;i>=0;i--){
		cout<<*(ptr+i);
	}
}
				
