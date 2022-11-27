#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};
typedef struct Node node;
node *head = NULL;

node *createNode(int data) {
    node *temp = new node();
    temp ->data = data;
    temp->next = NULL;
    return temp;
}

void insert(int data) {
        node *newNode = createNode(data);
        if(head == NULL) {
            head = newNode;
        }
        else {
            node *temp = head;
            while(temp->next!= NULL) {
                temp = temp->next;
            }
            temp ->next = newNode;
        }
}
 void print() {
    while(head != NULL) {
        cout << head ->data << " ";
        head = head ->next;
    }
 }
int main() {
    int number;
    cout << "Enter the number of node : "; cin >> number;
    cout << "\nEnter the element for inserted element in the singly linked List :\n ";
    for(int i = 0 ; i < number; i++) {
        int x ; cin >> x;
        insert(x);
    }

    cout << "The Node : ";
    print();
    return 0;
}

