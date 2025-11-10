#include <iostream>
using namespace std;

int main()
{
    for(int i = 0; i <= 20; i++)  // initialization, condition, increment
    {
        if(i % 2 != 0)  // check odd
        {
            cout << i << " ";
        }
    }

    return 0;
}
