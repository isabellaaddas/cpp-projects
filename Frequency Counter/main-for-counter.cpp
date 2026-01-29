// Isabella Addas, 1/2/26

#include "CounterMethods.h"
#include <string>
#include <iostream>
#include <fstream>

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

    // Open up the file in directory by with try and
    // catch block
    try {
        // Hard code the input file for testing purposes
        ifstream inputFile("sample-input.txt");

        // Set up variables for the new counts from the file
        int fileCharCount = countChars(inputFile);
        // AFTER each call, clear the EOF flags generated from
        // the previous method and reset back to the beginning
        inputFile.clear();
        inputFile.seekg(0, ios::beg);

        int fileWordCount = countWords(inputFile);
        inputFile.clear();
        inputFile.seekg(0, ios::beg);

        int fileLineCount = countLines(inputFile);

        // Print results
        cout << "Characters in file: " << fileCharCount << endl;
        cout << "Words in file: " << fileWordCount << endl;
        cout << "Lines in file: " << fileLineCount << endl;

        // Close file
        inputFile.close();
    } catch (exception e) {
        cout << e.what() << endl;
    }
}