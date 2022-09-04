#include<stdio.h>
int main() {
    int a , b;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    a = a + b;
    printf("Sum of this value is : %d ", a);
    return 0;
}