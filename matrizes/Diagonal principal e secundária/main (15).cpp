#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Digite o tamanho da matriz (N): ";
    cin >> N;

    int matriz[N][N];

    cout << "Digite os elementos da matriz:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matriz[i][j];
        }
    }

    int somaDiagonalPrincipal = 0, somaDiagonalSecundaria = 0;

    for (int i = 0; i < N; i++) {
        somaDiagonalPrincipal += matriz[i][i];
        somaDiagonalSecundaria += matriz[i][N - 1 - i];
    }

    cout << "Soma da diagonal principal: " << somaDiagonalPrincipal << endl;
    cout << "Soma da diagonal secundaria: " << somaDiagonalSecundaria << endl;

    return 0;
}
