#include<iostream>
#include<set>
using namespace std;
int main(){
  set<int>s;
  s.insert(2);
  s.insert(3);
  s.insert(1);
  s.insert(0);
  s.insert(4);
  s.insert(4);
  s.insert(5);

  for(auto i:s){
    cout<<i<<" ";
  }
  cout<<endl;

  // ERASE
  set<int>::iterator it = s.begin();
  it++;
  s.erase(it); //-> erases 2nd element in the set 
  for(auto i:s){
    cout<<i<<" ";
  }
  cout<<"-2 is there in s? :"<<s.count(-2);
  cout<<endl;
  set<int>::iterator str = s.find(5);
  for(auto it = str; it != s.end(); it++){
    cout<<"Position of 5 in s: "<<*it<<" ";
  }
}