#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int linhas, colunas;

    // Entrada de número de linhas e colunas
    cout << "Digite o número de linhas da matriz: ";
    cin >> linhas;
    cout << "Digite o número de colunas da matriz: ";
    cin >> colunas;

    int matriz[100][100], transposta[100][100]; // Considerando o tamanho máximo 100x100

    // Leitura da matriz original
    cout << "Digite os elementos da matriz:" << endl;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cin >> matriz[i][j];
        }
    }

    // Transpondo a matriz (troca linha por coluna)
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            transposta[j][i] = matriz[i][j]; // Troca linha por coluna
        }
    }

    // Exibindo a matriz transposta
    cout << "Matriz transposta:" << endl;
    for (int i = 0; i < colunas; i++) {
        for (int j = 0; j < linhas; j++) {
            cout << transposta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
