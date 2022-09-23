#include<bits/stdc++.h>
using namespace std ;
int SumOfDigit(int number ) {
    if(number <= 0) return 0 ;
    return (number % 10 +  SumOfDigit(number / 10 ));
}
 
int main() {
    int number ;
    cout << "Enter the number "; cin >> number ;
    cout << "The Sum of digit of " << number << " is " << SumOfDigit(number);
    return 0;
}