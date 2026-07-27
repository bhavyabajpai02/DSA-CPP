#include<bits/stdc++.h>
using namespace std;
void printArray(int a[] , int n){
  cout<<"printing array"<<endl;
  for(int i=0; i< n ; i++){
    cout<<a[i]<<" ";
  }
  cout<< "\n" <<"Printed array "<<endl;
}
int main(){
  int num[15];
  cout<<"This is 14th index: "<<num[14]<<endl;
  int second[3] = {1,2,3};
  cout<<" This 3ed index is from second array"<<second[2]<<endl;

  // initialising every index value with same number except 0 is not possible
  int third[8] ={2,5}; //assigns 0 to other locations
  printArray(third,8);
  
  int fourth[8] ={1}; //assigns 0 to other locations and 1 to first location
  printArray(fourth,8);

  //Calculation of size
  int fourthsize = sizeof(fourth)/sizeof(int);
  cout<<"Size of one block in fourth array is: "<<fourthsize<<endl;

  char ch[5] ={'a','b','c','d'};
  cout<<"printing array"<<endl;
  for(int i=0; i< 5 ; i++){
    cout<<ch[i]<<" ";
  }
  cout<<"\n"<< "Printed array "<<endl;

}