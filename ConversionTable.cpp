#include "ConversionTable.hpp"

ConversionTable::ConversionTable(int matricula) : m_matricula(new int(matricula))
{
    for (size_t i = 0; i<256; i++)
    {
        m_conversionTable.push_back(make_pair(static_cast<char>(i), static_cast<char>(i + matricula)));
    }
}

ConversionTable::~ConversionTable()
{
        delete m_matricula;
}

char ConversionTable::getConversion(char originalChar) const {
    // Percorra a tabela de conversão para encontrar o caractere correspondente
    for (size_t i = 0; i<m_conversionTable.size();i++) {
        if (m_conversionTable.at(i).first == originalChar) {
            return m_conversionTable.at(i).second;
        }
    }
    // Se o caractere original não estiver na tabela, retorne o próprio caractere
    return originalChar;
}

char ConversionTable::getReverseConversion(char encryptedChar) const {
    // Percorra a tabela de conversão para encontrar o caractere correspondente
    for (size_t i = 0; i<m_conversionTable.size();i++) {
        if (m_conversionTable.at(i).second == encryptedChar) {
            return m_conversionTable.at(i).first;
        }
    }
    // Se o caractere criptografado não estiver na tabela, retorne o próprio caractere
    return encryptedChar;
}