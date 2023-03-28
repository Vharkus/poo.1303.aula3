// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int num;
    
    cout << "Digite um número inteiro positivo:"; 
    cin >> num;
    
    cout << "Os primeiros " << num << " são pares ";
    //Vou complementar depois!! (Definir a variável = obrigatório no for. Criar uma condição para a repetição e uma atualização/contador)
    for(int i = 2; i <= num * 2; i+=2){
        cout << i << " ";
    }
    return 0;
}