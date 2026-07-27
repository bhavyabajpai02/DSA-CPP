#include<iostream>
using namespace std;
void reachHome(int src, int dest){
  cout<<"Source: "<<src<<" "<<"Destination: "<<dest<<endl;
  if(src == dest){
    cout<<"Reached"<<endl;
    return;
  }
  src++;
  // TAIL RECURSION
  return reachHome(src,dest);
}
int main(){
  int dest = 10;
  int src = 1;
  reachHome(src,dest);
}