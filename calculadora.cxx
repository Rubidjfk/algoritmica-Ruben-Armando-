#include <iostream>

using namespace std;

int main() {
    char operacion;
    float num1, num2;

    // Solicitar la operación
    cout << "Selecciona la operación (+, -, *, /): ";
    cin >> operacion;

    // Solicitar los dos números
    cout << "Introduce el primer número: ";
    cin >> num1;
    cout << "Introduce el segundo número: ";
    cin >> num2;

    switch (operacion) {
        case '+':
            cout << "Resultado: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Resultado: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Resultado: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Resultado: " << num1 / num2 << endl;
            else
                cout << "Error: División por cero no permitida." << endl;
            break;
        default:
            cout << "Operación no válida." << endl;
            break;
    }

    return 0;
}