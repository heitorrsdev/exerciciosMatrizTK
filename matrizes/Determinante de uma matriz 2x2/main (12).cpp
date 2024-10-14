#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int matriz[2][2];

    // Entrada dos elementos da matriz 2x2
    cout << "Digite os elementos da matriz 2x2:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> matriz[i][j];
        }
    }

    // Calculando o determinante
    int a = matriz[0][0];
    int b = matriz[0][1];
    int c = matriz[1][0];
    int d = matriz[1][1];

    int determinante = a * d - b * c;

    // Exibindo o determinante
    cout << "O determinante da matriz é: " << determinante << endl;

    return 0;
}
