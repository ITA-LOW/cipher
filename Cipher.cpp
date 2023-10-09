#include "Cipher.hpp"
#include "ConversionTable.hpp"
#include <fstream>


Cipher::Cipher(int matricula) : m_table(matricula) {}

Cipher::~Cipher() {}


void Cipher::generateTable(int matricula)
{
    m_table = ConversionTable(matricula);
}

string Cipher::encript(const string& message) {
    string encryptedMessage = message;
    ofstream outputFile("./encriptedMessage.txt");

    for (size_t i = 0; i < message.length(); i++) {
        char originalChar = message[i];
        char encryptedChar = m_table.getConversion(originalChar); 
        encryptedMessage[i] = encryptedChar;
    }

    for(size_t i = 0;i<message.length(); i++)
    {
        outputFile << encryptedMessage[i];
    }

    return encryptedMessage;
}

string Cipher::decript(const string& encryptedMessage) {
    string decryptedMessage = encryptedMessage;

    for (size_t i = 0; i < encryptedMessage.length(); i++) {
        char encryptedChar = encryptedMessage[i];
        char originalChar = m_table.getReverseConversion(encryptedChar); 
        decryptedMessage[i] = originalChar;
    }

    return decryptedMessage;
}


