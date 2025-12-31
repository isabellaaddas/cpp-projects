// Isabella Addas, 12/30/25

#include <iostream>
#include "CaesarCipher.h"
#include <string>

using namespace std;

int main (int argc, char *argv[]) {
    CaesarCipher test = CaesarCipher();

    test.printAlphaArray();
    test.printShiftArray();
}