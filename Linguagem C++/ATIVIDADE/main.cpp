#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    int idade;
    double salario, altura;
    char genero;
    string nome;

    idade   = 18;
    salario = 1.800;
    altura  = 1.70;
    genero  = 'M';
    nome    = "Massani";

    cout << fixed << setprecision(2);
    cout << "Idade = " << idade << endl;
    cout << "Salario = " << salario << endl;
    cout << "Altura = " << altura << endl;
    cout << "Genero = " << genero << endl;
    cout << "Nome = " << nome << endl;
    
    return 0;
}