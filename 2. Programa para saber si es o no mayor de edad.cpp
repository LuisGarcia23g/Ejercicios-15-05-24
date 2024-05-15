//Programa para saber si es o no mayor de edad

#include <iostream>
using namespace std;

int main(){
int edad=0;

cout << "Programa para saber si usted es o no mayor de edad \n";
cout << "Escriba su edad: ";
cin >> edad;

if (edad>=0 && edad>=18){
    cout << "Usted es mayor de edad";
}
else if (edad>=0 && edad<18){
    cout << "Usted es menor de edad";
}

    return 0;
}