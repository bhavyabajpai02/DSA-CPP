#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
  string s;
  cout<<"Enter string ";
  cin>>s;
  // cout<<s<<endl;
  stack<int> stk;
  for(auto &i:s){
    stk.push(i);
  }
  for(int i= 0 ; i<s.length(); i++){
    s[i] = stk.top();
    stk.pop();
  }
  cout<<"Reversed "<<s<<endl;
}