#include<iostream>
using namespace std;
main() {
    int arrsize;
    int count, sum = 0, n;
    string s1;
    string s2;
    cout << "Enter the word in first array: ";
    cin >> s1;
    cout << "Enter the word in second array: ";
    cin >> s2;
    for (int i = 0;s1[i] != '\0';i++) {
        count = 0;
        for (int idx = 0;s2[idx] != '\0';idx++) {

            if (s2[idx] == s1[i]) {
                s2[idx] = ' ';
                count = 1;
                break;
            }
        }
        sum = count + sum;
    }
    cout << "Common Characters are: " << sum;
}