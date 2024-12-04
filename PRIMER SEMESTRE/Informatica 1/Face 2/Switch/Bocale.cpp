#include <iostream>

int main(int argc, char const *argv[])
{
    char letra=' ';
    printf("Elije una letra \n");
    scanf(" %c", &letra);
    switch (letra)
    {
        case 'a': printf("Vocal \n");
            break;
        case 'e': printf("Vocal\n");
            break;
        case 'i': printf("Vocal \n");
            break;
        case 'o': printf("Vocal \n");
            break;
        case 'u': printf("Vocal\n");
            break;
        default: printf("No es vocal. ");
		    break;
    }
    return 0;
}