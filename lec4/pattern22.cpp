/*
PATTERN NO-22
1111
 222
  33
   4
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
      int space = 1;
      while (space < row)
      {
         cout << " ";
         space = space + 1;
      }
      while (col <= n - row + 1)
      {
         cout << row;
         col = col + 1;
      }
      cout << endl;
      row = row + 1;
   }
}