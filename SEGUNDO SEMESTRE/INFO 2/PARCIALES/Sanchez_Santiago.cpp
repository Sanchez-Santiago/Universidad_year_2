#include <stdlib.h>
#include <stdio.h>

struct Producto
{
    int codigo;
    char nombre_produc[30];
    int stock;
    float precio;
} Producto_;

void cargar();
void leerArchivo();


int main(int argc, char const *argv[])
{
    FILE *archivo=NULL;
    archivo=fopen("producto.txt", "w");
    if (archivo==NULL)
    {
        printf("\nEl archivo no se pudo crear");
        exit(1);
    }
    fclose(archivo);

    
    char op=' ';
    printf("\nMENU\n");
    do
    {
        printf("\nA.Registrar nuevoproducto\nB.Leer el archivo\nc.Buscar todos los productos menos a 10 en stock\nS.salir\n");
        scanf(" %c", &op);
        switch (op)
        {
        case 'a':
        case 'A':
            cargar();
            break;
        case 'b':
        case 'B':
            leerArchivo();
            break;
        case 'c':
        case 'C':
            ;
            break;

        default:
            break;
        }
    } while (op!='s');
    
    
    return 0;
}
void cargar()
{
    int can=0;
    Producto* producto = (Producto*)malloc(sizeof(Producto));

    printf("\nIngrese el código del producto: ");
    scanf("%d", &(producto->codigo));

    printf("\nIngrese el nombre del producto: ");
    scanf(" %[^\n]s", producto->nombre_produc);

    printf("\nIngrese la cantidad de stock: ");
    scanf("%d", &(producto->stock));

    printf("\nIngrese el precio unitario: ");
    scanf("%f", &(producto->precio));
    FILE *archivo =fopen("prducto.txt", "a");
    if (archivo==NULL)
    {
        printf("\nEl archivo no se pudo crear");
        exit(1);
    }
    fprintf(archivo, "%d;%s;%d;%.2f\n", producto->codigo, producto->nombre_produc, producto->stock, producto->precio);
    
    fclose(archivo);

}

void leerArchivo() 
{
    FILE* archivo = fopen("productos.txt", "r");

    if (archivo == NULL) 
    {
        printf("No se pudo abrir el archivo.\n");
        exit(1);
    }
    Producto producto;

    // Leer y mostrar los datos de cada producto en el archivo
    while (fscanf(archivo, "%d;%[^;];%d;%f\n", &(producto.codigo), producto.nombre_produc, &(producto.stock), &(producto.precio)) == 4) 
    {
        printf("Código: %d\n", producto.codigo);
        printf("Nombre: %s\n", producto.nombre_produc);
        printf("Stock: %d\n", producto.stock);
        printf("Precio: %.2f\n\n", producto.precio);
    }

    fclose(archivo);
}

