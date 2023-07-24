// Sum of even numbers from 1 to n.
#include<iostream>
using namespace std;
int main()
{
    int n; // initialize the value of n
    cin >> n; // take input from the user
    int sum =0; // initialize the sum =0
    int i = 1; // initialize the value of i =1
    while (i <= n) //
    {
        if(i % 2 == 0) // even numbers are that which are divided by 2
                     
        sum = sum +i;  // add the value of i to the sum
        i = i + 1;     // increment the value of i till the value of n is reached.
    }
        cout << "Sum of even numbers from 1 to " << n << " is " << sum << endl;
        
        
    return 0;
    
}


