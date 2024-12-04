#include <iostream>
#include <fstream>
using namespace std;

int main() {
	string cadena="";
	ifstream ifs;
	ifs.open("Listado.txt");
	char  i[60];
	ifs >> i;
	while(!ifs.eof()) {
		cout << i << " ";
		ifs >> cadena;
		cout << cadena << endl;
		ifs >> i;
	}
	ifs.close();
	
	return 0;
}

