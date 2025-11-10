#include <iostream> 
using namespace std;
 int main()
{
    int i,num;
    cout << "Enter 10 numbers: ";
    for (i=1; i<=10; i++)
    {
        cin >> num;
        if(num%2==0){
            cout << "1st even number: " << num << endl;
            break;
        }
        
    }
    for (int j=1; j<=10; j++)
    {
        cout << num << " * " << j << " = " << num*j << endl;
    }

}