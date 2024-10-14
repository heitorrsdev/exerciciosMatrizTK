#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;

    // Entrada do tamanho do primeiro vetor
    cout << "Digite o tamanho do primeiro vetor: ";
    cin >> n1;

    int vetor1[n1];

    // Entrada dos elementos do primeiro vetor
    cout << "Digite os elementos do primeiro vetor:" << endl;
    for (int i = 0; i < n1; i++) {
        cin >> vetor1[i];
    }

    // Entrada do tamanho do segundo vetor
    cout << "Digite o tamanho do segundo vetor: ";
    cin >> n2;

    int vetor2[n2];

    // Entrada dos elementos do segundo vetor
    cout << "Digite os elementos do segundo vetor:" << endl;
    for (int i = 0; i < n2; i++) {
        cin >> vetor2[i];
    }

    // Vetor para armazenar a interseção dos dois vetores
    int interseccao[n1]; // O tamanho máximo da interseção pode ser no máximo o tamanho de vetor1
    int k = 0; // Contador de elementos da interseção

    // Encontrando a interseção
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (vetor1[i] == vetor2[j]) {
                // Verificar se o elemento já está na interseção para evitar duplicados
                bool duplicado = false;
                for (int l = 0; l < k; l++) {
                    if (interseccao[l] == vetor1[i]) {
                        duplicado = true;
                        break;
                    }
                }
                if (!duplicado) {
                    interseccao[k] = vetor1[i];
                    k++;
                }
                break; // Parar a busca após encontrar o elemento no segundo vetor
            }
        }
    }

    // Exibir o vetor de interseção
    if (k > 0) {
        cout << "Elementos presentes em ambos os vetores: ";
        for (int i = 0; i < k; i++) {
            cout << interseccao[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Não há elementos em comum entre os dois vetores." << endl;
    }

    return 0;
}
