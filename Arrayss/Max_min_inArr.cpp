#include<bits/stdc++.h>
using namespace std;
void printArray(int a[] , int n){
  cout<<"printing array"<<endl;
  for(int i=0; i< n ; i++){
    cout<<a[i]<<" ";
  }
  cout<< "\n" <<"Printed array "<<endl;
}
int getMax(int a[],int size){
    int maxi = INT_MIN;
    for(int i=0 ; i<size; i++){
      // if(a[i] > maxi){
      //   max = a[i];
      // }
      maxi = max(maxi,a[i]);

    }
    return maxi;
}
int getMin(int a[],int size){
    int mini = INT_MAX;
    for(int i=0 ; i<size; i++){
      // if(a[i] < min){
      //   min = a[i];
      // }
      mini = min(mini,a[i]);
    }
    return mini;
}
int main(){
  int a[100],size;
  cin>>size;
  for(int i =0 ; i<size;i++){
    cin>>a[i];
  }
  printArray(a,size);
  cout<<"Maximum Element "<<getMax(a,size)<<endl;
  cout<<"Minimum Element "<<getMin(a,size)<<endl;
}