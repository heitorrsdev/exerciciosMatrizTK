#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "");

    // declarando variaveis
    int numCarteira;
    int numMultas;
    float valorMulta;
    float totalMultasMotorista, totalArrecadado = 0;
    int carteiraMaisMultas = 0, maiorMultas = 0;

    cout <<"==================================" << endl;
    cout <<"         SISTEMA DETRAN" << endl;
    cout <<"==================================" << endl;





    while (true) {
        cout << "\nDigite o número da carteira de motorista (ou 0 para sair): ";
        cin >> numCarteira;

        if (numCarteira == 0) {
            break; // Encerra se 0 for digitado
        }

        cout << "Digite o número de multas do motorista: ";
        cin >> numMultas;

        totalMultasMotorista = 0; // Reinicia para cada motorista

        for (int i = 1; i <= numMultas; i++) {
            cout << "Digite o valor da multa " << i << ": ";
            cin >> valorMulta;
            totalMultasMotorista += valorMulta;
        }

        cout << "A dívida total do motorista de carteira " << numCarteira << " é: R$ " << totalMultasMotorista << endl;

        // Soma o total arrecadado com esse motorista
        totalArrecadado += totalMultasMotorista;

        // Verifica se o motorista tem mais multas que o de agora
        if (numMultas > maiorMultas) {
            maiorMultas = numMultas;
            carteiraMaisMultas = numCarteira;
        }
    }

    // Exibe os resultados finais
    cout << "\nTotal arrecadado com todas as multas: R$ " << totalArrecadado << endl;
    cout << "O motorista com mais multas tem a carteira número " << carteiraMaisMultas << " com " << maiorMultas << " multas." << endl;

}