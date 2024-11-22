#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

using namespace std;
    
int main(){
    //Variveis
    double base, altura, area, perimetro, diagonal;

    //Digite a base e altura
    cout << "Digite o tamanho da base: ";
    cin >> base;

    cout << "Digite o tamanho da altura: ";
    cin >> altura;

    //Area
    area = base * altura;

    //Perimetro
    perimetro = 2 * (base + altura);

    //Diagonal
    diagonal = sqrt(base * base + altura * altura);

    //Mostrando o resultado
    cout << "Area: " << area << endl << "Perimetro: " << perimetro << endl << "Diagonal: " << diagonal << endl;

    return 0;
}
