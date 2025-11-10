#include <iostream>
using namespace std;

int main()
{
    int i=1, num;
    cout << "Enter 10 numbers: " << endl;
    do
    {
        cin >> num;
        if(num>0){
            cout << "the number is positive (" << num << ")" << endl;
        }
        else if(num<0){
            cout << "the number is negative (" << num << ")" << endl;
        }
        else{
            cout << "the number is 0 (" << num << ")" << endl;
        }
        i++;
    }
    while(i<=10);
    
}