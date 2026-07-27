#include<iostream>
using namespace std;
class Node{
  public:
  int val;
  Node* next;
  Node(int val) {
    this->val = val;
    next = nullptr;
  }
};
// Insert at head;
void insertathead(Node*& head,Node*& tail ,int data){
  Node* node = new Node(data);
  if(!head){
    tail = node;
    head = node;
    return;
  }
  node->next = head;
  head = node;
  // cout<<head->val;

}

// Insert at end
void insertattail(Node*& head,Node*& tail, int data){
  Node* node = new Node(data);
  // cout<<node->val<<endl;
  if(!tail){
    tail = node;
    head= node;
    return;
  }
  tail->next= node;
  tail = node;
  // cout<<tail->val<<" ";
}

// Insert at position pos
void insertatPos(Node*& head,Node*& tail,int data,int pos){
  Node* node = new Node(data);
  if(!head and pos>1){
    cout<<"ERROR the list is empty"<<endl;
    return;
  }
  if(!head and pos == 1){
    head = node;
    tail = node;
    return ;
  }
  int cnt = 1;
  Node* prev = head, *curr = head ;
  while(curr and cnt <pos){
    cnt++;
    prev = curr;
    curr = curr->next;
  }
  if(curr == nullptr){
    insertattail(head,tail,data);
  }
  node->next= curr->next;
  prev->next = node;
}
// Print
void print(Node*& head){
  if(!head) return ;
  Node* ptr = head;
  while(ptr){
    cout<<ptr->val<<" ";
    ptr = ptr->next;
  }
  cout<<endl;
}
int main(){
  Node* head = nullptr,*tail = nullptr;
  insertathead(head,tail,20);
  print(head);
  insertathead(head,tail,10);
  // Node* ptr = head;
  // while(ptr){
  //   cout<<ptr->val<<" ";
  //   ptr = ptr->next;
  // }
  // print(head);
  insertattail(head,tail,30);
  print(head);
  insertattail(head,tail,40);
  print(head);
  insertatPos(head,tail,50,4);
  print(head);
}