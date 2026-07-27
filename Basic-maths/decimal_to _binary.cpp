#include<bits/stdc++.h>
using namespace std;
int main(){
      int n;
      cout<<"Enter the number to be converted in binary: ";
      cin>>n;
      int bit =0,ans=0,i = 0;
      while(n>0){
        bit = (n&1);
        // Reverse order
        ans = bit * pow(10,i)+ans;
        i++;
        n>>=1;
      }
      cout<<"The converted binary "<< ans <<endl;
    
}