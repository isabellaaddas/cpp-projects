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
    for (int i = 65; i <= 90; i++) {
        alphaArray[i - 65] = i;     // (i - 65) used to resolve index shift
    }
}

// Initialize the shiftArray with new alphabet based on shift number and
// direction given by user
void CaesarCipher::initShiftArray() {

    // Decide whether shift is leftward or rightward
    if (direction == "left") {

        // Iterate through alphabet (1-26 inclusive) using decimal values
        // (65-90 inclusive) to calculate correct char value
        for (int i = 1; i <= 26; i++) {

            // When shifting left, must correctly wrap around to include
            // the end of the alphabet
            if ((i - shift) <= 0) {
                shiftArray[i - 1] = (i - shift) + 90;
                    // ex: (1 - 3) + 90 = 88, so A becomes X
            }
            // After wrapping around, correct for remaining beginning
            // of the alphabet
            else {
                shiftArray[i - 1] = (i - shift) + 64;
                    // ex: (4 - 3) + 64 = 65, so D becomes A
            }
        }
    } else if (direction == "right") {

    }
}

CaesarCipher::~CaesarCipher() {

}