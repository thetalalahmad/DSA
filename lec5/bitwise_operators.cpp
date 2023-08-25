// BITWISE OPERATORS(AND,OR,NOT,XOR)
#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int b = 6;
    cout << " a&b " << (a & b) << endl;
    cout << " a|b " << (a | b) << endl;
    cout << " ~a " << (~a) << endl;
    cout << " a^b " << (a ^ b) << endl;

    // Left shift operator
    cout << (19 << 1) << endl;
    cout << (21 << 2) << endl;

    // Right shift operator
    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;

    // increment
    int i = 7;
    cout << (++i) << endl;
    //8
    cout << (i++) << endl;
    //8
    

    // decrement
    cout << (i--) << endl;
    //9
    cout << (--i) << endl;
    //7
}