#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "converter.h"
#include "loader.h"

using namespace std;

int main()
{
    loader l;

    string sample;

    while (true) {

        getline(cin, sample);

        if (sample == "get me out of here!") {
            break;
        }
        l.testAll((char*)(sample.c_str()));

    }

    return 0;
}
