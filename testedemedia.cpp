#include <iostream>
#include <stdlib.h>
using namespace std;

int main () {
    double nota1, nota2, nota3, nota4;
    
    cout << "Digite a sua primeira nota do semestre >>> ";
    cin >> nota1;
    cout << "Digite a sua segunda nota do semestre >>> ";
    cin >> nota2;
    cout << "Digite a sua terceira nota do semestre >>> ";
    cin >> nota3;
    cout << "Digite a sua quarta nota do semestre >>> ";
    cin >> nota4;
    
    double soma = (nota1 + nota2 + nota3 + nota4);
    soma = (soma/4);
    cout << "A sua média no semestre foi " << soma << endl << endl;
    
    if (soma >= 7) {
        cout << "Parabens! Você foi aprovado!" << endl;
    }else{
        cout << "Eita! Você foi reprovado!" << endl;
    }
    return 0;
}