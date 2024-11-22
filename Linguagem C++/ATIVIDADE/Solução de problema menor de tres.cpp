#include <iostream>
#include <iomanip>
#include <string>
#include <climits>

using namespace std;

int main(){
    //Variaveis
    int n1, n2, n3;

    //Digite os valores
    cout << "Digite o primeiro valor: ";
    cin >> n1;

    cout << "Digite o segundo valor: ";
    cin >> n2;

    cout << "Digite o terceiro valor: ";
    cin >> n3;

    //Descobrindo quem é o menor
    if (n1 < n2 && n1 < n3){
        cout << "Menor: " << n1;
    } else if (n2 < n1 && n2 < n3){
        cout << "Menor: " << n2;
    } else if (n3 < n1 && n3 < n2){
        cout << "Mneor: " << n3;
    }

    return 0;
}

