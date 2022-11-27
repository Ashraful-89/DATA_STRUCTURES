#include<bits/stdc++.h>
using namespace std ;
struct Node {
    int data ;
    struct Node * next;
};

typedef struct Node node;
node *head = NULL;

void print() {
    node *temp = head;
    while( temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;

    }
}


void  inserted( int item){
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
    // node *head = NULL;
    int n ;
    cout << "Enter the number of node : ";
    cin >> n;
    for( int i = 0 ; i < n ; i++){

        int x;
        cout << "Enter the Element for create Node : ";
        cin >> x;
        inserted(x);
        }
    cout <<"Print tha list" <<endl;
    print();
} 