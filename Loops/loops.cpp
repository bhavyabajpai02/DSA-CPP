#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>> n;
  // i=1;
  // while(i<=n){
  //   cout<<i++<<" ";
  // }
  int sum=0;
  for(int i=1 ; i<=n ; i++){
    sum +=i;
  }
  //  sum = n/2*(a+l);
  cout<<sum<<" "<<n*(1+n)/2<<endl;
}
  
