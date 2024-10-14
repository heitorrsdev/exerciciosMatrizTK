#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int matriz[3][3];
    int escolha, soma = 0;

    // Entrada dos elementos da matriz 3x3
    cout << "Digite os elementos da matriz 3x3:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matriz[i][j];
        }
    }

    // Solicita ao usuário a escolha de linha ou coluna
    cout << "Você deseja calcular a soma de uma linha ou coluna?" << endl;
    cout << "Digite 1 para linha e 2 para coluna: ";
    cin >> escolha;

    if (escolha == 1) {
        // Solicita qual linha o usuário quer somar
        int linha;
        cout << "Digite o número da linha (0, 1 ou 2): ";
        cin >> linha;

        // Calculando a soma da linha escolhida
        for (int j = 0; j < 3; j++) {
            soma += matriz[linha][j];
        }

        cout << "A soma dos elementos da linha " << linha << " é: " << soma << endl;
    } else if (escolha == 2) {
        // Solicita qual coluna o usuário quer somar
        int coluna;
        cout << "Digite o número da coluna (0, 1 ou 2): ";
        cin >> coluna;

        // Calculando a soma da coluna escolhida
        for (int i = 0; i < 3; i++) {
            soma += matriz[i][coluna];
        }

        cout << "A soma dos elementos da coluna " << coluna << " é: " << soma << endl;
    } else {
        cout << "Opção inválida!" << endl;
    }

    return 0;
}
