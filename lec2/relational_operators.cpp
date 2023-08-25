// relational operators-( ==, !=, >, <, >=, <= )
#include <iostream>
using namespace std;
int main()
{
    int a = 2;
    int b = 3;
    bool first = (a == b); // false
    cout << first << endl;
    bool second = (a != b); // true
    cout << second << endl;
    bool third = (a > b); // false
    cout << third << endl;
    bool forth = (a < b); // true
    cout << forth << endl;
    bool fifth = (a >= b); // false
    cout << fifth << endl;
    bool sixth = (a <= b); // true
    cout << sixth << endl;

    return 0;
}