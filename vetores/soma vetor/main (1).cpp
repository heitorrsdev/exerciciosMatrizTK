#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    int n;
   
    cout <<"Qual o tamanho do vetor?" <<endl;
    cin >> n;
    
    int vet[n];
    int soma = 0;
    
    cout << "Quais o elemtento desejado para somar?\n";
    for(int i=0; i < n; i++){

        cin >> vet[i];
        soma += vet[i];
    }
    
    cout <<"A soma de todos os elementos é: "<< soma;
}
