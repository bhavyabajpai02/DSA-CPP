#include<iostream>
using namespace std;
void print(int *p)
{
  cout<<*p<<endl;
}
void update(int *p){
  // p = p+1;
  *p = *p+1;
}
int getSum(int arr[] /*int arr* */,int n){ 
  cout<<"Size of array usin : "<< sizeof(arr)<<endl;
  int sum = 0;
  for(int i = 0; i<n ; i++){
    sum += arr[i];
  }
  return sum ;
}
int main(){
  int val = 23;
  int * p  = &val;
  print(p);
  cout<<"Before "<<p<<" Value "<<*p<<endl;
  update(p);
  cout<<"After "<<p<<" Value "<<*p<<endl;
  int arr[5] = {1,2,3,4,5};
  cout<<"Sum is "<< getSum(arr,5)<<endl;
}