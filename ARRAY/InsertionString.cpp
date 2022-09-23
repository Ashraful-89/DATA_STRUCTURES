#include<bits/stdc++.h>
using namespace std;

string names[100];

int main() {
    int n, i; 
    cout << "Enter the Size of String Array : ";
    cin >> n;
    cout << "Enter The value of this String : ";

    for( i = 0 ; i < n ; i++) cin >> names[i];

    // string names[n] = {"Ashraful", "Munni", "Naim", "Shakil"};

    // cin >> n;
    
    // for( i = 0; i < n; i++) cin >> names[i];
    string person ;
    cout << "Enter the any string which insert in the sorted string array :";
    cin >> person;

    for(i = 0 ; i < n ; i++) {
        if(names[i].compare(person) > 0) break;
    }

    int insert_position = i;
    n = n + 1;
    for( i = n - 1 ; i >= insert_position ; i--){
        names[i] = names[i - 1];
    }
    names[insert_position] = person;
    cout << "The Sorted String when insert the any string  :\n";
    for( i = 0 ; i < n + 1 ; i++){
        cout << names[i] << " ";
    }

    // int n;
    // cin >> n;
    
    // for(int i = 0; i < n; i++) cin >> names[i];
    //for(int i = 0; i < n; i++) cout << names[i] << " ";

    // string name;
    // cin >> name;

    // sort(names, names+n);

    // int index = 0;
    // for(int i = 0; i < n; i++) {
    //     if(names[i].compare(name) > 0) {
    //         index = i;
    //         break;
    //     }
    // }

    // for(int i = n-1; i >= index; i--) {
    //     names[i+1] = names[i];
    // }
    // names[index] = name;

    // for(int i = 0; i <= n; i++) cout << names[i] << " ";
    // cout << endl;

    return 0;
}