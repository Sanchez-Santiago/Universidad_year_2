#include <iostream>
int main(int argc, char const *argv[])
{
    int uni=0, estu=0, fal=0;
    printf("Escribe la cantidad de unidades de la materia y las unidades estudiadas por el alumno\n");
    scanf("%d%d", &uni, &estu);
    if (uni==estu)
    {
        printf("El alumno estudio toda la materia");
    }
    else
    {
        fal=uni-estu;
        printf("Le faltan %d \n", fal);
    }
    
    
    
    return 0;
}
