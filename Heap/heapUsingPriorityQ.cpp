#include<iostream>
#include<queue>
using namespace std;
int main(){
  priority_queue<int>maxpq;
  priority_queue<int,vector<int>,greater<int>> minpq;
  maxpq.push(23);
  maxpq.push(43);
  maxpq.push(53);
  maxpq.push(223);
  maxpq.push(20);
  
  cout<<"Element at top "<<maxpq.top()<<endl;
  maxpq.pop();
  cout<<"Element at top "<<maxpq.top()<<endl;
  cout<<"Size "<<maxpq.size()<<endl;
  if(maxpq.empty()){
    cout<<"Max Pq is empty"<<endl;
  }
  else
  cout<<"Max Pq is not empty"<<endl;
  cout<<endl;
  
  minpq.push(23);
  minpq.push(43);
  minpq.push(53);
  minpq.push(223);
  minpq.push(20);

  cout<<"Element at top "<<minpq.top()<<endl;
  minpq.pop();
  cout<<"Element at top "<<minpq.top()<<endl;
  cout<<"Size "<<minpq.size()<<endl;
  if(minpq.empty()){
    cout<<"Min Pq is empty"<<endl;
  }
  else
  cout<<"Min Pq is not empty"<<endl;
}