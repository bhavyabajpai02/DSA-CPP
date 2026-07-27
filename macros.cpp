#include<iostream>
using namespace std;
#define PI 3.14
int main(){
  int r = 5;
  double area = PI* r * r;
  // PI = PI +1; ->error : cannot change macros value 
  cout<<"AREA: "<<area;
  return 0;
}