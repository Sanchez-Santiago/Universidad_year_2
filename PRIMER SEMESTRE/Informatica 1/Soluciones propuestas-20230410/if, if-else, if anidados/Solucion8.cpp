/*Escriba un programa que pida tres números y que escriba si son 
los tres iguales, si hay dos iguales o si son los tres distintos.
*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n1=0, n2=0, n3=0;
	printf("Ingrese tres numeros: \n");
	scanf("%d%d%d",&n1,&n2,&n3);
	if(n1==n2 && n2==n3){
		printf("Son tres numeros iguales.\n");
	}else{
		if(n1!=n2 && n2!=n3 && n1!=n3){
			printf("Son tres numeros distintos.\n");
		}else{
			printf("Son dos numeros iguales y uno desigual.\n");
		}
	}
	return 0;
}

