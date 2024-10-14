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

    int numero;
    cout << "Digite o número a ser buscado: ";
    cin >> numero;

    bool encontrado = false;
    int posX = -1, posY = -1;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matriz[i][j] == numero) {
                encontrado = true;
                posX = i;
                posY = j;
                break; // Sai do loop interno ao encontrar o número
            }
        }
        if (encontrado) break; // Sai do loop externo se o número foi encontrado
    }

    if (encontrado) {
        cout << "Número " << numero << " encontrado na posição (" << posX + 1 << ", " << posY + 1 << ")." << endl;
    } else {
        cout << "Número " << numero << " não encontrado na matriz." << endl;
    }

    return 0;
}
