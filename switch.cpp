#include<bits/stdc++.h>
using namespace std;
int main(){
      char ch = 'c';
      int num = 1;
      switch(ch){
        // no error to use {} braces  
        case 'a':{cout<<"This is char a"<<endl;}
        break;
        case 'b':cout<<"This is char b"<<endl;
        break;
        case 'c': switch(num){
          case 1:cout<<"This is nested switch case for int num "<<num<<" in char c"<<endl;
          break;
        }
        // continue; gives error ->not within loop 

      }

}