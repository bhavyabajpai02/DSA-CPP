#include<iostream>
#include<queue>
using namespace std;
class Node {
  public:
    Node* left;
    Node* right;
    int val;
    Node(int data){
      this->val = data;
      this->right = nullptr;
      this->left = nullptr;
     }
};
Node* insertIntoBST(Node* &root, int d){
  if(!root){
    root = new Node(d);
    return root;
  }
    if(root->val> d){
      root->left = insertIntoBST(root->left,d);
    }
    else{
      root->right = insertIntoBST(root->right,d);
    }
    return root;
}

void takeInput (Node* &root){
  int data;
  cin>>data;
  while(data != -1){
    root = insertIntoBST(root,data);
    cin>>data;
  }
}

int getMin(Node* root){
  if(!root) return -1;
  while(root->left ){
    root = root->left;
  }
  return root->val;
}
int getMax(Node* root){
  if(!root) return -1;
  while(root->right ){
    root = root->right;
  }
  return root->val;
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

// DELETE
Node* deleteNode(Node* root, int val){
  if(!root) return root;
  if(root->val == val){
    // child == 0
    if(!root->left and !root->right){
      delete root;
      return nullptr;
    }
    // Child == 1
    else if( root->left and !root->right){
      Node* temp = root->left;
      delete root;
      return temp;
    }
    else if( root->right and !root->left){
      Node* temp = root->right;
      delete root;
      return temp;
    }
    // child == 2
    else if(root->left and root->right){
      int mini  = getMin(root->right);
      root->val = mini;
      root->right = deleteNode(root->right,mini);
      return root;
    }
  }
  else if(root->val >val){
    root->left = deleteNode(root->left,val);
    return root;
  }
  else{
    root->right = deleteNode(root->right,val);
  return root;
  }
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
     cout<<"Enter data to create BST ";
     takeInput(root);
    //  cout<<"LOT"<<endl;
    //  levelOrderTraversal(root);
    //  cout<<endl<<"Print preOrder "<<endl;
    //  preorder(root);
    //  cout<<endl<<"Print postOrder "<<endl;
    //  postorder(root);
     cout<<endl<<"Print inOrder "<<endl;
     inorder(root);
     cout<<endl;
     cout<<"Minimum elment " <<getMin(root)<<endl;
     cout<<"Maximum elment " <<getMax(root)<<endl;
     root = deleteNode(root,50);
     cout<<endl<<"Print inOrder "<<endl;
    //  After deleting 
     inorder(root);
     cout<<endl;
}