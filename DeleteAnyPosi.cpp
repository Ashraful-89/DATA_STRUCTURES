#include<bits/stdc++.h>
using namespace std ;
int main() {
    int n ;
    cin >> n ;
    int array[n];
    for(int i = 0 ; i <  n ; i++) cin >> array[i];
    cout << "Display before Deletion operation : ";
    for(int i = 0  ; i < n ; i++) cout << array[i] <<" ";

    int position;
    cout << "\nEnter The position which element is deleted : " ; cin >> position;
    
    for(int i = position - 1 ; i < n ; i++) {
        array[i] = array[i+1];
    }

    cout << "After Deleted any elemnet the array element are : ";
    for(int i = 0 ; i < n - 1 ; i++) cout << array[i] << " ";

    return 0;
}