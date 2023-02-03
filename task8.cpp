#include<iostream>
using namespace std;
main() {
    int arrsize;
    cout << "Enter the array size: ";
    cin >> arrsize;
    int count = 0;
    string color[arrsize];
    for (int i = 0;i < arrsize;i++) {
        cout << "Enter the color: ";
        cin >> color[i];
        count = count + 2;
    }
    int id = 1;
    for (int i = 0;i < arrsize;i++) {
        if (id != arrsize) {
            if (color[i] != color[id]) {
                count = count + 1;
            }
        }
        id = id + 1;
    }
    cout << count;
}