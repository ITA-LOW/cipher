#include <iostream>
#include "Cipher.hpp"
#include <locale>
#include <ctime>

/* 
Alunos : Ítalo  - 23150813
Aluno: Guilherme - 23150814
 */

int main()
{
    std::locale::global(std::locale(""));
    int matricula = 0;
    string texto;
    Cipher cipher(matricula);

    while (true)
    {
        cout << "Menu:" << endl;
        cout << "1 - Definir seed (matricula)" << endl;
        cout << "2 - Encriptar texto" << endl;
        cout << "3 - Decriptar texto" << endl;
        cout << "4 - Sair" << endl;
        cout << "Escolha uma opcao: ";

        int opcao;
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            cout << "Digite a matricula: ";
            cin >> matricula;
            srand(matricula);
            cout << "Sua chave de encriptação/decripatação é: " << rand()+time(0) << endl;
            break;
        case 2:
            int chave;
            cout<<"Digite sua chave de encriptação: ";
            cin >> chave;
            cipher.generateTable(chave);
            cout << "Digite o texto a ser encriptado: ";
            cin >> texto;
            cout << "Texto encriptado: " << cipher.encript(texto) << endl;
            break;
        case 3:
            int key;
            cout << "Digite a chave de decriptação: ";
            cin >> key;
            cipher.generateTable(key);
            cout << "Digite o texto a ser decriptado: ";
            cin >> texto;
            cout << "Texto decriptado: " << cipher.decript(texto) << endl;
            break;
        case 4:
            cout << "Saindo..." << endl;
            return 0;
        default:
            cout << "Opcao invalida. Tente novamente." << endl;
        }
    }

    return 0;
}

