// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
    int start =0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
         mid=start+(end-start)/2;
    }
    return -1;
}
int main() {
    int even[6]={1,2,3,4,5,6};
    int odd[5]={2,3,4,5,7};
    int evenindex=binarysearch(even,6,2);
    int oddindex=binarysearch(odd,5,1);
    cout<<"index of 2 is :"<<evenindex<<endl;
    cout<<"index of 1 is :"<<oddindex<<endl;


    return 0;
}