#include <iostream>
#include <fstream>
#include <vector>

#include "converter.h"

using namespace std;

int main()
{
    ifstream *fs;
    Converter conv;
    vector<uint8_t> dp1;
    vector<uint8_t> dp2;
    char x, y;

    fs = new ifstream();
    fs->open("out04-1.txt", ios::in);

    while (!fs->eof()) {
        // cout << "primeiro.." << endl;
        *fs >> x;
        *fs >> y;
        dp1.push_back(conv.ctoi(x, y));
    }
    
    delete fs;

    fs = new ifstream();
    fs->open("out04-2.txt", ios::in);

    fs->open("out04-2.txt", ios::in);

    while (!fs->eof()) {
        // cout << "segundo.." << endl;
        *fs >> x;
        *fs >> y;
        dp2.push_back(conv.ctoi(x, y));
    }

    delete fs;

    for (uint8_t uint8 : dp1) {
        cout << +uint8;
    }

    cout << endl;
    
    for (uint8_t uint8 : dp2) {
        cout << +uint8;
    }

    cout << endl;

    return 0;
}
