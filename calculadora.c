#include <stdio.h>

int main() {
    char operador;
    float num1, num2, resultado;

    // Solicitar el operador
    printf("Ingresa una operaci�n (+, -, *, /): ");
    scanf(" %c", &operador);

    // Solicitar los dos n�meros
    printf("Ingresa el primer n�mero: ");
    scanf("%f", &num1);

    printf("Ingresa el segundo n�mero: ");
    scanf("%f", &num2);

    // Realizar la operaci�n
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
                printf("Error: Divisi�n por cero no permitida.\n");
            }
            break;
        default:
            printf("Operador no v�lido.\n");
    }

    return 0;
}
