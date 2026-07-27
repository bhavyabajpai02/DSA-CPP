#include<iostream>
#include<queue>
using namespace std;
int main(){
  deque<int>dq;
  dq.push_front(1);
  dq.push_back(2);
  cout<<dq.front()<<endl;
  cout<<dq.back()<<endl;

  dq.pop_front();
  cout<<dq.front()<<endl;
  cout<<dq.back()<<endl;
  if(dq.empty()) cout<<"Queue is empty"<<endl;
  else cout<<"Queue is not empty"<<endl;
}