#include <iostream>
#include <stdlib.h>
using namespace std;

int main () {
    double ac1, ac2, af;
    
    cout << "Digite a nota da sua ac1: ";
    cin >> ac1;
    cout << "Digite a nota da sua ac2: ";
    cin >> ac2;
    cout << "Digite o valor da sua af: ";
    cin >> af;
    
   double media = (ac1*1.5 + ac2*3.5 + af*5);
   
   media = (media/10);
   
   if (media >=5){
       cout << "Parabens! Você foi aprovado! " << media << endl;
   }
   else {
       cout << "Que pena, você foi reprovado! " << media << endl;
   }
    return 0;
}