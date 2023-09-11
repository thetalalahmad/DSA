#include<iostream>
#include<deque>
using namespace std;
int main() {
deque<int> d;
d.push_back(1);
d.push_front(2);
// d.pop_back();
for(int i:d){
    cout<<i;
}
cout<<endl;
cout<<"Print first Index Element-> "<<d.at(0)<<endl;
cout<<"Front-> "<<d.front()<<endl;
cout<<"Back-> "<<d.back()<<endl;
cout<<"Empty or not-> "<<d.empty()<<endl;
cout<<"Before erase-> "<<d.size()<<endl;
d.erase(d.begin(),d.begin()+1);
cout<<"after erase-> "<<d.size()<<endl;
cout<<"Element after erase-> ";
for(int i:d){
    cout<<i;
}
cout<<endl;
d.clear();
cout<<"after clear size-> "<<d.size()<<endl;
return 0;
}