#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
   cout<<"Finding 6->"<<binary_search(v.begin(),v.end(),6 )<<endl;
    cout<<"lower bound->"<<lower_bound(v.begin(),v.end(),6 )-v.begin()<<endl;
    cout<<"upper bound->"<<upper_bound(v.begin(),v.end(),6 )-v.begin()<<endl;

    int a=3;
    int b=5;

    cout<<"max ->"<<max(a,b)<<endl;
    cout<<"min ->"<<min(a,b)<<endl;

    swap(a,b);
    cout<<"a->"<<a<<"  b->"<<b<<endl;
    
    string A ="abcd";
    reverse(A.begin(),A.end());
    cout<<"String-> "<<A<<endl;

    rotate(v.begin(),v.begin()+2,v.end());//+2 indicates from where to rotate the array
    cout<<"after rotate"<<endl;
    for(int i:v){
        cout<<i<<" "<<endl;
       
    }

     sort(v.begin(),v.end());
        for(int i:v){
            cout<<i<<" ";
        }




}