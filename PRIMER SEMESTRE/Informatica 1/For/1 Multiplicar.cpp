#include <iostream>

int main(int argc, char const *argv[])
{
    int num=1, num2=0;

    printf("Ingresa un numero:\n");
    scanf("%d", &num);

    for ( num2 = 0; num2 < 10; num2++)
    {
        printf("\n%d X %d = %d\n", (num2+1), num, (num2+1)*num);
    }
    

    return 0;
}
