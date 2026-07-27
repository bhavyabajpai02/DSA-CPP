#include<bits/stdc++.h>
using namespace std;
void printArray(int a[] , int n){
  // cout<<"printing array"<<endl;
  for(int i=0; i< n ; i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
  // cout<< "\n" <<"Printed array "<<endl;
}
void sort01(int a[],int n){
  int i=0 ,j=n-1;
  while(i<j){
    while(a[i] == 0 and i<j){
      i++;
    }
    while(a[j] == 1 and i<j){
      j--;
    }
    while(a[i] == 1 and a[j] == 0 and i<j){
      swap(a[i],a[j]); 
      i++;
      j--;
    }
  } 
}
int main(){
  int a[10];
  int n;
  cin>>n;
  for(int i=0 ;i<n; i++){
    cin>>a[i];
  }
  cout<<"Unsorted Array: ";
  printArray(a,n);
  sort01(a,n);
  cout<<"Sorted Array: ";
  printArray(a,n);
}