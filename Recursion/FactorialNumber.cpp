#include<bits/stdc++.h>
using namespace std ;
unsigned long long int Factorial (int num) {
    if(num <= 1)  return 1;
    else 
    {
        return num * Factorial(num - 1);
    }
}

int main() {
    int number ;
    cout << "Enter the number whose find the factorial ";
    cin >> number;
    unsigned long long int fact = Factorial(number);
    cout<<"The factorial of " << number << " is " << fact << endl;
    return 0;
}