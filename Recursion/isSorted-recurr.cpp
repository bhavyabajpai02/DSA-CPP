#include<iostream>
using namespace std;
// bool isSorted(int* arr[],int n){
bool isSorted(int arr[],int n){
  if(n == 0 or n== 1){
    return true;
  }
  if(arr[0]>arr[1]){
    return false; 
  }
  else{
    bool ans = isSorted(arr+1,n-1);
    return ans;
  }
}
int main(){
  int arr[5] = {2,4,5,6,7};
  int n = 5;
  cout<<"IS sorted?: "<<isSorted(arr,n);
}