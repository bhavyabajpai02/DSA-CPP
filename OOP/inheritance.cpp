#include<iostream>
using namespace std;
class Human{
  public:
  int height;
  int weight;
  int age;

  int getAge(){
    return this->age;
  }
  void setWeight(int w){
    this->weight = w;
  }
  // int getheight(){
  //   return this->height;
  // }
  // int getWeight(){
  //   return this->weight;
  // }
};
class Male: public Human{
  public:
  string color;
  void sleep(){
    cout<<"Male sleeping"<<endl;
  }
};

int main(){
  Male obj1;
  // Male accessing all the properties of Human 
  cout<<obj1.age<<endl;
  cout<<obj1.weight<<endl;
  cout<<obj1.height<<endl; 
  // Methods/ var of male
  cout<<obj1.color<<endl;
  obj1.setWeight(50);
  cout<<obj1.weight<<endl;
  obj1.sleep();

  return 0;
}