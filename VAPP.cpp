#include <iostream>
#include <string>
using namespace std;

int contarvoca(const string& palabra){
    int cont=0;
    for (char letra:palabra){
        if(letra=='A' || letra=='E' || letra=='I' || letra=='O' || letra=='U'){
            letra==letra+('a'-'A');
        }
        if (letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u'){
            cont++;
        }
    }
    return cont;
}
int contarcar(const string& palabra){
    return palabra.length();
}
bool palindromo(const string& palabra){
    int inicio=0;
    int fin=palabra.length()-1;
    while (inicio<fin){
        if (palabra[inicio]!=palabra[fin]){
            return false;
        }
        inicio++;
        fin--;
    }
    return true;
}
int contarConsonantes(const string& palabra) {
    int cont=0;
    
    for (char letra : palabra) {
        char letramin = (letra >= 'A' && letra <= 'Z') ? letra + ('a' - 'A') : letra;
        if ((letramin >= 'b' && letramin <= 'z') && !(letramin == 'a' || letramin == 'e' || letramin == 'i' || letramin == 'o' || letramin == 'u')) {
            cont++;
        }
    }
    return cont;
}