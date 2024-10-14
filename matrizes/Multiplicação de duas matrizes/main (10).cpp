#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int matriz1[3][3], matriz2[3][3], matrizMult[3][3];

    // Leitura da primeira matriz 3x3
    cout << "Digite os elementos da primeira matriz 3x3:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matriz1[i][j];
        }
    }

    // Leitura da segunda matriz 3x3
    cout << "Digite os elementos da segunda matriz 3x3:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matriz2[i][j];
        }
    }

    // Multiplicação das duas matrizes
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrizMult[i][j] = matriz1[i][j] * matriz2[i][j];
        }
    }

    // Exibição da matriz resultante da Multiplicação
    cout << "Matriz resultante da Multiplicação:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrizMult[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}