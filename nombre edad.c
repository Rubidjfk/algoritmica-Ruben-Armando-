#include <stdio.h>

int main() {
    char nombre[50];
    int anio_nacimiento, anio_actual, edad;

    // Obtener el a�o actual
    anio_actual = 2024; // Actualizado al a�o 2024

    // Solicitar el nombre del usuario
    printf("Por favor, ingresa tu nombre: ");
    fgets(nombre, sizeof(nombre), stdin);

    // Solicitar el a�o de nacimiento
    printf("Por favor, ingresa tu a�o de nacimiento: ");
    scanf("%d", &anio_nacimiento);

    // Calcular la edad
    edad = anio_actual - anio_nacimiento;

    // Mostrar solo el nombre y la edad
    printf("Nombre: %s", nombre);
    printf("Edad: %d a�os\n", edad);

    return 0;
}
