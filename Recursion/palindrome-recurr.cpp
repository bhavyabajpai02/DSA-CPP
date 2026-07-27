#include<iostream>
using namespace std;
bool isPalindrome(string s , int l , int r){
  if(l>r){
    return true;
  }
  if(s[l] != s[r]){
    return false;
  }
  else{
    return isPalindrome(s,l+1,r-1);
  }

}
int main(){
  string s = "abssbaa";
  if(isPalindrome(s,0,s.length()-1)){
    cout<<"This is palindrome"<<endl;
  }
  else{
    cout<<"This is not a palindrome"<<endl;
  }
}