#include<bits/stdc++.h>
using namespace std;
void printArray(int a[] , int n){
  // cout<<"printing array"<<endl;
  for(int i=0; i< n ; i++){
    cout<<a[i]<<" ";
  }
  // cout<< "\n" <<"Printed array "<<endl;
}
void reverseArray(int a[], int n){
  int start = 0,end=n-1;
  while(start<end){
    swap(a[start],a[end]);
    start++;
    end--;
  }
}
int main(){
  int size;
  cin>>size;
  int a[size];
  for(int i=0; i<size; i++){
    cin>>a[i];
  }
  cout<<"Before reversing"<<endl;
  printArray(a,size);
  reverseArray(a,size);
  cout<<"After reversing"<<endl;
  printArray(a,size);
}