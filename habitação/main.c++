#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "");

    int pop = 0; 
    double altura, maiorAltura = 0; 
    double somaAltFem = 0, somaAltPop = 0;
    int sexo;
    int masc = 0, fem = 0, outros = 0;
    double mediaAltFem = 0, mediaAltPop = 0;

    for (int i = 1; i <= 50; i++) {
        cout << "\nQual a altura? (metros)\n";
        cin >> altura;

        do {
            cout << "\nQual é o seu sexo?\n0 = masc, 1 = fem, 2 = outros\n";
            cin >> sexo;
        } while (sexo < 0 || sexo > 2);

        switch (sexo) {
            case 0:
                masc++;
                break;
            case 1:
                fem++;
                somaAltFem += altura;
                break;
            case 2:
                outros++;
                break;
            default:
                cout << "Opção inválida!\n";
        }

        somaAltPop += altura;
        pop++; // Incrementa o total de pessoas

        if (altura > maiorAltura) {
            maiorAltura = altura;
        }
    }

    // Calcular médias
    if (fem > 0) {
        mediaAltFem = somaAltFem / fem;
    }

    if (pop > 0) {
        mediaAltPop = somaAltPop / pop;
    }

    // Exibir resultados
    cout << "\nA maior altura é: " << maiorAltura << endl;
    cout << "Média de altura das mulheres: " << mediaAltFem << endl;
    cout << "Média de altura da população: " << mediaAltPop <<endl;
    
    double perMasc = (pop > 0) ? (masc / (double)pop) * 100 : 0;
    cout << "Percentual de homens: " << perMasc << "%" << endl;

}