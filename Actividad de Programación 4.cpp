/*****************************PRESENTACION*************************
NOMBRE: Luis Javier Cupa AcostaFECHA: 30/01/2025
PROGRAMA: Actividad de programción 1
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
PROFESOR: Sergio Franco Casillas
DESCRIPCION:Un programa que muestre los datos requeridos
********************************************************************/
#include <iostream>
using namespace std;

int main(){
    int n, x=0, y=1, z=1, operacion;
    cout<<"Indique la operacion: "<<endl;
    cout<<"1.Correr codigo"<<endl;
    cout<<"2.Cerrar codigo"<<endl;
    cin>>operacion;
    do{
    cout<<"Digite el numero de elementos: "; cin>>n;
    for (int i=1;i<=n;i++){
        z=x+y;
        cout<<z<<" ";
        x=y;
        y=z;
    }
    return 0;
    } while (operacion==2);
}