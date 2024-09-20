#include <stdio.h>

int main() {
    char operador;
    float num1, num2, resultado;

    // Solicitar el operador
    printf("Ingresa una operación (+, -, *, /): ");
    scanf(" %c", &operador);

    // Solicitar los dos números
    printf("Ingresa el primer número: ");
    scanf("%f", &num1);

    printf("Ingresa el segundo número: ");
    scanf("%f", &num2);

    // Realizar la operación
    switch(operador) {
        case '+':
            resultado = num1 + num2;
            printf("El resultado de %.2f + %.2f es %.2f\n", num1, num2, resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("El resultado de %.2f - %.2f es %.2f\n", num1, num2, resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("El resultado de %.2f * %.2f es %.2f\n", num1, num2, resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("El resultado de %.2f / %.2f es %.2f\n", num1, num2, resultado);
            } else {
                printf("Error: División por cero no permitida.\n");
            }
            break;
        default:
            printf("Operador no válido.\n");
    }

    return 0;
}
