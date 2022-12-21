// // #include<bits/stdc++.h>

// // using namespace std ;

// // int main(void) {
// //     int n ;
// //     cout << "Enter the Value of Array Size : " ; cin >> n;

// //     int array[n];
// //     //Take the value of array 
// //     cout << "Enter the value of array element : ";
// //     for(int i = 0 ; i < n ; i++)  cin >> array[i];

// //     int item ;
// //     cout << "Enter the Value of search using Binary search :";  cin >> item;

// //     // search item in array using array

// //     int start = 0 , end = n - 1;
// //     int mid = (start + end ) / 2;
// //     while( start <= end && array[mid] != item) {
// //         if( array[mid] > item ) {
// //             end = mid - 1;
          
// //         }
// //         else {
// //             start = mid + 1;
// //         }
// //        mid = (start + end ) / 2;
// //     } 
// //     if(array[mid] == item) cout <<"Found ! and the Location is "<< mid + 1 << endl;
// //     return 0;
// // }



// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter Size : "; cin >> n;
//     int array[n] ;
//     cout << "Enter the element : ";
//     for(int i = 0; i < n; i++) cin >> array[i];

//     int item;
//     cout << "Enter Item : "; cin >> item;
//     int position = 0;
//     int start = 0;
//     int end = n - 1;
//     int mid ;
//     for(int i = 0; i < n; i++) {
//          mid = (start + end )/2;
//         if(array[mid] < item) {
//             start = mid + 1;
//         }
//         else if (array[mid] > item){
//             end = mid - 1;
//         }
//         else {
//             position = mid + 1;
//             break;
//         }
//     }
//     if(position == 0) {
//         cout << item << " not found : ";
//     }
//     else {
//         cout << item << " at position " << position << endl;
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
string names[100];
void BubleSort(string names[] , int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(names[j].compare(names[j+1]) > 0) {
                swap(names[j],names[j+1]);
            }
        }
    }
}

int main() {
    int n;
    cout << "Size : ";
    cin >> n;
    cout << "Enter the names : ";
    for(int i = 0 ; i < n; i++) {
        cin >> names[i];
    }

    BubleSort(names,n);

    cout << "String are : "; for(string s : names) cout << s << " ";
    cout << endl;
   
    while(true) {
        string name;
        cout << "Enter Name : ";
        cin >> name;

        if(name == "stop") {
           cout << "Bye";
           break;
        }
        
        int start = 0;
        int end = n - 1;
        int mid = (start + end)/2;
        int position = 0;
        while(start <= end ) {
            if(name.compare(names[mid]) > 0) start = mid + 1;
            else if (name.compare(names[mid]) < 0) end = mid - 1;
            else {
                position = mid + 1;
                break;
            }
            mid = (start + end)/2;
        } 

        if(position == 0) {
            cout << "Not found :\n ";
        }
        else {
            cout <<" at position " << position << endl ;
        }
    }
    return 0;
    
}