#include <iostream> //libreria de entrada y salida por pantalla
#include <fstream> //libreria para manejo de archivos
using namespace std;

struct persona
{
	string nombre;
	string apellido;
	long celular;
};


int main(int argc, char *argv[]) {
	
	struct persona p;
	struct persona otro_p;
	cout<<"Ingrese los siguientes datos de persona: "<<endl;
	cout<<"Nombre: ";
	cin>>p.nombre;
	cout<<"Apellido: ";
	cin>>p.apellido;
	cout<<"Celular: ";
	cin>>p.celular;
	
	//Escribir un archivo con los datos
	ofstream ofs; //creo un objeto de la libreria ofstream
	ofs.open("Datos_Persona.txt"); //Abro un archivo, sino existe se crea.

	ofs<<"Datos de persona: "<<endl;
	ofs<<"Nombre: "<<p.nombre<<endl;
	ofs<<"Apellido: "<<p.apellido<<endl;
	ofs<<"Celular: "<<p.celular<<endl;
	ofs.close(); 
	
	//Leer el archivo
	string mensaje=" ";
	ifstream ifs; //creo un objeto de la libreria ifstream
	ifs.open("Datos_Persona.txt"); //abro el archivo
	while(!ifs.eof()) { //recorre el archivo hasta que llega al fin de linea
		getline(ifs,mensaje); 
		cout<<mensaje<<endl;
	}
	ifs.close(); //Cierro el archivo
	
	return 0;
}

