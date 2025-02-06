#include <iostream>

using namespace std;

int main() {
    int numero;
    char continuar;
    int veces = 0;

    do {
        cout << "Ingrese un numero del 0 al 1000: ";
        cin >> numero;

        if (numero > 0 && numero < 500) {
            for (int i = 0; i < 100; ++i) {
                numero += 5;
                cout << "Valor: " << numero << endl;
                veces++;
            }
        } 
        else if (numero >= 500 && numero < 1000) {  // Ahora incluye el 500
            for (int i = 0; i < 50; ++i) {
                numero += 10;
                cout << "Valor: " << numero << endl;
                veces++;
            }
        } 
        else if (numero >= 1000) {  // Incluye el 1000 también
            cout << "Ingrese un numero menor a 1000" << endl;
        }

        cout << "¿Desea terminar el programa? (s/n): ";
        cin >> continuar;

    } while (continuar == 'n' || continuar == 'N');

    cout << "Total de veces utilizadas del programa: " << veces << endl;

    return 0;
}