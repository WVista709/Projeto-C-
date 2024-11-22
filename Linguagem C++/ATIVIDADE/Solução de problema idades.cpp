#include <iostream>
#include <string>
#include <climits>

using namespace std;

int main(){
    //Variaveis
    int idade1, idade2;
    string nome1, nome2;
    double media;

    //Digite o nome e idade da primeira pessoa
    cout << "Digite o nome da primeira pessoa: ";
    getline(cin, nome1);

    cout << "Digite a idade da primeira pessoa: ";
    cin >> idade1;
    
    //Digite o nome e idade da segunda pessoa
    cout << "Digite o nome da segunda pessoa: ";
    cin.ignore(INT_MAX, '\n');
    getline(cin, nome2);

    cout << "Digite a idade da segunda pessoa: ";
    cin >> idade2;

    //Media das idades
    media = double(idade1 + idade2) / 2;

    cout << "A idade media de " << nome1 << " e " << nome2 << " eh de " << media;

    return 0;
}