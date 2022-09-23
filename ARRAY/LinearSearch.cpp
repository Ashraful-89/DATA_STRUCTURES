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
    cout << "Enter the Value of search using Linear search :";  cin >> item;

    // search item in array using array
    for(int i = 0 ; i < n ; i++) {
        if(array[n-1] < item || array[i] >= item) {
            if(array[i] == item )
            {
                cout << "The number is at position "<< i + 1 << " in the array . " ;
    
            }
            else 
            {
                printf("Not found the item ");
            }
            break;
        }
    }

  return 0;
}