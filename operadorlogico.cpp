#include <iostream>
using namespace std;

int main () {
    int a = 5;
    int b = 10;
    int c = 15;
    
    //Exemplo de uso do operador AND (&&)
    if (a < b && b < c) {
        //O operador lógico && está informando 
        cout << "A ordem é: a, b, c" << endl;
    }
    
    //Exemplo do uso do operador OR (||)
    if (a > b || b > c) {
        cout << "Pelo menos uma das condições é verdadeira" << endl;
    }
    
    //Exemplo do uso do operador NOT (!)
    if (!(a == b))  {
        cout << "A é diferente de B" << endl;
    }
    return 0;
}