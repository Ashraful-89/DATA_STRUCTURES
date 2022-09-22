#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[MAX];
int top = -1;
int isFull();
int isEmpty();

void push(int item ) {
    if(isFull()) {
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
        return;
    }
    for(int i = top ; i >= 0 ; i--) {
            printf("%d\n", stack[i]);
            sum = sum + stack[i];
        }

    printf("Sum of this stack is = %d\n",sum);
}

int pop() {
    int item;
    if(isEmpty()) {
        printf("The Stack is Underflow :\n");
        return;
    }
    item = stack[top];
    top = top - 1;
    return item;

}
int isFull () {
    if(top == MAX - 1) return 1;
    else  return 0;
}
int isEmpty() {
    if(top == -1) {
        return 1;
    }
    else {
        return 0;
    }

}
int main(void) {
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    printf("The element of stack is : \n");
    print();

    int item = pop();
    printf("The value of poped of stack is = %d\n",item);
    int item2 = pop();
    printf("The value of poped of stack is = %d\n",item2);
    int item3 = pop();
    printf("The value of poped of stack is = %d\n",item3);
    int item4 = pop();
    printf("The value of poped of stack is = %d\n",item4);
    item = pop();
    printf("The value of poped of stack is = %d\n",item);

    printf("After pop operation , The element of stack is : \n");
    print();

    return 0;
}