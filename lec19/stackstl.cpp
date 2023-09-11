// last in, first come out
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("love");
    s.push("is ");
    s.push("lie");
    cout << "Top Element-> " << s.top() << endl;
    s.pop();
    cout << "Top Element-> " << s.top() << endl;
    cout << "Size of Stack-> " << s.size() << endl;
    s.pop();
    cout << "Top Element-> " << s.top() << endl;
    s.pop();
    cout << "Empty or not-> " << s.empty() << endl;
    return 0;
}