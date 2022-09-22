#include<stdio.h>
#define MAX 10
int stack[MAX];
int top = -1;

void push(int item ) {
    if(top == MAX - 1) {
        printf("The stack is overflow: \n");
        return;
    }
    top = top + 1;
    stack[top] = item;
}
void print() {
    int sum = 0;
    if(top == - 1 ) {
        printf("Stack is UnderFlow :\n");
        // exit(1);
    }
    else {
        for(int i = top ; i >= 0 ; i--) {
            printf("%d\n", stack[i]);
            sum = sum + stack[i];
        }
    }
    printf("Sum of this stack is = %d\n",sum);
}
int main(void) {
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    print();
    return 0;
}