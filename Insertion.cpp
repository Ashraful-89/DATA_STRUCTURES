#include<bits/stdc++.h>
using namespace std;
int main() {
    int n ,i ; 
    cout << "Enter the Size of Array : " ;
    cin >> n;
    int array[n];
    cout << "Enter the Elemnt of this array :";
    for( i = 0 ; i < n ; i++) cin >> array[i];
    int item ; 
    cout << "Enter the item which insert in this array with sorted : ";
    cin >> item;
    for( i = 0 ; i < n ; i++){
        if(array[i] > item ) break;
    }
    int insertion_position = i;
    n = n + 1;
    for(i = n - 1 ; i  >= insertion_position ; i-- ){
        array[i] = array[i-1];
    }
    array[insertion_position] = item;
    cout << "After insert the item the Array is : ";
    for(i = 0 ; i < n; i++){
        cout << array[i] << " ";
    }
    return 0;
}