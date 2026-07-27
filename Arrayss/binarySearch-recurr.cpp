#include<iostream>
using namespace std;
void print(int arr[],int s, int e){
  // cout<<"Size of the array "<<n<<endl;
  for(int i = s ; i<=e ; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
bool binarySearch(int arr[], int n , int l , int r, int key){
  print(arr,l,r);
  if(l>r){
    return false;
  }
  int mid = l+(r-l)/2;
  if(arr[mid] == key){
    return true;
  }
  else if(arr[mid]< key){
    // bool remainingPart = binarySearch(arr,n, mid+1 , r);
    return  binarySearch(arr,n, mid+1 , r,key);
  }
  else{
    // bool remainingPart = binarySearch(arr,n, l , mid-1);
    return  binarySearch(arr,n, l , mid-1,key);

  }
}
int main(){
   int arr[5] = {2,4,5,6,7};
   int key = 6;
   cout<<"Key found? "<<binarySearch(arr,5,0,4,key);
}