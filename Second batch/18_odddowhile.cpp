#include <iostream>
using namespace std;

int main()
{
    int i = 0;  // initialization

    do {
        if(i % 2 != 0) {   // check for odd
            cout << i << " ";
        }
        i++;   // increment
    } while(i <= 20);  // condition

    return 0;
}
