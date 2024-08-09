#include<iostream>
using namespace std;
int reverse(int arr[],int n){
    int start =0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    return arr[n];
}
void print(int ar[],int size){
    cout<<"printing array"<<endl;
    for(int i=0;i<size;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[7]={1,8,9,6,5,6,3};
    int b[5]={9,8,7,6,5};
    reverse(arr,7);
    print(arr,7);
    
    reverse(b,5);
    print(b,5);
}