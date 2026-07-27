#include<bits/stdc++.h>
using namespace std;
int power(int a, int b){
  int res = 1;
  for(int i=1; i<=b ;i++){
    res*=a;
  }
  return res;
}
bool checkeven(int num){
  if(num&1) {
    return false;
  }
  return true;
}
int factorial(int a){
  if(a == 1){
    return 1;
  }
    return a*factorial(a-1);
}
int nCr (int n,int r){
    int ans = factorial(n)/(factorial(n-r)*factorial(r));
    return ans;
}
int main(){
      // pow(a,b)
      // 
      // int a;
      // cin>>a;
      // cout<<power(2,3)<<endl;
      // cout<<checkeven(a)<<endl;

      //  nCr = n!/r!*(n-r)!
      cout<<nCr(4,2)<<endl;

}