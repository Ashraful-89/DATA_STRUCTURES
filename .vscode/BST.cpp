#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *left,*right;
};

typedef struct Node node;
node *root = NULL;

node *createNode(int data ) {
    node *temp = new node();
    temp ->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

node *insert(node *root , int data ) {
    node *currentNode = root;
    node *newNode = createNode(data);
    if(root == NULL) {
        root = newNode;
    }
    else {
        int location = 1;
        while(currentNode!= NULL) {
            if(currentNode->data > data) {
                if(currentNode->left != NULL) {
                    currentNode = currentNode->left;
                    location = location * 2;
                }
                else {
                    currentNode->left = newNode;
                    break;
                }
            }

            else if(currentNode->data < data) {
                if(currentNode->right != NULL) {
                    currentNode = currentNode->right;
                    location = location * 2 + 1;
                }
                else {
                    currentNode->right = newNode;
                    break;
                }
            }

            else {
                cout << "The Location of the dublicate value " << data << " is : " << location << endl;
                break;
            }
        }
    }
    return root;
}

void inorder(node *root) {
    if(root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void print_as_tree(node *root , int space){
    if(root == NULL) {
        return;
    }
    space+=10;
    print_as_tree(root->right , space);
    cout << endl;

    for(int i = 10 ; i < space ; i++) {
        cout << " ";
    }
    cout << root ->data << endl;
    cout << endl;
    print_as_tree(root->left , space);
}

bool searchTree(node *root,int data) {
    if(root == NULL) return false;
    if(root->data == data) return true;
    else {
        if(root->data > data ) searchTree(root->left , data);
        else   searchTree(root->right , data);
    }
}
int main() {
    node *root = NULL;
    int n;
    cout << "Enter the Number : " ; cin >> n;
    for(int i = 0 ; i < n ; i++) {
        cout << "Enter the Element : ";
        int x;
        cin >> x;
        root = insert(root,x);
    }

    cout << "\nInorder traversal is : ";
    inorder(root);

    cout << "\nAs a Tree :\n";
    print_as_tree(root,0);

    bool flag = searchTree(root,10);
    if(flag) {
        cout << "Found the value \n";

    }
    else {
        cout << "NOT found \n";
    }
    return 0;
}