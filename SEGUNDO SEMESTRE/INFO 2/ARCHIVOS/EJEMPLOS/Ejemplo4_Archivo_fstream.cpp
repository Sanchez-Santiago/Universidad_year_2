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
	struct persona p[3];
	cout<<"Ingrese los datos de las personas: "<<endl;
	for(int i=0; i<3;i++){
		cout<<"Nombre: ";
		cin>>p[i].nombre;
		cout<<"Apellido: ";
		cin>>p[i].apellido;
		cout<<"Celular: ";
		cin>>p[i].celular;
	}
	
	//Escribir un archivo con los datos
	ofstream ofs; //creo un objeto de la libreria ofstream
	ofs.open("Agenda.txt"); //Abro un archivo, sino existe se crea.
	
	ofs<<"Nombre\t\tApellido\tCelular"<<endl;
	for(int i=0; i<3;i++){
		ofs<<p[i].nombre<<"\t\t"<<p[i].apellido<<"\t\t"<<p[i].celular<<"\n";
	}
	ofs.close(); 
	
	//Leer el archivo
	cout<<"\nLECTURA"<<endl;
	string mensaje=" ";
	ifstream ifs; //creo un objeto de la libreria ifstream
	ifs.open("Agenda.txt"); //abro el archivo
	while(!ifs.eof()) { //recorre el archivo hasta que llega al fin de linea
		getline(ifs,mensaje); 
		cout<<mensaje<<endl;
	}
	ifs.close(); //Cierro el archivo
	
	return 0;
}

