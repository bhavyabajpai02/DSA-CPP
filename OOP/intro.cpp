#include<iostream>
#include<string>
#include<bits/stdc++.h>
// #include "Hero.cpp"
using namespace std;
class Hero{
  private:
  int health;
  
  public:
  // char name[100]; -> bad practice to allocate memory like this 
  char *name;  
  char level;
  static int timeToComplete;

  // public:
  // Default Contructor
  Hero(){
    cout<<"Default Constructor called"<<endl;
    // Allocated heap memory dynamically storing name as there is more memory 
    name = new char[100];
  } 

  // Parameterised Constructor
  Hero(int health){
    this->health = health; 
  }
  Hero(int health, char level){
    this->health = health;
    this->level = level; 
  }
  
  // Copy contructor
  Hero (Hero& temp){
    cout<<"Copy constructor is called "<<endl;
    // this->name = temp.name;
    // Creating new array for deep copy concept 
     char* ch = new char[strlen(temp.name)];
    strcpy(ch,temp.name);
    this->name = ch;

    this->health = temp.health;
    this->level = temp.level;
  }
  // Destructor
  ~Hero (){
    cout<<"Destructor called "<<endl;
  }
  // Static function 
  static int random(){
    // cout<<health<<endl;->can only access static var
    // cout<<timeToComplete<<endl;
    return timeToComplete;
  }
  void print(){
    cout<<endl;
    cout<<"[ Name is "<<this->name<<", ";
    cout<<"Health is "<<this->health<<", ";
    cout<<"Level is "<<this->level<<" ]"<< endl;
  }
  int getHealth(){
    return health;
  }

  char getLevel(){
    return level;
  }
  void setName(char name[]){
    strcpy(this->name,name);
  }
  void setHealth(int h){
    health = h;
  } 

  void setLevel(char l){
    level = l;
  }
};
int Hero::timeToComplete = 50;
int main(){
  // Static Allocation 
  // Hero a;
  // cout<<"Health is : "<<a.getHealth()<<endl;
  // cout<<"Level is : "<<a.level<<endl;

  // Dynamic Allocation 
  // Hero *b= new Hero;

  // For dynamic memory we have to manually release it using delete keyword
  // delete b; 

  // DOT OPPERATOR
  // cout<<"Health is: "<<(*b).getHealth()<<endl;
  // cout<<"Level is: "<<(*b).level<<endl;
  // ARROW OPERATOR
  // cout<<"Health is: "<<b->getHealth()<<endl;
  // cout<<"Level is: "<<b->level<<endl;

  // Hero c(10);
  // cout<<"Address of c "<<&c<<endl; 
  
  // Hero ramesh;
  // cout<<"Size: "<<sizeof(ramesh)<<endl;

  // Private var can be accessed through set get methods
  // ramesh.setHealth(23);// = 23;
  // cout<<"Ramesh health is "<<ramesh.getHealth()<<endl;
  // ramesh.level = 'A';
  // // cout<<"Health is: "<<ramesh.health<<endl; //->error: cant access private var
  // cout<<"Level is: "<<ramesh.level<<endl;

  // COPY Constructor
  // Hero suresh(70,'C'); 
  // suresh.print();      
  // Hero r(suresh);
  // r.print();

  // Hero hero1;
  // hero1.setHealth(20);
  // hero1.setLevel('C');
  // char name[7] = "Bhavya";
  // hero1.setName(name);
  // hero1.print();
  // // Default constructor(shallow constructor) [remove the created copy constructor first ]
  // Hero hero2(hero1);
  // hero2.print();

  // hero1.name[0] = 'G';
  // hero1.print();
  // hero2.print();

  //Static var used
  cout<<Hero::timeToComplete<<endl;
  // Hero a;
  // cout<<a.timeToComplete<<endl; 
  cout<<"Static function print "<<Hero::random()<<endl;
}