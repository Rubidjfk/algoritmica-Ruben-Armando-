#include <stdio.h>

int main() {
    char nombre[50];
    char apellido[50];

    // Solicitar nombre
    printf("Ingresa tu nombre: ");
    scanf("%s", nombre);

    // Solicitar apellido
    printf("Ingresa tu apellido: ");
    scanf("%s", apellido);

    // Imprimir nombre completo
    printf("Hola %s %s\n", nombre, apellido);

    return 0;
}
