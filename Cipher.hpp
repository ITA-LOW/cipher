#include "ConversionTable.hpp"

class Cipher
{
    private:
    ConversionTable m_table;

    public:
    Cipher(int matricula);
    ~Cipher();

    string encript();
    string decript();


};