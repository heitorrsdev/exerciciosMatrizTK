#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int N;

    // Solicita o tamanho da matriz
    cout << "Digite o tamanho da matriz identidade (N): ";
    cin >> N;

    // Declara a matriz
    int matriz[N][N];

    // Preenche a matriz identidade
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) {
                matriz[i][j] = 1;  // Elementos da diagonal principal
            } else {
                matriz[i][j] = 0;  // Elementos fora da diagonal principal
            }
        }
    }

    // Exibe a matriz identidade
    cout << "Matriz identidade de tamanho " << N << "x" << N << ":" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
