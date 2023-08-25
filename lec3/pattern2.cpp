/*
Number patters
for input n= 4
1111
2222
3333
4444
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    { 
        int j = 1;
        while (j <= n)
        {
            cout << i << " ";
            j = j + 1;
        }
        cout << endl; // after printing one row , we need to enter the next row so endl
        i = i + 1;
    }
    return 0;
}