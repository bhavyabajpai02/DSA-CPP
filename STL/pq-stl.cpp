#include<iostream>
#include<queue>
using namespace std;
int main(){
   priority_queue<int>maxh;
   priority_queue<int,vector<int>,greater<int>>minh;
   maxh.push(1);
   maxh.push(2);
   maxh.push(3);
   minh.push(1);
   minh.push(3);
   minh.push(2);
   int n = maxh.size();
    for(int i=0 ; i<n; i++){
      cout<<maxh.top()<<" ";
      maxh.pop();
    }
    cout<<endl;
    int n2 = minh.size();
    for(int i=0 ; i<n; i++){
      cout<<minh.top()<<" ";
      minh.pop();
    }
    
    cout<<endl;
    cout<<"Empty()?: "<<minh.empty();
}
