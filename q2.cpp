#include <iostream>
using namespace std;

void merge(int arr[],int l,int mid,int h){
    int i=l,j=mid+1,k=0;
    int temp[h-l+1];

    while(i<=mid&&j<=h){
        if(arr[i]<arr[j])
            temp[k++]=arr[i++];
        else
            temp[k++]=arr[j++];
    }

    while(i<=mid)
        temp[k++]=arr[i++];

    while(j<=h)
        temp[k++]=arr[j++];

    for(int x=0;x<k;x++)
        arr[l+x]=temp[x];
}

void mergeSort(int arr[],int l,int h){
    if(l<h){
        int mid=(l+h)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,h);
        merge(arr,l,mid,h);
    }
}

int main(){
    int arr[]={38, 27, 43, 3, 9, 82, 10};
    int n=sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}
