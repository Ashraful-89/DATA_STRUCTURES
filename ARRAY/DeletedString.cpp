#include<bits/stdc++.h> 
using namespace std ;

int main ( void ) {
    string names[6] = { "ashraful" , "shakil" , "mehedi" , "naim" , "risha"};
    string person = "ashraful";
    int i , j;
    for( i = 0 ; i < 5 ; i++) {
        if(names[i] == person ) break;
    }
    for( j = i ; j < 5 ; j++) {
        names[j] = names[j+1];
    }

    for(int i = 0 ; i < 6 ; i++) {
        cout << names[i] << " ";
    }
    return 0;
}