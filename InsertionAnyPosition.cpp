#include<bits/stdc++.h>
using namespace std ;

int main(void) {
    int n ; 
    cout << "Enter Size : "; cin >> n ;

    int a[n] ;
    cout << "Enter the Element of Array : ";
    for(int i = 0 ; i < n ; i++) cin >> a[i];

    int item , position ;
    cout << "Enter the item to insert in array and  position "; cin >> item >> position;

    for(int i = n - 1 ; i >= position - 1; i--) {
        a[i + 1] = a[i];
    }
    a[position - 1] = item;
    n = n + 1;
    cout << "After Insert this element of the array is : \n";
    for(int i = 0 ; i < n ; i++) {
        cout << a[i] << " ";
    }
    return 0;
}