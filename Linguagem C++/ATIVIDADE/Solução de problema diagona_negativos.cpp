#include <iostream>

using namespace std;

int main(){
    //Variavel
    int N, count;

    //Digite o tamanho da matriz
    cout << "Tamano da matriz: ";
    cin >> N;

    int Matriz[N][N];

    //Colocando os valores na matriz
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cout << "Elemento [" << i << "," << j << "]:";
            cin >> Matriz[i][j];
        }
    }

    //Descobrindo a diagonal principal
    cout << "Diagonal principal: ";
    for (int i = 0; i < N; i++){
        cout << Matriz[i][i] << " ";
    }

    count = 0;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (Matriz[i][j] < 0){
                count++;
            }
        }
    }
    
    return 0;
}