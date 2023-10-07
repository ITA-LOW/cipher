#include "Cipher.hpp"
#include "ConversionTable.hpp"

Cipher::Cipher(int matricula) : m_table(matricula) 
{
    
}

Cipher::~Cipher() 
{
    
}

string Cipher::encript(const string& message) {
    string encryptedMessage = message;

    for (size_t i = 0; i < message.length(); i++) {
        char originalChar = message[i];
        char encryptedChar = m_table.getConversion(originalChar); // Supondo que ConversionTable tenha um método para obter a conversão de um caractere
        encryptedMessage[i] = encryptedChar;
    }

    return encryptedMessage;
}

string Cipher::decript(const string& encryptedMessage) {
    string decryptedMessage = encryptedMessage;

    for (size_t i = 0; i < encryptedMessage.length(); i++) {
        char encryptedChar = encryptedMessage[i];
        char originalChar = m_table.getReverseConversion(encryptedChar); // Supondo que ConversionTable tenha um método para obter a conversão reversa de um caractere
        decryptedMessage[i] = originalChar;
    }

    return decryptedMessage;
}
