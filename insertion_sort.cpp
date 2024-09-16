#include<iostream>
using namespace std;

void insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
       int curr_ele=arr[i];
       int j=i-1;
      while(j>=0 && arr[j]>curr_ele){
              arr[j+1]=arr[j];
              j--;
      }
      arr[j+1]=curr_ele;     
    }
}

int main(){
    int n;
    cout<<"the size of the array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertion_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}