#include <iostream>

void comvertir(int, int&, int&, int&);

int main(int argc, char const *argv[])
{
    int totalSeg=0, hoara, min, seg;
    printf("\nIngrese los segundos: \n");
    scanf("%d", &totalSeg);

    comvertir(totalSeg, hoara, min, seg);

    printf("\nEl resultado en Horas es %d en Minutos es %d y en Segundos es %d\n\n", hoara, min, seg);


    return 0;
}

void comvertir(int totalSeg, int& hora, int& min, int& seg)
{
    hora=totalSeg/3600;
    totalSeg %=3600;
    min=totalSeg/60;
    seg=totalSeg%60;
}