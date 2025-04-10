#include <iostream>
#include "VAPP.cpp"
using namespace std;

int main(){
    string palabra;
    bool menu=true;
    int men;
    while(menu){
    cout<<"--Menu de opciones--"<<endl;
    cout<<"1. Iniciar Programa"<<endl;
    cout<<"2. Salir"<<endl;
    cout<<"Ingrese una opcion: ";
    cin>>men;
    switch(men){
        case 1:{
                cout<<"--Identificar palindromos---"<<endl;
                cout<<"Ingrese una palabra: "<<endl;
                cin>>palabra;
                if (palindromo(palabra)){
                cout<<"La palabra si es un palindromo"<<endl;
                }
                else{
                cout<<"La palabra no es un palindromo"<<endl;
                }
                cout<<"La cantidad de vocales es: "<<contarvoca(palabra)<<endl;
                cout<<"La cantidad de consonantes es: "<<contarConsonantes(palabra)<<endl;
                cout<<"La cantidad de caracteres es: "<<contarcar(palabra)<<endl;
                break;
            }
        case 2:{
                cout<<"Saliendo del programa..."<<endl;
                menu=false;
                break;
            }
        default:{
                cout<<"Opcion no valida, intente de nuevo."<<endl;
                break;
            }
        }
    }
    return 0;
}