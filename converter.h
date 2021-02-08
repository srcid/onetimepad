#ifndef CONVERTER_H
#define CONVERTER_H

#include <map>

class Converter
{
private:
    std::map<char, uint8_t> dic;

public:
    Converter();

    uint8_t ctoi(char a, char b);
};

#endif // CONVERTER_H
