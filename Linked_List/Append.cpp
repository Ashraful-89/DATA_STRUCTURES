#include<bits/stdc++.h>
using namespace std ;
struct Node {
    int data ;
    struct Node * next;
} *head;

typedef struct Node node;
void print() {
    node *temp = head;
    while( temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;

    }
}


void apppend( int item){
    node *newNode ;
    newNode = (node*) malloc (sizeof(node));
    newNode->data = item;
    newNode ->next = NULL;
    if(head == NULL) head = newNode;
    else{
        node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }

    }


int main()
{
    int n ;
    cin >> n;
    for( int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        apppend(x);
        }
    cout <<"Print tha list" <<endl;
    print();
}