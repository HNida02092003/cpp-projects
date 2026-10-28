
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string decimalToBase(unsigned long long number, int base) {
    string digits = "0123456789ABCDEF";
    string result = "";

    do {
        result += digits[number % base];
        number = number / base;
    } while (number > 0);

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    int choice;
    unsigned long long number;

    do {
        cout << "\n===== NUMBER SYSTEM CONVERTER =====" << endl;
        cout << "1. Decimal to Binary" << endl;
        cout << "2. Decimal to Octal" << endl;
        cout << "3. Decimal to Hexadecimal" << endl;
        cout << "4. Show All Conversions" << endl;
        cout << "5. Exit" << endl;

        cout << "\nEnter your choice: ";
        cin >> choice;

        if (cin.fail()) {
            cout << "Invalid input!" << endl;
            break;
        }

        if (choice == 5) {
            cout << "Program ended." << endl;
            break;
        }

        if (choice < 1 || choice > 5) {
            cout << "Invalid choice!" << endl;
            continue;
        }

        cout << "Enter a positive decimal number: ";
        cin >> number;

        if (cin.fail() || cin.peek() != '\n') {
            cout << "Invalid number!" << endl;
            break;
        }

        switch (choice) {

            case 1:
                cout << "Binary: "
                     << decimalToBase(number, 2) << endl;
                break;

            case 2:
                cout << "Octal: "
                     << decimalToBase(number, 8) << endl;
                break;

            case 3:
                cout << "Hexadecimal: "
                     << decimalToBase(number, 16) << endl;
                break;

            case 4:
                cout << "Decimal: " << number << endl;
                cout << "Binary: "
                     << decimalToBase(number, 2) << endl;
                cout << "Octal: "
                     << decimalToBase(number, 8) << endl;
                cout << "Hexadecimal: "
                     << decimalToBase(number, 16) << endl;
                break;
        }

    } while (choice != 5);

    return 0;
}

