#include <iostream>
#include <string>
#include <vector>

using namespace std;

char translateChar(char c) {
    vector<char> codeTable = { 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' };

    if (c >= 65 && c <= 90) {  
        return codeTable[c - 65];
    }
    else if (c >= 97 && c <= 122) {  
        int upperCaseLetter = c - 32;  
        char upperCaseCode = codeTable[upperCaseLetter - 65];  
        return upperCaseCode + 32; 
    }
    else {  
        return c;
    }
}

int main() {
    string text;
    cout << "Enter text to encode (up to 128 characters): ";
    getline(cin, text);

    string encoded;
    for (char c : text) {
        encoded += translateChar(c);
    }

    cout << "Encoded message: " << encoded << endl;
    return 0;
}