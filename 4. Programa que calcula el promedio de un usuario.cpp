//Programa que calcule el promedio del usuario

#include <iostream>
using namespace std;

int main(){
string nombre;
float corto1=0, corto2=0, parcial1=0, parcial2=0, laboratorio=0, proyecto=0, resultado=0;

cout << "Programa que calcula tu promedio \n";
cout << "Bienvenido, escribe tu nombre: ";
cin >> nombre;

cout << "Escriba la nota del corto 1: ";
cin >> corto1;

cout << "Escriba la nota del corto 2: ";
cin >> corto2;

cout << "Escriba la nota del parcial 1: ";
cin >> parcial1;

cout << "Escriba la nota del parcial2: ";
cin >> parcial2;

cout << "Escriba la nota del laboratorio: ";
cin >> laboratorio;

cout << "Escriba la nota del proyecto: ";
cin >> proyecto;

resultado= (corto1*0.10) + (corto2*0.10) + (parcial1*0.15) + (parcial2*0.20) + (laboratorio*0.20) + (proyecto*0.25);

if (resultado>=6 && resultado<=10){
    cout << nombre << " haz aprobado con: " << resultado;
}
else if (resultado>=0 && resultado<6){
    cout << nombre << " haz reprobado con: " << resultado;
}
else {
    cout << nombre << " haz escrito datos invalidos.";
}

    return 0;
}