#include<bits/stdc++.h>
using namespace std;

int sumOfNaturalNumber(int num) {
    if(num != 0 ) {
        return (num + sumOfNaturalNumber(num-1)); 
    }
    else 
    return num;
}
int main() {
    int number;
    cout << "Enter the last number of series : "; cin >> number;
    cout << "Sum of series : 1 + 2 + 3 .. + " << number << " = " << sumOfNaturalNumber(number) << endl;

    return 0;
}