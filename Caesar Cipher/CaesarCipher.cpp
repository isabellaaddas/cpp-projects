// Isabella Addas, 12/29/25

#include "CaesarCipher.h"
#include <iostream>
#include <string>

using namespace std;

// Default constructor for Caesar Cipher class, automatically
// sets shift to 3 and direction to left
CaesarCipher::CaesarCipher() {

}

// Alternate constructor for Caesar Cipher class, taking the user's
// chosen shift number, automatically sets direction to left
CaesarCipher::CaesarCipher(int newShift) {

}

// Alternate constructor for Caesar Cipher class, taking the user's
// chosen shift number and direction
CaesarCipher::CaesarCipher(int newShift, string &newDirection) {
    shift = newShift;
    direction = newDirection;
    initArray();
    initShiftArray();
}

void CaesarCipher::encrypt(string message) {

}

const string CaesarCipher::decrypt(string message) {

}

/* *** PRIVATE HELPER METHODS *** */

// Initialize the alphaArray with characters of the alphabet (uppercase)
void CaesarCipher::initArray() {

    // Iterate through entire alphabet (start at 65, the decimal char
    // value of A, through 90, decimal char value of Z)
    for (int i = 65; i < 91; i++) {

    }
}

// Initialize the shiftArray with shifted numbers 1-26 in given
// direction to represent the shifted alphabet
void CaesarCipher::initShiftArray() {

    // Decide whether shift is leftward or rightward
    if (direction == "left") {

    }
}

CaesarCipher::~CaesarCipher() {

}