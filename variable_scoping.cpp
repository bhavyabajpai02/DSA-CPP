#include<iostream>
using namespace std;
int main(){
  int a =1;
    if(true){
      // LOCAL
      int a=9; // Passses no error
      cout<<a<<endl;
    }
    cout<<a<<endl;
    // cannot declare same variable within same block
    // int a =9 ; ->will throw error
    if(1){
      a=2;
       if(1){
        a=3;
        if(1){
          cout<<a; //a=3 ->takes the value of just above if block
        }
       } 
    }
}