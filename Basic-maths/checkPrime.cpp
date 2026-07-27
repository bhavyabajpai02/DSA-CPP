// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int n= 6;
//   bool check = false;
//   for(int i=2 ; i<n ; i++){
//     if( n%i == 0){
//       check = true;
//       cout<<"NOT PRIME"<<endl;
//       break;
//     }
//   }
//   if(!check)
//   cout<<"PRIME"<<endl;
//   return 0;
// }
#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  if(n == 1) cout<<"NOT PRIME"<<endl;
  else {
    for(int i=2 ; i<n ; i++){
      if(n%i==0) 
      {
        cout<<"NOT PRIME";
        break;
      }
    }
  }
}
