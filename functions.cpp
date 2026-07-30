#include<iostream>
using namespace std;
// ->pass by value
void update(int n){
  n++;
}
// ->pass by reference
void update2(int& n){
  n++;
}
// BAD PRACTICE
// after this function excutes num,ans will be vanished 
int& update3(int n){
  int num = n; //->local var
  int & ans = num; //->local var
  return ans;
  // n++;
} 
    // THROWS ERROR
// int* update4(int n){
//   int num = n; //->local var
//   int & ans = num; //->local var
//   return ans;
//   // n++;
// } 

int main(){
  // int i = 5; 
  // int &j = i;

  // cout<<i<<" "<<j<<endl;
  // i++;
  // cout<<i<<" "<<j<<endl;
  // j++
  // cout<<i<<" "<<j<<endl;
  int n = 9 ;
  cout<<"before "<<n<<endl;
  update2(n); 
  cout<<"after "<<n<<endl;
  //  *update4(n);
  cout<<update3(n)<<endl;
}