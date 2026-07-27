#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  vector<int>v;
  v.push_back(1);
  v.push_back(3);
  v.push_back(5);
  v.push_back(7);
  cout<<"BINARY SEARCH Finding 6-> "<<binary_search(v.begin(),v.end(),6)<<endl;
  v.push_back(6);
  cout<<"lower bound(6) after inserting 6-> "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
  cout<<"upper bound(6) after inserting 6-> "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

  int a=7,b=3;
  cout<<"max "<<max(a,b)<<endl;
  cout<<"min "<<min(a,b)<<endl;
  swap(a,b);
  cout<<endl;
  cout<<"swap(a,b) a->"<<a;
  cout<<endl<<"original"<<endl;
  for(auto i:v){
    cout<<i<<" "; 
  }
  cout<<endl<<"reverse"<<endl;
  reverse(v.begin(),v.end());
  for(auto i:v){
    cout<<i<<" ";
  }
  cout<<endl<<"rotate"<<endl;
  rotate(v.begin(),v.begin()+3,v.end());
  for(auto i:v){
    cout<<i<<" ";
  }
  cout<<endl<<"sort"<<endl;
  sort(v.begin(),v.end());
  for(auto i:v){
    cout<<i<<" ";
  }
  cout<<endl;
}