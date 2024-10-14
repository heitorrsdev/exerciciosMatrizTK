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

    // Algoritmo Bubble Sort para ordenar o vetor
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                // Troca os elementos adjacentes se estiverem fora de ordem
                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    // Exibindo o vetor ordenado
    cout << "Vetor ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
