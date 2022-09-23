#include<bits/stdc++.h>
using namespace std;
int Fibonacci (int number) {
    if(number == 0 ) return 0;
    if(number == 1) return 1;
    return Fibonacci(number - 1 ) + Fibonacci(number - 2);
}
int main() {
    for(int i = 0 ; i <= 10 ; i++) {
        printf("%d " , Fibonacci(i));
    }
    return 0;
}