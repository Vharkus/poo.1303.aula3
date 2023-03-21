#include <iostream>
using namespace std;

int main () {
    int x = 10;
    int y = 20;
    
    if (x > y) {
        cout << "X é maior que Y" << endl;
    }
    if (x < y) {
        cout << "X é menor que Y" << endl;
    }
    if (x >= y) {
        cout << "X é maior ou igual a Y" << endl;
    }
    if (x <= y) {
        cout << "X é menor ou igual a Y" << endl;
    }
    if (x == y) {
        cout << "X é igual a Y" << endl;
    }
    if (x != y) {
        cout << "X é diferente de Y" << endl;
    }
    
    return 0;
}