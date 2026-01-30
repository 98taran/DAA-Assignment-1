//binary search

#include <iostream>
using namespace std;

int binarySearch(int arr[],int l,int h,int key){
    if(l==h){
        if(arr[l==key])
            return l;
        else
            return 0;
    }
    else{
        int mid=(l+h)/2;
        if(key==arr[mid])
            return mid;
        if(key<arr[mid])
            return binarySearch(arr,l,mid-1,key);
        else
            return binarySearch(arr,mid+1,h,key);
    }
}

int main(){
    int arr[]={2,5,8,12,16,10,1,45,72,91};
    int l=0;
    int h=(sizeof(arr)/sizeof(arr[0]))-1;
    int key=23;
    int result=binarySearch(arr,l,h,key);

    if(result!=-1)
        cout<<"Element found at index "<<result;
    else
        cout<<"Element not found";

    return 0;
}