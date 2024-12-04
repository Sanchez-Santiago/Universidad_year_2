#include <iostream> //libreria de entrada y salida por pantalla
#include <fstream> //libreria para manejo de archivos

using namespace std;

int main(int argc, char *argv[]) {
	string mensaje="";
	
	ofstream ofs; //creo un objeto de la libreria ofstream
	ofs.open("HolaMundo.txt"); //Abro un archivo, sino existe se crea.
	//Ingreso por teclado
	cout<<"Ingrese un mensaje: [fin = '.']"<<endl;   
	getline(cin, mensaje, '.');
	
	//Escribir el archivo con el mensaje
	ofs <<"Mensaje: "<<endl; 
	ofs<<mensaje<<endl;
	ofs.close();  //Cierro el archivo
	
	//Leer el archivo
	mensaje=" ";
	ifstream ifs; //creo un objeto de la libreria ifstream
	ifs.open("HolaMundo.txt"); //abro el archivo
	cout << "\nContenido del Archivo"<<endl;
	while(!ifs.eof()) { //recorre el archivo hasta que llega al fin de linea
		getline(ifs,mensaje); //obtiene el mensaje del archivo
		cout<<mensaje<<endl; //muestra por pantalla el archivo
	}
	ifs.close(); //Cierro el archivo
	return 0;
}

