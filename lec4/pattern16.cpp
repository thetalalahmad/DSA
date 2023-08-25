/*
PATTERN NO-16
A
B C
D E F
G H I J
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n = ";
    cin >> n;
    int row = 1;
    int value = 'A';
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            char ch = value;
            cout << ch << " ";
            
            value = value + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
    return 0;
}
