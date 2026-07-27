#include<iostream>
#include<queue>
using namespace std;

class Node{
  public:
  int val;
  Node* right;
  Node* left;
  Node(int d){
    this->val= d;
    this->right = nullptr;
    this->left = nullptr;
  }
};
Node* buildTree(Node* root){
  cout<<"Enter the data ";
  int data;
  cin>>data;
  if(data == -1){
    return nullptr;
  }
  root = new Node(data);
  cout<<"Enter data for inserting in left of "<<data<<endl;
  root->left = buildTree(root->left);   
  cout<<"Enter data for inserting in right of "<<data<<endl;
  root->right = buildTree(root->right);   
  return root;
}
void levelOrderTraversal(Node* root){
  queue<Node*>q;
  q.push(root);
  q.push(nullptr);
  
  while(!q.empty()){
    Node* temp = q.front();
    q.pop();
    if(temp == nullptr){
      cout<<endl;
      //purana lvl is completed
      if(!q.empty())
      q.push(nullptr);
    }
    else {
      // if temp is not null then print 
      cout<<temp->val<<" ";
      if(temp->left) q.push(temp->left);
      if(temp->right) q.push(temp->right);
    }
  }
}
int main(){
  Node* root = nullptr;
  root = buildTree(root);
  //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
   cout<<"Performing level order traversal "<<endl;
  levelOrderTraversal(root);
}