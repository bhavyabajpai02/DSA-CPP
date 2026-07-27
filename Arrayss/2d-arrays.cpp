#include<iostream>
using namespace std;
// bool
void printArray(int a[][3],int m ,int n){
  for(int i=0; i<m ;i++){
    for(int j = 0 ; j<n; j++){
      cout<<a[i][j]<<" ";
    }
  }
  cout<<endl;
}
bool isPresent(int a[][3], int key , int m ,int n){
  for(int i =0  ; i<m ;i++){
    for(int j=0 ; j<n ; j++){
      if(a[i][j] == key){
        return true;
      }
    }
  }
  return false;
}
int main(){
  int a[3][3];
  for(int i=0; i<3 ;i++){
    for(int j = 0 ; j<3; j++){
      cin>>a[i][j];
    }
  }
  printArray(a,3,3);
  int key = 3;
  if(isPresent(a,key,3,3)){
    cout<<"Key is found "<<endl;
  }
  else
  cout<<"Key is not found "<<endl;
  cout<<endl;

}