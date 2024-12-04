#include <iostream>
int main(int argc, char const *argv[])
{
    float grados=0;
    printf("Escribe cuantoos grados\n");
    scanf("%f", &grados);
    if (grados>=100)
    {
        printf("arriba del punto de ebullición del agua\n");
    }
    else
    {
        printf("abajo del punto de ebullición del agua\n");
    }
    
    

    return 0;
}
