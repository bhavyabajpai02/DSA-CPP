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
  cout<<" Enter data for inserting in left of "<<data<<" "<<endl;
  root->left = buildTree(root->left);   
  cout<<" Enter data for inserting in right of "<<data<<" "<< endl;
  root->right = buildTree(root->right);   
  return root;
}

void buildFromLevelOrder(Node* &root){
  queue<Node*>q;
  int data;
  cout<<"Enter the data for root ";
  cin>>data;
  root = new Node(data);
  q.push(root);
  // q.push(nullptr);
  while(!q.empty()){
    Node* ptr = q.front();
    q.pop();
    int leftdata ;
    cout<<"Enter data for left node "<<ptr->val;
    cin>>leftdata;
    if(leftdata != -1){
      ptr->left = new Node(leftdata);
      q.push(ptr->left);
    }
    int rightdata;
    cout<<"Enter data for right node "<<ptr->val;
    cin>>rightdata;
    if(rightdata != -1){
      ptr->right = new Node(rightdata);
      q.push(ptr->right);
    }
  }
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

void inorder(Node* root){
  if(root == nullptr){
    return;
  }
  inorder(root->left);
  cout<<root->val<<" ";
  inorder(root->right);
}
void postorder(Node* root){
  if(root == nullptr){
    return;
  }
  postorder(root->left);
  postorder(root->right);
  cout<<root->val<<" ";
}

void preorder(Node* root){
  if(root == nullptr){
    return;
  }
  cout<<root->val<<" ";
  preorder(root->left);
  preorder(root->right);
}

int main(){
  Node* root = nullptr;
  // root = buildTree(root);
  //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
  //  cout<<"Performing level order traversal "<<endl;
  // levelOrderTraversal(root);
  // cout<<endl;

  // cout<<"Printing inorder "<<endl;
  // inorder(root);
  // cout<<endl;

  // cout<<"Printing postorder "<<endl;
  // postorder(root);
  // cout<<endl;

  // cout<<"Printing preorder "<<endl;
  // preorder(root);
  // cout<<endl;
  // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
  buildFromLevelOrder(root);
  cout<<endl;
  levelOrderTraversal(root);
}