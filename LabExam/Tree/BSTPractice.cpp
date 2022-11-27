#include<bits/stdc++.h>
using namespace std ;

struct Node {
    int data ;
    struct Node *left,*right;
};

typedef struct Node node;
node *root;

node *createNode (int data ) {
    node *temp = new node() ;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

node *insert(node *root , int data) {
    node *currenNode = root;
    node *newNode = createNode(data);
    if(root == NULL) {
        root = newNode;
    }
    else {
        int location = 1;
        while(currenNode!=NULL) {
            if(currenNode->data > data) {
                if(currenNode->left!= NULL) {
                    currenNode = currenNode->left;
                    location = location * 2;
                }
                else {
                    currenNode->left = newNode;
                    break;
                }
            }
            else if(currenNode->data < data) {
                if(currenNode->right!= NULL) {
                    currenNode = currenNode ->right;
                    location = location * 2 + 1;

                }
                else {
                    currenNode->right = newNode;
                    break;;
                }

            }
            else {
                cout << "Found the Location of the Dublicate Value is : " << location<< endl;
                return root;
            }
        }
    }
    return root;
}

void Print_as_Tree(node *root , int space) {
    if(root == NULL) return;

    space = space + 10;
    Print_as_Tree(root->right,space);
    cout << endl;

    for(int i = 10; i < space ; i++) cout << " ";
    cout <<root->data << endl;
    Print_as_Tree(root->left,space);
}

int main() {
    int num;
    root = NULL;
    cout << "Enter the Number of elemnet of BST : ";
    cin >> num;
    for(int i = 0 ; i < num; i++) {
        int x;
        cout << "Enter the Element :  ";
        cin >> x;
        root = insert(root,x);
        Print_as_Tree(root,0);
    }
    
}