#include<iostream>
using namespace std;
void  bubbleSort( int arr[],int n){
  if( n == 0 or n == 1){
    return ;
  }
  // 1 case solved - Largest element at the end
  for(int i = 0 ; i<n-1; i++){
    if(arr[i]> arr[i+1]){
      swap(arr[i],arr[i+1]);
    }
  }
  bubbleSort(arr,n-1);
}
int main(){
  int arr[] = {2,4,1,3,5,6,3};
  bubbleSort(arr,7);
  cout<<"After Sort ";
  for(int i = 0 ; i<7 ; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  // return 0;
}