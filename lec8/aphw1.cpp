/*
 A.P - (3*n+7)
 i/p n = 3
 o/p nth term = (3*n+7)=3*3+7=16
*/
#include <iostream>
using namespace std;
int ap(int n)
{
    int equation = 3 * n + 7;

    return equation;
}

int main()
{
    int n;
    cout<<"Enter the value of n "<<endl;
    cin >> n;
    cout << "nth term is " << ap(n) << endl;
    return 0;
}