#include <iostream>
#include "VAP9.cpp"
using namespace std;

int main(){
    int size;
    cout<<"Ingresa la dimension de la matriz (2-10): ";
    cin>>size;
    while (size<2||size>10){
        cout<<"Valor fuera de rango, vuelva a intentar"<<endl;
        cin>>size;
    }
    int m1[max_size][max_size];
    int m2[max_size][max_size];
    int result[max_size][max_size];
    crear(m1, size);
    crear(m2, size);
    crear(result, size);
    int op;
    cout<<"1. Ingresar valores manualmente"<<endl;
    cout<<"2. Ingresar valores automaticamente"<<endl;
    cin>>op;
    switch (op){
        case 1:{
            cout<<"Ingrese los valores de la primera matriz:"<<endl;
            in_u(m1, size);
            cout<<"Ingrese los valores de la segunda matriz:"<<endl;
            in_u(m2, size);
            break;
        }
        case 2:{
            in_r(m1, size);
            in_r(m2, size);
            cout<<"Valores generados automaticamente..."<<endl;
            break;
        }
        default:{
            cout<<"Valor incorrecto, vuelva a intentar"<<endl;
        }
    }
    cout<<"Matriz 1:"<<endl;
    imprimir(m1, size);
    cout<<"Matriz 2:"<<endl;
    imprimir(m2, size);
    int opm;
    cout<<"--Operaciones--"<<endl;
    cout<<"1. Suma"<<endl;
    cout<<"2. Resta"<<endl;
    cout<<"3. Multiplicacion"<<endl;
    cout<<"4. Limpiar matriz"<<endl;
    cout<<"Ingrese el numero de la operacion que desea realizar: ";
    cin>>opm;
    if (opm==1){
        sum_m(m1, size, m1, m2, result);
        cout<<"La suma de las matrices es:"<<endl;
        imprimir(result, size);
    }
    else if(opm==2){
        res_m(m1, size, m1, m2, result);
        cout<<"La resta de las matrices es:"<<endl;
        imprimir(result, size);
    }
    else if(opm==3){
        mul_m(m1, size, m1, m2, result);
        cout<<"La multiplicacion de las matrices es:"<<endl;
        imprimir(result, size);
    }
    else if(opm==4){
        limpiar(m1, size);
        limpiar(m2, size);
        cout<<"Las matrices se han vaciado correctamente"<<endl;
        cout<<"Matriz 1:"<<endl;
        imprimir(m1, size);
        cout<<"Matriz 2:"<<endl;
        imprimir(m2, size);
    }
    else {
            cout<<"Valor incorrecto, vuelva a intentar"<<endl;
    }
    return 0;
}