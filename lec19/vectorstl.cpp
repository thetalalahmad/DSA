#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>v;
    cout<<"Capacity-> "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Capacity-> "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity-> "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Capacity-> "<<v.capacity()<<endl;
    cout<<"Size-> "<<v.size()<<endl;
 //(copy) 
//    vector<int>last(v);
//     for(int i:last){
//        cout<<i<<" "<<endl;}

    cout<<"Element at 2nd index -> "<<v.at(2)<<endl;
    cout<<"First Element -> "<<v.front()<<endl;
    cout<<"Last Element -> "<<v.back()<<endl;
    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" "<<endl;
    }
    v.pop_back();
    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" "<<endl;
    }
    cout<<"before clear size-> "<<v.size()<<endl;
    v.clear();
    //clear-> 0 size,not capacity 
    cout<<"after clear size-> "<<v.size()<<endl; //0
     cout<<"Capacity-> "<<v.capacity()<<endl;    //4

return 0;
}