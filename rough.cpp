/*
 input a&b
 output total number of set bits
 for example
 a=2 =10
 b=3 =11
 set bit =3
 set bit means total number of 1
*/
#include <iostream>
using namespace std;
int bit(int a, int b)
{
    int ans = 0;
    while (a, b)
    {
        if((a & 1)  (b & 1))
        {
            ans++;
        }

        a = a >> 1;
        b = b >> 1;
    }
    return ans;
}

int main()
{
    int a, b;
    cout << "Enter the value of a " << endl;
    cin >> a;
    cout << "Enter the value of b " << endl;
    cin >> b;
    cout<< "Total number of set bits "<<bit(a,b)<<endl;
    return 0;
}