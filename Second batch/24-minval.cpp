#include <iostream>
using namespace std;

int main()
{
    int i=1;
    int num;
    cout  << "Enter 1st number: " << endl;
    cin >> num;
    int min = num;

    do
    {
       
        cin >> num;

        if(num<min){
            min = num;
        }
        i++;
    }
    while(i<=10);

    cout << "minimum number is: " << min;
}