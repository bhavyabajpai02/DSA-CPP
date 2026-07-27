#include<iostream>
#include<list>
using namespace std;
int main(){
 list<int>l;
 list<int>d(l);
 l.push_back(1);
 l.push_front(2);
 for(int i:l){
   cout<<i<<" ";
  }
  cout<<endl;
  l.erase(l.begin());
  cout<<"after erase"<<endl;
  for(int i:l){
    cout<<i<<" ";
  }
  cout<<endl<<"Size of list "<<l.size()<<endl;
  list<int>n(10,2);
  for(int i:n){
    cout<<i<<" ";
   }
}
