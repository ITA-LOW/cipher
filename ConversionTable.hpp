#ifndef CONVERSION_TABLE_HPP
#define CONVERSION_TABLE_HPP

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <random>


using namespace std;

class ConversionTable 
{
    private:
    int *m_matricula;
    vector<pair<char, char>> m_conversionTable;

    public:
    ConversionTable(int matricula);
    ~ConversionTable();

    char getConversion(char originalChar) const;
    char getReverseConversion(char encryptedChar) const;

};

#endif // CONVERSION_TABLE_HPP