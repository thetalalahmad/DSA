/*
ifprime
i/p=7
o/p = yes
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    bool isPrime = 1;
    for (int i = 2; i < n; i++)
        // rem =0, not a prime number
        // rem !=0 is a prime number
        if (n % i == 0)
        {
            cout << "Not a prime number" << endl;
           break;
        }
        
        else
        {
            cout << "Is a prime number" << endl;
            break;
        }
    return 0;
}