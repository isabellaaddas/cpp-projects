// Isabella Addas, 12/29/25

#ifndef CPP_PROJECTS_CAESARCIPHER_H
#define CPP_PROJECTS_CAESARCIPHER_H

#include <string>
using namespace std;

class CaesarCipher {
public:
    CaesarCipher();
    CaesarCipher(int newShift);
    CaesarCipher(int newShift, string &newDirection);
    ~CaesarCipher();
    const string encode(string message);
    const string decode(string message);
    const char translate(char let);
private:
    int shift;
    string direction;
};


#endif //CPP_PROJECTS_CAESARCIPHER_H