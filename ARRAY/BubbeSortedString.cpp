#include<bits/stdc++.h>
using namespace std ;
string names[100];
int main (void) {
    int n ;
    cout << "Enter Size " ; cin >> n;
    cout << "Enter String : " ;
    for(int i = 0 ; i < n ; i++) cin >> names[i];
    string temp;
    for(int i = 0 ; i < n - 1 ; i++) {
        for(int j = 0 ; j < n - i - 1 ; j++) {
            if(names[j].compare(names[j+1]) > 0 ){
                swap(names[j],names[j+1]);
            }
        }
    }
    cout << "After Sorted the String :\n ";
    for(string s : names) {
        cout << s << " ";
    }
    return 0;
}