#include<bits/stdc++.h>
using namespace std;

string names[100];
int main(void) {

    int n ;
    cout<< "Enter Size : ";
    cin >> n;
    cout << "Enter The element of the string : ";
    for(int i = 0 ; i < n ; i++) {
        cin >> names[i];
    }

    string name ;
    int position;
    cout << "Enter The String Which Insert with position : ";
    cin >> name >> position;

    for(int i = n - 1; i >= position - 1; i--) {
        names[i + 1] = names[i];
    }
    names[position - 1] = name;
    cout << "After inserted this value the atring array  are : \n";
    n = n + 1;
    for(int i = 0 ; i < n ; i++) {
        cout << names[i] << " ";
    }
    return 0;
}