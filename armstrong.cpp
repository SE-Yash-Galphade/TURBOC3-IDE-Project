#include <iostream>
using namespace std;
int main() {
    int num, b, remainder, result = 0;
    cout << "Enter a three-digit integer: ";
    cin >> num;
    b = num;

    while (b != 0) {
        remainder = b % 10;
        result += remainder * remainder * remainder;
        b /= 10;
    }
    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";
        
}
