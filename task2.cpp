#include<iostream>
using namespace std;
main() {
    string movie_name;
    int each_price = 500;
    float total_price;
    string movies[5] = { "Gladiator","StarWars","Terminator","TakingLives","TombRider" };
    cout << "Enter the movie name: ";
    cin >> movie_name;
    for (int i = 0;i < 5;i++) {
        if (movie_name == movies[i]) {
            if (i % 2 == 0) {
                float discount = (each_price * 10) / 100.0;
                total_price = each_price - discount;
            }
            else {
                float discount = (each_price * 5) / 100.0;
                total_price = each_price - discount;
            }
            cout << "Your price after discount: " << total_price;
        }
    }
}