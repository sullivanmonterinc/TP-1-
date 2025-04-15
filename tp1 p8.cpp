#include <iostream>
using namespace std;

int calcularMCD(int a, int b);

int main() {
    int c, d;
    cout << "Programa para devolver el maximo comun divisor de 2 numeros" << endl;
    cout << "Ingresa el primer numero: ";
    cin >> c;
    cout << "Ingresa el segundo numero: ";
    cin >> d;


    int resultado = calcularMCD(c, d);
    cout << "El MCD es: " << resultado << endl;

    return 0;
}


int calcularMCD(int a, int b) {
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

