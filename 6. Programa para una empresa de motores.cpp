#include <iostream>
using namespace std;

int main() {
    int tipoMotor;

cout << "Programa para saber que tipo de bomba tiene su motor \n";
cout << "Escriba que tipo de bomba tiene, si es 0, 1, 2, 3, 4: ";
cin >> tipoMotor;

    switch(tipoMotor) {
        case 0:
            cout << "No esta establecido un valor definido para el tipo de bomba" << endl;
            break;
        case 1:
            cout << "La bomba es una bomba de agua" << endl;
            break;
        case 2:
            cout << "La bomba es una bomba de gasolina" << endl;
            break;
        case 3:
            cout << "La bomba es una bomba de hormigon" << endl;
            break;
        case 4:
            cout << "La bomba es una bomba de pasta alimenticia" << endl;
            break;
        default:
            cout << "No existe un valor valido para tipo de bomba" << endl;
            break;
    }

    return 0;
}
