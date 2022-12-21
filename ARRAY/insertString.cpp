#include<bits/stdc++.h>
using namespace std;

string names[100];

int main() {
    int n;
    cout << "Enter the size : "; cin >> n;
    cout << "Enter the sorting string of array : ";
    for(int i = 0 ; i < n; i++) cin >> names[i];
    string person ;
    cout << "Enter the Name for inserted in the sorted string of array :";
    cin >> person;

    int index;
    for(int i = 0; i < n; i++){
        if(names[i].compare(person) > 0) {
            index = i;
            break;
        }
    }

    for(int i = n + 1; i >= index ; i--) {
        names[i+1] = names[i];
    }
    names[index] = person;

    for(int i = 0 ; i < n + 1 ; i++) {
        cout << names[i] << " ";
    } 

    // again inserted in any name in the position 3

    cout << "Ageain insert any name and position : " ; cin >> person >> index;

    for(int i = n + 2; i >= index ; i--) {
        names[i + 1] = names[i]; 
    }
    names[index] = person;
    cout << "Again the string : " << endl;
      for(int i = 0 ; i < n + 2 ; i++) {
        cout << names[i] << " ";
    } 
    return 0;
}