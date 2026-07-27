#include<iostream>
using namespace std;
void merge(int arr[],int l ,int r, int m){
  int n1 = m - l+1;
  int n2 = r-m;
  // int L[n1],R[n2];
  int * L = new int(n1);
  int * R = new int(n2);
  for(int i= 0 ; i<n1; i++){
    L[i] = arr[i+l];
  }
  for(int i= 0 ; i<n2; i++){
    R[i] = arr[i+m+1];
  }
  int i = 0, j=0 ,k=l;
  while(i<n1 and j<n2){
    if(L[i] < R[j]){
      arr[k++] = L[i++];
    }
    else{
      arr[k++] = R[j++];
    }
  }
  while(i<n1){
    arr[k++] = L[i++];
  }
  while(j<n2){
    arr[k++] = R[j++];
  }
  delete []L;
  delete []R;
}
void mergeSort(int arr[],int l, int r){
  if(l>=r){
    return ;
  }
  int mid = l + (r-l)/2;
  mergeSort(arr,l,mid);
  mergeSort(arr,mid+1,r);
  merge(arr,l,r,mid);
}
int main(){
  int arr[] ={2,31, 1,4, 5,2,1,7};
  int n = sizeof(arr)/sizeof(int);
  cout<<"Before mergeSort : ";
  for(int i = 0 ; i<n ;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  mergeSort(arr,0,n-1);
  cout<<"After mergesort : ";
  for(int i = 0 ; i<n ;i++){
    cout<<arr[i]<<" ";
  }
}