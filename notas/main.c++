#include <iostream>

using namespace std;

int main()
{
    int media, notaTotal;
    char parar = 'N';
    double nota;
    
    do{
        notaTotal = 0;  // Inicializa notaTotal a cada novo loop
        for(int i = 1; i <= 5; i++){
            do {
                cout << "Qual a " << i << "ª nota: ";
                cin >> nota;
                if (nota < 0 || nota > 10) {
                    cout << "Nota inválida! Digite novamente.\n";
                }
            } while(nota < 0 || nota > 10);  // Valida se a nota é positiva
            
            notaTotal += nota;  // Acumula a nota
        }
        
        media = notaTotal/5;
        if(media >= 7){
            cout <<"Aprovado!\n";
        }
        else if(media >= 5 && media <7){
            cout <<"Recuperação!\n";
        }
        else{
            cout <<"Reprovado\n";
        }
    
        cout <<"Digite [Y] PARA CONTINUAR e[N] PARA PARAR o sistema.\n";
        cin >> parar;
            
    }while (parar != 'N');

}