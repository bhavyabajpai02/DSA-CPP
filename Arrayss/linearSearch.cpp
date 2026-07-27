#include<bits/stdc++.h>
using namespace std;
bool Linear_Search(int a[], int n,int key){
  for(int i=0 ; i<n; i++){
    if(a[i] == key){
      return 1;
    }
  }
  return 0;
}
bool Binary_Search(int a[],int size)  {

}
int main(){
  int a[10] = {2,3,5,6,7,7,8,2,4};
  cout<<"Seaching for 1"<<endl;

  if(Linear_Search(a,10,1)){
    cout<<"Found"<<endl;
  }
  else{
    cout<<"Not found"<<endl;
  }
}