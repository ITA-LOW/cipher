#include <iostream>
#include "Cipher.hpp"

using namespace std;

int main() {
    // Matrícula usada para inicializar a tabela de conversão
    int matricula = 12345; // Substitua pelo valor correto da matrícula

    // Cria uma instância da classe Cipher
    Cipher cipher(matricula);

    // Mensagem original
    string originalMessage = "Hello, World!";
    cout << "Mensagem original: " << originalMessage << endl;

    // Criptografa a mensagem
    string encryptedMessage = cipher.encript(originalMessage);
    cout << "Mensagem criptografada: " << encryptedMessage << endl;

    // Descriptografa a mensagem
    string decryptedMessage = cipher.decript(encryptedMessage);
    cout << "Mensagem descriptografada: " << decryptedMessage << endl;

    return 0;
}
