#include<bits/stdc++.h>
using namespace std;

int main() {

    int n1 , n2 ;
    cin >> n1 >> n2;
    int arr1[n1] , arr2[n2] , newArr[n1+n2];
    for(int i = 0 ; i < n1 ; i++) cin >> arr1[i];
    for(int i = 0 ; i < n2 ; i++) cin >> arr2[i];

    int j = 0;
    for(int i = 0 ; i < n1 ; i++) newArr[j++] = arr1[i];
    for(int i = 0 ; i < n2 ; i++) newArr[j++] = arr2[i];

    cout << "Two Array Merge the element are : \n";
    for(int i = 0 ; i < j ; i++) {
        cout << newArr[i] << " ";

    }


    // Character 

    char c1[3] = {'a','b','v'};
    char c2[2] = {'n' , 'm'};
    char c3[3+2];
    int k = 0;
    for(int i = 0 ; i < 3 ; i++) c3[k++] = c1[i];
    for(int i = 0 ; i < 2 ; i++) c3[k++] = c2[i];

    for(int i = 0 ; i < 3 + 2 ; i++) cout << c3[i] << " " ;
    return 0;
}