#include<iostream>
#include<string>
using namespace std;
class A{
  public:
  // Static/compile time polymorphism
  void sayHello(){
    cout<<"Sayhello without parameters"<<endl;
  }
  void sayHello(string name){
    cout<<"Hello to "<<name<<endl;
  }
};
int main(){
  A obj;
  obj.sayHello();
  obj.sayHello("Bhavya");
}
