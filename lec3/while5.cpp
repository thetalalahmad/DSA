// Check whether the number is prime or not?
#include <iostream>
using namespace std;
int main()

{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int i = 2;
    while (i < n)
    {
        if( n % i == 0){
        cout<< n << " is Not Prime" << endl;
        return 0;
       }
       i = i + 1;
}
cout << n << " is Prime" << endl;
    return 0;
    
}
