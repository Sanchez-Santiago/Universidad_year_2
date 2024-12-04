#include <iostream>

int main(int argc, char const *argv[])
{
    int n1=0, n2=0;
    printf("ingrese dos numeros\n");
    scanf("%d%d", &n1, &n2);
    if (n1>n2)
    {
        printf("%d es mayor que %d \n", n1, n2);
    } 
    return 0;
}
