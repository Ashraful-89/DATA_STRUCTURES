#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *left , *right;
};
typedef struct Node node;
node *root = NULL;

node *createNode(int data) {
    node *temp = new node();
    temp ->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

node *insert(node *root , int data) {
    node *currentNode = root;
    node *newNode = createNode(data);

    if(root == NULL) {
        root = newNode;
    }
    else {
        int loc = 1;
        while(currentNode!= NULL) {
            if(currentNode->data > data) {
                if(currentNode->left != NULL) {
                    currentNode = currentNode->left;
                    loc*=2;
                }
                else {
                    currentNode->left = newNode;
                    break;
                }
            }
            else if(currentNode->data < data) {
                if(currentNode->right!= NULL) {
                    currentNode = currentNode->right;
                    loc = loc * 2 + 1;
                }
                else {
                    currentNode->right = newNode;
                    break;
                }
            }

            else {
                cout << "Found Location " << loc << endl;
                return root;
            }
        }
        // return root;
    }
    return root;

}

void Print_as_Tree(node *root , int space) {
    if(root == NULL) return;

    space += 10;
    Print_as_Tree(root->right,space);
    cout << endl;
    for(int i = 10; i < space ; i++) cout << " ";
    
    cout << root->data << endl;
    Print_as_Tree(root->left,space);
}

// node *insert(node *root, int item)
// {
//     node *currNode = root;
//     node *newNode = createNode(item);

//     while (currNode)
//     {
//         if (currNode->data > item)
//         {
//             if (currNode->left)
//                 currNode = currNode->left;
//             else
//             {
//                 currNode->left = newNode;
//                 break;
//             }
//         }
//         else if (currNode->data < item)
//         {
//             if (currNode->right)
//                 currNode = currNode->right;
//             else
//             {
//                 currNode->right = newNode;
//                 break;
//             }
//         }
//         else
//             return root;
//     }
//     return root ? root : newNode;
// }


void InorderTraversal(node *root) {
    if(root == NULL) return;
    InorderTraversal(root-> left);
    cout << root->data << " ";
    InorderTraversal(root->right);

}
int main() {

    node *root = NULL;
    int number;
    cout << "Enter Number :" ; cin >> number;
    for(int i = 0 ; i < number ; i++) {
        int x;
        cout << "Enter the element : "; cin >> x;
        root = insert(root,x);
        cout << "\n";
        Print_as_Tree(root,0);
    }

    cout << "Inorder Traversal : ";
    InorderTraversal(root);

    
    return 0;
}