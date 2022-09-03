#include<bits/stdc++.h>
using namespace std ;
int main(void) {
    int n ; 
    cout << "Enter Size : "; cin >> n;
    int array[n] ;
    cout <<"Enter Element : \n ";
    for(int i = 0 ; i < n ; i++) cin >> array[i];
    int temp;
    for( int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++) {
            if( array[j] > array[j+1]) {
                temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
            }
        }
    }
    cout << "After Bubble Sorted The Element of array :\n";
    for(int i  = 0 ; i < n ; i++) {
        cout << array[i] << " ";
    }


}