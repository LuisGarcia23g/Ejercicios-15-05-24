#include <iostream>
#include <math.h>
using namespace std;

int main () {
float a=0, b=0, c=0;
double x1, x2;

cout << "Programa que permite hacer ecuaciones de segundo grado \n";
cout << "Escriba su primer numero: "; 
cin  >> a;

cout << "Escriba su segundo numero: ";
cin >> b;

cout << "Escriba su tercer numero: ";
cin >> c;

//formula general 
x1= (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
x2= (-b-sqrt(pow(b,2)-4*a*c))/(2*a);

cout << "El resultado de X1= " << x1 << "\n";
cout << "El resultado de X2= " << x2;

    return 0;
}