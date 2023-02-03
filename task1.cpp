#include<iostream>
using namespace std;
main() {
    string buyfruit;
    int quantity;
    float totalbill;
    string fruit[4] = { "peach","apple","guava","watermelon" };
    int price[4] = { 60,70,40,30 };
    cout << "Enter the Fruit you want to buy: ";
    cin >> buyfruit;
    cout << "Enter the quantity of fruit: ";
    cin >> quantity;
    for (int i = 0;i < 4;i++) {
        if (buyfruit == fruit[i]) {
            totalbill = price[i] * quantity;
        }
    }
    cout << "Your total bill is " << totalbill;
}