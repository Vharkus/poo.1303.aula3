#include <iostream>
using namespace std;
int main() {
    char op;
    float num1, num2;
    cout << "Entre com o Operador: +,-,*,/: ";
    cin >> op;
    cout << "Entre com dois valores: ";
    cin >> num1 >> num2;
    //OP seria uma condicional do switch.(Explicar melghor depois)
    switch(op) {
        case '+':
        //Atenção nessas linhas. Muita informação aqui!
            cout << num1 << '+' << num2 << '=' << num1 + num2;
            break;
        case '-':
            cout << num1 << '-' << num2 << '=' << num1 - num2;
            break;
        case '*':
            cout << num1 << '*' << num2 << '=' << num1 * num2;
            break;
        case '/':
            cout << num1 << '/' << num2 << '=' << num1 / num2;
            break;
        default:
            cout << "Operador errado, por favor insira o operador correto";
    }
    return 0;
}