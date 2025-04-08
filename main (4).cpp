#include <iostream>
using namespace std;

int main() {
    float entrada;
    float precioentrada = 100;
    float preciototal;

    cout << "Ingrese la cantidad de entradas (máximo 4): ";
    cin >> entrada;

    preciototal = entrada * precioentrada;

    if (entrada == 2) {
        preciototal *= 0.90; 
    } else if (entrada == 3) {
        preciototal *= 0.85; 
    } else if (entrada == 4) {
        preciototal *= 0.80; 
    }

    cout << "Tiene que pagar: $" << preciototal << endl;

    return 0;
}