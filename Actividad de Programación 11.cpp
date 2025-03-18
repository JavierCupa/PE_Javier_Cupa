/*****************************PRESENTACION*************************
NOMBRE: Luis Javier Cupa Acosta                 FECHA: 04/03/2025
PROGRAMA: Actividad de programción 11
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Determinar si un numero es par o impar y dependiendo de eso se divide entre dos o se multiplica por tres hasta que quede 1
********************************************************************/
#include <iostream>
using namespace std;

int main(){
    bool menu=true;
    int n;
    float result;
    cout<<"Ingrese un numero entero: ";
    cin>>n;
    cout<<"Su numero es: "<<n<<endl;
    while(n!=1){
        if(n%2==0){
            n=n/2;
        }
        if(n%2!=0){
            n=n*3+1;
        }
        if(result==1){
            menu=false;
            cout<<"Programa terminado"<<endl;
        }
    }
        cout<<n;
    return 0;
}