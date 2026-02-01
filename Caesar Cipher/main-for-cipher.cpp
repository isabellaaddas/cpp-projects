// Isabella Addas, 12/30/25

#include <iostream>
#include "CaesarCipher.h"
#include <string>

using namespace std;

int main (int argc, char *argv[]) {
    CaesarCipher test = CaesarCipher();

    // Set up test values
    char tChar1 = test.translate('A');

    cout << "What is 'A' when there is a left shift of 3?: " << tChar1 << endl;
}