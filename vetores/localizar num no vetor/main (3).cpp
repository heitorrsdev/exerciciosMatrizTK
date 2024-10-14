#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int n;
    int buscar;
    int posição = -1;
    
    cout <<"Qual o tamanho do seu vetor?" << endl;
    cin >> n;
    
    int vet[n];
    cout <<"Insira os elementos do vetor." << endl;
    for(int i=0; i < n; i++){
        cin >>vet[i];
    }
    
    cout <<"Qual o número que deseja buscar no vetor?" << endl;
    cin >> buscar;
    
    for(int i=0; i < n; i++){
        if(vet[i] == buscar){
        posição = i;
        
        break;
    }

    }
    
    if(posição != -1){
        cout <<"Número encontrado na posição: " << posição + 1 << endl;
    }
    else{
        cout <<"Número não encontrado nesta posição" << endl;
    }
}
