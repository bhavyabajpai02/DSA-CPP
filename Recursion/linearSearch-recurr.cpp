#include<iostream>
using namespace std;
void print(int arr[],int n){
  cout<<"Size of the array "<<n<<endl;
  for(int i = 0 ; i<n ; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
bool linearSearch(int arr[], int n , int key){
  // FOR UNDERSTANDING
  print(arr,n);
  
  if(n == 0){
    return false;
  }
  if(arr[0] == key){
    return true;
  }
  else{
    bool remainingPart = linearSearch(arr+1,n-1,key); 
    return remainingPart;
  }
}
int main(){
  int arr[5] ={2,3,5,6,7};
  int key = 6;
  bool ans = linearSearch(arr,5,key);
  if(ans){
    cout<<"key found"<<endl;
  }
  else{
    cout<<"key not found"<<endl;

  }
}