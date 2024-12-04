#include <iostream>

void numVamue(int&, int&);

int main(int argc, char const *argv[])
{
    int num1=34, num2=24;
    numVamue(num1, num2);
    printf("\nEl num1 es =%d\nEl num2 es =%d\n\n",num1, num2);

    return 0;
}

void numVamue(int& xnum, int& ynum)
{
    printf("\nEl numero 1 es:%d\n", xnum);
    printf("\nEl numero 2 es:%d\n\n", ynum);

    xnum=62;
    ynum=31;
}