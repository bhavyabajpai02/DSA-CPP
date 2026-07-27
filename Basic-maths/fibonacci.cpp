#include<iostream>
using namespace std;
int main(){
  int a =0,b=1,n;
  cout<<"Enter the length of fibonacc series: ";
  cin>>n;  
  for(int i=0; i<=n ;i++){
    int c = a+b;
    cout<<c<<" ";
    a = b;
    b = c;
  }
}