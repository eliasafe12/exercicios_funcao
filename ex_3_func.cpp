#include <iostream>
using namespace std;

//EXERCÍCIO: VOCÊ DEVE CRIAR UMA FUNÇÃO NOMEADA escolhe_maior_entre_tres_numeros QUE IR� RECEBER TRÊS NÚMEROS INTEIROS E DEVE RETORNAR O MAIOR ENTRE OS TRÊS
// NO main, VOCÊ DEVE:
// -PEDIR AO USUÁRIO PARA DIGITAR TRÊS NÚMEROS INTEIROS POSITIVOS E ARMAZENE-OS EM TRÊS VARI�VEIS
// -CHAMAR A FUNÇÃO escolhe_maior_entre_tres_numeros E ARMAZENAR O RETORNO DA FUNÇÃO EM UMA VARI�VEL NOMEADA maior
// -IMPRIMIR UMA MENSAGEM COM O MAIOR NÚMERO

// EXEMPLO:
// Digite três inteiros: 4 9 2
// 9 é o maior número entre 4, 9 e 2.

int a, b, c;
int ler_numero(){
    int num;
    cin >> num;
    return num;
}
int escolhe_maior_entre_tres_numeros(){
    if(a > b){
        if(a > c){
            return a;
        }else{
            return c;
        }
    }else if(b > a){
        if(b > c){
            return b;
        }else{
            return c;
        }
    }
}
int main(){
    cout << "Digite tres numeros inteiros: ";
    a = ler_numero();
    b = ler_numero();
    c = ler_numero();
    int maior = escolhe_maior_entre_tres_numeros();
    cout << maior << " eh o maior entre " << a << ", " << b << " e " << c;
}
