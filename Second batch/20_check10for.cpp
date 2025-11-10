#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter 10 numbers: ";

    for(int i = 1; i <= 10; i++) {
        cin >> num;
        sum += num;   // add input to sum
    }

    cout << "Sum of all numbers: " << sum;

    return 0;
}
