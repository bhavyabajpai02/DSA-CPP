#include<iostream>
using namespace std;
int main(){
  int num=20  ;
  // cin>>num;
  cout<<num<<endl;
  cout<<"Address of num "<< &num<<endl;
  int *ptr = &num;
  // ptr is a pointer to int
  cout<<"Printing num "<<num<<endl<<"printing *ptr "<<*ptr<<endl;
  cout<<"Ptr printing the address of num "<<ptr <<endl;
  cout<<"Size of integer is "<<sizeof(num)<<endl;
  cout<<"Size of pointer is "<<sizeof(ptr)<<endl;
  char c = '1';
  char* p = &c;
  
  cout<<"Size of char pointer is "<<sizeof(p)<<endl;
  char *q = p;
  cout<<"Copying p to q: "<<p<<" - "<<q<<endl;
   
}