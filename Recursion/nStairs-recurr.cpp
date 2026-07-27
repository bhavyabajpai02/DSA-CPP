#include<iostream>
using namespace std;
int nStairs_climb(int n){
  if(n<0) return 0 ;
  if(n == 0) return 1;
  return nStairs_climb(n-1)+nStairs_climb(n-2);
}
int main(){
  int n ;
  cin>>n;
  cout<<nStairs_climb(n);

}