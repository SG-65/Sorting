#include<iostream>
using namespace std;

void merge(int arr[],int f,int mid,int l){
    int p_size=mid-f+1;
    int q_size=l-mid;
    int p[p_size];
    int q[q_size];
    
    for(int i=0;i<p_size;i++){
        p[i]=arr[f+i];
    }
    for(int j=0;j<q_size;j++){
        q[j]=arr[mid+1+j];
    }
    int i=0;//initial index of p array
    int j=0;//initial index of q array
    int k=f;//initial index of final array
    while(i<p_size && j<q_size){
        if(p[i]<q[j])
           arr[k++]=p[i++];
        else
           arr[k++]=q[j++];
    }
    while(i<p_size){
         arr[k++]=p[i++];
    }
    while(j<q_size){
         arr[k++]=q[j++];
    }
}

void merge_sort(int arr[],int f,int l){
    if(f>=l)
       return;
    else{
        int mid=(l+f)/2;
        merge_sort(arr,f,mid);
        merge_sort(arr,mid+1,l);
        merge(arr,f,mid,l);
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
    merge_sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
     cout<<endl;
    return 0;
}