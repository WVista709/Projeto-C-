#include <iostream>

using namespace std;

int main(){
    //Variaveis
    int n1, n2, soma;

    //Digite os valores
    cout << "Digite o primeiro valor: ";
    cin >> n1;

    cout << "Digite o segundo valor: ";
    cin >> n2;

    //Descobrindo o intervalo
    soma = 0;

    if (n1 > n2){
        for (int i = n2; i < n1; i++){
            if (i % 2 != 0){ soma += i; }
        }
    } else {
        for (int i = n1; i < n2; i++){
            if (i % 2 != 0){ soma += i; }
        }
    }

    //Mostrando a soma dos impare
    cout << "Soma dos impares: " << soma;

    return 0;

}