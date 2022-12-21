#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};
typedef struct Node node;
node *head = NULL;
node *ptr =NULL;
node *createNode(int data) {
    node *temp = new node();
    temp->data = data;
    temp->next = NULL;
    return temp;
}

void insert() {
    while(1) {
        int data;
        cout << "Enter the Value for create linedList and - 1 for terminate : "; cin >> data;
        if(data == - 1) break;
        else {
            
            node *temp = createNode(data);
            if(head == NULL) {
                head = temp;
            }
            else {
                node *ptr = head;
                while(ptr->next!= NULL) {
                    ptr = ptr->next;
                }
                ptr->next = temp;

            }
        }

    } 
}

void display() {
    node *temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insertLast(int data) {
    node *currentNode = createNode(data);
    node *temp = head;
    if(head == NULL) {
        head = currentNode;
    }
    else {
          while(temp->next!= NULL) {
              temp = temp->next;
             }
         temp->next = currentNode;

    }
    
}

void traversal() {
    int sum = 0;
    node *temp = head;
    while(temp != NULL) {
        sum = sum + temp->data;
        temp = temp->next;
    }
    cout << "\nThe Sum of this lined List : " << sum << endl;
}
void insertFirst(int data) {
    node *temp = createNode(data);
    temp->next = head;
    head = temp;
}
int main() {
    insert();
    display();

    int data ;
    cout << "\nEnter the Element for insert the Last Node : "; cin >> data;
    insertLast(data);
    cout << "\nAfter the insert 1 element in the last node : ";
    display();
    // traversal();
    cout << "\nEnter the Element for insert the first Node : "; cin >> data;
    insertFirst(data);
    cout << "\n\nAfter the insert first element : ";
    display();

    return 0;
}