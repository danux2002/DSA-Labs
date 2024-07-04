#include<iostream>
using namespace std;

class Treenode{
    public:
     int data;
     Treenode* left;
     Treenode* right;

     Treenode(int data){
        this->data=data;
        left=nullptr;
        right=nullptr;
     }
};

class BinaryTree{
    private:
    Treenode* root;
    public:
    BinaryTree(){
        root = nullptr;
    }

    void insertnode(int value){
        root = insertnoderecursive(root,value);
    }

    Treenode* insertnoderecursive(Treenode* node,int value){
        if(node==nullptr){
            node = new Treenode(value);
            return node;
        }

        else if(value>node->data){
            node->right = insertnoderecursive(node->right,value);       
        }

        else if(value< node->data){
            node->left = insertnoderecursive(node->left,value);
        }
    }
    void inorderTraverse(){
        inorderTraverselrecursive(root);
    }
    void inorderTraverselrecursive(Treenode* node){
        if(node==nullptr){
            return;
        }
        inorderTraverselrecursive(node->left);
        cout<<node->data<<"  ";
        inorderTraverselrecursive(node->right);
    }
};

int main(){
    BinaryTree tree;
    tree.insertnode(50);
    tree.insertnode(30);
    tree.insertnode(70);
    tree.insertnode(20);
    tree.insertnode(40);
    tree.insertnode(60);
    tree.insertnode(80);

    tree.inorderTraverse();
}