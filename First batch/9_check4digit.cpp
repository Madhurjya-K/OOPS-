#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num >= 1000 && num <= 9999) {
        cout << num << " is a 4-digit number." << endl;

        int d2 = (num / 100) % 10;     
        int d3 = (num / 10) % 10;      
        int d4 = num % 10;             
        int d1 = num / 1000;           

        if (d1 + d2 > d4)
            cout << "Sum of first and second digit is greater than last digit." << endl;
        else
            cout << "Sum of first and second digit is NOT greater than last digit." << endl;

        int sumAll = d1 + d2 + d3 + d4;
        if (sumAll % 2 == 0)
            cout << "Sum of all digits (" << sumAll << ") is EVEN." << endl;
        else
            cout << "Sum of all digits (" << sumAll << ") is ODD." << endl;

        if (num % 2 == 0)
            cout << num << " is EVEN." << endl;
        else
            cout << num << " is ODD." << endl;

    } else {
        cout << num << " is NOT a 4-digit number." << endl;
    }

    return 0;
}
