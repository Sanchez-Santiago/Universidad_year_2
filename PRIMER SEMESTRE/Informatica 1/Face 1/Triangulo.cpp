#include <iostream>
#include <math.h>

using namespace std;
int main(int argc, char const *argv[])
{
   float catA=0, catB=0, hip= 0;
   printf("Ingresa Los catetos A y B \n");
   scanf("%f%f", &catA, &catB);
   hip=sqrt((pow(catA,2)+pow(catB,2)));
   printf("La hipotenusa es: %0.f \n", hip);

    return 0;
}
    // namespace std;
