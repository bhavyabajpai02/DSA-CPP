#include<iostream>
using namespace std;
int main(){
  char ch;
  ch = cin.get();
  if(ch>='A' and ch<='Z') cout<<"ch is capss";
  else if(ch>='a' and ch<='z') cout<<"ch is small";
  else if(ch>='0' and ch<='9') cout <<"ch is digit";
}