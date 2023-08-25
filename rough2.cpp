/*
fibonnacci series
i/p = n
o/p = nth fibonnacci number
for example 
i/p n = 5 , 0,1,1,2,3 
o/p nth = 3
*/
#include<iostream>
using namespace std;
int fibonacci(int n){

    int a=0;
    int b=1;
    for(int i =1;i<n;i++){
        int NextNumber = a+b;
        a=b;
        b=NextNumber;
        }
        return a ;
    }



int main(){
    int n;
cout << "Enter the value of nth term" << endl;
    cin >> n;
    cout<<fibonacci(n);

}