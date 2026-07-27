#include<bits/stdc++.h>
using namespace std;
int first(int a[],int n, int key){
  int low = 0 , high = n-1,ans=-1;
  while(low<=high){
    int mid = low +(high - low)/2;
    if(a[mid] == key){
      ans = mid;
      high = mid-1;
    }
    else if(a[mid] < key){
      low = mid+1;
    }
    else{
      high = mid-1;
    }
  }
  return ans;
}
int last(int a[],int n, int key){
  int low = 0 , high = n-1,ans=-1;
  while(low<=high){
    int mid = low +(high - low)/2;
    if(a[mid] == key){
      ans = mid;
      low = mid+1;
    }
    else if(a[mid] < key){
      low = mid+1;
    }
    else{
      high = mid-1;
    }
  }
  return ans;
}
int main(){
  int a[11]= {1,2,3,3,3,3,3,3,3,3,5};
  cout<<"First occurance of 3: "<<first(a,11,3)<<endl;
  cout<<"Last occurance of 3: "<<last(a,11,3)<<endl;

}