#include<bits/stdc++.h>
using namespace std;
int main(){
  int a[5] = {7,9,1,2,3};
  int s = 0,e=4,ans=0;
  while(s<e){
    int mid = s +(e-s)/2;
    if(a[mid] >= a[s]){
        s = mid+1;
    }else{
      e = mid;
    }
  }
  cout<<"Pivot point is "<<s;
}