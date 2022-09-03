#include<bits/stdc++.h>

using namespace std ;

int main(void) {
    int n ;
    cout << "Enter the Value of Array Size : " ; cin >> n;

    int array[n];
    //Take the value of arrray 
    cout << "Enter the value of array element : ";
    for(int i = 0 ; i < n ; i++)  cin >> array[i];

    int item ;
    cout << "Enter the Value of search using Binary search :";  cin >> item;

    // search item in array using array

    int start = 0 , end = n - 1;
    int mid = (start + end ) / 2;
    while( start <= end && array[mid] != item) {
        if( array[mid] > item ) {
            end = mid - 1;
          
        }
        else {
            start = mid + 1;
        }
       mid = (start + end ) / 2;
    } 
    if(array[mid] == item) cout <<"Found ! and the Location is "<< mid + 1 << endl;
    return 0;
}