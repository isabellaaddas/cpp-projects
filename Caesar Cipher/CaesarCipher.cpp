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

        // (i - 65) used to resolve index shift of 65
        alphaArray[i - 65] = i;
    }
}

// Initialize the shiftArray with new alphabet based on shift number and
// direction given by user
void CaesarCipher::initShiftArray() {

    // Decide whether shift is leftward or rightward
    if (direction == "left") {

    } else if (direction == "right") {

    }
}

CaesarCipher::~CaesarCipher() {

}