#include <iostream>
#include <locale.h>
#include <vector>

using namespace std;

int main() {
  setlocale(LC_ALL, "Portuguese");

  int ordem;

  // Solicita o tamanho da matriz
  cout << "Digite o tamanho da matriz identidade: ";
  cin >> ordem; // input

  // Cria a variável matriz usando vector, inialmentando com zeros
  vector<vector<int>> matriz(ordem, vector<int>(ordem, 0));

  // Preenche a diagonal principal com 1
  for (int i = 0; i < ordem; i++) {
    matriz[i][i] = 1;
  }

  // Exibe a matriz identidade
  cout << "Matriz identidade de tamanho " << ordem << "x" << ordem << ":" << endl;
  for (int i = 0; i < ordem; i++) {
    for (int j = 0; j < ordem; j++) {
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
