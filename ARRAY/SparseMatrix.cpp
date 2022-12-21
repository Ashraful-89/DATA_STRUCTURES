#include<bits/stdc++.h>
using namespace std;
int main() {

    int row;
    cout << "Enter the maximum row of sparse matrix : " ; cin >> row;
    int size = row* (row + 1)/2;
    int array[size];
    for(int i = 0; i < size ; i++) {
        cin >> array[i];
    }
    int r , column;
    cout << "Enter the row and column u want to find value of sparse matrix : "; cin >> r >> column;
    if(r >= column) {
        int result = (r * ( r - 1 ) / 2 + (column - 1));
        cout << array[result];

    }
    else 
    {
        cout << "\nInvalid ! Again enter the row and column u want to find value of sparse matrix : "; cin >> r >> column;  
    }
    
    return 0;
}