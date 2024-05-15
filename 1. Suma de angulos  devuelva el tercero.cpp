//Suma de los angulos de un triangulo y devuelva el tercero
#include <iostream>
using namespace std;

int main(){
float ang1=0, ang2=0, resultado=0;

cout << "Programa que devuelve el tercer angulo de un triangulo \n";
cout << "Escriba su primer angulo: ";
cin >> ang1;

cout << "Escriba su segundo angulo: ";
cin >> ang2;

if (ang1 + ang2 < 180){
    resultado=180-(ang1+ang2);
    cout << "Su tercer angulo es: " << resultado;  
}
else if (ang1+ang2>=180){
    cout << "Escriba 2 angulos que no sumen 180°";
}

   return 0;
}