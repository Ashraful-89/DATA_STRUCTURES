// // #include<bits/stdc++.h>
// // using namespace std;

// // int Max = 10;
// // int top = - 1;
// // int STK[100];

// // bool isEmpty() {
// //     if(top == - 1) return true;
// //     return false;
// // }

// // bool isFull() {
// //     if(top == Max - 1) return true;
// //     return false;
// // }

// // void push(int value) {
// //     if(top == Max-1) {
// //         cout << "stack is Overflow : \n";
        
// //     }
// //     else {
// //         STK[++top] = value;
        
// //     }
// // }
// // int pop() {
// //     if(isEmpty()) {
// //         cout << "UnderFlow : ";
// //         return 0;
// //     }
// //     return STK[top--];
// // }
// // void display() {
// //     for(int i = top ; i >= 0; i--) {
// //         cout << STK[i] << " ";
// //     }
// // }

// // int peek() {
// //     if(isEmpty()) {
// //         cout << "UnderFlow : ";
// //         return 0;
// //     }
// //     return STK[top];
// // }

// // int main() {
// //     int number ;
// //     cout << "How to u want to insert the Stack : "; cin >> number;
// //     for(int i = 0; i < number ; i++) {
// //         int x;
// //         cin >> x;
// //         push(x);
// //     }
// //     cout <<"Before POP : ";
// //     display();

    
// //     int data = pop();
// //     cout <<"\nThe poped Value is : " << data << endl;

// //     cout << "After pop : ";
// //     display();


// //     data = peek();
// //     cout << "\nThe peek Value is : "<< data << endl;
// //     cout << "After pop : ";
// //     display();
// // return 0;

// // }


// // infix to postfix


// #include<bits/stdc++.h>
// using namespace std;

// #define MAX 100
// int stk[MAX];
// int top = - 1;
// void push(int);
// int pop();
// // int peek();

// int main() {
//     cout << "Enter postfix : ";
//     char postfix[MAX];
//     gets(postfix);

//     strcat(postfix,"(");

//     for(int i = 0 ; postfix[i] != ')' ; i++) {
//         if(isdigit(postfix[i])) {
//             push(postfix[i] - '0');
//         }
//         else if((postfix[i] >= 'A' && postfix[i] <= 'Z') || (postfix[i] >= 'a' && postfix[i] <= 'z')) {
//             cout << "Enter the value of " << postfix[i] << endl;
//             int value ;
//             cin >> value;
//             push(value);
//         }
//         else if(postfix[i] == '+' || postfix[i]== '-' || postfix[i] == '*' || postfix[i] == '/' || postfix[i] == '^') {
//             int a = pop();
//             int b = pop();
//             if(postfix[i] == '+') {
//                 push(b+a);
//             }
//             else if(postfix[i] == '-') {
//                 push(b-a);
//             }
//             else if(postfix[i] == '*') {
//                 push(b*a);
//             }
//             else if(postfix[i] == '/') {
//                 push(b/a);
//             }
//             else {
//                 push(pow(b,a));
//             }
//         }

//         cout << "\nEvaluation of postfix is : "  << pop() ;
//         return 0;
//     }
// }
// void push(int info) {
//     if(top == MAX-1) {
//         cout << "Overflow : ";
//     }
//     else {
//         stk[++top] = info;
//     }
// }
// int pop()
//  {
//     if(top==-1) return -1;
//     else {
//         return stk[top--];
//     }
//  }




#include<bits/stdc++.h>
using namespace std;

double calculate(double a, double b, char ch) {
    switch(ch) {
        case '+':
            return a+b;
        case '-':
            return a-b;
        case '*':
            return a*b;
        case '/':
            return a/b;
        case '^':
            return pow(a, b);
    }
}

double postfixEvaluate(string postfix) {
    stack<double>stk;

    int i;
    for(i = 0; i < postfix[i]; i++) {
        char ch = postfix[i];

        if(ch == ',' || ch == ' ') continue;
        else if(ch >= '0' && ch <= '9') {
            string str = "";
            while(postfix[i] != ',' && postfix[i]) {
                str += postfix[i];
                i++;
            }
            double num = stod(str);   
            stk.push(num); 
        }
        else if(ch >= 'a' && ch <= 'z'  || ch >= 'A' && ch < 'Z') {

            double value;
            cout << "Enter the value of " << ch << " : ";
            cin >> value;
            stk.push(value);
        }

        else {
            double b = stk.top();
            stk.pop();
            double a = stk.top();
            stk.pop();
            stk.push(calculate(a, b, ch));
        }
    }
    return stk.top();
}

int main() {

    string p;
    cout << "Enter : ";
    cin >> p;
    double x = postfixEvaluate(p);
    cout << x << endl;
    return 0;
}