#include<stdio.h>
#include<stdlib.h>

// create a structure for create a linked list 
struct Node {
    int data ;
    struct node * next ;

} *head;

typedef struct Node node;

//Create a new node 

node * getNode( int item){
    node * temp;
    temp = (node*) malloc (sizeof(node));
    temp -> data = item;
    temp -> next = NULL;
    return temp;

}

// Add a new node int the main linked list
 void addEnd( int data ){
    node * temp = getNode( data);
    if(head == NULL){
        head = temp;
    }
    else {
        node *temp1 ;
        temp1 = head;
        while( temp1 -> next != NULL){
            temp1 = temp1 ->next ;
        }
        temp1->next = temp;
    }


 }
 // Traversal of tha linked list
 void traversal () {
    node * temp = head ;
    while( temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
 }
 int main() {

    for ( int i = 0 ; i <= 5 ; i++){
        addEnd(i+1);

    }
    traversal();
    return 0;
 }