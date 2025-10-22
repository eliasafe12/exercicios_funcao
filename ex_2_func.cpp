#include <iostream>
using namespace std;

// EXERCÍCIO: VOCÊ DEVE CRIAR UMA FUNÇÃO NOMEADA somar_tres_inteiros QUE IRÁ RECEBER 3 NÚMEROS INTEIROS E RETORNAR A SOMA ENTRE OS TRÊS NÚMEROS
// VOCÊ DEVE CHAMAR A FUNÇÃO NO MAIN, ARMAZENAR EM UMA VARIÁVEL CHAMADA soma E IMPRIMIR A VARIÁVEL
int soma, a, b, c;
int somar_tres_inteiros(){
    soma = a+b+c;
    return soma;
}

int main(){
    cin >> a >> b >> c;
    somar_tres_inteiros();
    cout << soma << endl;
}
