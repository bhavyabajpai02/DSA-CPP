#include<bits/stdc++.h>
using namespace std;
bool prime(int a){
  if(a<2) return false;
  for(int i=2 ; i<a ; i++){
    if(a%i == 0){
      return 0;
    }
  }
  return 1;
}
int main(){
  int a;
  cin>>a;
  cout<<prime(a);
}