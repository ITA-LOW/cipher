#include "ConversionTable.hpp"

ConversionTable::ConversionTable(int matricula) : m_matricula(new int(matricula))
{
    for (size_t i = 0; i<256; i++)
    {
        m_conversionTable.push_back(make_pair(static_cast<char>(i), static_cast<char>(i + matricula))
    }
}

ConversionTable::~ConversionTable()
{
        delete m_matricula;
}


        