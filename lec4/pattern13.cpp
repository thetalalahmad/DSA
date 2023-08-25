/*
PATTERN NO-13
A B C
D E F
G H I
. . .
SO ON..
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n = ";
    cin >> n;
    int row = 1;
    char value = 'A'; // ascii table is using here
    while (row <= n)
    {
        int col = 1;
        
        while (col <= n)
        {

            cout << value << " ";  // printing the stored value
            value = value + 1;      // increment
            col = col + 1;          // increment
        }
        cout << endl;               //new line or enter
        row = row + 1;
    }
    return 0;
}