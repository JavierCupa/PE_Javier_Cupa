#include <stdio.h>

int main() {
    // Caracteres de escape
    char nombre[] = "Juan";
    printf("Hola, %s!\n", nombre); // Salto de línea \n
    printf("Este es un tab\tusado como separador.\n"); // Tabulación \t
    printf("Una comilla simple: \'\n"); // Comilla simple \'
    printf("Una comilla doble: \"\n"); // Comilla doble \"
    printf("Una barra invertida: \\\n"); // Barra invertida \\
    printf("Una nueva línea: \n"); // Nueva línea \n
    printf("Una alarma sonora (bell): \a\n"); // Alarma sonora \a

    // Especificadores de formato
    int edad = 25;
    float altura = 1.75;
    char inicial = 'J';
    
    printf("Nombre: %s\n", nombre); // Especificador de cadena %s
    printf("Edad: %d años\n", edad); // Especificador de entero %d
    printf("Altura: %.2f metros\n", altura); // Especificador de flotante %.2f
    printf("Inicial: %c\n", inicial); // Especificador de carácter %c
    printf("Numero en hexadecimal: %x\n", edad); // Especificador de hexadecimal %x
    printf("Numero en octal: %o\n", edad); // Especificador de octal %o

    return 0;
}