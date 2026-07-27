#include<iostream>
#include<map>
using namespace std;
int main(){
  map<int,string>m;
  m[1] = "bhavya";
  m[2] = "bajpai";
  m[3] = "she";
  m[4] = "is a";
  m[5] = "good";
  m[6] = "girl";
  m.insert({0,"Ik"});
  cout<<"before erase"<<endl;
  for(auto i:m){
    cout<<i.second<<endl;
  }
  cout<<"Finding 6-> "<<m.count(6)<<endl;
   auto it = m.find(5);
   for(auto i = it; i!= m.end(); i++){
    cout<<(*i).first<<endl;
   }
}