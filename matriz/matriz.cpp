#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "");
    double matriz[3][3];
    double somaColuna, produtoLinha = 1, somaTotal, somaDiagonal;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout <<"Qual valor para a linha " << i + 1 << " , valor para a coluna " << j + 1 <<  endl;
            cin >> matriz [i] [j];

            if( j == 0){
                somaColuna += matriz[i][j];
            }
            if (i == 0){
                produtoLinha *= matriz[i][j];
            }
            somaTotal += matriz[i][j];
            if (i == j){
                somaDiagonal += matriz[i][j];
            }
        }
        
       
    }
    for (int i = 0; i < 3; i++){

        for (int j = 0; j < 3; j++){
            cout << " " << matriz[i][j];

        }
        cout << endl;
    }
    cout << "A soma da coluna 1 é: " << somaColuna << endl << "O produto da primeira linha é: " << produtoLinha << endl << "A soma total é: " << somaTotal << endl << " A soma da diagonal principal é: " << somaDiagonal << endl;
}