//first in,first out
#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string>q;
    q.push("love");
    q.push("is");
    q.push("lie");
    cout<<"Size before pop-> "<<q.size()<<endl;
    cout<<"First Element-> "<<q.front()<<endl;
    q.pop();
    cout<<"First Element-> "<<q.front()<<endl;
    cout<<"Size before pop-> "<<q.size()<<endl;


    


}