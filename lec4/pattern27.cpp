/*
Pattern no-27

1234554321
1234**4321
123****321
12******21
1********1

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        // part:1 numbers from 1 to n-i+1
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j;
            j = j + 1;
        }
        j = 1;
        while (j <= (i * 2) - 2)
        {
            cout << "*";
            j = j + 1;
        }
        j=1;
        while(j<=n-i+1){
            cout<<j;
            j=j+1;
        }
         cout<<endl;
        i=i+1;
    }
  return 0;
}
