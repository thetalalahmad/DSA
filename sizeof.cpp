//sizeof(variable_name);
#include <iostream>
using namespace std;
int main()
{

    int a = 4;

    double b = 1.90;
    char c = '+';
    int sizeInterger = sizeof(a);
    int sizeDouble = sizeof(b);
    int sizeChar = sizeof(c);
    cout << "Size of an interger is " << sizeInterger << " bytes" << endl;
    cout << "Size of a double is " << sizeDouble << " bytes" << endl;
    cout << "Size of a char is " << sizeChar << " bytes" << endl;
}