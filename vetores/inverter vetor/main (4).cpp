#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n;

    // Entrada do tamanho do vetor
    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    int vetor[n];

    // Entrada dos elementos do vetor
    cout << "Digite os elementos do vetor:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> vetor[i];
    }

    // Invertendo o vetor
    for (int i = 0; i < n / 2; i++) {
        int temp = vetor[i]; // Variável temporária para guardar o valor original
        vetor[i] = vetor[n - 1 - i]; // Trocando o elemento do início com o do fim
        vetor[n - 1 - i] = temp; // Colocando o valor original no fim
    }

    // Exibindo o vetor invertido
    cout << "Vetor invertido: ";
    for (int i = 0; i < n; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
