#include<bits/stdc++.h>
using namespace std ;
int main() {
    int array[5] = { 5 , 10 , 15 , 20 , 25};
    int item , i ;
    cout << "Enter The any  value which deleted : ";
    cin >> item;
    for( i = 0 ; i < 5 ; i++) {
        if(array[i] == item) break;
    }
    for(int j = i ; j < 5 ; j++) {
        array[j] = array[j+1];
    }

    cout << "After deleted any velue the array elemet are : \n";
    for(int i = 0 ; i < 4 ; i++) {
        cout << array[i] << " ";
    }
    return 0;
}