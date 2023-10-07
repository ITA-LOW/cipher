#include <iostream>
#include "Cipher.hpp"

int main() {
    // Matrícula usada para inicializar a tabela de conversão
    int matricula = 12345; // Substitua pelo valor correto da matrícula

    // Cria uma instância da classe Cipher
    Cipher cipher(matricula);

    // Mensagem original
    std::string originalMessage = "Hello, World!";
    std::cout << "Mensagem original: " << originalMessage << std::endl;

    // Criptografa a mensagem
    std::string encryptedMessage = cipher.encript(originalMessage);
    std::cout << "Mensagem criptografada: " << encryptedMessage << std::endl;

    // Descriptografa a mensagem
    std::string decryptedMessage = cipher.decript(encryptedMessage);
    std::cout << "Mensagem descriptografada: " << decryptedMessage << std::endl;

    return 0;
}
