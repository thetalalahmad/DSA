/*
PATTERN NO-21

****
 ***
  **
   *

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n = ";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int j =1;
        int space =1;
        while(space <row)
        {
            cout << " ";
            space = space +1;
        }
        while(j<=n-row+1){
            cout << "*";
            j=j+1;
        }
        row=row+1;
            cout<<endl;
        }
}