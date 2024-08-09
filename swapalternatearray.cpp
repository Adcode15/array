// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void swapalter(int arr[],int size){
    for(int i=0;i<size;i=i+2){
        if(i+1<size){
             swap(arr[i],arr[i+1]);
        }   
     }
}
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int arr[5]={1,2,3,4,5};
    int ar[6]={2,4,6,8,10,12};
    cout<<"after swaping alternate elements in an array"<<endl;
    swapalter(arr,5);
    print(arr,5);
    cout<<"after swaping alternate elements in an array"<<endl;
    swapalter(ar,6);
    print(ar,6);

    return 0;
}