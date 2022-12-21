#include<bits/stdc++.h>
using namespace std;
int main() {

    int n = 10;
    int a[n] = {10,20,30,40,60,50,70,80,100,222};
    for(int i = 0; i < 10; i++) {
        for(int j = 0 ; j < 10 - i; j++) {
            if(a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    cout << "Sorted array : ";
    for(int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    // int n = 5;
    string names[100] = {"ashraful" , "akash" , "naim" , "nasir" , "sakil" , "abu" ,"sayeed" , "mehedi" , "raysha" };
    for(int i = 0 ; i < 9 ; i++) {
        for(int j = 0 ; j < 9 - i ; j++) {
            if(names[j].compare(names[j+1]) > 0) {
                string temp = names[j+1];
                names[j+1] = names[j];
                names[j] = temp;
            }

        }
    }

    cout << "The Sorted String : " << endl;
    for( string s : names) {
        cout << s << " ";
    }
    return 0;
}