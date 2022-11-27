#include<bits/stdc++.h>
using namespace std;

int Max = 10;
int top = - 1;
int STK[100];

bool isEmpty() {
    if(top == - 1) return true;
    return false;
}

bool isFull() {
    if(top == Max - 1) return true;
    return false;
}

void push(int value) {
    if(top == Max-1) {
        cout << "stack is Overflow : \n";
        
    }
    else {
        STK[++top] = value;
        
    }
}
int pop() {
    if(isEmpty()) {
        cout << "UnderFlow : ";
        return 0;
    }
    return STK[top--];
}
void display() {
    for(int i = top ; i >= 0; i--) {
        cout << STK[i] << " ";
    }
}

int peek() {
    if(isEmpty()) {
        cout << "UnderFlow : ";
        return 0;
    }
    return STK[top];
}

int main() {
    int number ;
    cout << "How to u want to insert the Stack : "; cin >> number;
    for(int i = 0; i < number ; i++) {
        int x;
        cin >> x;
        push(x);
    }
    cout <<"Before POP : ";
    display();

    
    int data = pop();
    cout <<"\nThe poped Value is : " << data << endl;

    cout << "After pop : ";
    display();


    data = peek();
    cout << "\nThe peek Value is : "<< data << endl;
    cout << "After pop : ";
    display();
return 0;

}