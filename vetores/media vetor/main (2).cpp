#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    int vet[10];
    int media;
    int num;
    int soma = 0;
    
    cout <<"Quais numero você quer fazer a média?" << endl;
    
    for(int i=0; i < 10; i++){
        cin >> num;
        soma += num;
    }
    
    media = soma/ 10;
    
    cout <<"A sua média é: " << endl;
    cout << media;
}
