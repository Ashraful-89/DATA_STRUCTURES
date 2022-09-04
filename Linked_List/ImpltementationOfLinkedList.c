#include<stdio.h>
#include<stdlib.h>

struct node{
    int data ;
    struct node *next;
};
typedef struct node Node;

Node *head ,  *temp , *newNode;
 void createNode() {
    int choice ;
    printf(" Do u want to Continue?"); 
    scanf("%d",&choice);
   while(choice){
    newNode = (Node*) malloc(sizeof(Node));
    printf("Enter the data :");
    scanf("%d ", &newNode -> data);
    newNode -> next = NULL;

    if(head == NULL)
    {
    head = newNode;
    }
    else{
     temp -> next = newNode;
     temp = newNode;
    }

    printf("Do u want to continue (0,1) ? ");
    scanf("%d ",&choice);
   }
}
void print(){
temp = head;
while(temp != NULL){
    printf("%d ", temp -> data);
    temp = temp ->next;
}
}
int main() {
     createNode();
     print();
    return 0;
}







