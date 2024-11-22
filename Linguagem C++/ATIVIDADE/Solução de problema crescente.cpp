#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    //Variaveis
    int n1, n2;

    //Digite dois numeros
    cout << "Digite o primeiro numero: ";
    cin >> n1;

    cout << "Digite o segundo numero: ";
    cin >> n2;

    //Descobrindo a ordem
    if (n1 > n2){
        cout << "Crescente";
    } else{
        cout << "Decrescente";
    }

    return 0;
}