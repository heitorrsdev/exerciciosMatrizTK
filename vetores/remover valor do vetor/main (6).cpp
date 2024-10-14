#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n, posicao;

    // Entrada do tamanho do vetor
    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    int vetor[n];

    // Entrada dos elementos do vetor
    cout << "Digite os elementos do vetor:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> vetor[i];
    }

    // Entrada da posição a ser removida
    

    // Verificando se a posição é válida
    do{

        cout << "Digite a posição do elemento que deseja remover (0 a " << n - 1 << "): ";
        cin >> posicao;
        
        if (posicao < 0 || posicao >= n) {
        cout << "Posição inválida!" << endl;
    } else {
        // Remover o elemento deslocando os elementos seguintes
        for (int i = posicao; i < n - 1; i++) {
            vetor[i] = vetor[i + 1]; // Desloca os elementos para a esquerda
        }

        n--; // Reduz o tamanho do vetor em -1

        // Exibindo o vetor após a remoção
        cout << "Vetor após a remoção: ";
        for (int i = 0; i < n; i++) {
            cout << vetor[i] << " ";
        }
        cout << endl;
    }
    }while(posicao < 0 || posicao >= n);
    


    return 0;
}
