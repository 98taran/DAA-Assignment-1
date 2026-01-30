//quick sort

#include <iostream>
using namespace std;

int partition(int A[],int l,int h){
    int pivot=A[l];
    int i=l,j=h;
    while(i<j){
        do{
            i++;
        }while(i<h && A[i]<=pivot);

        do{
            j--;
        }while(A[j]>pivot);

        if(i<j){
            swap(A[i],A[j]);
        }
    }
    swap(A[l],A[j]);
    return j;

}

void quickSort(int A[],int l,int h){
    if(l<h){
        int j=partition(A,l,h);
        quickSort(A,l,j);
        quickSort(A,j+1,h);
    }
}

int main(){
    int arr[]= {2,9,7,5,12,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}
