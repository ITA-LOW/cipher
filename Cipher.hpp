#ifndef CIPHER_HPP
#define CIPHER_HPP

#include "ConversionTable.hpp"


class Cipher
{
    private:
    ConversionTable m_table;

    public:
    Cipher(int matricula);
    ~Cipher();

    string encript(const string& message);
    string decript(const string& encryptedMessage);
    void generateTable(int matricula);
};

#endif // CIPHER_HPP