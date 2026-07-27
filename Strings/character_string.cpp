#include<bits/stdc++.h>
using namespace std;
bool checkpalindrome(char name[],int n){
  int a =0 , b= n-1;
  while(a<b){
    if(name[a] != name[b]){
      return false;
    }
    a++;
    b--;
  }
  return true;
}
int getLength(char name[]){
  int count = 0 ;
  for(int i=0 ; name[i] != '\0' ; i++){
    count++;
  }
  return count;
}
void reverse(char name[],int n){
  int i=0 ; 
  int e = n-1;
  while(i<e){
    swap(name[i++],name[e--]);
  }
  // return name;
}
char tolower(char c){
  return c -'A' +'a';
}
char maxchar(string s){
  vector<int>a(26);
  int ans = 0;
  char c;
  for(int i=0; i<s.size(); i++){
    char ch = s[i];
    int n= tolower(s[i])-'a';
    a[n]++;
    if(a[n]  >ans){
    ans = a[n];
    c = ch;
    }
  }
  cout<<ans<<endl;
  return c;
}
int main(){
  // char name[10];
  // cout<<"Enter your name: "<<endl;
  // cin>>name;
  // // name[2] = '\0';
  // // cout<<"Your name is "  <<name<<endl; 
  // int n = getLength(name);
  // cout<<"length of name "<<n<<endl;
  
  // reverse(name,n);
  // cout<<"Reversed name "<<name<<endl;

  // cout<<"Palindrome ? "<<checkpalindrome(name,n)<<endl;
  // cout<<"Making the character lower: "<<tolower('A')<<endl;
  // cout<<"Making the character lower: "<<tolower('B')<<endl;

  string s = "wwwweeaaattsszzzzzzz";
  cout<<"Maximum occuring character: "<<maxchar(s);
}