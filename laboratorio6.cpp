#include <iostream>
using namespace std;

struct Direccion {
    string calle;
    int numero;
    string ciudad;
};

struct Estudiante {
    string nombre;
    int edad;
    float nota1, nota2, nota3;
    Direccion dir;
};

int main() {
    Estudiante e;
    int opcion;
    bool ingresado = false;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Ingresar estudiante\n";
        cout << "2. Mostrar estudiante\n";
        cout << "3. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "\n--- Ingresar datos ---\n";
            cout << "Nombre: ";
            cin >> e.nombre;
            cout << "Edad: ";
            cin >> e.edad;
            cout << "Nota 1: ";
            cin >> e.nota1;
            cout << "Nota 2: ";
            cin >> e.nota2;
            cout << "Nota 3: ";
            cin >> e.nota3;

            cin.ignore(); // ← este limpia el buffer (sin él se traba)

            cout << "Calle: ";
            cin >> e.dir.calle;
            cout << "Numero: ";
            cin >> e.dir.numero;
            cout << "Ciudad: ";
            cin >> e.dir.ciudad;

            ingresado = true;
        }
        else if (opcion == 2) {
            if (ingresado) {
                cout << "\n--- Datos del estudiante ---\n";
                cout << "Nombre: " << e.nombre << endl;
                cout << "Edad: " << e.edad << endl;
                cout << "Notas: " << e.nota1 << ", " << e.nota2 << ", " << e.nota3 << endl;
                float promedio = (e.nota1 + e.nota2 + e.nota3) / 3;
                cout << "Promedio: " << promedio << endl;
                cout << "Direccion: " << e.dir.calle << " " << e.dir.numero << ", " << e.dir.ciudad << endl;
            } else {
                cout << "\nPrimero debe ingresar los datos.\n";
            }
        }
        else if (opcion == 3) {
            cout << "\nSaliendo...\n";
        }
        else {
            cout << "\nOpcion invalida.\n";
        }

    } while (opcion != 3);

    return 0;
}
