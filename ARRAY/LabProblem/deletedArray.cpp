#include<bits/stdc++.h>
using namespace std;
int main() {
    // deleted any string in the sorted string 
    int n = 7; 
    string names[100] = {"ashraful","akash","manobi","naim","risha","rubel","sakil"};

    string name ;
    cout << "Enter the name whose deleted from the array string : "; cin >> name;
    int index ;
    for(int i = 0 ; i < 7 ; i++) {
        if(name.compare(names[i]) == 0) 
        {
             index = i;
             break;
        }
    }
    n = n - 1;
    for(int i = index ; i < n ; i++) {
        names[i] = names[i+1];
    }

    cout <<" 'After delation :'" << endl;
    for(int i = 0 ; i < n; i++) {
        cout << names[i] << " ";
    }

    cout << endl;
    int position = 2;
    n = n - 1;
    for(int i = position - 1 ; i < n ; i++) {
        names[position] = names[i+1];

    }

     cout <<" 'After delation :'" << endl;
    for(int i = 0 ; i < n; i++) {
        cout << names[i] << " ";
    }


    return 0;
}