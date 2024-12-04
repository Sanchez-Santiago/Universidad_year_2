#include <iostream>
#include <string>
using namespace std;

struct Alumno {
    string nombre;
    float promedio;
};

bool compararPorPromedio(const Alumno& a, const Alumno& b) {
    return a.promedio > b.promedio;
}

void imprimirGrupo(const Alumno& alumno) {
    cout << "Nombre: " << alumno.nombre << ", Promedio: " << alumno.promedio << "\n";
}

int main() {
    Alumno alumnos[30];

    for (int i = 0; i < 30; ++i) {
        cout << "Ingrese el nombre del alumno: ";
        cin >> alumnos[i].nombre;
        cout << "Ingrese el promedio anual del alumno: ";
        cin >> alumnos[i].promedio;
    }

    cout << "\nAlumnos con notas entre 0 y 4:\n";
    for (int i = 0; i < 30; ++i) {
        if (alumnos[i].promedio >= 0 && alumnos[i].promedio < 4) {
            imprimirGrupo(alumnos[i]);
        }
    }

    cout << "\nAlumnos con notas entre 4 y 7:\n";
    for (int i = 0; i < 30; ++i) {
        if (alumnos[i].promedio >= 4 && alumnos[i].promedio < 7) {
            imprimirGrupo(alumnos[i]);
        }
    }

    cout << "\nAlumnos con notas entre 7 y 10:\n";
    for (int i = 0; i < 30; ++i) {
        if (alumnos[i].promedio >= 7 && alumnos[i].promedio <= 10) {
            imprimirGrupo(alumnos[i]);
        }
    }

    return 0;
}
