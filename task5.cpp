#include<iostream>
using namespace std;
main() {
    int arrsize = 4;
    int sum = 0;
    string line[arrsize];
    for (int i = 0;i < arrsize;i++) {
        cout << "Enter the Special Symbol: ";
        cin >> line[i];
    }
    for (int idx = 0;idx < arrsize;idx++) {
        if (line[idx] == line[0]) {
            sum = sum + 1;
        }
    }
    if (sum == 4) {
        cout << "true";
    }
    else {
        cout << "false";
    }
}