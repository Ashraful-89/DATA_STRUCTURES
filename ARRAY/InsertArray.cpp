#include<bits/stdc++.h>
using namespace std;

int a[100];

int main() {
    int size;
    cout << "Enter the size of sorted array is : " ; cin >> size;
    cout << "Enter the Sorted array : ";
    int cnt = 0;
    for(int i = 0; i < size ; i++) {
        cin >> a[i]; 
        cnt++; // {4,5,6,8,9,13,18,98} item = 55
    }

    int item = 0 ; 
    cout << "Enter the Item : "; cin >> item;
    int position;
    for(int i = 0; i < size; i++) {
        if(a[i] > item) {
            position = i;
            break;
        }
    }
    size = size + 1;
    for(int i = size + 1; i >= position ; i--){
        a[i+1] = a[i];
    }
    a[position] = item;

    cout << "New Array : ";
    for(int i = 0; i < cnt + 1; i++) cout << a[i] << " ";



    // and insert in position 3 in the new array ;
    cout << "Enter the new item and position : ";
    cin >> item >> position;

    for(int i = size + 1; i >= position - 1; i--) {
        a[i+1] = a[i];
    }
    a[position - 1] = item;


    cout << "\n\nAggain New Array : ";
    for(int i = 0; i < cnt + 2; i++) cout << a[i] << " ";
    return 0;
}