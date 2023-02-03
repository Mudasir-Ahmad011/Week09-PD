#include<iostream>
using namespace std;

main() {
    int sum = 0;
    string moves[10] = { "Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado",
"Pop", "Lock", "Arabesque" };
    string num;
    cout << "Enter the number: ";
    cin >> num;
    bool isbool = false;
    int sum2[4];
    for (int i = 0;i < 4;i++) {
        if (num[i] == '0') {
            int n = 0;
            sum = n + i;
        }

        if (num[i] == '1') {
            int n = 1;
            sum = n + i;
        }
        if (num[i] == '2') {
            int n = 2;
            sum = n + i;
        }
        if (num[i] == '3') {
            int n = 3;
            sum = n + i;
        }
        if (num[i] == '4') {
            int n = 4;
            sum = n + i;
        }
        if (num[i] == '5') {
            int n = 5;
            sum = n + i;
        }
        if (num[i] == '6') {
            int n = 6;
            sum = n + i;
        }
        if (num[i] == '7') {
            int n = 7;
            sum = n + i;
            if (sum > 9) {
                sum = sum - 10;
            }
        }
        if (num[i] == '8') {
            int n = 8;
            sum = n + i;
            if (sum > 9) {
                sum = sum - 10;
            }
        }
        if (num[i] == '9') {
            int n = 9;
            sum = n + i;
            if (sum > 9) {
                sum = sum - 10;
            }
        }
        if (num[i] != '0' && num[i] != '1' && num[i] != '2' && num[i] != '3' && num[i] != '4' && num[i] != '5' && num[i] != '6' && num[i] != '7' && num[i] != '8' && num[i] != '9') {
            isbool = true;
        }
        else {
            sum2[i] = sum;
        }
    }
    if (isbool == true) {
        cout << "invalid input";
    }
    else {
        cout << moves[sum2[0]];
        cout << " " << moves[sum2[1]];
        cout << " " << moves[sum2[2]];
        cout << " " << moves[sum2[3]];
    }

}