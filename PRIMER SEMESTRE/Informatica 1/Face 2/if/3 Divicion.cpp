#include <iostream>

int main(int argc, char const *argv[])
{
    int n1=0, n2=0;
    printf("ingrese dos numeros\n");
    scanf("%d%d", &n1, &n2);
    if(n1%n2==0 && n2!=0){
		printf("La division es exacta. %d / %d = %d\n",n1,n2,n1/n2);
	}else{
		printf("La division no es exacta.\n");
	}
    return 0;
}
