//Ligação com uma biblioteca. Iostream permite a entrada e saída de informação.
#include <iostream>
using namespace std;
//Começo do código. É necessário usar para o funcionamento do código.
int main() {
    //Declaração das variaveis.
   float base, altura, area;
   
   //Interface do usuario.
   cout << "Digite a base do triangulo: ";
   //Recebe a informação do usuario.
   cin >> base;
   //Segunda interface do usuario.
   cout << "Digite a altura do triangulo: ";
   //Recebe a informação referente a a interface anterior.
   cin >> altura;
   
   //Equação para achar a area do triangulo.
   area = (base * altura) /2;
   
   //Interface que dara a resposta
   cout << "A area do traingulo é: " << area << endl;
   
    return 0;
}