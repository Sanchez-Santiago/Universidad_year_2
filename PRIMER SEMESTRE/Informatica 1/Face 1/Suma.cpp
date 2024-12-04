#include <istream>
int main(int argc, char const *argv[])
{
    int n=0, r=0, res=0;
    printf("Ingrese dos numeros:\n");
    scanf("%d%d", &n, &r);
    res= n + r;
    printf("El resultado de la suma es: %d \n",res);
    return 0;
}
