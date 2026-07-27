#include<iostream>
using namespace std;
// Subtracting values using + operator
class A{
  public:
  int a,b;
  void operator + (A&obj){
    int val1 = this->a;
    int val2 = obj.a;
    cout<<"Output "<<val2-val1<<endl;
  }
};
int main(){
  A obj1,obj2;
  obj1.a = 3;
  obj2.a = 2;
  obj1+obj2;
}