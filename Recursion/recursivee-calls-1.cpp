#include<iostream>
using namespace std;
int fact(int n){
  // BASE CASE 
    if(n == 0){
      return 1;
    }
    // int choti =fact(n-1);
    // int badi  = n * choti;
    return  n * fact(n-1) ;
}
int power(int n){
  if(n == 0){
    return 1;
  }
    // int shortProblem = power(n-1);
    // int longProblem = 2*shortProblem;
    return 2*power(n-1);  
}
void print(int n){
  if(n==0){
    return;
  }
  cout<<n <<endl;
  print(n-1);
} 

int fib(int n){ 
  if(n==0) return 0;
  if(n==1) return 1;
  return fib(n-1)+fib(n-2);
}

int main(){
  int n ;
  cin>>n;
  // cout<<"Factorial: "<<fact(n)<<endl;
  //  cout<<"Head recursion power of 2: "<<power(n)<<endl;
  //  cout<<"Tail recursion counting number: "<<endl;
  //  print(n);
   cout<<"Fibonaccii "<<fib(n);
  return 0;
} 