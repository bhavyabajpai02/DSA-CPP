#include<iostream>
#include<queue>
using namespace std;
int main(){
   queue<string>q;
   q.push("a");
   q.push("b");
   q.push("c");
   q.push("d");
   q.push("e");
   cout<<"Before pop() "<<q.front()<<endl;
   q.pop();
   cout<<"After pop() "<<q.front()<<endl;
   cout<<"Size of queue: "<<q.size()<<endl;
   cout<<"Is empty()? "<<q.empty()<<endl;
}
