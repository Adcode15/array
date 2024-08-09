#include <iostream>
using namespace std;
void sum(int arr[],int size){
    int sum =0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
        
    }
     cout<<"the sum is:"<<sum<<endl;
}

int main() {
    int n;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sum(arr,n);
    return 0;
}