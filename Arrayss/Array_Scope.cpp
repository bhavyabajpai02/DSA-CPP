#include<bits/stdc++.h>
using namespace std;
 
void printArray(int a[] , int n){
  // cout<<"printing array"<<endl;
  for(int i=0; i< n ; i++){
    cout<<a[i]<<" ";
  }
  // cout<< "\n" <<"Printed array "<<endl;
}
// Passes address of 1st element so changes here will be done globally and changes the values of a[] in main function too
void updateArray(int a[], int n){
  cout<<"updating 0th value of a in function: a[0] = 120"<<endl;
a[0] = 120;
}
int main(){
  int a[3] ={1,2,4};
  cout<<"Before updation :"<<endl;
  printArray(a,3);
  updateArray(a,3);
  cout<<"After updaton in the function: "<<endl;
  printArray(a,3);
}