#include <stdio.h>

int main() {
    char nombre[50];
    int anio_nacimiento, anio_actual, edad;

    // Obtener el año actual
    anio_actual = 2024; // Actualizado al año 2024

    // Solicitar el nombre del usuario
    printf("Por favor, ingresa tu nombre: ");
    fgets(nombre, sizeof(nombre), stdin);

    // Solicitar el año de nacimiento
    printf("Por favor, ingresa tu año de nacimiento: ");
    scanf("%d", &anio_nacimiento);

    // Calcular la edad
    edad = anio_actual - anio_nacimiento;

    // Mostrar solo el nombre y la edad
    printf("Nombre: %s", nombre);
    printf("Edad: %d años\n", edad);

    return 0;
}
