// Isabella Addas, 1/2/26

#ifndef CPP_PROJECTS_COUNTERMETHODS_H
#define CPP_PROJECTS_COUNTERMETHODS_H

#include <string>
#include <fstream>

using namespace std;

// Function prototypes for counting methods
const int countChars(string input);
const int countWords(string input);
const int countChar(string input, char target);
const int countWord(string input, string target);

// Function prototypes for counting methods from input file
const int countChars(ifstream &file);
const int countWords(ifstream &file);
const int countLines(ifstream &file);
const int countChar(ifstream &file, char target);
const int countWord(ifstream &file, string target);

#endif //CPP_PROJECTS_COUNTERMETHODS_H