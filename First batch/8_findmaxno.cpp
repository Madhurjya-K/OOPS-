#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int maxNum;

    if (a >= b && a >= c) {
        maxNum = a;
    } else if (b >= a && b >= c) {
        maxNum = b;
    } else {
        maxNum = c;
    }

    cout << "Maximum number is: " << maxNum << endl;

    return 0;
}
