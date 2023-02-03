#include<iostream>
using namespace std;
main() {
    int arrsize;
    cout << "Enter the array size: ";
    cin >> arrsize;
    int num[arrsize];
    bool isbool = false;
    for (int i = 0;i < arrsize;i++) {
        cout << "Enter the number: ";
        cin >> num[i];
    }
    for (int idx = 0;idx < arrsize;idx++) {
        int remainder;
        while (num[idx] != 0) {
            remainder = num[idx] % 10;
            num[idx] = num[idx] / 10;
            if (remainder == 7) {
                isbool = true;
                break;
            }
        }
    }
    if (isbool == true) {
        cout << "Boom!";
    }
    else {
        cout << "There is no 7 in the array";
    }

}