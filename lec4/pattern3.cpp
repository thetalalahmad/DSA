/*
Pattern 3 {Print 1 2 3 in n*n manner}
1 2 3
1 2 3
1 2 3
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<< "Enter the value of n =";
    cin >> n;

    int i = 1;

    while (i <= n)
    {

        int j = 1;
        while (j <= n)
        {
            cout << j << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}