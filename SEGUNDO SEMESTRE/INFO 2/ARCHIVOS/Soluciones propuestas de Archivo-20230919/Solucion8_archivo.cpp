/*Escribir un programa que tenga un menu de opciones, cada una de ellas una funcion: 
a. Cargar lista de productos en el archivo. 
b. Leer la lista de productos del archivo. 
Para ello debera crear un vector de estructura llamada "Producto" y de tamanio 3. 
La estructura "Producto" contendra los siguientes atributos: nombre del producto, marca, 
precio unitario, fecha de elaboracion, tamanio. El archivo se llamara Listado_Producto.txt.*/ 


#include <iostream> //libreria de entrada y salida por pantalla
#include <fstream> //libreria para manejo de archivos

using namespace std;

void escribir_Archivo(struct producto p[3]);
void leerArchivo(struct producto p[3]);


struct producto
{
	string nombre;
	string marca;
	float precio_unitario;
	string fecha_vencimiento;
	int tamanio;
};

int main(int argc, char *argv[]) {
	struct producto p[3];
	string nombre=" ";
	string marca=" ";
	string fecha_vencimiento=" ";
	char op=' ';
	do{
		cout<<"MENU DE OPCIONES"<<endl;
		cout<<"a.Escribir archivo."<<endl;
		cout<<"b.Leer archivo."<<endl;
		cout<<"\nSeleccione una opcion:"<<endl;
		cin>>op;
		switch(op){
		case 'a':
			escribir_Archivo(p);
			break;
		case 'b':
			leerArchivo(p);
			break;
		}
		cout<<"\n¿Desea seguir (S/N)? ";
		cin>>op;
	}while(op=='s' || op=='S');
	return 0;
}

void escribir_Archivo(struct producto p[3] ){
	for(int i=0; i<3;i++){		
		cout<<"Ingrese los datos del producto:  "<<endl;
		cout<<"Nombre:  ";
		cin>>p[i].nombre;
		cout<<"Marca:  ";
		cin>>p[i].marca;
		cout<<"Precio unitario:   "<<endl;
		cin>>p[i].precio_unitario;
		cout<<"Fecha de vencimiento:   "<<endl;
		cin>>p[i].fecha_vencimiento;
		cout<<"Tamaño:  "<<endl;
		cin>>p[i].tamanio;
	}
	
	//Escribir un archivo con los datos
	ofstream ofs;
	ofs.open("Listado_Producto.txt");
	for(int i=0; i<3;i++){
	ofs<<"Nombre\t\tMarca\t\tPrecio\t\tFecha\t\tTamaño"<<endl;
	
		ofs<<p[i].nombre<<"\t\t"<<p[i].marca<<"\t\t"<<p[i].precio_unitario<<"\t\t"<<p[i].fecha_vencimiento<<"\t\t"<<p[i].tamanio<<"\n";
	}
	ofs.close(); 
	
}
void leerArchivo(struct producto p[3]){
	cout<<"\nLECTURA"<<endl;
	string mensaje=" ";
	ifstream ifs; //creo un objeto de la libreria ifstream
	ifs.open("Listado_Producto.txt"); //abro el archivo
	while(!ifs.eof()) { //recorre el archivo hasta que llega al fin de linea
		getline(ifs,mensaje); 
		cout<<mensaje<<endl;
	}
	ifs.close(); //Cierro el archivo
}
