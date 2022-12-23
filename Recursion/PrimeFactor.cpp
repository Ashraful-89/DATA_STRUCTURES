#include<bits/stdc++.h>
using namespace std;
void primeFact(int n) {
    int ans = 0;
    int temp = n;
    for(int i = 2 ; i*i <= n ; i++) {
        
        if(n % i == 0) {
            ans++;
            while(n % i == 0) {
                n = n / i;
            }
        }
    }
    if(n > 1)  ans++;
    cout << temp << " : " << ans << endl;
}

int main() {
    int number;
    cout << "Enter the number to find the different prime factor : ";
    while(cin >> number ) {
        if(number == 0) {
            break;
        }
        primeFact(number);
    }
    return 0;
}