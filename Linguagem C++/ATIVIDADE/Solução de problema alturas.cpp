#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    //Variaveis
    string nome1, nome2;
    int idade1, idade2;
    double altura1, altura2, media_altura;

    //Digite os dados da primeira pessoa
    cout << "Digite o nome: ";
    cin >> nome1;

    cout << "Digite a idade: ";
    cin >> idade1;

    cout << "Digite a altura: ";
    cin >> altura1;

    //Digite os dados da segunda pessoa
    cout << "Digite o nome: ";
    cin >> nome2;

    cout << "Digite a idade: ";
    cin >> idade2;

    cout << "Digite a altura: ";
    cin >> altura2;


    //Media de altura
    media_altura = (altura1 + altura2) / 2;

    cout << "Altura media: " << media_altura << endl;
    return 0;
}