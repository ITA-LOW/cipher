#include <iostream>
#include "Cipher.hpp"

int main()
{
    int matricula = 0;
    string texto;
    Cipher cipher(matricula);

    while (true)
    {
        cout << "Menu:" << endl;
        cout << "1 - Definir seed (matricula)" << endl;
        cout << "2 - Encriptar texto" << endl;
        cout << "3 - Decriptar texto" << endl;
        cout << "4 - Trocar seed (matricula)" << endl;
        cout << "5 - Trocar texto" << endl;
        cout << "6 - Sair" << endl;
        cout << "Escolha uma opcao: ";

        int opcao;
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            cout << "Digite a nova matricula: ";
            cin >> matricula;
            cipher.regenerateTable(matricula);
            break;
        case 2:
            cout << "Digite o texto a ser encriptado: ";
            cin.ignore(); // Limpa o buffer do teclado
            getline(cin, texto);
            cout << "Texto encriptado: " << cipher.encript(texto) << endl;
            break;
        case 3:
            cout << "Digite o texto a ser decriptado: ";
            cin.ignore(); // Limpa o buffer do teclado
            getline(cin, texto);
            cout << "Texto decriptado: " << cipher.decript(texto) << endl;
            break;
        case 4:
            cout << "Digite a nova matricula: ";
            cin >> matricula;
            cipher.regenerateTable(matricula);
            break;
        case 5:
            cout << "Digite o novo texto: ";
            cin.ignore(); // Limpa o buffer do teclado
            getline(cin, texto);
            break;
        case 6:
            cout << "Saindo..." << endl;
            return 0;
        default:
            cout << "Opcao invalida. Tente novamente." << endl;
        }
    }

    return 0;
}

