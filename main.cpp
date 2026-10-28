#include <iostream>
#include <string>
#include <algorithm>
#include <limits>
using namespace std;
string decimalToBinary(unsigned int number) {
    if (number == 0) {
        return "0";
    }

    string binary;
    while (number > 0) {
        binary += char('0' + number % 2);
        number /= 2;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}
int main() {
    int choice;
    unsigned int number;
    while(true) {
        cout << "\n=== NUMBER SYSTEM CONVERTER ===\n";
        cout << "1. Decimal to Binary\n";
        cout << "2. Binary to Decimal\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter a decimal number: ";
            cin >> number;
            cout << "Binary: " << decimalToBinary(number) << endl;
        } else if (choice == 2) {
            // Implementation for Binary to Decimal
        } else if (choice == 3) {
            break;
        } else {
            cout << "Invalid choice!\n";
        }
    }
    return 0;
} return 0;