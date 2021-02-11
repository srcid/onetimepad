#include "loader.h"

loader::loader() {
    ifstream *fs;
    Converter conv;
    char x, y;

    fs = new ifstream();
    fs->open("out04-1.txt", ios::in | ios::binary );

    while (!(fs->eof())) {
        *fs >> x;
        *fs >> y;
        
        if (x != '\0' && y != '\0')
            dp1.push_back(conv.ctoi(x, y));
    
    }
    
    delete fs;

    fs = new ifstream();
    fs->open("out04-2.txt", ios::in | ios::binary);

    while (!fs->eof()) {
        *fs >> x;
        *fs >> y;

        if (x != '\0' && y != '\0')
            dp2.push_back(conv.ctoi(x, y));
    
    }

    delete fs;

    for (int i = 0; i < dp1.size(); i++) {
        dpxor.push_back((uint8_t)(dp1[i] ^ dp2[i]));
    }
}

vector<char> loader::stringTest(char* s, unsigned ptobegin) {
    
    vector<char> res;
    unsigned p = ptobegin;

    for (unsigned i = 0; s[i] != '\0' ; i++) {
        
        // cout << "entrou aqui" << endl;
        // cout << dpxor.size() << " - " << p << endl;

        if ( p < (unsigned)dpxor.size() ) {
            
            char cXorRes = (char)(s[i] ^ dpxor[p]);
            
            // cout << cXorRes << endl;

            p++;

            if (isAValidChar(cXorRes)) {
                res.push_back(cXorRes);
            } else {
                res.clear();
                break;
            }
        }
    }

    return res;
}

void loader::testAll(char* s) {
    
    for (unsigned i = 0; i < dpxor.size(); i++) {
        
        vector<char> res = stringTest(s, i);

        if ( res.size() != 0 ) {
            cout << "pos: " << i << endl;
            printres(&res);
        }
    }
}

void loader::printres(vector<char>* arr) {
    
    for (char c : *arr) {
        cout << c;
    }
    cout << endl;
}

bool loader::isAValidChar(char c) {
    return ((c >= 'a' && c <= 'z') || (c >= ' ' && c <= '9'));
}