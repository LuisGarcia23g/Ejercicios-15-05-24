//Programa para saber si un angulo es agudo, recto u obtuso

#include <iostream>
using namespace std;

int main(){
float ang=0;

cout << "Programa para saber si un angulo es agudo, recto u obtuso \n";
cout << "Escriba su angulo: ";
cin >> ang;

if (ang>=0 && ang<90){
    cout << ang << "°" << " es un angulo agudo.";
}
else if (ang==90){
    cout << ang << "°" << " es un angulo recto.";
}
else if (ang>90 && ang <=360){
    cout << ang << "°" << " es un angulo obtuso.";
}
else {
    cout << ang << " no es un angulo.";
}

    return 0;
}
