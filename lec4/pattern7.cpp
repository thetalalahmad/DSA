/*
1
2 2
3 3 3
4 4 4 4
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << row <<" ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}