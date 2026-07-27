#include<iostream>
using namespace std;
int partition(int arr[], int l  , int r){
  // Letting first element as pivot element
  int  p = arr[l];
  int count = 0 ;

  // Counting elements smaller than pivot element
  for(int i =l+1 ;i<=r ; i++){
    if(arr[i] <arr[l]){
      count++;
    }
  }
  // Swapping pivot element with its correct pos element
  int pos = l+count;
  swap(arr[l],arr[pos]);
  int i=l,j=r;


  while(i<pos and j>pos){
    // move forward if the element on the left< pivot
    while(arr[i] < p){
      i++;
    }
    // move backward if the element on the right > pivot
    while(arr[j] > p){
      j--;
    }

    // swap if still there is any element which is greater than pivot on left and smaller than pivot on right 
    if(i<pos and j>pos){
      swap(arr[i++],arr[j--]);
    }
  }

  // return the positon of the pivot element so that the array now will divide into two parts one on the left of pivot and other on the right of pivot

  return pos;
}
void quickSort(int arr[], int l ,int r){
   if(l >= r){
    return ;
   }
   int p = partition (arr,l, r);
   quickSort(arr,l , p-1); 
   quickSort(arr,p+1,r);
}
int main(){
     int arr[5] = {2,1,4,5,3};
     cout<<"Before quickSort ";
     for(int i = 0 ; i<5 ; i++){
       cout<<arr[i]<<" ";
      }
      cout<<endl;
      quickSort(arr,0,4);
      cout<<"After quickSort ";
      for(int i = 0 ; i<5 ; i++){
        cout<<arr[i]<<" ";
       }
       cout<<endl;
}