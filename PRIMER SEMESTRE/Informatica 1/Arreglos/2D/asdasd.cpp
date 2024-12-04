#include <iostream>
#include <cstdlib>
#include <ctime>

const int FILAS = 5;
const int COLUMNAS = 5;

// Función para mostrar el arreglo de números
void mostrarArreglo(int arreglo[FILAS][COLUMNAS]) {
    std::cout << "Arreglo de números:" << std::endl;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            std::cout << arreglo[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

// Función para calcular el promedio de todos los valores del arreglo
float calcularPromedio(int arreglo[FILAS][COLUMNAS]) {
    int suma = 0;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            suma += arreglo[i][j];
        }
    }
    return static_cast<float>(suma) / (FILAS * COLUMNAS);
}

// Función para buscar cuántas veces se repite un valor ingresado por el usuario
int buscarRepeticiones(int arreglo[FILAS][COLUMNAS], int valor) {
    int repeticiones = 0;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if (arreglo[i][j] == valor) {
                repeticiones++;
            }
        }
    }
    return repeticiones;
}

// Función para imprimir los valores pares
void imprimirPares(int arreglo[FILAS][COLUMNAS]) {
    std::cout << "Valores pares:" << std::endl;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if (arreglo[i][j] % 2 == 0) {
                std::cout << arreglo[i][j] << " ";
            }
        }
    }
    std::cout << std::endl;
}

// Función para sumar los valores impares
int sumarImpares(int arreglo[FILAS][COLUMNAS])
{
    int suma = 0;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++)
        {
            if (arreglo[i][j] % 2 != 0)
            {
                suma += arreglo[i][j];
            }
        }
    }
    return suma;
}

// Función para crear el arreglo de frecuencia
void crearArregloFrecuencia(int arreglo[FILAS][COLUMNAS], int frecuencia[25][2])
{
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            frecuencia[arreglo[i][j]][1]++;
        }
    }
}

// Función para mostrar la lista de frecuencia de los números
void mostrarListaFrecuencia(int frecuencia[25][2])
{
    std::cout << "Lista de frecuencia de los números:" << std::endl;
    for (int i = 0; i < 25; i++) {
        if (frecuencia[i][1] > 0)
        {
            std::cout << i << ": " << frecuencia[i][1] << " veces" << std::endl;
        }
    }
}

int main() {
    srand(time(0)); // Semilla para generar números aleatorios

    int arreglo[FILAS][COLUMNAS];

    // Llenar el arreglo con números enteros aleatorios
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            arreglo[i][j] = rand() % 25; // Genera números entre 0 y 24
        }
    }

    int opcion;
    int valorBusqueda;

    do {
        // Mostrar el menú de opciones
        std::cout << "Menú de opciones:" << std::endl;
        std::cout << "a. Mostrar todos los valores." << std::endl;
        std::cout << "b. Promedio de todos los valores del arreglo." << std::endl;
        std::cout << "c. Buscar cuánto se repite un valor ingresado por el usuario." << std::endl;
        std::cout << "d. Imprimir los valores pares." << std::endl;
        std::cout << "e. Sumar los valores impares." << std::endl;
        std::cout << "f. Crear un arreglo de 25x2 para guardar la frecuencia de los números." << std::endl;
        std::cout << "g. Salir." << std::endl;
        std::cout << "Ingrese una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 'a':
                mostrarArreglo(arreglo);
                break;
            case 'b': {
                float promedio = calcularPromedio(arreglo);
                std::cout << "Promedio de los valores: " << promedio << std::endl;
                break;
            }
            case 'c':
                std::cout << "Ingrese un valor a buscar: ";
                std::cin >> valorBusqueda;
                int repeticiones = buscarRepeticiones(arreglo, valorBusqueda);
                std::cout << "El valor " << valorBusqueda << " se repite " << repeticiones << " veces." << std::endl;
                break;
            case 'd':
                imprimirPares(arreglo);
                break;
            case 'e': {
                int sumaImpares = sumarImpares(arreglo);
                std::cout << "Suma de los valores impares: " << sumaImpares << std::endl;
                break;
            }
            case 'f': {
                int frecuencia[25][2] = {0};
                crearArregloFrecuencia(arreglo, frecuencia);
                mostrarListaFrecuencia(frecuencia);
                break;
            }
            case 'g':
                std::cout << "Saliendo del programa..." << std::endl;
                break;
            default:
                std::cout << "Opción inválida. Por favor, intente nuevamente." << std::endl;
                break;
        }

        std::cout << std::endl;

    } while (opcion != 'g');

    return 0;
}
