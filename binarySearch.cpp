#include<iostream>
using namespace std;
int binarySearch(int arr[],int start,int end,int key){
    int mid=(start+end)/2;
    if(arr[mid]==key)
    return mid;
    else if(key<arr[mid]){
        return binarySearch(arr,start,mid-1,key);
    }
    else 
    return binarySearch(arr,mid+1,end,key);
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    cout<<"3 is present at: "<<binarySearch(arr,0,8,3)<<" position"<<endl;
    return 0;
}