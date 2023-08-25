/*
MAXIMAM & MINIMUM ELEMENT
I/P----ARRAY ={4,12,8,10}
O/P----MAX=10,MIN=4
*/
#include<iostream>
#include<math.h>
using namespace std;
int getMax(int num[],int n){
    int maxi =INT32_MIN;
    for( int i =0;i<n;i++){
        maxi = max(maxi,num[i]);
    }
    return maxi;
}
int getMin(int num[],int n){
    int mini =INT32_MAX
    for( int i =0;i<n;i++){
        mini = min(mini,num[i]);
    }
    return mini;
}



int main(){
    int size;
    cin>>size;
    int num[1000];
    //taking input in array
    for(int i=0; i<size;i++){
        cin>>num[i];
        
    }
cout<<"Maximum value is "getMax(num,size)<<endl;
cout<<"Minimum value is "getMin(num,size)<<endl;


return 0;

}
