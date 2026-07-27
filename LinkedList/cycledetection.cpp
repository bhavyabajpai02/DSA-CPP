#include<iostream>
#include<map>
using namespace std;
class Node{
  public:
  int val;
  Node* next;
  Node(int val){
    this->val = val ;
    next = nullptr;
  }
};
bool isCyclePresent(Node*& head){
  if(!head) return true;
  Node* ptr = head;
  map<Node*,bool>visited;
  while(ptr){
    if(visited[ptr]) return true;
    visited[ptr] = true;
    ptr = ptr->next;
  } 
  return false;
}

Node* floydsCycle(Node* head){
  if(!head) return nullptr;
  Node* slow = head, *fast = head;
  while(slow and fast){
    fast = fast->next;
    if(fast){
      fast = fast->next;
    }
    slow = slow->next;
    if(slow == fast) {
      // cout<<"Cycle is there at value "<<slow->val<<endl; 
      return slow;
    }
  }
  return nullptr ;
}
void create(Node*& head,Node*& tail,int data){
  Node* node = new Node(data);
  if(!head){
    head = node;
    tail = node;
    return;
  }
  tail->next = node;
  tail = node;
}

Node* getStartNode(Node* head){
  if(!head) return nullptr;
  Node* intersection = floydsCycle(head);
  Node* slow = head;
  while(slow != intersection){
    slow = slow->next;
    intersection = intersection->next;
  }
  return slow;
}

void removeLoop(Node* head,Node* loop){
  if(!head or !loop){
    return ;
  }
  Node* ptr = loop;
  while(ptr->next != loop){
    ptr = ptr->next;
  }
  ptr->next = nullptr;
}
void print(Node* head){
  if(!head){
    cout<<"List is empty"<<endl;
    return;
  }
  Node* ptr = head;
  while(ptr){
    cout<<ptr->val<<" ";
    ptr = ptr->next;
  }
  cout<<endl;
}
int main(){
  Node* head = nullptr, *tail = nullptr;
  create(head,tail,2);
  create(head,tail,3);
  create(head,tail,4);
  create(head,tail,5);
  create(head,tail,6);
  create(head,tail,7);
  print(head);
  tail->next = head->next;
  // print(head);
  // if(isCyclePresent(head)){
  //   cout<<"Cycle is present"<<endl;
  // }
  // else{
  //   cout<<"Cycle is not there"<<endl;
  // }
  if(floydsCycle(head) != nullptr){
    cout<<"Loop exists"<<endl;
  }
  else{
    cout<<"Loop not there"<<endl;
  }
  Node * loop = getStartNode(head);
  if(loop)
  cout<<"Starting node is "<<loop->val<<endl;
  removeLoop(head,loop);
  print(head);
}
