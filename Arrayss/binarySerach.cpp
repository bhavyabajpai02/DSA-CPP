#include<bits/stdc++.h>
using namespace std;
int binarySearch(int a[],int n,int key){
  int left = 0, right=n-1 ;
  while(left<right){
    int mid = 1 + (right -left)/2;
    if(a[mid] ==  key){
      return mid;
    }
    else if(a[mid]<key){
      left = mid+1;
    }
    else{
      right = mid-1;
    }
  } 
  if(left>right){
    return -1;
  }
}
int main(){
  int e[10] = {1,2,3,4,5,7,7,8,9,10};
  int o[9]= {1,2,3,4,5,7,7,8,9};
  cout<<"Reseult for the index of the following key in e :"<<binarySearch(e,10,10)<<endl;
  cout<<"Reseult for the index of the following key in o :"<<binarySearch(o,9,10)<<endl;
}