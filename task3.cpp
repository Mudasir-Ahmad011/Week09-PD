#include<iostream>
using namespace std;
main() {
    string word;
    cout << "Enter a String: ";
    getline(cin, word);
    int length = word.length();
    if (length % 2 == 0) {
        cout << "true";
    }
    else {
        cout << "false";
    }
}