#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *link;
};
typedef Node* nodeptr;
void insert(nodeptr& head,int data){

    nodeptr temperoryptr;
    temperoryptr = new Node;
    temperoryptr -> data = data;
    temperoryptr -> link =head;
    head = temperoryptr;

}
int main(){
    nodeptr head;
    head = new Node;
    head -> data =20;
    head -> link = NULL;

    insert(head,30);
    insert(head,40);
    
    nodeptr tmp;
    tmp = head;

    while(tmp->link != NULL){
        cout << tmp -> data<< endl;
        tmp =tmp->link;
    }
    cout << tmp->data;
}
