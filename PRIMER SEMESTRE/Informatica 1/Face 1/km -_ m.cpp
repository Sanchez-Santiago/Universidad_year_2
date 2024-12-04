#include <istream>
int main(int argc, char const *argv[])
{
    int n=0, r=0, Kilometros=0;
    printf("Ingrese los metros:\n");
    scanf("%d", &n);
    Kilometros= n/1000;
    printf("En kilometros son: %d",Kilometros);
    return 0;
}
