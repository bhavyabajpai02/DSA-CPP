#include<iostream>
using namespace std;
class Animal{
  public:
  void makeSound(){

  }
};
class Dog: public Animal{
  public:
  void makeSound(){
    cout<<"function called from dog class"<<endl;
  }
};
class Bitch:public Animal{
  public:
  void makeSound(){
  cout<<"function called from Bitch class"<<endl;
  }
};
class Dog2: public Dog, public Bitch{
  public:
  void makeSound(){

  }
};
int main(){
  Dog2 obj;
  // obj.makeSound(); ->this will create error because of the confusion through which parent class this makeSound function is called (From animal or bitch)
  //  We have to use scope resolution operator
  obj.Dog::makeSound(); // No error in this
}
