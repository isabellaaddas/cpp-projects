// Isabella Addas, 12/29/25

#include "CaesarCipher.h"
#include <iostream>
#include <string>

using namespace std;

// Default constructor for Caesar Cipher class, automatically
// sets shift to 3 and direction to left
CaesarCipher::CaesarCipher() {
    shift = 3;
    direction = "left";
    initArray();
    initShiftArray();
}

// Alternate constructor for Caesar Cipher class, taking the user's
// chosen shift number, automatically sets direction to left
CaesarCipher::CaesarCipher(int newShift) {
    shift = newShift;
    direction = "left";
    initArray();
    initShiftArray();
}

// Alternate constructor for Caesar Cipher class, taking the user's
// chosen shift number and direction
CaesarCipher::CaesarCipher(int newShift, string &newDirection) {
    shift = newShift;
    direction = newDirection;
    initArray();
    initShiftArray();
}

const string CaesarCipher::encrypt(string message) {
    return "";
}

const string CaesarCipher::decrypt(string message) {
    return "";
}

/* *** PUBLIC TEST METHODS *** */
void CaesarCipher::printAlphaArray() {
    for (int i = 0; i < 26; i++) {
        cout << alphaArray[i];
    }
}

void CaesarCipher::printShiftArray() {
    for (int i = 0; i < 26; i++) {
        cout << shiftArray[i];
    }
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
// direction given by user (uppercase)
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

        // for (int i = 1; i <= 26; i++) {
        //
        //
        // }
    }
}

// Match argument "origin" with new char value from shiftArray, based on
// "origin" position in alphaArray
const char CaesarCipher::matchChar(char orig) {
    char shiftMatch;

    // Use switch case to convert from normal alphabet to shifted alphabet
    // based on char, matching to associated index in shiftArray
    switch (orig) {
        case 'A':
            shiftMatch = shiftArray[0];
            break;
        case 'B':
            shiftMatch = shiftArray[1];
            break;
        case 'C':
            shiftMatch = shiftArray[2];
            break;
        case 'D':
            shiftMatch = shiftArray[3];
            break;
        case 'E':
            shiftMatch = shiftArray[4];
            break;
        case 'F':
            shiftMatch = shiftArray[5];
            break;
        case 'G':
            shiftMatch = shiftArray[6];
            break;
        case 'H':
            shiftMatch = shiftArray[7];
            break;
        case 'I':
            shiftMatch = shiftArray[8];
            break;
        case 'J':
            shiftMatch = shiftArray[9];
            break;
        case 'K':
            shiftMatch = shiftArray[10];
            break;
        case 'L':
            shiftMatch = shiftArray[11];
            break;
        case 'M':
            shiftMatch = shiftArray[12];
            break;
        case 'N':
            shiftMatch = shiftArray[13];
            break;
        case 'O':
            shiftMatch = shiftArray[14];
            break;
        case 'P':
            shiftMatch = shiftArray[15];
            break;
        case 'Q':
            shiftMatch = shiftArray[16];
            break;
        case 'R':
            shiftMatch = shiftArray[17];
            break;
        case 'S':
            shiftMatch = shiftArray[18];
            break;
        case 'T':
            shiftMatch = shiftArray[19];
            break;
        case 'U':
            shiftMatch = shiftArray[20];
            break;
        case 'V':
            shiftMatch = shiftArray[21];
            break;
        case 'W':
            shiftMatch = shiftArray[22];
            break;
        case 'X':
            shiftMatch = shiftArray[23];
            break;
        case 'Y':
            shiftMatch = shiftArray[24];
            break;
        case 'Z':
            shiftMatch = shiftArray[25];
            break;
    }

    return shiftMatch;
}


CaesarCipher::~CaesarCipher() {

}