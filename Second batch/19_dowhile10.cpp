#include <iostream>
using namespace std;

int main() {
    int i=1, num, sum = 0;

    cout << "Enter 10 numbers: ";

    while(i <= 10) {
        cin >> num;
        sum += num;   
        i++;
    }

    cout << "Sum of all numbers: " << sum;
}
