#include <iostream>
using namespace std;

int main (){
int boleto, general=0, preferencial=0, sombra=0, tribuna=0, platea=0, total=0;
cout << "Bienvenido a la boleteria del estadio XYZ \n" << "\n";
cout << "Sectores del estadio \n";
cout << "1. Sol general      $3 \n";
cout << "2. Sol preferencial $5 \n";
cout << "3. Sombra           $8 \n";
cout << "4. Tribuna          $15 \n";
cout << "5. Platea           $20 \n";

cout << "Eliga 1, 2, 3, 4 o 5 para elegir su sector: ";
cin >> boleto;

switch (boleto){
    case 1: 
    cout << "Ingrese la cantidad de boletos para Sol general: ";
    cin >> general;
    total = general * 3;
    break;

    case 2: 
    cout << "Ingrese la cantidad de boletos para Sol preferencial: ";
    cin >> preferencial;
    total = preferencial * 5;
    break;

    case 3: 
    cout << "Ingrese la cantidad de boletos para Sombra: ";
    cin >> sombra;
    total = sombra * 8;
    break;

    case 4: 
    cout << "Ingrese la cantidad de boletos para Tribuna: ";
    cin >> tribuna;
    total = tribuna * 15;
    break;

    case 5: 
    cout << "Ingrese la cantidad de boletos para Platea: ";
    cin >> platea;
    total = platea * 20;
    break;

    default:
    cout << "Escriba uno de los sectores entre 1 y 5";
    return 0;
}

cout << "Su total a pagar es: $" << total;
    return 0;
}