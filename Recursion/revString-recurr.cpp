#include<iostream>
using namespace std;
void reverse(string& name, int i , int j){
  if(i>j){
    return;
  }
  swap(name[i],name[j]);
  reverse(name,i+=1,j-=1);
}
int main(){
  string name = "abcde";
  reverse(name,0 , name.length()-1);
  cout<<name<<endl;
}