#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int>v{2,0,1,0,3,0,0};
   int nonzero=0,j=0;
   while(j<v.size()){
    if(v[j] != 0){
        swap(v[j],v[nonzero]);
        nonzero++;
      }
      j++; 
   }
   for(auto i:v){
    cout<<i<<" ";
   }
}