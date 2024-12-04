#include <iostream>
int main(int argc, char const *argv[])
{
    int n=0;
    printf("ingresa un numero \n");
    scanf("%d", &n);
    if (n%2==0)
    {
        printf("%d es un numero par. \n", n);
    }
    else
    {
        printf("%d es un numero inpar. \n", n);
    }
    
    return 0;
}
