#include<iostream>
#include<stack>
using namespace std;
class Stack{
  public:
  int *arr;
  int top;
  int size;

  // behaviour
  Stack (int size){
    this->size = size;
    arr = new int(size);
    top = -1;
  }
  void push(int val){
    if(size - top>1){
      top++;
      arr[top] = val;
    }else{
      cout<<"Stack overflow"<<endl;
    }
  }
  void pop(){
    if(top>=0){
      top--;
    }
    else{
      cout<<"Stack underflow"<<endl;
    }
  }
  int peak(){
    if(top>=0 and top<size){
      return arr[top];
    }
    else{
      cout<<"Stack is empty"<<endl;
    }
  }
  bool isEmpty(){
    if(top>=0){
      return true;
    }
    else{
      false;
    }
  }
};

int main(){
  // stack<int>stk;
  // stk.push(2);
  // stk.push(3);
  // stk.push(4);

  // stk.pop();
  // cout<<"Printing top element "<<stk.top()<<endl;
  // if(stk.empty()){
  //   cout<<"Stack is empty"<<endl;
  // }
  // else{
  //   cout<<"Stack is not empty"<<endl;
  // }
  Stack st(5);
  st.push(22);
  st.push(23);
  st.push(24);
  cout<<st.peak()<<endl;
  st.pop();
  cout<<st.peak()<<endl;
  st.pop();
  cout<<st.peak()<<endl;
  st.pop();
  
  if(st.isEmpty()){
    cout<<"Stack is empty"<<endl;
  }
  else
  cout<<"Stack is not empty"<<endl;
}