#include <iostream> //libreria de entrada y salida por pantalla
#include <fstream> //libreria para manejo de archivos
using namespace std;

void escribirArchivo(string);
void leerArchivo();

int main(int argc, char *argv[]) {
	int op;
	string mensaje=" ";
	do{
		cout<<" ----- OPERACIONES CON ARCHIVOS -----\n"<<endl;
		cout<<"1.Escribir archivo."<<endl;
		cout<<"2.Leer archivo."<<endl;
		cout<<"0.SALIR"<<endl;
		cout<<"\nSeleccione una opcion:"<<endl;
		cin>>op;
		switch(op){
		case 1:
			cout<<"Ingrese un mensaje: [fin = '.']"<<endl;   
			getline(cin, mensaje, '.');
			escribirArchivo(mensaje);
			break;
		case 2:
			leerArchivo();
			break;
		default:
			if(op!=0)
				cout<<"La opcion ingresada no es valida"<<endl;
		}
	}while(op!=0);	
	return 0;
}

void escribirArchivo(string mensaje){
		ofstream ofs; //creo un objeto de la libreria ofstream
		ofs.open("HolaMundo.txt"); //Abro un archivo, sino existe se crea.
		if(ofs.is_open())
		{
			//Escribir el archivo con el mensaje
			ofs <<"Mensaje: "<<endl; 
			ofs<<mensaje<<endl;
			ofs.close();  //Cierro el archivo
		}else{
			cout<<"Error al abrir el archivo";
		}	
}
	
void leerArchivo(){
	string mensaje=" ";
	ifstream ifs; //creo un objeto de la libreria ifstream
	ifs.open("HolaMundo.txt"); //abro el archivo
	cout << "\nContenido del Archivo"<<endl;
	while(!ifs.eof()) { //recorre el archivo hasta que llega al fin de linea
		getline(ifs,mensaje); //obtiene el mensaje del archivo
		cout<<mensaje<<endl; //muestra por pantalla el archivo
	}
	ifs.close(); //Cierro el archivo
}



