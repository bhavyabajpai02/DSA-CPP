#include<iostream>
#include<stack>
using namespace std;
int main(){
   stack<string>s;
   s.push("a");
   s.push("b");
   s.push("c");
   s.push("d");
   s.push("e");
   cout<<"Before pop() last element "<<s.top()<<endl;
   s.pop();
   cout<<"After pop() last element"<<s.top()<<endl;
   cout<<"Size of stack"<<s.size()<<endl;
   cout<<"Is empty()? "<<s.empty()<<endl;
}
