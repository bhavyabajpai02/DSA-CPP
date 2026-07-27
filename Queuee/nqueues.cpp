#include<iostream>
using namespace std;
class nQueue{
    int *arr;
    int *front;
    int *rear;
    int* next;
    int freespot;
    int size;
    int k;
    public:
    nQueue(int size, int k){
      this->size = size;
      this->k = k;
      freespot = 0;
      arr = new int[size];
      next = new int[size];
      front = new int [k];
      rear = new int [k];

      for(int i = 0 ; i<k ; i++){
        rear[i] = front[i] = -1;
      }

      for(int i = 0 ; i<size-1 ; i++){
        next [i] = i+1;
      }
      next[size-1] = -1;
    }

    void enqueue(int data,int qn){
      if(freespot == -1){
        cout<<"No empty space avail"<<endl;
      }
      int index = freespot;
      freespot = next[index];
      if(front[qn-1] == -1){
        front[qn-1] = index;
        rear[qn-1] = index;
      }
      else{
        next[rear[qn-1]] = index;
      }
      next[index] = -1;
      rear[qn-1] = index;
      arr[index] = data;
    }
    int dequeue(int qn){
      if(front[qn-1] == -1 ){
        cout<<"Underflow"<<endl;
        return -1;
      }
      int index = front[qn-1];
      front[qn-1] = next[index];
      next[index] = freespot;
      freespot = index; 
      return arr[index];
    }
};

int main(){
  nQueue q(10,3);
  q.enqueue(10,1);
  q.enqueue(12,2);
  q.enqueue(11,1);
  q.enqueue(15,2);
  q.enqueue(10,1);
cout<< q.dequeue(1)<<endl;
cout<< q.dequeue(2)<<endl;
cout<< q.dequeue(1)<<endl;
cout<< q.dequeue(2)<<endl;
}