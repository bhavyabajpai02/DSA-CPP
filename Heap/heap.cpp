#include<iostream>
using namespace std;
class heap{
  public:
  int arr[100];
  int size = 0;
  heap(){
    arr[0] = -1;
    size =0;
  }

  // INSETING
  void insert(int val){//O(logn)
    size = size+1;
    int index = size;
    arr[index] = val;
     while(index > 1){
      int parent = index/2;
      // parent < val
      if(arr[parent] <arr[index]){
        swap(arr[parent],arr[index]);
        index = parent;
      }
      else{
        return ;
      }
     }
  }

  void print(){
    for(int i=1 ; i<= size; i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  }

  // DELETING
  void deleteFromHeap(){//O(logn)
    if(size == 0){
      cout<<"Nothing to delete"<<endl;
      return;
    }
    // putting last index into first index
    arr[1] = arr[size];
    // removing last element
    size--;

    int i = 1; 
    // inserting 1st index value into its right pos 
    while(i<=size){
      int  leftIndex = 2*i;
      int  rightIndex = 2*i+1;
      int largest = i;
      if(leftIndex <= size and arr[i] < arr[leftIndex]){
        largest = leftIndex;
      }
      if(rightIndex <= size and arr[largest] < arr[rightIndex]){
        // swap(arr[i],arr[rightIndex]);
        largest = rightIndex;
      }
      else{
        return ;
      }
      swap(arr[i],arr[largest]);
      i = largest;
    }
  }
  
  
  
};
void heapify(int arr[],int n , int i){//O(n)
  int  leftIndex = 2*i;
  int  rightIndex = 2*i+1;
  int largest = i;
  if(leftIndex <= n and arr[i] < arr[leftIndex]){
    largest = leftIndex;
  }
  if(rightIndex <= n and arr[largest] < arr[rightIndex]){
    // swap(arr[i],arr[rightIndex]);
    largest = rightIndex;
  }
  // else{
  //   return ;
  // }
  if(largest != i){
    swap(arr[i],arr[largest]);
    i = largest;
    heapify(arr,n,i);
  }
}

void heapSort(int arr[],int n){ //O(nlogn)
  int size = n; 
  while(size>1){
    swap(arr[size],arr[1]);
    size--;
    heapify(arr,size,1);
  }
}
int main(){
  // heap h;
  // h.insert(20);
  // h.insert(30);
  // h.insert(40);
  // h.insert(50);
  // h.insert(60);
  // h.insert(70);
  // h.print();
  // h.deleteFromHeap();
  // h.print();

  int arr[7] = {-1,20,30,40,123,4,100};
  int n = 6;
  for(int i = n/2 ; i>0 ; i--){
    heapify(arr,n,i);
  }
  cout<<"Printing the array now "<<endl;
  for(int i=1; i<=n ;i++){
    cout<<arr[i]<<" ";
  }
  heapSort(arr,n);
  cout<<endl;
  cout<<"Printing the sorted array now "<<endl;
  for(int i=1; i<=n ;i++){
    cout<<arr[i]<<" ";
  }
}