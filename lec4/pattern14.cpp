/*
PATTERN NO-14
A B C
B C D
C D E

SO ON...


*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n = ";
    cin >> n;
    int row =1;
    while (row <= n)
    {
       int col = 1;
        while (col <= n)
        {
            char ch = 'A' + row + col - 2;
            cout << ch << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}