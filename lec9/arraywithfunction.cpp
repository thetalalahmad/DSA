#include <iostream>
using namespace std;
// printing function
void printArray(int arr[], int size)
{
    cout << "printing the array" << endl;
    // printing the array
    for (int i = 0; i < size; i++){
        cout<<arr[i] <<" ";
    }
    cout<<"PRINTING DONE"<<endl;
}
int main()
{
    //declare
    int number[15];
    //accesing the array
    cout<<"Value at 14 index"<< number[14]<<endl;
    cout<<"Value at 20 index"<< number[20]<<endl;
    //initialosing an array
    int second[3]={5,7,11};
    //accesing an element
    cout<<"Value at 2 index "<<second[2]<<endl;
    int third[15]={2,7};
    int n=15;
   // printArray(third,15);
   
}