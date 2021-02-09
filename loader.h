#include <vector>
#include <fstream>
#include <iostream>

#include "converter.h"

using namespace std;

class loader
{
public:
    vector<uint8_t> dp1;
    vector<uint8_t> dp2;
    vector<uint8_t> dpxor;

    loader();
    vector<char> stringTest(char* s, unsigned ptobegin);
    bool isAValidChar(char c);
    void testAll(char* s);
    void printres(vector<char>* arr);
};