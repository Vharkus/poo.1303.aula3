//Biblioteca padr�o.
#include <iostream>
//Biblioteca padr�o. Evite termos que escrever "std::" na frente de cada interface.
using namespace std;
//Definindo a fun��o Soma junto das vari�veis a e b.
float Soma (float a, float b)
{
    //Criando a vari�vel Resultado.
    float Resultado;
    //Definindo a equa��o da vari�vel.
    Resultado = a + b;
    //Fazer o valor obtido retornar para a vari�vel.
    return Resultado;
}
//Definindo a fun��o Subt/subtra��o junto de suas vari�veis.
float Subt (float a, float b)
{
    //Criando uma vari�vel para a fun��o em quest�o.
    float Resultado;
    //Definindo a equa��o.
    Resultado = a - b;
    //Comando que manda o valor de volta para a vari�vel.
    return Resultado;
}
//Fun��o de multiplica��o e suas vari�veis.
float Multi (float a, float b)
{   //Criando a vari�vel que ir� armazenar a equa��o das vari�veis.
    float Resultado;
    //Criando a equa��o.
    Resultado = a * b;
    //Forma de devolver o valor obtido.
    return Resultado;
}
//Fun��o de divis�o. Pode usar int, mas para padronizar foi colocado float em todas por conta da divis�o e seus poss�veis n�meros quebrados.
float Divi (float a, float b)
{   //Vari�vel que ir� pegar os resultados.
    float Resultado;
    //Definindo a equa��o.
    Resultado = a / b;
    //Forma de receber o valor obtido.
    return Resultado;
}
//Corpo principal do programa. Ele que comanda e puxa as fun��es de fora.
int main(){
    //Vari�veis do corpo principal.
    float a, b;
    //Interface para o usu�rio escolher os n�meros.
    cout <<"Informe os n�meros: "<< endl;
    //Forma de armazenar os n�meros escolhidos nas vari�veis.
    cin >> a >> b;
    //Interface que mostra o resultado da soma.
    cout <<"O valor da soma �: "<< Soma (a,b) << endl;
    //Interface que mostra o resultado da subtra��o.
    cout << "O valor da subtra�ao �: " << Subt (a,b) << endl;
    //Interface que mostra o resultado da multiplica��o.
    cout << "O valor da multiplica�ao �: " << Multi (a,b) << endl;
    //Interface que mostra o resultado da divis�o.
    cout << "O valor da divisao �: " << Divi (a,b) << endl;
    //N�o � necess�rio um "return 0", pois em cada fun��o j� temos um return, ou seja, j� devolvem para o programa um valor.
}