#include <bits/stdc++.h>
using namespace std;

void push(int item);
int pop();
int isEmpty();
int isFull();
void display();

int MAX = 10;
int STK[11];
int top = - 1;

int main(void)
{
    push(1);
    push(2);
    push(3);
    push(4);
    // while(!isEmpty())
    // {
    //     printf("%d ", pop());
    // }
    // printf("\n");

    display();
}

int isEmpty()
{
    if(top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull()
{
    if(top == (MAX - 1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int item)
{
    if(!isFull())
    {
        top++;
        STK[top] = item;
    }
    else
    {
        printf("Overflow.");
    }
}

// int pop()
// {
//     if(!isEmpty())
//     {
//         int item = stack[top];
//         top--;
//         return item;
//     }
//     else
//     {
//         printf("Underflow");
//     }
// }