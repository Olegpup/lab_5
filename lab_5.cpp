#include <iostream>
using namespace std;

int main() {
    int number, add, sum = 0;
    cout << "Enter your number: ";
    cin >> number;
    while (number > 9) {
        while (number != 0) {
            add = number % 10;
            sum += add;
            number /= 10;
        }
        number = sum;
        sum = 0;
    }
    cout << "Digit root: " << number << endl;
    return 0;
}