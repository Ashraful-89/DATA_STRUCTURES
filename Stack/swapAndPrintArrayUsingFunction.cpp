#include<bits/stdc++.h>
using namespace std ;

void DisplayArray(int A[] , int n) {
    int i = 0 ; 
    for(i = 0 ; i < n ; i++) {
        cout << A[i] << " ";

    }

}
void swap(int *a , int *b) {
    int temp = *a ;
    *a = *b;
    *b = temp;
}
int main() {
    int n ;
    cout << "Enter the size of Array : "; cin >> n ;
    int A[n];
    cout << "Enter The Element of Array : ";
    for(int i = 0 ; i < n ; i++) cin >> A[i];
    DisplayArray(A , n);
    swap(A[0],A[n-1]);
    cout<< "\nAfter Swaping the last and end value of this array :" << endl;
    DisplayArray(A , n);
    return 0;
}