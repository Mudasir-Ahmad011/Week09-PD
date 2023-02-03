#include<iostream>
using namespace std;
main() {
    int arrsize = 3;
    int times;
    int sum = 0;
    int newarr[arrsize];
    int num[arrsize];
    for (int i = 0;i < arrsize;i++) {
        cout << "Enter the number: ";
        cin >> num[i];
    }
    cout << "Enter the number of times even-odd transformation needed to be done: ";
    cin >> times;
    for (int idx = 0;idx < arrsize;idx++) {
        sum = num[idx];
        for (int i = 1;i <= times;i++) {
            int n = 2;
            if (num[idx] % 2 != 0) {
                sum = sum + n;
            }
            else {
                sum = sum - n;
            }
        }
        newarr[idx] = sum;
    }
    for (int index = 0;index < arrsize;index++) {
        cout << newarr[index] << "\t";
    }
}
