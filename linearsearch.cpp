#include <iostream>
using namespace std;
int search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
void print(int ar[],int n){
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    
}
int main() {
   int array[7]={1,2,3,4,5,6,7};
   int key;
   cout<<"enter the value of key"<<endl;
   cin>>key;
   int found = search(array,7,key);
   if(found){
       cout<<"key is found "<<endl;
   }
   else{
       cout<<"key is absent"<<endl;
   }
   print(array,7);

    return 0;
}