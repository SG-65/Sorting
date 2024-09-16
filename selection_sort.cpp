#include<iostream>
using namespace std;

void selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min_index=i;
      for(int j=i+1;j<n;j++){
           if(arr[j]<arr[min_index])
              min_index=j;
      }
      int temp=arr[i];
      arr[i]=arr[min_index];
      arr[min_index]=temp;
    }
}

int main(){
     int n;
    cout<<"the size of the array is:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
     cout<<endl;
    return 0;
}