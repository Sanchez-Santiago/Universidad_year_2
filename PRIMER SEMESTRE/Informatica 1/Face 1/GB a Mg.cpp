#include <istream>
int main(int argc, char const *argv[])
{
    float n=0, r=0;
    printf("Ingrese los mb:\n");
    scanf("%f", &n);
    r= n/(float)1024;
    printf("En GB son: %f \n",r);
    return 0;
}
