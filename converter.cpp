#include "converter.h"

Converter::Converter()
{
    uint8_t i = 0x0;
    char toBeMapped[] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
    for (char c : toBeMapped) {
        dic.insert( std::make_pair(c, i) );
        i++;
    }
}

uint8_t Converter::ctoi(char a, char b) {
    uint8_t aval = dic.at(a);
    uint8_t bval = dic.at(b);
    uint8_t val = 0;
    val = aval << 4;
    val = val | bval;

    return val;
}

