#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter Size : "; cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maximum = a[0] , minimum = a[0],total = 0;
    float radian = 3.1416 / 180;
     cout << "Sin value : \n";
    for(int i = 0 ; i < n ; i++) {
        cout << a[i] * radian << " ";
        total = total + a[i];
        if(maximum < a[i]){
            maximum = a[i];
        }
        else if (minimum > a[i]) minimum = a[i];

    }
    cout << endl << "The total value is : " << total << endl;
    cout << "The avearge value is : " << total / n << endl;
    cout << "The maximum value is : " << maximum << endl;
    cout << "The minimum value is : " << minimum << endl;
    return 0;
}