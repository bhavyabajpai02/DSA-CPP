#include<iostream>
using namespace std;
int main(){
  // int arr[10] ={2,4,5,6,4,3,1,2,4};
  // cout<<"Address of first element arr: "<<arr<<endl;
  // cout<<"Address of first element &arr[0]: "<<&arr[0]<<endl;
  // cout<<"4th value at arr[0] "<< *arr<<endl; 
  // cout<<"5 th arr[0]+1 "<< *arr+1<<endl; 
  // cout<<"6 th arr[1] "<< *(arr+1)<<endl; 
  // cout<<"7 th arr[0]+1"<< *(arr)+1<<endl; 
  // cout<<"7 th arr[2] "<< arr[2]<<endl; 
  // cout<<"7 th *(arr+2) "<< *(arr+2)<<endl; 
  // int i = 3; 
  // cout<<i[arr] <<endl;
  // int temp[10] = {2,3,4,5};
  // int *ptr = &temp[0];
  // cout<<sizeof(temp)<<endl;
  // cout<<sizeof(&temp)<<endl;
  // cout<<sizeof(*temp)<<endl;
  // cout<<sizeof(ptr)<<endl;
  // cout<<sizeof(*ptr)<<endl;
  // cout<<sizeof(&ptr)<<endl;

  int arr[10] = {1,2,3,4,5,6,7};
  // arr = arr+1; ->error
  int *ptr = arr;
  cout<<* ptr<<endl;
  ptr = ptr +1;
  cout<<*ptr<<endl;
}
