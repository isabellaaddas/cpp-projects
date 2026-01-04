// Isabella Addas, 1/2/26

#include "CounterMethods.h"
#include <string>
#include <iostream>

using namespace std;

/* Goal: use all methods for counting from input string
 * to familiarize with C++ strings. */

int main (int argc, char *argv[]) {

    // Set up string to read from user input
    string input;

    // Prompt for input
    cout << "Enter any length string: ";
    getline(cin, input);
    cout << endl;

    // Set up variables for character and word counts
    int charCount = countChars(input);
    int wordCount = countWords(input);
    int oCount = countChar(input, 'o');
    int dogCount = countWord(input, "dog");

    cout << endl;

    // Output count
    cout << "Characters in string (not including spaces): "
        << charCount << endl;

    cout << "Words in string (not including spaces): " << wordCount
        << endl;

    cout << "Letter 'o' in string: " << oCount << endl;

    cout << "Substring 'dog' in string: " << dogCount << endl;
}