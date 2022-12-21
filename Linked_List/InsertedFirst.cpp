// #include<bits/stdc++.h>
// using namespace std ;

// struct Node {
//     int data;
//     struct Node *link;
// };

// typedef struct Node node;
// node *head = NULL;

// void insertLast(int data) {
//     node *currentNode = new node();
//     currentNode->data = data;
//     currentNode->link = NULL;

//     if(head == NULL) head = currentNode;
//     else {
//         node *temp = head;
//         while(temp->link != NULL) {
//             temp = temp ->link;
//         }
//         temp->link = currentNode;
//     }
// }

// void insert_at_position(int position , int data){

// node *temp1 = new node();
//     temp1 ->data = data;
//     temp1->link = NULL;
//     if(position == 1) {
//         temp1->link = head;
//         head = temp1;
//         return;
//     }

//     // inserting at the given position

//     node *temp2 = head;

//     // traversing

//     for(int i = 1 ; i < position - 1 ; i++) {
//         temp2 = temp2->link;
//     }
//     // updating the link
//     temp1->link = temp2 ->link;
//     temp2->link = temp1;
// }

// void Display(){

//     node *temp = head ;
//     while(temp != NULL) {
//         cout << temp ->data << " ";
//         temp = temp ->link;
//     }
//     // while(head != NULL) {
//     //     cout << head ->data << " ";
//     //     head = head ->link;
//     // }
// }

// void insertFirst(int data) {
//     node *temp = new node();
//     temp ->data = data;
//     temp->link = head;
//     head = temp;
// }
// int main() {

//     int n;
//     cout << "Enter Number : " ; cin >> n;
//     cout <<"\nEnter the element : "; 
//     for(int i = 0; i < n; i++) {
//         int x ;
//         cin >> x;
//         insertLast(x);
//     }
//     cout << "The Element of Node is : ";
//     Display();

//     insertFirst(60);
//     insertFirst(70);
//     cout << endl;
//     cout << "\nThe Element of Node after the insert first position in two element : ";
//     Display();


//     insert_at_position(4,89);
//     insert_at_position(6,80);
//     cout << "\nAfter insertion at position 4 and 6 the value is : ";
//     Display();
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    struct Node *next;
};
typedef struct Node node;
node *start = NULL, *ptr = NULL;
node *createNode(int data){
    node *temp = new Node();
    temp->data = data;
    temp->next=NULL;
    return temp;
}

void createList() {
    int data;
    
    node *newNode = NULL;
    while(1) {
         cin>> data;
         if(data == - 1) {
            break;
         }
         newNode = createNode(data);
         if(start == NULL) {
            start = newNode;
            ptr = start;

         }
         else {
            node *temp = start;
            while(temp != NULL) {
                 temp = temp->next;
            }
             temp->next = newNode;
            
         }

        //  newNode = new->next;

    }

}
void display() {
    ptr = start;
    while(ptr!= NULL) {
        cout << ptr->data << " ";
        ptr=ptr->next;
    }
}
int main() {
    createList();
    display();

    return 0;
}