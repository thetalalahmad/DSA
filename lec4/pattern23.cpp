/*
Pattern no-23
   1
  22
 333
4444
*/
#include <iostream>
using namespace std;
int main()
{
   int n;
   cout << "Enter the value of n =";
   cin >> n;
   int i = 1;
   while (i <= n)
   {
      int j = 1, space = 1;
      while (space <= n - i)
      {
         cout << " ";
         space = space + 1;
      }
      while (j <= i)
      {
         cout << i;
         j = j + 1;
      }
      cout << endl;
      i = i + 1;
   }
}