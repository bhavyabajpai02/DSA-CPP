#include<iostream>
#include<deque>
using namespace std;
int main(){
  deque<int>d;
  d.push_back(1);
  d.push_front(2);
  // for(int i:d){
  //   cout<<i<<" ";
  //   // o/p -> 2 1
  // }
  cout<<endl;
  // cout<<"After pop_front "<<endl;
  // d.pop_front();
  // for(int i:d){
  //     cout<<i<<" ";
  //     // o/p -> 2 1
  // }
    cout<<endl;
  cout<<"front "<<d.front()<<endl;
  cout<<"back "<<d.back()<<endl;
  cout<<"Empty? : "<<d.empty()<<endl;
  
}
