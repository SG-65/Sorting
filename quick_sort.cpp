#include<iostream>
using namespace std;

int partition(int arr[],int f,int l){
    int pivot=arr[l];
    int i=f-1;
    for(int j=f;j<l;j++){
        if(arr[j]<pivot){
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp=arr[i+1];
    arr[i+1]=arr[l];
    arr[l]=temp;
    return i+1;
}

void quick_sort(int arr[],int f,int l){
    if(f>=l)
       return;
    else{
       int par=partition(arr,f,l);
        quick_sort(arr,f,par-1);
        quick_sort(arr,par+1,l);
    }
}

int main(){
    int n;
    cout<<"the size of the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quick_sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}