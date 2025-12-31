// Isabella Addas, 12/29/25

#ifndef CPP_PROJECTS_CAESARCIPHER_H
#define CPP_PROJECTS_CAESARCIPHER_H

#include <string>
using namespace std;

class CaesarCipher {
public:
    CaesarCipher();
    CaesarCipher(int newShift);
    CaesarCipher(int newShift, string newDirection);
    ~CaesarCipher();
    void encrypt(string message);
    const string decrypt(string message);
private:
    int shift;
    char alphaArray[26];
    char shiftArray[26];
    string direction;
};


#endif //CPP_PROJECTS_CAESARCIPHER_H