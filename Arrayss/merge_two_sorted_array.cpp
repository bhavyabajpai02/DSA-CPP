#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int> a{1,2,3,4,5};
   vector<int> b{6,7,8,9,20},ans;
   int i=0,j=0;
   while(i<a.size() or j<b.size()){
      if(a[i] == b[j]){
        ans.push_back(a[i]);
        i++;
        j++;
      }
      else if(a[i] < b[j]){
        
        ans.push_back(a[i]);
        i++;
      }
      else{
        ans.push_back(b[j]);
        j++;

      }
   }
   cout<<"Merged sorted array:";
   for(auto i:ans){
    cout<<i<<" ";
   }
}