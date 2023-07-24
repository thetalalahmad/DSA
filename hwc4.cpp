#include <iostream>
using namespace std;
int main()
{
    char a;
   // cout << "Enter a character: " << endl;
    cin >> a;

    // 'A' is 65
    // 'a' is 97
    // '0' is 48
    if (a >= 'A' && a <= 'Z')
    {

        cout << a << " This character is an uppercase letter." << endl;
    }
    else if (a >= 'a' && a <= 'z')
    {
        cout << a << " This character is a lowercase letter." << endl;
    }
    else if (a >= '0' && a <= '9')
    {
        cout << a << " This is a digit." << endl;
    }
    return 0;
}