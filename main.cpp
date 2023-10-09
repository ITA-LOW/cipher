#include <iostream>
#include "Cipher.hpp"
#include <locale>

int main()
{
    locale::global(locale("en_US.UTF-8"));
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
            cipher.generateTable(matricula);
            break;
        case 2:
            cout << "Digite o texto a ser encriptado: ";
            cin >> texto;
            cout << "Texto encriptado: " << cipher.encript(texto) << endl;
            break;
        case 3:
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

