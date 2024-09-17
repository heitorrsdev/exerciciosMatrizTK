#include <iostream>
#include <locale.h>


using namespace std;

int main()
{
    setlocale(LC_ALL,"");

    int n,aux;
    long long int prod=1;

    cout <<"\n=======================\n ";
    cout <<" CALCULANDO FATORIAL";
    cout <<"\n=======================\n ";

    cout <<"Qual a fatorial que deseja calcular?" << endl;
    cin >> n;

    if(n <0){
        cout <<"\nNão é possível calcular o fatorial de números negativos." << endl;
    }else if (n == 0)
        cout <<"\nFatorial de 0! = 1 " << endl;
    else{
        for(aux=1 ; aux <= n ; aux++){
        prod *= aux;
        }
    cout << "\nFatorial de "<< n <<"! = " << prod << endl << endl;
    }
    
    

}